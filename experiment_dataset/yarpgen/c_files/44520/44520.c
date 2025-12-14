/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((((max(1, 125))) > ((max(69, 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] = ((35 != ((((221 ? 3369368801 : 2147483647)) & ((((arr_9 [i_3] [i_3 - 2] [i_2] [i_3]) + 185)))))));
                                arr_13 [i_0 + 1] [i_3] [i_2] [i_3] [i_3] = ((((min(0, -65))) ? 1 : ((120 ? 41 : 1689812668))));
                                arr_14 [i_3] [i_3] [3] [i_3] = arr_1 [3] [i_1];
                                arr_15 [i_0] [i_3] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2] = ((!(((arr_8 [i_0] [i_0] [i_0 + 2] [i_3 + 1]) && var_15))));
                                var_17 = (arr_6 [i_4]);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] = (~0);
                        arr_19 [i_0] [i_0 + 1] [i_0] [1] = var_9;

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_23 [i_0] [i_2] [i_5] [i_6] = (((var_7 || var_12) >> ((var_7 ? var_13 : 3369368801))));
                            arr_24 [i_6] [i_1] = (arr_3 [i_0 - 1]);
                            arr_25 [4] [i_2] [i_2] |= (arr_4 [i_5] [i_5 - 1]);
                            arr_26 [i_1] [i_1] [3] [i_6] [1] = ((var_8 ? var_8 : (arr_2 [i_0 + 2])));
                        }

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_31 [i_0] [i_1] [i_7] [i_5] = (((arr_3 [i_0 + 3]) ? (arr_10 [i_0 - 1]) : (arr_20 [i_7] [i_0 + 3] [i_0 + 2] [i_0 + 3] [i_5 + 1])));
                            var_18 = -21;
                            var_19 = var_9;
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = arr_17 [i_1] [i_2] [i_5] [i_8];
                            arr_35 [8] [i_0] [i_1] [i_1] [i_0] = var_12;
                            var_20 = var_3;
                            var_21 = var_11;
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_39 [i_0] [i_0] [i_1] [i_2] [i_9] = (arr_21 [i_9] [i_2]);
                        arr_40 [i_9] [i_2] [i_2] [i_1] [i_0] = var_6;
                    }

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_44 [i_0] [i_1] &= (min((!var_15), (max((min(var_3, (arr_33 [i_0] [i_0] [0] [i_0 + 3] [i_0] [i_0]))), 1))));

                        for (int i_11 = 2; i_11 < 10;i_11 += 1)
                        {
                            arr_48 [i_0] = (((arr_9 [i_0] [i_0] [2] [i_11]) & ((~(arr_17 [i_0] [i_0] [i_0] [i_0 - 1])))));
                            var_22 = (arr_27 [i_0 + 3] [i_11]);
                            var_23 *= (((min((var_5 || var_4), var_15)) || (((1 ? (var_6 && var_1) : 8790)))));
                        }
                    }
                    arr_49 [i_0] [i_1] = var_8;
                }
            }
        }
    }
    var_24 = (((((max(var_6, ((max(var_14, var_14))))))) | ((((min(var_9, 221))) ? 1 : var_10))));
    #pragma endscop
}
