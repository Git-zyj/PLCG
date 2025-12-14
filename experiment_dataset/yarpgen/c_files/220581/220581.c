/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((((min(var_12, var_5))) ? ((max(12760, var_0))) : var_4)), ((((((var_11 ? -627120381 : var_11))) && ((((var_0 + 2147483647) >> (var_1 - 517523387)))))))));
    var_14 = var_12;
    var_15 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_9 [i_3] [i_1] [i_1] [i_1] = ((-(arr_0 [i_2 - 2])));
                        arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] = (min(var_6, ((var_4 ? (arr_2 [i_0 - 3]) : var_3))));
                        arr_11 [i_0] [i_2] [i_0] [i_3] [i_0] = (((arr_8 [i_0 + 1] [i_3]) ? -var_5 : 2119345300));
                        arr_12 [i_0] [i_1] [i_0] [i_1] [i_0] = (max((((arr_0 [i_0 - 3]) ? (arr_6 [i_2] [i_2 - 2] [i_0 - 4] [i_0 - 3]) : (arr_6 [7] [i_2 - 2] [i_0 + 1] [i_0 - 4]))), (max(var_11, ((var_7 ? var_1 : var_2))))));
                        arr_13 [i_0] [i_1] [i_1] [i_3] [7] = (((((min(var_7, -7372)) ? (arr_8 [i_1] [i_1]) : var_2))));
                    }
                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        arr_16 [i_0] [i_1] = max(-4879133328660748518, (max((((arr_8 [0] [i_1]) ? 6591885660265285792 : -23)), ((((arr_4 [i_0] [i_0]) ? (arr_7 [i_1] [i_1]) : -4879133328660748513))))));
                        arr_17 [i_0] [i_1] [i_1] [i_4] [i_4] [i_4 - 2] = (max(((((arr_15 [i_0 - 2] [i_2] [5] [i_2 + 1] [i_4 + 1] [i_1]) <= 6591885660265285792))), (arr_1 [i_2 - 2])));
                    }
                    arr_18 [i_2] [i_1] = (min(((((-(arr_14 [i_0] [i_0] [i_0] [i_0]))) % (arr_7 [i_2] [i_2]))), ((min(var_2, (arr_1 [1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_24 [i_6] [i_1] [i_2] [i_1] [i_0] = ((((((arr_6 [i_0] [i_1] [i_2] [i_2 + 1]) - (arr_6 [i_5] [i_1] [i_2 - 2] [i_2 + 1])))) ? var_5 : (max(-4961685567635862383, (arr_2 [i_0 + 1])))));
                                arr_25 [i_0] [i_0 - 3] [i_0] [i_0] [i_1] [i_0] [i_0] = ((((min((arr_4 [i_0 - 2] [i_0 - 1]), (arr_4 [i_0 - 3] [i_0 - 4])))) ? (((arr_4 [i_0 - 4] [i_0 - 4]) + -1203642972)) : (((arr_4 [i_0 - 2] [i_0 - 4]) ? (arr_4 [i_0 - 2] [i_0 + 1]) : var_9))));
                                arr_26 [i_0] [i_2] [i_2] [3] [i_1] = (-(((min((arr_22 [i_1] [i_1] [i_2] [i_5] [i_2]), 4879133328660748519)) | ((min((arr_23 [i_1]), var_7))))));
                            }
                        }
                    }
                    arr_27 [i_0] [i_0] [i_2] [i_0] |= var_0;
                }
            }
        }
    }
    #pragma endscop
}
