/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 &= (max(((var_2 ? var_10 : (((var_17 ? 1 : var_1))))), var_8));
    var_21 = (min(var_21, var_18));
    var_22 = (min(var_22, ((min((~4294967291), var_3)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (~var_4);
        arr_5 [1] |= (((arr_3 [16]) ? 7 : 13586031875008261503));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_1] = (((!var_4) + var_0));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_23 = ((((max(var_8, -71))) ? (~var_14) : (((arr_10 [1] [i_1]) ? 4860712198701290112 : -7))));
                                arr_21 [i_5] [i_4] [i_1] [i_2] [i_1] [i_1 + 2] [17] = (((((-(arr_16 [i_1 - 1] [i_2] [i_1] [i_4 - 1])))) ? ((~(arr_12 [i_1] [i_3] [i_5]))) : (arr_16 [i_1] [i_2] [i_1] [i_5])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_28 [i_1 + 2] [i_1] [i_1] [i_1] [i_1] = (max(((((arr_16 [i_1 - 1] [i_3] [i_1] [i_7]) < var_8))), (min((arr_16 [1] [i_1] [i_1] [i_2]), (arr_16 [i_1 + 1] [i_2] [i_1] [i_7])))));
                                var_24 = (min(var_24, -var_12));
                            }
                        }
                    }
                    var_25 = (-(min((arr_12 [i_1] [i_1 + 1] [i_1 + 1]), 1936338193)));
                }
            }
        }
        var_26 = (((((~(arr_17 [i_1 - 1])))) ? ((-((var_17 ? 9092919893788735103 : (arr_26 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1]))))) : ((min(((((arr_26 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [18]) ? (arr_8 [i_1 + 2] [i_1]) : var_0))), var_15)))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_33 [i_8] = var_5;
        arr_34 [i_8] = ((!(arr_8 [i_8] [i_8])));
    }
    #pragma endscop
}
