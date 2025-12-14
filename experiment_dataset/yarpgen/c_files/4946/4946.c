/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (((((max(var_8, var_9)) ^ ((14088205120489717907 ? var_5 : var_2))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_11 = (min(var_11, ((((2256346593821962177 & 226) | (~var_0))))));
                        var_12 = ((-var_2 ? (arr_8 [i_2] [i_2] [7] [i_2] [i_2] [i_2]) : (arr_1 [i_3])));
                        var_13 -= (((((arr_9 [i_0] [1] [i_2] [i_3]) ? var_3 : var_0))) ? (arr_6 [i_2]) : (((arr_4 [i_0] [1] [i_2]) ? var_5 : (arr_5 [3] [i_1] [7] [i_3]))));
                    }
                }
            }
        }
        var_14 = (max(var_14, ((((arr_2 [6]) ? (arr_5 [i_0] [i_0] [i_0] [7]) : var_4)))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_15 = (arr_11 [i_4]);
        var_16 = (min(var_16, var_8));
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_17 = max((max((((arr_15 [i_5 - 2]) ? (arr_22 [11] [i_7] [i_7] [7] [i_7]) : (arr_16 [i_7]))), var_5)), 0);
                                var_18 = 8128;
                            }
                        }
                    }
                    arr_27 [i_5] [4] [4] [i_5] = ((((min((arr_22 [i_5] [4] [i_5] [i_5 - 2] [i_5 - 1]), ((1 ? (arr_20 [i_5] [19] [i_7]) : (arr_21 [i_5] [i_5] [i_5])))))) ? ((-(arr_17 [10] [i_6]))) : var_9));
                    var_19 *= (arr_23 [i_5] [i_5] [i_7] [11]);
                }
            }
        }
        var_20 = (min(var_20, var_4));
        var_21 = (max((arr_18 [i_5] [i_5 + 1] [i_5]), (((arr_18 [i_5] [i_5 - 1] [i_5]) - (arr_18 [i_5] [i_5 - 1] [i_5])))));

        for (int i_10 = 2; i_10 < 21;i_10 += 1)
        {
            arr_31 [i_5] = var_5;

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                var_22 = (max((max(((var_2 ? var_0 : var_3)), (arr_30 [i_5 + 1] [8] [i_5 - 1]))), (((arr_18 [i_10 - 2] [i_10 - 1] [i_5 + 1]) ? (arr_14 [i_11]) : (~var_3)))));
                arr_34 [i_5] = (((((((arr_17 [i_11] [i_10]) | var_5)))) ? (1 ^ 335) : ((var_9 >> (((arr_22 [i_5 - 2] [i_5] [i_10 - 2] [i_10 - 1] [i_10 - 1]) + 9916))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_23 = ((((min(var_8, (arr_24 [i_5] [i_10] [i_5 - 1] [i_10 - 2] [i_10 - 2] [i_12])))) <= -1253954502));
                            var_24 = ((min((((var_7 ? var_4 : var_1))), (min(126, var_0)))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        var_25 = arr_29 [i_14] [i_14];
        var_26 = ((var_2 ? (~var_2) : (((var_6 ? var_6 : (arr_38 [i_14] [i_14] [i_14]))))));
    }
    var_27 = (!var_6);
    var_28 += var_1;
    #pragma endscop
}
