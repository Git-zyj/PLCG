/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = 2147483642;
        var_17 = (((arr_1 [i_0] [i_0]) ? ((var_11 ? (-2147483647 - 1) : var_4)) : var_9));
        var_18 += ((var_11 ? ((var_5 ? (arr_1 [18] [i_0]) : var_12)) : (arr_0 [16] [i_0])));
        var_19 = var_12;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((((-(arr_0 [i_1] [i_1])))) ? (arr_2 [i_1]) : (((!(arr_1 [i_1] [i_1]))))));
        var_20 |= ((!(arr_0 [i_1 - 1] [i_1 - 1])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_21 = arr_3 [i_2 + 1] [11];
            var_22 = arr_7 [i_3] [i_2];
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_16 [i_5] [i_4] [10] [3] [11] = ((arr_7 [i_2 - 1] [i_4 - 1]) + (arr_13 [i_2 - 1]));
                        var_23 = var_2;

                        for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_24 = (arr_15 [i_2] [i_2] [0] [i_2]);
                            var_25 = (~(arr_17 [i_2] [9] [4] [i_4] [i_4] [17] [i_6]));
                            var_26 = (var_3 + ((-(arr_20 [i_2] [1] [i_3] [7] [10] [i_5] [3]))));
                        }
                        for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_27 = ((arr_10 [i_4 + 1] [i_7]) ^ (arr_21 [9] [i_3] [i_4 + 2] [i_5] [i_7]));
                            arr_23 [i_4] [i_3] [13] [13] [i_7] = (arr_12 [16] [2] [i_4]);
                        }
                        for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, ((((arr_9 [i_2 + 1]) - var_12)))));
                            var_29 = (var_2 ? 134152192 : var_2);
                            arr_27 [9] [2] [i_5] [i_5] [i_8] = (((arr_17 [i_8] [i_8] [i_8] [i_8] [2] [i_4 - 1] [i_3]) ? (arr_17 [i_5] [4] [i_5] [i_5] [15] [i_4 - 1] [1]) : (arr_14 [i_3] [i_2] [i_2 + 1])));
                        }
                        for (int i_9 = 4; i_9 < 17;i_9 += 1)
                        {
                            var_30 -= var_14;
                            var_31 = (arr_10 [i_9 - 3] [i_9 - 3]);
                            var_32 = -1068062405;
                            var_33 = var_9;
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {

            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                var_34 = arr_12 [i_11] [4] [i_2];
                arr_39 [i_11] [15] [i_2] = (arr_9 [i_2 - 1]);
                arr_40 [1] [i_10] [i_10] [i_10] = (((var_15 ? 4160815103 : (arr_9 [13]))));
            }

            for (int i_12 = 2; i_12 < 17;i_12 += 1)
            {
                var_35 = (arr_41 [i_12] [i_10] [i_2]);
                var_36 = ((((arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [2]) ? (arr_3 [i_12] [i_10]) : (arr_41 [1] [i_10] [i_12]))));
                var_37 *= (((var_12 ? (arr_11 [8] [9] [i_2]) : (arr_4 [i_10]))));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        {
                            var_38 -= (((arr_34 [i_13 + 1] [i_12 - 2] [i_2 - 1]) * (!268402688)));
                            arr_50 [i_2] [15] [i_12] [i_13] [9] = ((2147483642 ^ ((((arr_34 [i_2] [i_2] [0]) <= var_3)))));
                            var_39 = 4069784575;
                            arr_51 [i_13] [1] = (((arr_41 [i_2] [i_10] [i_14]) ? (arr_48 [i_14] [i_13] [i_12] [i_10] [3]) : (arr_41 [i_13] [i_12 - 1] [i_10])));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 2; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 17;i_17 += 1)
                {
                    {
                        arr_59 [i_15] [i_16] [13] = ((((arr_32 [i_17] [i_15] [i_16]) ? (arr_49 [i_15] [i_16] [i_17]) : var_2)) / (arr_47 [i_15 - 1] [i_2 - 1]));

                        for (int i_18 = 2; i_18 < 17;i_18 += 1)
                        {
                            var_40 = ((2151728307 ? ((-(arr_31 [12]))) : (arr_55 [15] [i_15 - 1])));
                            var_41 = ((-(arr_10 [i_15 - 2] [i_15 - 1])));
                            arr_62 [i_2] [i_15] [i_16] [11] [i_17] [i_18] = (!var_8);
                        }
                    }
                }
            }
        }
        var_42 = (~var_12);
        var_43 = (((arr_48 [i_2 - 1] [i_2] [i_2] [0] [17]) ? (arr_48 [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_2]) : (arr_48 [4] [i_2] [i_2] [i_2] [i_2])));
    }
    var_44 = ((((!var_3) && (((var_3 ? var_9 : var_0))))) ? (var_14 < -var_4) : var_9);
    #pragma endscop
}
