/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193959
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
    var_17 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (signed char)-31)), (268435456U)));
    var_18 = ((/* implicit */short) min((var_13), (((((unsigned int) var_6)) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)24576)) || (((/* implicit */_Bool) var_6))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_1] = arr_1 [i_0];
                arr_6 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1] [i_0 + 3])) - (((/* implicit */int) arr_3 [i_1]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 2] [i_1])) + (((/* implicit */int) arr_3 [i_0]))))) : (((var_13) / (arr_2 [i_1])))))));
            }
        } 
    } 
}
