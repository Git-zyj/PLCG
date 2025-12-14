/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = ((!((min(var_18, (arr_5 [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [3] [8] [8] [8] [i_3] [8] = var_13;
                                var_21 = max((((arr_8 [i_0] [i_1] [i_0 - 1] [i_3]) ? (arr_8 [6] [6] [i_0 - 1] [i_3]) : (arr_0 [i_0 - 1]))), (arr_4 [i_3 - 1]));
                                arr_17 [i_4] [i_2] [i_2] [i_4] [i_4] [5] = (((((((((-(arr_1 [i_0] [1])))) && (arr_14 [i_0 - 1] [i_0 + 1]))))) | (((((arr_12 [i_0] [3] [i_1] [8] [8] [3] [i_4]) ? (arr_8 [2] [1] [i_0] [i_0]) : var_19)) + (((var_0 ? 1 : (arr_5 [i_0]))))))));
                                arr_18 [i_0] [i_1] [i_2] [i_2] [0] = ((((-(arr_0 [i_1])))) ? ((((min((arr_7 [i_4] [0] [1]), var_5))) ? ((min(var_6, (arr_0 [i_4])))) : (max((arr_8 [7] [i_1] [6] [i_3]), 1)))) : var_17);
                                arr_19 [7] [7] = (((((arr_1 [i_3] [i_1 + 1]) <= (arr_1 [i_1] [i_1 + 1]))) ? 16776192 : ((var_3 ? (arr_0 [i_0 - 2]) : (arr_0 [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = -14970;
    var_23 = var_6;
    #pragma endscop
}
