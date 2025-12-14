/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_10 = (max(var_10, (arr_1 [i_0 + 2])));
        var_11 = 112;
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_13 [22] [i_3] [24] [i_3] = ((~(arr_9 [21] [11] [11] [13])));
                        arr_14 [i_1] [9] [9] [i_3] [24] = var_3;
                        arr_15 [i_3] [i_1] [i_3] = 5120;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_18 [i_1] [i_3] [17] [17] [17] [i_1] = (arr_8 [i_1] [1] [23]);
                            var_12 -= var_2;
                            var_13 = (max(var_13, (!-117)));
                            arr_19 [i_1] [6] [3] [i_3] [3] = ((!(arr_8 [i_2] [18] [4])));
                            arr_20 [i_3] [i_3] [i_3] [i_3] [i_1] = (arr_7 [i_1] [i_2] [7]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_24 [12] [i_3] [i_3] [14] [i_3] [i_1] [i_1] = var_3;
                            var_14 = var_8;
                        }
                    }
                }
            }
        }
        arr_25 [i_1] = var_2;
    }
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    {
                        arr_37 [5] [1] [i_9] [i_9] [1] [10] = ((((arr_7 [i_7] [i_7] [i_7]) & (~var_9))));
                        var_15 = ((-((223 ? (arr_30 [i_7 - 2] [i_8 + 2]) : 60))));
                        arr_38 [i_7] [i_7] [i_7] |= ((var_5 ? (!2639940659) : 49813));
                        var_16 = (max((((((arr_21 [7] [1] [7] [4] [13]) == (arr_35 [5] [1] [1] [15] [5]))))), (arr_35 [i_7] [i_7] [i_7] [i_7] [i_7])));
                    }
                }
            }
        }
        arr_39 [3] = ((~((~(arr_7 [9] [9] [i_7 - 2])))));
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        arr_42 [4] [0] = ((((((arr_27 [i_11] [i_11]) ? (arr_27 [i_11] [4]) : 124))) / var_3));
        var_17 = (max((arr_29 [i_11]), (arr_2 [i_11] [i_11])));
        arr_43 [i_11] = (((((min(var_2, (arr_29 [i_11])))) ? (min(var_8, var_6)) : (var_1 & var_7))));
    }
    var_18 = (((((var_5 ? (9858492064796946709 && var_9) : var_7))) ? ((max(var_2, var_5))) : var_6));
    var_19 = var_2;
    #pragma endscop
}
