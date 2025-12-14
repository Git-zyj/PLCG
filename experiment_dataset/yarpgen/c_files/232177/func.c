/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232177
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
    var_18 = max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) 4294967276U)) && (((/* implicit */_Bool) var_12)))), ((!(((/* implicit */_Bool) 500338037U))))))), (var_14));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(42834064U)))))) ? (((((/* implicit */_Bool) max((9223372036854775808ULL), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))) : ((~(var_12))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_11)))))))));
    var_20 = ((/* implicit */unsigned int) (unsigned char)48);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((min((((/* implicit */unsigned long long int) 4294967280U)), (arr_3 [i_0 - 1] [i_0 - 1]))) * (((arr_3 [i_0 - 3] [1ULL]) - (arr_3 [i_0 + 1] [i_1])))))));
                var_22 = ((/* implicit */unsigned char) ((long long int) 9223372036854775813ULL));
                var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((long long int) (signed char)40))), (arr_2 [i_1])));
                var_24 = ((/* implicit */signed char) var_17);
            }
        } 
    } 
}
