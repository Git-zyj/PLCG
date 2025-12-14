/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_14 [i_2] [i_1] [i_2] [i_3] [i_4] = (arr_0 [i_3] [i_2]);
                                arr_15 [i_0] [i_1] [i_2] [1] [i_2] = (arr_10 [i_2] [i_4] [i_2] [i_2] [i_2] [i_3]);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                arr_18 [i_0] [i_1] [i_1] [i_5] [2] [i_3] [14] &= ((130 ? (arr_7 [i_0] [i_1] [i_3]) : (arr_7 [i_0] [i_0] [i_2])));
                                arr_19 [i_1] [i_2] [i_3] [i_5] &= (((arr_5 [i_2] [i_2]) + var_10));
                            }
                            arr_20 [i_2] = ((((!(arr_11 [i_1] [i_2]))) ? ((((arr_11 [i_0] [i_1]) >= 8021194319054922766))) : ((var_12 ? (arr_13 [0] [i_1] [i_2] [i_2] [i_3] [i_3] [18]) : (arr_12 [i_1] [i_2])))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 4; i_6 < 19;i_6 += 1)
                {
                    arr_23 [8] [i_1] [i_1] &= (arr_0 [i_0] [i_1]);
                    arr_24 [i_6] [i_1] [3] [i_0] = (~-3885346184139370213);
                    arr_25 [i_6] [15] [i_1] [13] = (arr_4 [i_0] [i_0] [i_0]);
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_17 -= (max((max(22, 2056415139349452080)), var_16));

                    for (int i_8 = 4; i_8 < 19;i_8 += 1)
                    {
                        arr_30 [i_8] [i_8 + 1] [i_7] [i_1] [17] [i_8] = (arr_1 [i_7] [i_0]);

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_18 = (arr_9 [i_8 + 1] [i_8 + 1] [i_8 - 3] [i_8 + 1]);
                            var_19 = (max(var_19, (arr_29 [i_8 - 1] [14] [i_8 - 2] [i_8])));
                        }
                    }
                    arr_33 [i_0] = (((arr_3 [i_0] [i_0] [i_0]) ? ((22 ? 1358785302555021943 : var_12)) : (((arr_3 [i_0] [i_1] [i_7]) ? var_4 : (arr_22 [i_0] [i_1] [i_7])))));
                    var_20 = ((((1 ? var_14 : 10831558319965315511)) != (1 * -8021194319054922763)));
                }
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {

                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        arr_39 [i_0] [1] [4] [i_10] [i_11] [i_11] = (arr_38 [i_10 + 1] [i_10 + 2] [i_10 + 1] [i_11 - 1] [i_11 + 1]);
                        var_21 = (max((arr_12 [i_0] [10]), (((arr_12 [i_0] [1]) ? (arr_12 [i_0] [6]) : (arr_12 [i_1] [16])))));
                    }
                    for (int i_12 = 3; i_12 < 19;i_12 += 1)
                    {
                        arr_42 [i_12] [i_0] [i_1] [i_1] [i_1] [i_12 - 3] = (((max((arr_17 [i_10 + 4] [i_10 + 2] [i_12]), (arr_13 [i_10 + 4] [i_10 + 2] [i_10] [i_10] [i_10 + 2] [i_12 - 2] [i_12 - 2]))) ? var_3 : (((max((arr_13 [i_10 + 4] [i_10 + 2] [i_12] [i_12] [i_12] [i_12 - 2] [i_12 - 2]), (arr_17 [i_10 + 4] [i_10 + 2] [i_12])))))));
                        var_22 = (arr_17 [i_0] [i_1] [i_12]);
                    }

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        arr_46 [i_13] [i_1] [i_0] = (!0);
                        arr_47 [6] [5] [5] [i_13] = (arr_0 [i_10 + 4] [i_10 + 3]);
                        var_23 = (arr_44 [i_0] [i_0] [i_1] [i_1] [i_10] [i_13]);
                        arr_48 [i_0] [i_0] [i_0] [i_0] = (arr_0 [i_1] [16]);
                    }
                    for (int i_14 = 2; i_14 < 19;i_14 += 1)
                    {
                        arr_51 [i_0] [i_0] [i_10 + 4] [14] = 51430;
                        var_24 += var_10;
                        arr_52 [i_0] [i_0] [i_0] = (max((~154), (arr_21 [i_10 + 1] [i_10 + 2] [i_10 + 3])));
                    }
                    var_25 = (((((max(14797579969220061874, var_8)) ? 14105 : (arr_22 [7] [i_1] [i_10])))));
                }
                arr_53 [i_0] [i_0] [i_0] = ((87 ? 8 : -21202));
            }
        }
    }
    var_26 = var_5;
    #pragma endscop
}
