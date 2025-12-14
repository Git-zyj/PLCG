/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = ((((arr_2 [i_0] [i_0]) + 9223372036854775807)) << (((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_7)) - 1821824165042740842)));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        var_17 = var_0;
                        var_18 = (~20264);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 9;i_5 += 1)
                {
                    {
                        arr_17 [i_0] [i_1] [i_4] [i_5 - 4] = (arr_6 [i_1] [i_1]);
                        arr_18 [i_0] = (arr_11 [i_5 - 4]);
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_19 ^= 1227959050490537581;
                        var_20 ^= (~(arr_4 [9] [i_8]));
                        var_21 = (((arr_7 [i_8]) / (~-1954067265603709826)));
                    }
                }
            }
            arr_27 [i_0] [i_6] = var_7;
            var_22 = ((-(arr_26 [i_0] [i_6] [i_6] [i_0] [i_6] [i_6])));
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_23 = (arr_19 [i_0] [i_9]);

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_24 = ((0 ? (~23628) : -8));
                var_25 -= (~var_15);
                arr_35 [i_0] [i_0] [i_0] = (((((arr_21 [i_0]) ? 52382205 : (arr_5 [i_0]))) < ((var_12 ? var_8 : var_9))));
            }
            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                arr_38 [i_11] [i_9] [i_9] [6] = 4;
                var_26 = (((((var_11 < (arr_29 [7] [i_9] [i_11])))) ^ 51));
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_27 = ((var_15 <= (arr_23 [i_0] [i_9] [i_9] [i_9])));
                arr_41 [i_0] [1] [i_0] [1] = ((~(arr_23 [1] [1] [1] [i_12])));
            }
            arr_42 [i_9] = ((5664283927748194959 ? 2019087820 : 123));

            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                var_28 = (max(var_28, 209));
                arr_45 [1] [i_13] = (~var_15);
            }
        }
        for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
        {
            var_29 = (((arr_4 [i_0] [i_14]) ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_14])));

            for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
            {
                var_30 = ((!(((var_4 ? var_8 : (arr_14 [i_0] [i_14]))))));
                arr_51 [0] [i_14] [i_15] = var_15;
                var_31 = ((-(arr_6 [i_14] [i_14])));
            }
            for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
            {
                var_32 = (max(var_32, (((~(((arr_4 [i_14] [i_16]) ? (arr_7 [i_16]) : 88)))))));
                var_33 = ((!(arr_0 [i_14])));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 9;i_18 += 1)
                    {
                        {
                            arr_62 [i_16] [i_18] [i_18] = (((((var_11 ? (arr_26 [i_17] [i_14] [0] [i_17] [i_18] [i_17]) : (arr_61 [i_18] [i_14] [i_14] [3] [i_17] [3] [i_18])))) ? (arr_16 [i_0] [i_14] [i_16] [i_18]) : (arr_10 [i_0] [i_0] [0] [i_18] [i_18] [i_18])));
                            var_34 = (max(var_34, (((+(((arr_39 [i_0]) + var_0)))))));
                            var_35 += (var_1 ? (arr_14 [i_0] [i_14]) : 568702036);
                            var_36 |= (~6205457300215702039);
                            var_37 = (((1472890761 == var_10) ? (arr_47 [i_0] [i_14]) : var_3));
                        }
                    }
                }
            }
            arr_63 [i_14] [i_14] [i_0] = -1;
            var_38 *= -32751;
            var_39 = 1;
        }
        var_40 = (min(var_40, (((18446744073709551615 ? 82 : ((~(arr_36 [i_0] [i_0] [i_0]))))))));
    }
    for (int i_19 = 2; i_19 < 8;i_19 += 1)
    {

        for (int i_20 = 0; i_20 < 10;i_20 += 1) /* same iter space */
        {
            var_41 = (min(var_41, var_10));
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 10;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 10;i_22 += 1)
                {
                    {
                        arr_75 [i_22] [i_22] [i_21] [i_21] [i_20] [i_19 - 1] = ((~(min(((var_6 & (arr_2 [i_19] [i_19]))), ((max((arr_11 [i_19 + 2]), var_15)))))));
                        var_42 = (((~(arr_30 [i_19 + 2] [i_19 + 2]))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 10;i_23 += 1) /* same iter space */
        {
            var_43 = (arr_19 [i_19] [i_23]);
            var_44 = (!7);
        }
        /* vectorizable */
        for (int i_24 = 0; i_24 < 10;i_24 += 1) /* same iter space */
        {
            var_45 = 888336100;
            arr_81 [i_19 + 2] |= ((501416772689001657 ? var_10 : 1));
            /* LoopNest 2 */
            for (int i_25 = 1; i_25 < 9;i_25 += 1)
            {
                for (int i_26 = 2; i_26 < 6;i_26 += 1)
                {
                    {
                        var_46 = (arr_43 [i_19] [i_19] [i_25] [i_26]);

                        for (int i_27 = 1; i_27 < 7;i_27 += 1)
                        {
                            var_47 = (((((1236396774 ? 43669 : 1))) ? ((var_14 | (arr_19 [i_19] [i_19]))) : ((253 ? -32745 : 7932537632392851030))));
                            var_48 &= ((var_4 ? (arr_11 [i_27 + 1]) : 1));
                        }
                        var_49 = (max(var_49, 49152));
                    }
                }
            }
        }
        arr_90 [i_19] [i_19] = (((((!(arr_19 [i_19] [1]))))));
        var_50 = (min((((((arr_72 [i_19]) != 6801708942744176064)) ? 18446744073709551587 : var_5)), (1 / 1532683392893006178)));
        var_51 = ((((((2023215973 ? (arr_71 [i_19 - 1] [4]) : -2125535658)) + 1))) ? (((((min(-31792, 51628))) ? 1 : (arr_29 [4] [i_19 + 2] [i_19])))) : ((-(arr_8 [i_19 - 1] [i_19 + 2] [i_19 - 1] [i_19 - 2]))));
    }
    for (int i_28 = 1; i_28 < 22;i_28 += 1)
    {
        var_52 = ((20764 ? (min(((var_5 ? 83632758 : 1738372340)), 0)) : var_15));
        var_53 = ((((max(18446744073709551596, 24159))) * (((max(var_15, 29))))));
    }
    var_54 = var_7;
    #pragma endscop
}
