/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (((arr_2 [i_1] [i_2]) > ((1 ? 3524829065 : -1))));
                    var_20 = (((min(var_10, (arr_7 [i_2 + 2] [i_2 + 1] [i_2 + 2])))) ? (arr_7 [i_2 + 1] [i_2 + 2] [i_2 + 2]) : ((var_18 ? (arr_7 [i_2 - 1] [7] [i_2 + 1]) : 16)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = (((0 ? (arr_3 [i_4]) : var_14)));
                                var_22 = (max(var_22, var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 ^= -var_16;
    var_24 = var_5;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_6] [i_7] [i_6] = (((((var_7 + 58) + var_5))) ? (min((arr_21 [i_7] [i_6] [i_6] [i_5]), (-2147483647 - 1))) : (((((arr_20 [18]) < 0)))));
                    var_25 = var_2;
                    arr_24 [i_5] [i_6] [4] = ((((((var_8 ^ 0) ? 576460752303421440 : -4037383129180875668))) ? ((min(127, (var_0 || 58)))) : ((~(~var_11)))));
                    arr_25 [i_6] [i_7] = (((arr_18 [i_6] [i_5]) ? (arr_19 [i_5] [i_6] [i_7]) : (!-8074374739911013300)));
                }
            }
        }
    }
    #pragma endscop
}
