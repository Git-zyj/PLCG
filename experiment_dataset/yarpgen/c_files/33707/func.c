/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33707
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
    var_14 = ((/* implicit */unsigned short) (((+(((var_6) ^ (((/* implicit */unsigned long long int) 32767)))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_15 = ((/* implicit */unsigned short) (signed char)-65);
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_1))))))) ? (max((((unsigned int) var_12)), (((/* implicit */unsigned int) min((var_2), (var_2)))))) : (((((unsigned int) var_12)) - (((/* implicit */unsigned int) var_3))))));
    var_17 *= ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) & (var_0))))));
}
