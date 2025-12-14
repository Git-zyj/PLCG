/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = ((-(min((min(var_6, var_3)), (arr_6 [i_0] [i_0] [i_0] [i_0])))));
                                var_16 = ((var_6 / (((var_13 | (arr_10 [i_0] [i_1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0]))))));
                            }
                        }
                    }
                }
                var_17 = (((((~(arr_9 [i_0 + 1])))) <= ((2 ? (arr_1 [i_0 - 2] [i_0 - 1]) : (arr_9 [i_0 - 2])))));
                var_18 = (((!var_13) << (((~var_4) + 28))));
                var_19 = (arr_4 [i_0] [i_0 + 1] [i_0 + 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_20 = (((((arr_14 [i_5] [i_6]) < (arr_14 [i_5] [i_5]))) ? (var_14 | var_6) : ((((var_14 + 2147483647) << (var_8 - 1))))));
                var_21 = (((min(((-(arr_5 [i_5] [i_5] [i_5] [i_5]))), (var_11 || var_5))) | (min(236, ((431855931 ? 20 : (arr_7 [i_6] [i_6] [i_5] [i_5])))))));
                var_22 = ((((((14 ? 20 : 15872)))) - ((var_0 ? (arr_9 [i_5]) : var_13))));

                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_23 = ((-4194300 + ((((var_11 == (arr_8 [i_5] [i_5] [i_7])))))));

                    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_24 *= ((var_4 != (arr_20 [i_5])));
                        var_25 = (min(var_25, (((14843 % (((((max((arr_2 [i_5]), var_14)))) | (((arr_17 [i_7] [i_7] [i_7]) / (arr_5 [i_5] [i_6] [i_6] [i_6]))))))))));
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            var_26 -= var_0;
                            var_27 = (min(39, ((min(1, -53)))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            arr_32 [i_5] [i_5] [i_5] [i_11] = (~var_4);
                            var_28 = (231 || (arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]));
                            var_29 *= (arr_9 [i_6]);
                            var_30 = ((-30933 ? var_2 : (arr_4 [i_9] [i_7] [i_6])));
                        }

                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            arr_35 [i_5] = ((var_6 % (((min(-128, 4226))))));
                            var_31 &= 240;
                            var_32 = (max(var_32, (((((max((arr_7 [i_5] [i_5] [i_9] [i_5]), 9591))) ? ((min(1, (arr_7 [i_5] [i_5] [i_5] [i_5])))) : ((var_8 ? (arr_7 [i_5] [i_5] [i_5] [i_5]) : var_10)))))));
                            var_33 = (min(((((arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) < 53513))), 3698830474859128942));
                        }
                        var_34 = -39;
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_35 &= (((((var_11 << (((((arr_31 [i_7] [i_7] [i_7] [i_13] [i_6] [12] [i_5]) + 3828550238633849669)) - 21))))) ? (max(((-(arr_36 [i_5] [i_5] [i_6] [i_6] [i_6] [i_13]))), (arr_20 [i_5]))) : ((((((-127 - 1) != (arr_26 [i_5] [i_6] [i_6] [i_5] [i_6])))) * var_9))));
                        var_36 = ((((max((arr_15 [i_5] [i_5]), -13))) ? (min(var_6, var_10)) : var_4));
                    }
                    for (int i_14 = 2; i_14 < 20;i_14 += 1)
                    {

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                        {
                            var_37 = var_8;
                            var_38 = (arr_6 [i_14 - 2] [i_14 + 1] [i_14] [i_14 + 1]);
                            var_39 *= (1 + var_14);
                            var_40 = (arr_24 [i_5] [i_5]);
                            arr_44 [i_5] [i_5] [i_7] [i_5] [i_5] = (arr_7 [i_15] [i_14] [i_6] [i_5]);
                        }
                        for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
                        {
                            var_41 = (arr_30 [i_5] [i_6] [i_7] [i_6] [i_16]);
                            var_42 ^= ((var_0 ? (((((arr_14 [i_16] [i_16]) && (((var_6 ? (arr_12 [i_5] [i_16] [i_6] [i_7] [i_14] [i_16]) : (arr_33 [16])))))))) : (((240 - var_13) - (arr_24 [i_5] [i_5])))));
                            var_43 = (-9223372036854775807 - 1);
                        }
                        var_44 = (((arr_27 [i_5] [i_6] [i_7] [i_5] [i_14 + 1]) ? ((((((arr_0 [i_7] [i_7]) ? (arr_16 [i_5] [i_5] [i_5]) : var_9))))) : (((((var_7 ? var_12 : 1))) ? ((min(4290772996, var_10))) : (~var_7)))));
                        var_45 *= (max((((((-6805501771760309284 ? 2347614569 : 25645))) ? (88 + 126) : ((max(var_11, 1))))), ((var_12 & (arr_42 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
                        var_46 = ((var_11 ? ((((arr_34 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) <= 5514104546261556286))) : (max((arr_19 [i_14] [i_7] [3] [i_5]), -var_10))));
                    }

                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        var_47 = (max(var_47, 37));

                        for (int i_18 = 0; i_18 < 21;i_18 += 1)
                        {
                            arr_51 [i_5] [i_6] [i_5] [i_6] [i_5] = ((((((((arr_26 [i_5] [i_5] [i_5] [i_5] [i_5]) ? var_3 : 1))) ? -14389 : ((88 - (arr_39 [i_5] [i_5] [i_5]))))) % 28));
                            var_48 *= (arr_14 [14] [14]);
                            arr_52 [i_5] [i_5] [i_5] [i_5] = ((((var_8 > ((max(var_12, (arr_8 [i_5] [i_5] [6])))))) ? (min(-32, var_8)) : ((-(-68 % 31)))));
                        }
                        for (int i_19 = 0; i_19 < 21;i_19 += 1)
                        {
                            arr_56 [i_5] [i_5] = -118;
                            var_49 = (max(((var_9 | ((max((arr_26 [i_5] [i_5] [i_5] [i_17] [i_17]), var_5))))), 10));
                            var_50 = ((var_10 - (((arr_33 [i_17]) ? (((arr_29 [i_5] [i_5] [i_6] [i_7] [i_17] [i_5] [i_5]) ? (arr_41 [i_7]) : var_6)) : (((var_5 ? var_2 : -21535)))))));
                        }
                        var_51 = var_3;
                        var_52 += ((min((arr_8 [i_5] [12] [i_7]), (arr_8 [i_5] [2] [2]))));
                        var_53 ^= (((!((!(arr_21 [i_5] [i_5]))))));
                    }
                }
                for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                {
                    arr_60 [i_5] [i_5] [i_20] = ((((((((1 ? -3138 : 8191)))) + 2147483647)) >> ((((~(arr_7 [i_20] [i_20] [i_6] [i_5]))) + 28))));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 21;i_21 += 1)
                    {
                        for (int i_22 = 3; i_22 < 17;i_22 += 1)
                        {
                            {
                                var_54 |= arr_58 [i_6] [i_6] [i_6];
                                var_55 |= (((3699096869 <= (arr_31 [i_22 - 2] [i_22 + 1] [i_22] [i_21] [i_22] [i_22 + 1] [i_22]))));
                                var_56 = ((((var_5 - 1) ? (arr_17 [i_5] [i_5] [i_21]) : (arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))));
                                var_57 -= var_7;
                                var_58 = (((((arr_61 [i_6] [i_6]) / (arr_61 [i_20] [i_20]))) >> 0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 1; i_23 < 20;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 21;i_24 += 1)
                        {
                            {
                                var_59 = (min(30218, (~var_8)));
                                var_60 = ((var_6 << (((min((min(var_12, (arr_71 [i_5] [i_5] [i_5] [i_6] [i_5] [i_23] [i_6]))), (1 / 20500))) + 5844956731823335970))));
                                var_61 = (max(var_61, var_8));
                            }
                        }
                    }
                }
            }
        }
    }
    var_62 = var_13;
    var_63 = var_3;
    #pragma endscop
}
