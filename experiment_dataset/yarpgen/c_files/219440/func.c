/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219440
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0))))))))))));
    var_11 |= ((/* implicit */long long int) var_8);
    var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
    var_13 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_4)) ? (var_7) : (var_7))))) : (min((max((var_7), (((/* implicit */long long int) var_5)))), (((var_8) ? (((/* implicit */long long int) var_1)) : (var_7)))))));
}
