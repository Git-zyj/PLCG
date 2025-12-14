/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((var_16 ? (var_15 - -2488915365978951323) : var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [5] = (((arr_0 [i_0] [i_0]) ? var_16 : (arr_0 [i_0] [i_0])));
        var_20 = (min(var_20, ((((((var_12 ? var_10 : var_6))) ? var_11 : (arr_0 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 -= (((var_1 || var_13) ? ((((var_7 || (arr_3 [i_0]))))) : 2488915365978951322));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_22 = var_2;
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_23 -= (var_5 < var_14);
                            var_24 = 1;
                            arr_15 [i_0] [i_3] [i_1] [i_1] [i_3] [i_3] [i_4] = var_6;
                        }
                    }
                }
            }
            for (int i_5 = 3; i_5 < 8;i_5 += 1) /* same iter space */
            {
                arr_18 [i_5] [i_1] [i_0] = (((65535 != 1) << (var_11 + 2050395194)));
                var_25 |= (!var_4);
            }
            for (int i_6 = 3; i_6 < 8;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_28 [i_0] [i_6] [i_6] [i_8] = (2488915365978951326 & 65535);
                            var_26 -= 484941750;
                            var_27 = ((var_1 != (arr_14 [i_0] [i_1] [i_6 - 3] [i_7 - 1] [i_7 - 1] [i_1] [i_6])));
                            arr_29 [i_6] [i_7] [i_6] [i_0] [i_1] [i_1] [i_6] = var_4;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 6;i_10 += 1)
                    {
                        {
                            var_28 = (((((var_18 ? (arr_6 [i_0] [i_0]) : var_10))) ? var_18 : (arr_24 [i_0] [i_6 - 2] [i_9 - 3] [i_10 + 4])));
                            arr_37 [i_1] [i_6 - 3] [i_6] = var_12;
                            var_29 = 2488915365978951326;
                            arr_38 [i_0] [i_0] [i_6] [i_0] [i_0] = (((arr_26 [i_0] [i_1] [4] [i_6] [i_6]) ? (18446744073709551615 || 0) : -5661891693762331231));
                            arr_39 [i_6] [i_9] [i_6] [i_1] [i_6] = (((arr_36 [i_0] [i_6]) / (arr_36 [i_9 - 3] [i_6])));
                        }
                    }
                }
                arr_40 [i_6] [i_1] [i_0] [i_6] = (arr_4 [i_1] [i_1] [i_6 - 2]);
            }
        }
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {

            for (int i_12 = 1; i_12 < 8;i_12 += 1)
            {
                var_30 = (max(var_30, var_5));
                var_31 = (max(var_31, (32767 == 1152358554653425664)));
                var_32 = (max(var_32, ((((arr_33 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 + 1]) | (arr_46 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 + 1]))))));
            }
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                var_33 = (((arr_19 [i_0] [i_11] [i_13]) ? (arr_19 [0] [i_11] [i_13]) : 6));
                var_34 *= arr_47 [i_11];
                var_35 -= (var_3 | 484941750);
            }
            for (int i_14 = 1; i_14 < 7;i_14 += 1)
            {
                var_36 &= var_12;
                arr_51 [i_0] [i_11] [i_14] = ((arr_4 [9] [i_14 + 1] [i_14]) ? var_2 : (arr_4 [i_14] [i_14 + 1] [i_14]));
            }
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {

                for (int i_16 = 1; i_16 < 8;i_16 += 1)
                {
                    var_37 = (67108863 == 9175274789078455923);
                    arr_58 [i_16] [i_16] [i_16] [i_0] = (var_6 || var_10);
                }
                arr_59 [i_0] [2] [i_15] [i_15] = (arr_54 [i_0] [i_11] [i_15]);
            }
            /* LoopNest 3 */
            for (int i_17 = 2; i_17 < 9;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 8;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 9;i_19 += 1)
                    {
                        {
                            var_38 = (min(var_38, (arr_60 [i_0] [i_0] [i_18 + 1])));
                            var_39 = var_0;
                        }
                    }
                }
            }
            arr_67 [i_0] = ((-(arr_6 [i_11] [i_0])));
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 10;i_20 += 1) /* same iter space */
    {
        var_40 &= (((((var_12 ? var_12 : var_0))) && var_17));
        /* LoopNest 3 */
        for (int i_21 = 1; i_21 < 8;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 10;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 10;i_23 += 1)
                {
                    {
                        arr_77 [i_20] [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_22] [i_23] = (var_11 || var_7);

                        for (int i_24 = 1; i_24 < 9;i_24 += 1)
                        {
                            var_41 = (arr_12 [i_24 + 1] [8] [i_21 + 2] [i_23] [6]);
                            arr_82 [i_24] [i_24] [i_22] [i_23] = (arr_32 [i_24 - 1] [i_24 - 1] [i_23] [i_21 + 1] [1] [i_21 + 1]);
                            var_42 *= (((!-1152358554653425652) % (~4357709465801878201)));
                            arr_83 [i_20] [i_20] [i_20] [i_22] [i_23] [i_24] = ((0 ? var_8 : (arr_6 [i_21 - 1] [i_21 - 1])));
                            arr_84 [i_20] [i_21 + 1] [i_22] [i_23] [i_21 + 1] [i_24] = (((-1152358554653425681 ? (arr_65 [i_20] [i_21] [i_22] [i_20] [i_24] [i_23]) : (arr_57 [i_20] [i_24]))));
                        }
                        var_43 = (var_9 / var_14);
                        var_44 = var_17;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 10;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 10;i_26 += 1)
            {
                {
                    var_45 = (max(var_45, var_16));

                    for (int i_27 = 0; i_27 < 10;i_27 += 1)
                    {
                        var_46 = (arr_61 [i_20] [i_25] [i_27]);

                        for (int i_28 = 1; i_28 < 1;i_28 += 1)
                        {
                            var_47 = var_0;
                            var_48 = (arr_66 [i_20] [i_20] [i_20] [2] [i_20]);
                            var_49 = 39578;
                        }
                        for (int i_29 = 0; i_29 < 10;i_29 += 1)
                        {
                            var_50 = (arr_91 [i_20] [i_26] [i_27] [i_26]);
                            var_51 = var_7;
                            arr_99 [i_20] [i_20] [i_20] [i_27] [i_29] = ((7 ? var_10 : var_17));
                            var_52 = (max(var_52, (~-1152358554653425664)));
                        }
                        arr_100 [i_27] = ((var_13 ? ((var_7 ? (arr_25 [i_20]) : 59)) : (((var_4 || (arr_62 [i_25]))))));
                        var_53 = (((arr_9 [i_27]) ? (arr_9 [i_27]) : var_10));
                    }
                }
            }
        }
        var_54 = -1152358554653425665;
        var_55 |= (arr_16 [i_20] [i_20] [i_20] [0]);
    }
    for (int i_30 = 0; i_30 < 10;i_30 += 1) /* same iter space */
    {
        var_56 = ((((((arr_94 [i_30] [9] [i_30] [i_30] [i_30] [i_30]) % (arr_5 [i_30] [i_30] [i_30] [i_30]))) >= var_17)));
        var_57 = ((((((arr_102 [i_30] [i_30]) ? (~var_13) : ((((!(arr_47 [i_30])))))))) ? var_8 : (max(var_3, 118))));
        /* LoopNest 3 */
        for (int i_31 = 0; i_31 < 10;i_31 += 1)
        {
            for (int i_32 = 1; i_32 < 8;i_32 += 1)
            {
                for (int i_33 = 0; i_33 < 10;i_33 += 1)
                {
                    {

                        for (int i_34 = 0; i_34 < 10;i_34 += 1)
                        {
                            var_58 = (min(var_58, var_0));
                            var_59 = max((((1 && (arr_108 [i_32 - 1] [i_34] [i_34] [i_34])))), 65535);
                        }
                        var_60 = ((-31 ? 89 : var_2));
                    }
                }
            }
        }
        var_61 = (min(var_61, ((((((var_1 ? 65535 : (min((arr_21 [2] [2] [2]), (arr_75 [i_30] [0])))))) ? ((min((arr_79 [i_30] [i_30] [i_30] [i_30] [i_30]), ((var_16 ? var_1 : (arr_10 [1] [i_30] [i_30] [i_30] [8])))))) : (((arr_60 [i_30] [i_30] [i_30]) ? 18446744073709551615 : var_11)))))));
    }
    for (int i_35 = 2; i_35 < 9;i_35 += 1)
    {
        /* LoopNest 2 */
        for (int i_36 = 0; i_36 < 0;i_36 += 1)
        {
            for (int i_37 = 0; i_37 < 11;i_37 += 1)
            {
                {
                    var_62 = (arr_116 [i_35]);
                    var_63 &= (((var_17 < 166) ? -var_13 : ((-((0 / (-2147483647 - 1)))))));
                    arr_122 [i_37] [i_35] [i_35] |= (((arr_118 [i_35 + 1] [i_35 + 1]) ? var_5 : var_17));
                }
            }
        }
        var_64 *= var_8;
        arr_123 [i_35] [i_35 - 2] = (min(8191, (max(255, var_3))));
        var_65 -= (((max(var_7, var_9)) - var_12));
        var_66 = arr_116 [i_35 + 2];
    }
    var_67 = -2488915365978951335;
    #pragma endscop
}
