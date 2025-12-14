/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (max(((-var_2 ? ((min(23049, 0))) : 1)), (((var_11 ? var_7 : var_1)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 = (min(var_15, (((max(var_4, var_0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((max(((((((~(arr_0 [i_0 - 1]))) + 2147483647)) >> (arr_10 [i_1] [i_0] [2] [i_0 + 1]))), (((arr_11 [i_3] [i_0] [i_1] [i_0]) ^ (((arr_4 [i_1] [i_3]) & 1)))))))));
                                var_17 = (min(var_17, (((((var_9 || (1 && 1))) ? ((((max(var_3, 1))))) : 4358975656083256640)))));
                            }
                        }
                    }
                    var_18 -= (max(1, ((1 ? var_4 : (arr_5 [i_1])))));
                }

                /* vectorizable */
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_19 = ((31 ? 1 : 1));
                                var_20 = (max(var_20, -var_1));
                                arr_22 [i_0] [i_0] [i_1] [i_6 - 1] [i_7] |= (((1 ? -20569 : 1)));
                                arr_23 [1] [0] [i_0] [i_5] [i_6] [i_7] = (1 || var_0);
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 3; i_9 < 14;i_9 += 1)
                        {
                            var_21 = (!(arr_11 [i_5 - 2] [i_9] [i_0 - 1] [i_9 + 1]));
                            var_22 = (max(var_22, (1 + var_3)));
                            arr_28 [0] [i_1] [i_1] [i_1] [i_8] [i_0] [i_9] = 10;
                        }
                        var_23 = (max(var_23, (((-(((arr_11 [i_8] [11] [i_1] [i_0]) ? (arr_6 [i_0] [i_1]) : 1)))))));
                        var_24 &= (((1 ^ var_11) ^ (arr_20 [i_0] [i_1])));
                        arr_29 [i_0] [i_5] = 1;

                        for (int i_10 = 3; i_10 < 13;i_10 += 1)
                        {
                            var_25 -= ((var_5 ? -1 : var_9));
                            var_26 = (((arr_10 [i_0] [i_5 - 2] [i_10 - 1] [i_0]) ? (arr_10 [i_0] [i_5 + 1] [i_10 - 2] [8]) : (arr_10 [i_0] [i_5 - 1] [i_10 - 1] [i_10 + 1])));
                            var_27 = (max(var_27, 9223372036854775807));
                            arr_32 [i_0] [1] [i_5] [i_1] &= (!(~var_5));
                        }
                    }
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        var_28 = 20564;
                        var_29 = var_3;
                        var_30 = (((var_12 ? var_9 : var_9)));
                        var_31 = ((1 ? 1 : var_7));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        arr_39 [i_11 - 1] [i_0] = (!var_5);
                        var_32 = 31;
                        var_33 = (min(var_33, ((((arr_27 [i_0 + 1] [i_0 - 2] [i_1] [i_0 - 2] [i_11 - 1] [i_11] [i_11 - 1]) ? var_13 : (arr_30 [i_0] [i_0 + 1] [i_11] [i_11] [i_11 - 1]))))));
                        var_34 = (max(var_34, (1 == var_1)));
                        var_35 ^= (((1 ? var_4 : (arr_26 [i_0]))) == (var_4 / var_3));
                    }
                    arr_40 [i_0] [1] [i_11] [i_0] = (arr_5 [i_0]);
                }
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        {

                            for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
                            {
                                var_36 &= (((arr_20 [i_0] [i_1]) < ((max(var_6, (arr_20 [i_0] [i_0]))))));
                                arr_48 [i_15] &= ((1 >> (-1670717949601815771 + 1670717949601815771)));
                                var_37 = (((arr_5 [i_0]) ? 1 : (arr_34 [i_0])));
                                var_38 ^= ((-32767 ? (arr_15 [i_15] [i_1] [i_0 + 1]) : ((min(-3746, var_7)))));
                            }
                            /* vectorizable */
                            for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
                            {
                                var_39 += (14688 / var_12);
                                arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_34 [i_0]) <= (arr_38 [i_0])));
                            }
                            arr_54 [i_0] [i_1] [i_14] [i_0] [13] = ((((((((arr_44 [i_0]) * var_13))) ? (max(1, var_10)) : (arr_0 [i_0 - 1]))) >> 1));
                            var_40 = var_2;
                            var_41 -= (((max((var_12 * var_13), 1)) << ((((min(1, -3746))) + 3770))));
                        }
                    }
                }
            }
        }
    }
    var_42 = 1;
    #pragma endscop
}
