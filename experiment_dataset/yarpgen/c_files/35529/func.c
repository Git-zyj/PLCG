/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35529
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
    var_10 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_9))));
    var_11 = ((/* implicit */long long int) ((var_0) ? (((/* implicit */int) min((((signed char) var_5)), (var_8)))) : (((((/* implicit */int) var_0)) << (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (var_5)))))));
    var_12 = ((max((((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_3)))), (var_4))) >> (((max((var_5), (((((/* implicit */unsigned long long int) var_6)) * (var_5))))) - (16971545898358324806ULL))));
    var_13 |= ((/* implicit */short) var_5);
}
