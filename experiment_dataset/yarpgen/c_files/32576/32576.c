/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 *= (-((-(arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = ((1 ? (((min(var_6, 1)) ? (arr_1 [1]) : (var_4 + var_8))) : ((((~var_9) ? var_8 : (arr_6 [2] [2] [2]))))));
                    var_13 = (arr_1 [i_0]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_14 = (~1);
        var_15 = var_7;
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_16 = ((min((arr_0 [i_4 - 2] [i_4 + 1]), (arr_1 [i_4]))));
        var_17 &= (2797147559891260989 / 2119426536);
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
        {
            var_18 = ((-((((var_9 ? 43914 : var_8)) | (3543731702 && var_3)))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_19 = ((var_0 ? (arr_8 [i_7] [i_8] [i_8]) : (((var_2 ? (arr_23 [i_5] [i_5] [i_5]) : var_6)))));
                            var_20 = (~var_6);
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_21 = ((((!(arr_14 [i_8 - 1]))) ? -var_8 : 2956));
                            var_22 = (min(var_22, (~var_5)));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            var_23 *= ((((~var_0) ? var_10 : var_2)));
                            var_24 = ((var_7 ? -2797147559891260989 : (-1881248455 - var_5)));
                        }

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_25 *= (1 * 0);
                            var_26 = ((((var_2 ? 65535 : var_1))) ? 2814482945 : var_3);
                            var_27 = ((-((var_6 ? var_7 : var_1))));
                            var_28 = var_1;
                            var_29 = -6714945424934848557;
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            var_30 = 29421;
                            var_31 = (max(var_31, ((((((arr_3 [i_8 - 1]) ? var_4 : var_9))) - ((var_7 % (arr_3 [i_8 - 1])))))));
                        }
                        var_32 *= -var_8;
                        var_33 = ((((((((1196655402 ? -7725 : 22575))) ? var_8 : var_1))) ? (((((var_10 ? var_7 : (arr_24 [i_5] [i_6] [i_6] [i_8 - 1] [i_5] [i_5] [i_5])))) ? (arr_18 [i_8 - 1]) : ((min((arr_28 [i_5] [i_6] [i_7] [i_8]), var_0))))) : (arr_35 [i_8 - 1] [i_8 - 1])));
                    }
                }
            }
            var_34 = (max(var_7, ((~((2225 ? 3613033990380381119 : (arr_26 [i_5] [i_5] [i_6] [i_5] [i_6])))))));

            /* vectorizable */
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                var_35 = (13420585539272933688 && 9307);
                var_36 = var_1;
                var_37 = 62580;
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_38 = (min(var_38, (((18130 ? ((29421 ? -636415912012706877 : ((max(var_1, 47405))))) : -6714945424934848544)))));
                var_39 = (arr_2 [i_6]);
            }
        }
        for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
        {
            var_40 = arr_9 [i_5] [i_5] [i_16] [i_16];
            var_41 = (((((var_4 ^ (arr_24 [i_5] [i_5] [i_5] [17] [i_16] [i_16] [i_16])))) ? (((var_3 ? (arr_5 [i_5]) : var_1))) : 18014329790005248));
            var_42 = ((-(((arr_23 [i_5] [i_5] [i_5]) ^ var_5))));

            /* vectorizable */
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                var_43 *= (~1);

                for (int i_18 = 1; i_18 < 18;i_18 += 1) /* same iter space */
                {
                    var_44 = ((var_7 | (arr_33 [i_18 + 1] [i_18 + 1] [i_17] [i_17] [i_18 + 1])));
                    var_45 = (((2639611255 ? var_1 : (arr_27 [i_16] [i_18]))));
                    var_46 = ((~((var_9 ? var_0 : -6714945424934848544))));
                }
                for (int i_19 = 1; i_19 < 18;i_19 += 1) /* same iter space */
                {
                    var_47 = ((-(((!(arr_21 [i_5] [i_16] [i_5] [i_5]))))));
                    var_48 = ((var_2 ? -7995 : (arr_14 [i_16])));
                    var_49 = (max(var_49, var_7));
                }
                var_50 ^= 2897772415;
                var_51 = (17 * 0);
            }
        }
        /* vectorizable */
        for (int i_20 = 4; i_20 < 17;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 4; i_21 < 18;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 1;i_22 += 1)
                {
                    {
                        var_52 -= ((!(arr_15 [i_20 - 4])));
                        var_53 = var_9;
                        var_54 = ((((arr_43 [i_20 - 3] [i_21]) | var_5)));
                        var_55 = var_9;
                    }
                }
            }
            var_56 = (((var_10 != -2733912288145502175) >= var_5));
            var_57 = -var_7;
        }

        for (int i_23 = 4; i_23 < 18;i_23 += 1)
        {
            var_58 = ((((((arr_32 [i_5] [i_23 - 3] [i_23 - 3] [i_23] [i_23 - 1]) * (arr_48 [i_5] [i_23 - 3] [i_23] [i_23 - 2] [i_23 - 1] [i_23 - 2])))) ? (min((arr_32 [i_23] [i_23 - 3] [i_23] [0] [i_23 - 1]), (arr_48 [i_5] [i_23 - 3] [i_5] [i_23 - 4] [i_23 - 1] [i_23 - 1]))) : 3038712376));

            /* vectorizable */
            for (int i_24 = 2; i_24 < 18;i_24 += 1)
            {
                var_59 = ((var_7 ? ((var_6 ? var_5 : 18446744073709551615)) : (arr_51 [i_23] [i_23] [i_24 + 1] [i_23])));
                var_60 = (((((var_8 ? var_3 : var_4))) ? -var_5 : (~var_10)));
            }
            /* vectorizable */
            for (int i_25 = 0; i_25 < 19;i_25 += 1)
            {
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    for (int i_27 = 2; i_27 < 18;i_27 += 1)
                    {
                        {
                            var_61 = (((arr_47 [i_23 + 1] [i_25]) ? (arr_24 [i_23 - 2] [i_23] [i_27 - 1] [i_26] [i_23] [i_27 - 1] [i_5]) : var_6));
                            var_62 = (((var_8 - var_0) ? (((-23152 - (arr_27 [i_5] [i_25])))) : (((arr_18 [i_23 - 2]) | var_4))));
                        }
                    }
                }
                var_63 = 114;
            }
            /* vectorizable */
            for (int i_28 = 0; i_28 < 19;i_28 += 1)
            {
                var_64 ^= (var_8 & -24951);
                var_65 = 3385207928;
                var_66 = 8763750181892931629;
            }
            for (int i_29 = 0; i_29 < 0;i_29 += 1)
            {
                var_67 -= 15436;
                var_68 = (min(var_68, ((min((arr_67 [i_23 - 3] [i_23] [1] [i_29 + 1]), (max((arr_38 [9] [9] [i_29 + 1] [i_29 + 1]), (arr_48 [i_29 + 1] [i_23 - 2] [9] [i_23] [i_23 - 2] [9]))))))));
            }
        }
        var_69 = ((var_4 != (arr_71 [1] [i_5] [1])));

        for (int i_30 = 2; i_30 < 18;i_30 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_31 = 0; i_31 < 19;i_31 += 1)
            {
                for (int i_32 = 1; i_32 < 17;i_32 += 1)
                {
                    {
                        var_70 = ((!(((-((1 ? 4644 : 18446744073709551615)))))));
                        var_71 = (-25941 | 18446744073709551602);

                        for (int i_33 = 0; i_33 < 19;i_33 += 1)
                        {
                            var_72 = ((((((arr_62 [i_5] [i_31] [i_33]) >> (((arr_62 [i_32] [i_32] [i_31]) - 45901))))) ? ((((arr_22 [i_5] [i_5] [i_31] [i_5] [i_33]) >= (var_2 != var_7)))) : (((46204 | var_4) ? (~2946) : (62570 ^ 1)))));
                            var_73 = (((((var_7 ? (arr_63 [i_32 + 1]) : var_0))) * (min(var_4, 1))));
                            var_74 -= ((+(((47414 != 2) / (var_0 <= 32767)))));
                            var_75 = (min(var_75, 2966));
                            var_76 = (((((min((!1266769352), var_8)))) | ((var_5 * ((((!(arr_83 [i_5] [i_5])))))))));
                        }
                        for (int i_34 = 0; i_34 < 1;i_34 += 1)
                        {
                            var_77 = 0;
                            var_78 *= 2708229986;
                        }
                        for (int i_35 = 0; i_35 < 19;i_35 += 1)
                        {
                            var_79 = (max(var_79, ((((min(var_2, var_4)) | (((~(arr_73 [i_5] [i_5] [i_30])))))))));
                            var_80 ^= (max((arr_80 [i_31] [i_31]), (((arr_1 [i_32 - 1]) | (arr_1 [i_5])))));
                            var_81 = var_8;
                            var_82 = ((+(((~var_2) ? var_2 : var_4))));
                            var_83 = (min(var_83, (((((arr_83 [i_5] [i_5]) + 0))))));
                        }
                    }
                }
            }
            var_84 = (((((var_6 ? (arr_64 [i_30 + 1]) : (((arr_28 [15] [8] [i_5] [i_5]) ? (arr_28 [6] [i_30] [i_30] [i_30 + 1]) : (arr_50 [i_30 - 2] [i_30] [i_30] [14] [i_5])))))) ? -2610184689 : 0));
            var_85 = var_0;
            var_86 = (((((-29410 ? 4294967295 : -2504469121941214123))) % (((((1 ? (arr_41 [i_5] [i_30] [17] [i_5]) : (arr_35 [i_5] [i_5])))) ? ((((!(arr_52 [i_5] [i_5] [13] [i_30]))))) : (~9839477778969513176)))));
        }
        /* vectorizable */
        for (int i_36 = 2; i_36 < 18;i_36 += 1) /* same iter space */
        {
            var_87 = var_4;
            var_88 = var_8;
            var_89 *= (arr_23 [i_5] [i_5] [i_5]);
            var_90 = (((!576451956210401280) | var_0));
        }
        for (int i_37 = 2; i_37 < 18;i_37 += 1) /* same iter space */
        {
            var_91 += var_4;
            var_92 = (((var_1 > var_3) ? ((~(~1912425494))) : (min((67108863 + var_8), var_5))));
        }
    }

    for (int i_38 = 0; i_38 < 17;i_38 += 1)
    {
        var_93 = (var_3 == var_5);
        var_94 = (max(var_94, (((((((arr_85 [i_38]) ? var_1 : 576451956210401280))) ? ((-(arr_85 [i_38]))) : (arr_85 [i_38]))))));
        var_95 = (min(var_95, (((-((min((arr_29 [i_38] [i_38] [i_38] [i_38] [i_38]), -2282))))))));
    }
    #pragma endscop
}
