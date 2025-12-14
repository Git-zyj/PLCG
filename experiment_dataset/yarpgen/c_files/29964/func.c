/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29964
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 = max((var_0), (((/* implicit */unsigned char) var_12)));
    var_17 += ((/* implicit */unsigned short) 8388608U);
    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */signed char) var_12)), ((signed char)-125)))) & (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)121))) - (-1415974046378879557LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (max((((/* implicit */unsigned long long int) var_13)), (var_3))))) : ((~(max((7211600634167811769ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
}
