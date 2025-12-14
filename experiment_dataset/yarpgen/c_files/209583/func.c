/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209583
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
    var_16 = ((/* implicit */_Bool) ((((((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_15))))) >= (min((((/* implicit */long long int) var_10)), (-4959919918990859012LL))))) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) var_5))));
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) (((~(-2049377847))) <= (max((((/* implicit */int) arr_5 [i_0] [i_1])), (-481872327)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) ((int) arr_6 [i_0] [i_2 + 1] [i_2 - 2]));
                    arr_10 [(short)14] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [(short)6] [i_2 - 1] [(short)6])) ? (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 2]) : (817897088)));
                    var_20 = arr_4 [i_0] [i_2 - 2] [i_0];
                }
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) -537602637))));
}
