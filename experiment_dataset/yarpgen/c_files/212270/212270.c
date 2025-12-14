/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        var_12 = 2799530931;
                        arr_10 [i_1] [i_3] = -4028984637180442615;
                    }
                }
            }
            var_13 = var_3;
            arr_11 [i_0] = (arr_7 [i_0] [i_0]);
        }
        var_14 = var_0;
    }

    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        var_15 = 4028984637180442614;
        var_16 = (((((((((arr_8 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? 2799530936 : var_11))) ? (min(var_5, (arr_3 [i_4] [18]))) : (arr_13 [6])))) ? ((((arr_5 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1]) ? var_4 : (arr_5 [i_4 - 1] [i_4 + 1] [4] [i_4 + 1])))) : (~18446744073709551615)));

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_17 [3] = var_2;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {
                    {
                        var_17 = -1;

                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            arr_26 [i_4 + 1] [i_6] [i_6] [i_4 + 1] [i_6] [7] = 10;
                            var_18 = (max(31633, (min((arr_25 [i_8] [i_7 - 1] [0] [i_5] [i_5] [i_4] [i_4]), -4))));
                            var_19 = (!13884283445390454914);
                            var_20 = -1;
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_29 [i_4] [7] [i_6] [i_7] [i_9] [i_7] [i_6] = ((-(((!(((140 ? (arr_24 [i_4] [i_5] [5] [9] [i_9] [i_5] [9]) : var_10))))))));
                            arr_30 [6] [6] [4] [i_6] [i_9] = (arr_8 [i_4] [i_5] [i_7 + 2] [i_5] [20] [i_4]);
                            var_21 = 9221120237041090560;
                            var_22 = (arr_5 [i_4 + 1] [i_4 + 1] [i_7 + 2] [i_9]);
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_33 [i_4] [i_6] [i_4] [i_4] [i_4] = (arr_1 [i_4 - 1]);
                            arr_34 [i_6] [i_5] [i_6] [i_7] [i_5] [i_6] = -22;
                            var_23 = 20221;
                            arr_35 [1] [i_5] [i_6] [i_5] [i_6] = ((!(arr_31 [i_6] [i_4 - 1])));
                            var_24 = (max((((arr_23 [i_4] [i_4] [5] [i_5] [5] [i_7] [i_10]) ? (min((arr_3 [i_7] [23]), (arr_1 [i_10]))) : (~1756877176))), (((arr_2 [i_7] [i_7] [i_6]) ? (min((arr_28 [13] [i_10] [i_6] [i_7] [i_10] [i_10]), (arr_31 [i_6] [i_5]))) : (arr_22 [i_4] [i_4] [i_6] [i_4])))));
                        }
                    }
                }
            }
        }
        var_25 = (arr_4 [i_4] [i_4]);
    }
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 13;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            {
                var_26 = (max((arr_32 [i_11 + 1] [i_11 + 1] [i_11] [2]), 15));
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_27 = (min(((0 ? 104 : 32047)), (((min(100, var_2))))));
                                arr_47 [i_11 - 1] = var_4;
                                arr_48 [i_11 - 2] [i_11 - 2] [i_13] [i_15] = (arr_1 [i_11 - 2]);
                                var_28 = var_11;
                            }
                        }
                    }
                }
                arr_49 [i_12] = (((arr_43 [6] [10] [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 2]) ? ((min((arr_43 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 - 2]), (arr_43 [i_11 - 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 - 2])))) : (arr_43 [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 2])));
                arr_50 [9] [9] = (max((min(-5, 1383567507219784071)), (((1 ? (arr_14 [i_11 - 1]) : (arr_21 [i_12] [12] [i_11] [i_11 + 1]))))));
            }
        }
    }
    #pragma endscop
}
