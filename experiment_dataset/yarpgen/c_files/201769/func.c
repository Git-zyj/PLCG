/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201769
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
    var_18 = ((/* implicit */short) 2597668972U);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 + 2] [i_0 + 2])) ? (arr_5 [i_0 - 2] [i_0 + 2] [i_0 + 2]) : (arr_5 [i_0 - 2] [i_0 + 2] [i_0 + 2]))) % (((2597668972U) + (2597668972U)))))));
                            var_20 = min((((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) 2597668972U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2]))) : (2733118108U))) : (max((((/* implicit */unsigned int) var_10)), (1697298324U))))), (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2])));
                            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (arr_5 [i_0] [i_0] [(short)8])))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_5 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))) ? ((~(((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_12)))))) : (((/* implicit */int) ((short) arr_9 [i_2] [i_2] [(short)3] [i_3] [i_3 - 2])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2])) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) (signed char)-19)) * (((/* implicit */int) arr_4 [i_0] [i_1]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) (short)-20736)) : (((/* implicit */int) (short)(-32767 - 1)))))) : (min((((/* implicit */unsigned int) var_11)), (arr_3 [i_0 - 1]))))))));
            }
        } 
    } 
    var_22 = var_1;
}
