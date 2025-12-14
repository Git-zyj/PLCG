/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_5 && (((var_11 ? var_11 : 1745040733))))) ? (((((var_3 ? 257744628 : var_11))) ? ((var_7 ? var_9 : var_1)) : var_4)) : (((18408 * ((var_13 ? var_3 : var_12)))))));
    var_15 = var_7;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = ((((0 / (arr_1 [i_0])))) ? ((~((10898 ? 4194240 : var_0)))) : 2705408882);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [8] [i_1] [i_1] = (!var_2);
            arr_5 [i_0] [i_0] = ((~(((arr_3 [4] [i_0] [i_1]) ? (-127 - 1) : -121))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_17 *= (arr_0 [i_0]);
                var_18 |= (arr_11 [i_3]);
                var_19 = (((arr_9 [i_0] [i_0] [i_3]) ? (((arr_1 [i_0]) ? var_2 : var_7)) : var_5));
            }
            var_20 ^= var_12;
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    {

                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            arr_23 [i_6] = (((~(arr_21 [1] [i_4] [i_4] [i_4] [i_6] [i_4] [i_4]))));
                            var_21 = ((~(((arr_1 [i_6 + 1]) ? (arr_18 [i_6] [i_7] [i_6] [i_6] [i_6 + 3] [i_6 + 2]) : (arr_18 [i_7 + 1] [i_7] [i_6] [i_6] [i_6] [i_6 + 3])))));
                            var_22 = (((((~((120 ? 126 : -120))))) ? (arr_7 [i_6 + 2] [i_6] [i_6 + 2]) : 107));
                            var_23 = (max(var_23, (((((((var_6 ? 4780229902375141305 : (arr_15 [i_0] [i_4] [i_6] [i_7]))) ? (arr_15 [i_6 + 2] [i_7] [i_7 - 1] [i_7 + 2]) : (((1 ? (arr_7 [i_0] [11] [11]) : var_12))))))))));
                        }
                        var_24 ^= (arr_16 [1] [i_5] [i_6 + 2] [i_6 + 3]);
                        var_25 = (~((~(arr_9 [i_0] [i_6 + 2] [i_0]))));
                    }
                }
            }
            var_26 = ((-5 ? ((10898 ? ((var_3 ? var_7 : (arr_22 [i_4] [i_4] [2] [i_0] [6] [i_4] [i_4]))) : 65533)) : (((((-10911 + (arr_17 [i_4] [i_0] [i_4])))) ? (((arr_13 [i_0]) ? var_2 : 3620798457)) : (((arr_2 [i_0] [i_4]) ? var_2 : 10911))))));
        }

        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            var_27 = ((((((arr_16 [i_8 + 1] [i_8] [i_8 + 1] [i_8]) ? (arr_3 [i_8 + 2] [i_8] [i_8 + 2]) : (arr_16 [i_8 + 1] [i_8] [i_8] [i_8])))) ? var_1 : ((((((arr_18 [i_0] [8] [i_0] [i_8] [i_8] [i_8]) ? (arr_17 [i_0] [i_0] [i_8]) : (-127 - 1)))) ? (arr_12 [i_0]) : (~24)))));
            arr_26 [i_0] [i_8] = 10873;
        }

        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            var_28 ^= ((!(~211)));
            var_29 = (((((1 ? 145 : 6))) ? ((((~120) ? -10898 : (arr_28 [9])))) : ((5 ? 4194240 : (((~(arr_0 [i_9 - 2]))))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_30 = ((var_5 ? 16574 : 2254162709));
            arr_32 [i_0] [i_10] [i_10] = ((((var_11 ? 53 : (arr_11 [i_0]))) | ((~(arr_27 [i_10] [i_0])))));
            var_31 *= ((var_12 ? var_13 : var_3));
            var_32 ^= (~var_8);
        }
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
    {
        arr_35 [i_11] = ((((((arr_34 [i_11]) ? (arr_34 [i_11]) : (arr_33 [i_11])))) ? (((arr_33 [i_11]) ? var_0 : var_9)) : (((-(arr_33 [i_11]))))));
        var_33 = 1;
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
    {
        var_34 = ((-(~1)));
        var_35 = 1;
        arr_38 [i_12] [i_12] = ((var_1 && (arr_34 [i_12])));
        var_36 = (min(var_36, (var_7 & var_5)));
    }

    /* vectorizable */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_37 ^= ((-(arr_40 [6])));
        /* LoopNest 3 */
        for (int i_14 = 2; i_14 < 24;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 23;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    {
                        var_38 += (-((46 ? 32760 : var_13)));

                        for (int i_17 = 2; i_17 < 23;i_17 += 1)
                        {
                            arr_53 [i_13] [i_13] [i_15] [i_13] [6] = (arr_39 [i_13] [i_15 + 2]);
                            var_39 = (min(var_39, ((((arr_49 [i_14] [6] [i_17 + 1] [i_17] [i_14] [i_17]) << ((((55294 ? (arr_40 [i_14]) : var_11)) - 1219988682)))))));
                        }
                        var_40 = (((arr_43 [i_14] [i_14] [i_14 - 2]) == (arr_51 [i_13] [i_13] [i_14 + 1] [i_13] [i_15 + 1] [i_15 + 2])));
                        var_41 = var_10;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        var_42 = ((var_12 ? (arr_12 [i_18]) : (arr_12 [i_18])));
        var_43 = (~1);
        var_44 = ((var_1 <= (arr_44 [i_18])));
    }
    for (int i_19 = 4; i_19 < 11;i_19 += 1)
    {

        /* vectorizable */
        for (int i_20 = 2; i_20 < 10;i_20 += 1)
        {
            var_45 = var_13;
            arr_60 [i_20] [i_20] = ((1 ? 1 : 0));
        }
        var_46 = ((((((~(arr_37 [1] [i_19 - 2])))) ^ ((var_2 ? 0 : var_9)))));
    }
    #pragma endscop
}
