/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239698
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) * (1591858768U)))) ? (((2703108527U) * (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) ? (min((1591858768U), (((/* implicit */unsigned int) arr_3 [i_0 + 1] [i_0] [i_0 + 1])))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0])) * (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])))))));
                var_15 |= ((/* implicit */long long int) arr_0 [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_8);
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (((+(((/* implicit */int) var_1)))) << (((((/* implicit */int) var_13)) + (5827))))))));
}
