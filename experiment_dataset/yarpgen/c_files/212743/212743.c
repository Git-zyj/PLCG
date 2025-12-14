/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_14 += (~0);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = (arr_10 [i_1]);
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] = -17876;
                    }
                }
            }

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                arr_17 [6] [i_1] [i_1] [i_0] = ((((((arr_7 [4] [i_0] [i_1 + 1] [i_4] [i_1]) ? 208 : (arr_5 [i_0] [i_0] [i_1] [i_4])))) ? (((-43 ? 19 : var_10))) : ((288230101273804800 ? 2 : var_11))));

                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_15 = (max(var_15, -17855));
                    arr_21 [i_1] = (arr_19 [i_5] [i_5] [i_5] [i_5] [i_1]);
                    var_16 = (max(var_16, var_6));
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_4] [i_1 - 3] [i_0] [i_6] [i_1] [i_1] = 16368;
                    arr_27 [i_1] [i_1] [i_4] [i_6] = (((16 ? -17876 : (arr_23 [i_0] [i_1] [i_6] [i_6]))));
                }
                var_17 = (((((!(arr_24 [i_0] [i_4])))) ^ var_9));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_18 = 8572457486716634212;
                            var_19 += (-17855 && var_0);
                        }
                    }
                }
            }
            arr_34 [i_1] [i_1 - 3] = var_10;
            var_20 = (1 >= var_7);
        }
        for (int i_9 = 3; i_9 < 16;i_9 += 1) /* same iter space */
        {
            arr_38 [i_9] [i_0] [i_9 + 1] = -81;
            var_21 = 0;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    {
                        arr_43 [i_11] [i_11] [i_9] [i_11 + 1] [i_0] [i_11 + 1] = (arr_6 [i_9 - 1] [i_9 + 1] [i_11 + 2] [i_11 - 1]);

                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            arr_47 [i_9] = ((17875 < (arr_5 [i_0] [i_9] [i_11 + 1] [i_11])));
                            var_22 = (var_4 ? var_4 : -17890);
                            var_23 = ((17913 << (var_9 - 180)));
                            var_24 = (arr_39 [i_11 + 1] [i_12] [i_12]);
                        }
                    }
                }
            }
        }
        for (int i_13 = 3; i_13 < 16;i_13 += 1) /* same iter space */
        {
            var_25 |= (((((var_1 ? var_3 : var_8))) ? ((((215 < (arr_0 [i_0] [i_13]))))) : ((var_9 ? var_12 : 17890))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    {
                        arr_58 [i_15] [i_14] [i_13] [i_13] [i_13] [i_0] = ((var_6 && (-9223372036854775807 - 1)));
                        var_26 = 981764657;
                        arr_59 [i_15] [i_13] [i_13] [i_0] = 1;
                    }
                }
            }
            var_27 = (arr_24 [i_0] [i_13 - 1]);
        }
        arr_60 [i_0] &= (arr_24 [i_0] [i_0]);
        var_28 = 3500641195;
    }
    for (int i_16 = 0; i_16 < 25;i_16 += 1)
    {
        var_29 = (max(var_29, 2068203773908836496));
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 23;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 23;i_19 += 1)
                {
                    {
                        var_30 = -32765;
                        var_31 = (max(var_31, ((max(63, (((14346 | var_5) ? 288094722 : 4006872573)))))));
                        var_32 = -2147483636;
                        var_33 = (~16531);
                        arr_74 [i_16] [i_17] [i_18] [i_19] |= ((max((arr_72 [i_19] [i_19] [22] [i_19 - 1] [i_18 + 2]), (arr_66 [i_16] [9] [i_18]))));
                    }
                }
            }
        }
        arr_75 [i_16] [i_16] = -14347;
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 25;i_21 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 4; i_22 < 22;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 25;i_23 += 1)
                        {
                            {
                                arr_87 [i_16] [1] [i_21] [i_23] [i_23] = 1;
                                var_34 |= max((max((2147483641 >= 45479), 106)), (((arr_69 [i_22 - 1] [10] [i_22 - 1]) + -83)));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_24 = 0; i_24 < 25;i_24 += 1) /* same iter space */
                    {
                        var_35 = (min(var_35, (arr_91 [i_24] [15] [i_20] [i_16])));

                        for (int i_25 = 0; i_25 < 25;i_25 += 1) /* same iter space */
                        {
                            arr_96 [i_25] = (2 && 52644);
                            var_36 = var_6;
                        }
                        for (int i_26 = 0; i_26 < 25;i_26 += 1) /* same iter space */
                        {
                            arr_99 [5] [i_20] [i_21] [i_24] = 1014626928;
                            arr_100 [20] [i_20] [i_21] [i_24] = (arr_80 [i_16]);
                        }
                    }
                    /* vectorizable */
                    for (int i_27 = 0; i_27 < 25;i_27 += 1) /* same iter space */
                    {
                        arr_103 [i_16] [i_20] [i_21] [17] [i_27] [i_27] = (((arr_79 [i_20]) ? (arr_77 [12] [i_20]) : 63499));
                        var_37 = (max(var_37, 198));
                    }
                    for (int i_28 = 0; i_28 < 25;i_28 += 1) /* same iter space */
                    {
                        arr_108 [i_16] [7] [i_21] [i_28] [i_28] [i_16] = var_6;
                        arr_109 [i_16] [i_20] [i_21] [i_16] [i_16] = (max((((arr_76 [i_16]) ? (arr_73 [i_21] [i_20] [8] [i_28] [i_21]) : var_5)), -17892));
                    }
                    for (int i_29 = 0; i_29 < 25;i_29 += 1)
                    {

                        for (int i_30 = 1; i_30 < 21;i_30 += 1)
                        {
                            arr_115 [9] [9] [i_21] [0] [i_30 + 1] [i_30] |= -64;
                            arr_116 [i_30] [i_29] [i_29] [i_21] [i_20] [i_16] = (max((max(-12819, (min(18158513972435746816, 0)))), 13));
                        }
                        var_38 *= 17058120858749940287;
                        var_39 = (max(var_39, 9223372036854775807));
                        var_40 = (max(var_3, 1));
                    }
                }
            }
        }
    }
    var_41 = (((var_8 ^ 255) ? (~-1) : (max((max(9223372036854775807, var_11)), (((var_10 << (var_7 - 2759600695663554028))))))));
    #pragma endscop
}
