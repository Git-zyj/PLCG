/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214347
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
    var_15 -= ((/* implicit */unsigned int) (((((-(((/* implicit */int) (signed char)81)))) + (2147483647))) << (((((/* implicit */int) var_0)) - (8189)))));
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) <= (var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) -1931976506);
                var_18 = ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]);
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1), (((/* implicit */int) (short)29047))))) ? (((/* implicit */int) (((-(((/* implicit */int) var_6)))) == (((((/* implicit */_Bool) -695467020)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (-1849582695)))))) : (((/* implicit */int) ((arr_0 [i_0]) == (((((/* implicit */_Bool) 312183286)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_0] [i_0]);
                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) -620069204))))) | (((/* implicit */int) var_0))))), (1563892861U)));
            }
        } 
    } 
}
