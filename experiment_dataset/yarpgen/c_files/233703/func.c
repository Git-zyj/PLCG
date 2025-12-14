/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233703
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
    var_16 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) (~((~((-2147483647 - 1))))))), (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
    var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (var_1)))) && (((/* implicit */_Bool) (+(((var_7) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (min(((~(((/* implicit */int) var_14)))), (((/* implicit */int) var_9)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -3565266903433521026LL))))), ((unsigned char)12))))));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_13))))) & (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_8))))))))));
}
