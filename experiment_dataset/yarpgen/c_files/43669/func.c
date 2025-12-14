/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43669
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
    var_20 ^= ((/* implicit */_Bool) var_18);
    var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_1))))), (var_11)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_0)) ? (var_14) : (var_14))))), (((/* implicit */long long int) max((var_18), (((/* implicit */signed char) var_19)))))));
        var_23 = var_12;
        var_24 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_4)), (var_9))), (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */long long int) var_1)))))));
    }
}
