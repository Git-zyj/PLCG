/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_6 [i_2] [i_1] [i_1] [i_0] = (((arr_5 [i_0] [i_1]) ? (arr_0 [i_1 - 1] [i_1]) : -21));
                    arr_7 [i_1] = ((-(((arr_5 [i_0] [i_1]) ? (1843436081 && -40) : ((1955482409 ? 2453174234 : 18))))));
                    arr_8 [i_0] [i_1] [i_1] = (((((((arr_0 [i_0] [i_0]) < 86)))) | ((~(arr_5 [i_2 - 1] [i_1])))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (arr_0 [i_0] [i_2]);
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_17 [i_1] [i_1] [i_3 + 1] [i_4] [i_1] = var_8;
                            var_16 = ((0 ? 18 : 16369762738339879879));
                            arr_18 [i_0] [i_0] [i_3 - 2] [i_4] [i_1] [i_3 - 2] = (arr_15 [i_1 + 1] [i_1 + 1] [i_0] [i_0] [i_3 + 1]);
                        }
                        var_17 = (min(var_17, (arr_12 [i_0] [i_1 + 1] [i_3 - 2] [i_3] [i_0])));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_4] [i_0] [i_4] [i_3] |= ((var_10 ? ((var_10 ? (arr_16 [i_0] [i_0] [i_0] [8] [i_6]) : (arr_4 [i_0]))) : 4294967295));
                            var_18 ^= (((arr_11 [i_3] [i_3 - 1] [i_3 + 1] [i_3]) ? (arr_13 [i_1 + 1] [i_1 + 1]) : (arr_19 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_3 - 1] [i_6])));
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_1 - 1] [i_3 - 2] [i_4] [i_3 - 2] = var_14;
                            arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_1] = ((177 >> ((((-(arr_19 [i_0] [i_0] [i_0] [i_4] [i_3] [i_0] [i_0]))) + 30375))));
                            var_19 = ((4294967295 ? (arr_12 [i_0] [i_1] [i_3 - 1] [i_3 + 1] [i_1 - 1]) : (arr_12 [i_0] [i_7] [i_7] [i_3 + 1] [i_1 - 1])));
                        }
                        var_20 = 8427;
                    }
                    var_21 = (!-9510);
                }
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    var_22 = (min(var_22, (!-1)));
                    var_23 = ((!((max((arr_19 [i_0] [i_0] [i_1] [i_1] [i_8 - 1] [i_8 - 1] [i_8]), 3764316996)))));

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_24 = (min(var_24, (arr_13 [i_0] [i_0])));
                        var_25 += (arr_26 [i_0]);
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_1] [i_0] [i_10] [i_11] = (max((arr_16 [i_0] [11] [i_0] [i_0] [i_11]), ((max(2436474710, 9520)))));
                            var_26 += ((-18 ? (arr_36 [i_0] [i_0] [i_1] [i_0] [i_0] [i_11] [i_11]) : 1));
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            arr_41 [i_0] [i_1] [i_8 + 1] [i_12] [i_12] |= (((arr_11 [i_10] [i_10] [11] [i_0]) ? (max((arr_35 [i_12] [i_8] [i_1 + 1] [i_12]), 52812)) : (arr_22 [i_10] [5] [i_12] [i_10] [i_12] [i_0] [i_10])));
                            arr_42 [i_0] [i_1] [i_8 - 1] [i_1] [i_0] = ((((min((arr_10 [i_8] [i_8] [i_8]), var_13))) + 13311));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            arr_46 [i_1 + 1] [i_1] [i_1] = (((arr_23 [i_0]) ? var_2 : (arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_8 - 1] [i_1 - 1])));
                            arr_47 [i_0] [i_1] [i_1] = ((var_15 ? (arr_28 [i_1 + 1] [i_8 + 1] [i_1]) : (arr_28 [i_1 - 1] [i_1] [i_1])));
                            arr_48 [10] [i_1 + 1] [i_13] [i_8 - 1] [i_8 - 1] |= ((!(arr_19 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_8 - 1] [i_8 - 1])));
                            var_27 = var_2;
                        }
                        var_28 |= (max((min((arr_2 [i_8 + 1] [1] [i_8]), 18)), (arr_35 [8] [i_8 + 1] [i_8] [i_8 + 1])));
                        var_29 += (min((arr_2 [i_1 + 1] [1] [1]), (arr_2 [i_1 - 1] [2] [i_1 - 1])));
                    }
                }
                var_30 = (max(var_30, (!243)));
                var_31 = (max((arr_40 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1 - 1] [i_0]), (arr_40 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] [i_0])));
            }
        }
    }
    var_32 = var_8;
    #pragma endscop
}
