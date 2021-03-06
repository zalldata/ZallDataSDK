//
// ZallDataSDK+JavaScriptBridge.h
// ZallDataSDK
//
// Created by guo on 2021/9/13.
// Copyright © 2021 Zall Data Co., Ltd. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import "ZallDataSDK.h"
#import <WebKit/WebKit.h>
#if __has_include("ZallDataSDK+WKWebView.h")
#import "ZallDataSDK+WKWebView.h"
#endif

NS_ASSUME_NONNULL_BEGIN


@interface ZallDataSDK (ZAJSBridge)

- (void)trackFromH5WithEvent:(NSString *)eventInfo;

- (void)trackFromH5WithEvent:(NSString *)eventInfo enableVerify:(BOOL)enableVerify;

@end

@interface ZAConfigOptions ()

/// 是否开启 WKWebView 的 H5 打通功能，该功能默认是关闭的
@property (nonatomic) BOOL enableJavaScriptBridge;

@end

NS_ASSUME_NONNULL_END


