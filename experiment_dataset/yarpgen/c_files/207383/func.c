/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207383
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
    var_15 &= ((/* implicit */unsigned short) var_2);
    var_16 = ((/* implicit */short) max((var_16), (min((var_12), (((/* implicit */short) ((unsigned char) var_1)))))));
    var_17 = ((/* implicit */unsigned int) var_11);
    var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((1267151213U), (((/* implicit */unsigned int) (unsigned char)246))))) ? (max((((/* implicit */long long int) var_8)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)246))))), (((long long int) 33554431LL))))));
}
