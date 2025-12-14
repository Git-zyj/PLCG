/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (~var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = (((arr_5 [i_0] [i_1] [2] [i_1]) + ((((((arr_3 [i_0]) + 9223372036854775807)) << ((-(arr_4 [i_0] [i_1]))))))));
                    arr_7 [i_0] [i_1] = var_2;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_3] = (arr_8 [i_0]);
                        arr_12 [i_1] [i_1] [8] [i_3] = 1;
                        arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] = (((((var_1 * var_13) ? var_0 : (14970007288261473661 && 0))) * (((!(arr_10 [i_1]))))));
                        var_17 *= 3690;
                    }
                    for (int i_4 = 4; i_4 < 13;i_4 += 1)
                    {
                        arr_16 [i_0] [i_1 + 4] [i_2] [i_4] [i_1] [i_1 + 4] = (arr_6 [i_0] [13] [i_4 - 4]);
                        arr_17 [i_4] [i_1] [i_2] [i_1] [i_0] = (arr_8 [i_0]);

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            var_18 = (arr_4 [i_4 - 1] [i_1 + 1]);
                            var_19 = (max(var_19, (arr_14 [i_0] [i_1] [1] [i_5])));
                            var_20 = (((-9223372036854775799 / 255) >= (-3177 % var_5)));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_21 = (-((-(min(2147221504, 128)))));
                            arr_22 [i_6] [i_4 - 3] [i_1] [i_1] [i_0] [i_0] = ((((min((arr_20 [i_1 + 2] [i_4 - 3] [i_4 - 3] [i_4] [i_6]), (arr_20 [i_1 + 3] [i_4 - 1] [i_6] [i_6] [i_6])))) ? (((-(arr_14 [i_1 + 4] [i_1] [i_2] [i_4])))) : var_11));
                            arr_23 [i_1] [i_1 + 1] [i_1] = ((!(arr_9 [i_0] [i_1])));
                            arr_24 [i_1 - 1] [i_1 - 1] [i_1] = (((~(1 * 0))) * (((((max((-2147483647 - 1), 63))) ? (arr_8 [i_6]) : (-54 <= 0)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            arr_27 [i_2] [i_2] [i_1] [i_2] = (arr_14 [i_1 - 1] [5] [i_4 - 4] [5]);
                            var_22 = 111;
                            var_23 = ((var_5 ? 0 : 5901278915123153585));
                            arr_28 [i_7 + 1] [i_1] [i_1] = arr_0 [i_2];
                        }
                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 14;i_8 += 1)
                        {
                            arr_32 [i_0] [i_1 + 1] [i_0] [i_4] [i_8 - 1] [i_8] [i_1] = (((((-1 ? 3 : 0))) ? ((8479131465320763896 + (arr_19 [i_0] [i_1] [1] [i_2] [i_4 - 4] [5] [i_8]))) : 1));
                            var_24 = (~-1);
                            var_25 = (min(var_25, (((!((((arr_5 [i_1] [i_2] [13] [i_8 - 3]) ? 7260743597438286467 : 7260743597438286467))))))));
                            var_26 = 9219286917793083545;
                            var_27 = (max(var_27, (((7412362761704107312 ? (arr_30 [i_0] [i_8 - 1] [i_2] [i_1 + 4] [i_4 - 4] [i_2]) : var_8)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        var_28 = (min(var_28, ((((arr_18 [i_9 - 1] [i_1] [i_0]) <= (-9223372036854775807 - 1))))));
                        arr_35 [i_1] = var_3;

                        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_1 + 1] [i_1] [i_9] = ((var_1 * (arr_0 [i_9 - 1])));
                            var_29 ^= (arr_15 [i_0] [i_0] [10]);
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            var_30 = (max(var_30, ((((arr_41 [9] [i_11] [i_2] [i_2] [i_0]) - 21)))));
                            var_31 = (((arr_41 [i_1 + 3] [i_1 + 1] [i_2] [i_1 + 1] [i_11]) ? -6003893207153810944 : var_2));
                            var_32 += ((var_3 - (arr_6 [i_0] [i_0] [i_1])));
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            var_33 -= (arr_33 [i_0] [i_1] [i_12]);
                            var_34 = (min(var_34, (arr_18 [13] [i_2] [i_12])));
                            var_35 = (((arr_29 [i_9] [i_9 - 1] [i_1] [i_1] [i_1] [i_1 + 2]) || (((arr_4 [i_9 - 1] [i_2]) && (arr_36 [i_0] [i_1] [7] [i_9 - 1] [i_12])))));
                        }
                        var_36 = (max(var_36, 2147483634));
                    }
                    var_37 *= (((max((max(-26, 225), (arr_4 [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 12;i_14 += 1)
                        {
                            {
                                var_38 = (min(var_38, var_4));
                                var_39 += (min(((((var_1 ? (arr_34 [i_14] [i_13 + 1] [i_0] [i_1] [i_0]) : var_6)))), (min(((((arr_10 [i_0]) != 1))), (((arr_44 [i_0] [i_1 - 1] [i_0] [i_13 - 1] [i_14]) + (arr_10 [i_0])))))));
                                arr_51 [i_0] [i_1 + 1] [i_1] [i_0] [i_2] [i_13] [i_14] = 60;
                            }
                        }
                    }
                }
            }
        }
    }
    var_40 = 3;
    var_41 = 1;
    var_42 = (var_7 + var_0);
    #pragma endscop
}
