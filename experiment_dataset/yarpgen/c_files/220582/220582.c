/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 *= (arr_0 [8]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        var_18 = 9223372036854775804;
                        var_19 *= (-(arr_3 [i_0] [0] [i_2 + 1]));
                    }
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        var_20 = (arr_1 [i_0]);
                        arr_12 [i_0] [i_1] [i_2] [i_0] [i_2 + 1] [i_4] = var_1;
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_21 = (arr_14 [i_5] [i_1] [i_0]);
                        var_22 ^= var_6;
                        arr_17 [i_0] [i_0] [i_2 - 3] [9] = (((arr_15 [i_0] [2] [i_2 - 2] [i_0] [i_2 + 1] [i_5]) * var_3));
                        var_23 *= 14714;
                        arr_18 [i_0] [i_0] [i_2 + 1] [i_5] [i_5] = -var_2;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_24 = (((arr_22 [i_0] [i_1] [i_2] [i_6] [i_6] [i_7] [i_0]) >= 9));
                            arr_23 [i_0] [i_0] = ((((-(arr_7 [i_0]))) - var_4));
                            arr_24 [i_0] [i_1] [i_1] [i_1] [i_1] = ((~(arr_6 [i_2 - 2] [i_2 - 2] [2] [i_2 - 3])));
                            arr_25 [i_0] [i_0] [i_0] [6] [6] [i_6] [10] = ((var_3 ? var_12 : var_7));
                        }

                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_25 = (arr_13 [i_0] [i_1] [i_2 - 2] [i_0] [i_2 - 2] [i_8]);
                            var_26 = var_1;
                            arr_28 [i_0] [i_6] [i_2] [i_0] = (var_1 % 9223372036854775787);
                        }
                        for (int i_9 = 3; i_9 < 10;i_9 += 1)
                        {
                            arr_33 [i_2] [i_0] [i_2] [i_6] [i_9] [i_0] = (arr_13 [7] [i_1] [i_1] [i_0] [i_1] [i_1]);
                            arr_34 [0] [i_1] [i_0] [i_0] [i_6] [i_9] = arr_15 [i_9 + 1] [i_6] [i_0] [i_0] [i_0] [i_0];
                        }
                        for (int i_10 = 1; i_10 < 8;i_10 += 1)
                        {
                            var_27 = var_12;
                            var_28 = -9223372036854775792;
                            arr_38 [6] [5] [i_2] [i_0] [i_10 + 1] = var_13;
                            arr_39 [i_0] [i_1] [i_2 + 1] [i_6] [i_0] = ((-(var_16 > var_6)));
                        }
                        arr_40 [i_0] = (-(!var_1));
                        var_29 *= (((-(arr_8 [i_0] [i_6]))));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 7;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            {
                                var_30 = var_2;
                                var_31 = var_16;
                            }
                        }
                    }
                    var_32 = (((((-(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [9])))) || var_0));
                    var_33 = -var_2;
                }
            }
        }

        for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
        {
            arr_47 [i_0] [i_0] [i_0] = ((var_10 | (arr_14 [i_0] [i_0] [i_13])));
            arr_48 [i_0] [i_0] = (1669440233 + 14744);
        }
        for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
        {
            var_34 = var_10;
            var_35 = (arr_44 [i_0] [i_0] [i_14] [i_0] [i_14] [i_14]);
        }
    }
    var_36 ^= ((-((max((!var_0), var_2)))));
    var_37 = (max(1072693248, 3465240484));
    #pragma endscop
}
