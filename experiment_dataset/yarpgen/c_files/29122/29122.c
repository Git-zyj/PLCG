/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (min((((((min(var_4, (arr_9 [10] [1]))) + 9223372036854775807)) << (((var_10 + 8344151391332315353) - 39)))), 3713031664504367397))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, (!var_13)));
                                var_22 = (min(var_22, (max(4503599627370494, (((max(var_12, var_15)) % var_8))))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 24;i_6 += 1)
            {
                {
                    var_23 = (min(var_23, ((min(-727396901410706679, 545809416702345053)))));
                    var_24 = (max(var_24, ((((((var_17 ^ (arr_12 [i_0] [i_6] [i_6])))) ? (((arr_12 [i_0] [i_0] [i_5]) ? (arr_12 [i_6 - 1] [i_5] [23]) : (arr_8 [i_0] [i_0] [i_0] [i_6 + 1]))) : ((~(arr_12 [i_0] [i_5] [i_0]))))))));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            arr_26 [14] [i_5] [14] [i_7] [i_8] [i_0] = var_12;
                            var_25 = ((((!(arr_14 [i_8 - 1] [i_0] [i_0] [i_5])))));
                        }
                        for (int i_9 = 2; i_9 < 24;i_9 += 1)
                        {
                            var_26 = (min(var_26, (((0 >> 1) & ((var_6 ? (((arr_4 [i_5] [i_5]) ? var_17 : var_9)) : (arr_14 [i_6 + 1] [i_6] [i_5] [i_7])))))));
                            arr_30 [i_0] = max((max((arr_12 [i_0] [i_0] [i_6 - 1]), (arr_12 [i_0] [i_0] [i_6 + 1]))), (max(9223372036854775807, 545809416702345053)));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_27 = (max(var_27, 1));
                            var_28 = (((((1 < (arr_1 [i_6 - 1]))))) / ((max(var_15, var_1))));
                            var_29 = (max(var_29, (((((var_3 >> (((arr_4 [i_0] [i_5]) + 7053974442048678623)))) >> var_16)))));
                            var_30 = (min(var_30, var_13));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            var_31 = arr_34 [i_0] [i_7] [i_5] [i_0];
                            arr_36 [i_0] [i_5] [i_6] [1] [20] [i_0] = 1;
                        }
                        arr_37 [i_0] [i_0] = (arr_32 [i_7] [i_5] [i_6] [i_0] [i_6 + 1]);
                        var_32 = (max(var_32, var_0));
                    }
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        arr_40 [i_0] [i_0] [i_0] [i_0] = var_10;
                        arr_41 [i_0] = 9223372036854775807;
                        var_33 = (min(var_33, var_10));
                        arr_42 [i_0] = var_11;
                    }
                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 24;i_13 += 1)
                    {
                        arr_45 [i_0] [i_5] [i_6] [i_5] = arr_14 [i_6 + 1] [3] [i_0] [i_13];
                        var_34 = 3221849451407192593;
                        var_35 = ((arr_24 [i_13 - 1] [i_0] [i_6] [i_0] [i_6 - 1]) & (arr_24 [i_13 + 1] [i_5] [i_5] [i_5] [i_6 - 1]));
                        var_36 = (max(var_36, (var_2 & var_2)));
                    }
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        arr_48 [i_0] [i_14] [i_0] [i_14] = var_19;
                        var_37 = (min(var_37, var_7));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
    {
        var_38 = (min(var_38, (arr_46 [i_15] [i_15] [i_15] [i_15])));
        var_39 = (max(var_39, var_11));

        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            var_40 = (var_7 ? -8760379699704886650 : var_0);
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 23;i_18 += 1)
                {
                    {
                        arr_61 [7] [i_18] = (((arr_29 [i_15] [i_15] [i_18 - 1] [i_16] [i_15]) ? var_16 : var_17));
                        var_41 = (min(var_41, (((-2120532752120783052 ? var_14 : (arr_16 [i_16] [i_16]))))));
                        var_42 = (min(var_42, ((((arr_29 [i_16] [i_16] [i_18 - 1] [i_18 - 1] [i_18]) == var_4)))));
                        var_43 = (max(var_43, var_13));
                    }
                }
            }
        }
        var_44 = (arr_31 [i_15] [1] [i_15] [0] [1]);
    }
    for (int i_19 = 0; i_19 < 18;i_19 += 1)
    {
        arr_65 [10] [10] = max(var_19, var_12);
        var_45 = ((((var_1 && (arr_21 [i_19] [1] [i_19])))));
    }

    /* vectorizable */
    for (int i_20 = 0; i_20 < 24;i_20 += 1)
    {
        var_46 = (var_5 & ((~(arr_29 [1] [1] [20] [1] [i_20]))));
        var_47 = (arr_8 [i_20] [i_20] [i_20] [i_20]);
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 18;i_21 += 1)
    {
        var_48 = 3102844295075428520;
        arr_70 [i_21] = var_16;
    }
    /* LoopNest 3 */
    for (int i_22 = 0; i_22 < 13;i_22 += 1)
    {
        for (int i_23 = 3; i_23 < 12;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 0;i_24 += 1)
            {
                {
                    var_49 = (min(var_49, (~3102844295075428518)));
                    /* LoopNest 2 */
                    for (int i_25 = 3; i_25 < 10;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 1;i_26 += 1)
                        {
                            {
                                arr_84 [i_22] [i_23] [i_23] [i_24] [i_24] [i_23] [i_26] = var_10;
                                arr_85 [i_22] [i_23 + 1] [i_24] [i_24] [i_26] [i_22] [i_23] = var_14;
                                var_50 = (max(var_50, (max(2199301397019020704, 1))));
                                var_51 = (max(var_51, var_16));
                            }
                        }
                    }
                    arr_86 [i_22] [i_22] [i_23] [i_22] = var_4;
                    var_52 = (min(var_52, var_5));
                    arr_87 [1] [i_24] [i_24 + 1] [i_23] = (((((((arr_64 [i_24 + 1] [i_23 + 1]) + 9223372036854775807)) >> (-1 + 55))) >= (~var_17)));
                }
            }
        }
    }
    var_53 = (min(var_53, (min(1, (max(var_11, (max(3102844295075428507, -9217292577650199823))))))));
    #pragma endscop
}
