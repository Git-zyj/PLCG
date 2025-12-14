/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_14;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((!(arr_1 [4] [4]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 ^= (var_14 | 129);
                    var_23 = min(7983069697822683345, (((((max((arr_3 [i_0] [i_2]), var_5))) || 7983069697822683328))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_24 = ((-(((arr_1 [i_0] [i_0]) % (arr_9 [i_0] [i_4] [i_3])))));
                    var_25 = (-(arr_2 [i_4]));
                }
            }
        }
        var_26 = (((-7983069697822683345 > (arr_5 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {

                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        var_27 = ((((((arr_21 [i_5] [i_5] [i_5] [i_5]) ? -465747463 : 125)) + 2147483647)) << (((var_12 == (arr_5 [i_5] [i_6] [i_5])))));
                        var_28 = (10765 & -1967773193);
                        var_29 = ((16463 ? ((22520 ? (arr_16 [i_7 - 1]) : var_15)) : (~var_7)));
                        var_30 = ((var_0 % (arr_13 [i_7 - 1])));
                        arr_26 [i_5] [i_5] [i_5] [i_8] [i_8] [i_8 + 1] = ((-(arr_22 [i_8 - 1] [i_7 - 1])));
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] = var_4;
                        var_31 = ((-(arr_21 [i_7 - 1] [i_6] [i_5] [i_5])));
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        arr_35 [i_5] [i_6] [i_6] [i_7 - 1] [i_10] = ((var_7 ? (~22505) : (!1248211822)));

                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            var_32 = (((arr_18 [i_7 - 1] [i_7 - 1] [i_7 - 1]) ? (arr_11 [i_5] [i_10] [i_11]) : ((((arr_12 [i_11] [i_6] [i_7] [i_10]) ? var_10 : (arr_27 [i_5] [i_5] [i_5] [i_10]))))));
                            arr_38 [i_5] [i_5] [i_5] [i_5] [i_10] [i_11] = ((48 ? ((1 ? (arr_8 [i_5]) : var_14)) : -4));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_33 = (~-16776704);
                            var_34 += (((arr_22 [i_7 - 1] [i_6]) && (arr_27 [i_7 - 1] [i_6] [i_7 - 1] [i_10])));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            arr_44 [i_5] [i_6] [i_7] [i_5] [i_6] = var_17;
                            arr_45 [i_5] [i_6] [i_6] [i_10] [i_13] [i_6] [i_13] = ((-(arr_19 [i_6] [i_10] [i_13])));
                            var_35 = ((7983069697822683345 | (arr_27 [i_5] [i_7 - 1] [i_5] [i_10])));
                            arr_46 [i_7] [i_7] [i_7] = arr_25 [i_5] [i_10] [i_7] [i_6] [i_5];
                            var_36 += 185;
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                        {
                            var_37 ^= ((arr_5 [i_7 - 1] [i_7 - 1] [i_7 - 1]) % (arr_25 [i_5] [i_14] [i_5] [i_14] [i_7 - 1]));
                            var_38 = arr_20 [i_7 - 1];
                            var_39 = ((((var_1 ? (arr_15 [i_7]) : var_1)) << (((arr_21 [i_7 - 1] [i_7 - 1] [i_7] [i_7]) - 765675314))));
                            var_40 ^= (1 ? ((((-10765 + 2147483647) >> (-107 + 116)))) : (arr_11 [i_6] [i_7 - 1] [i_10]));
                            var_41 *= ((-5 ? -5688 : 16463));
                        }
                    }

                    for (int i_15 = 2; i_15 < 7;i_15 += 1)
                    {
                        var_42 = var_15;
                        var_43 = ((-5699 ? -16464 : -4));
                    }
                    var_44 = (((arr_8 [i_5]) ? 770848231 : -247));
                    var_45 = (max(var_45, ((((arr_24 [i_7 - 1] [i_7] [i_7 - 1] [i_7]) ^ (((var_19 ? 22520 : 43001))))))));
                }
            }
        }
        var_46 *= (~1);
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
    {
        arr_53 [i_16] = (-12 & 0);
        /* LoopNest 2 */
        for (int i_17 = 3; i_17 < 7;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                {
                    arr_59 [i_16] |= (1 <= 15);
                    var_47 = (max(var_47, -374791338));
                    arr_60 [i_16] [i_18] [i_18] [i_17] = (((arr_29 [i_17 - 1] [i_17 + 3] [i_17 + 3]) ? 7294 : var_11));
                }
            }
        }
        var_48 = (var_4 >= var_12);
        var_49 = (((-(arr_10 [2]))) == var_4);
    }
    var_50 = (max(var_15, (((7983069697822683345 == (((min(var_2, var_16)))))))));
    /* LoopNest 2 */
    for (int i_19 = 1; i_19 < 24;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            {
                arr_68 [i_19] [i_19] [i_19 - 1] = (~3);
                arr_69 [i_19 + 1] [i_20] = (!(arr_66 [i_19] [i_19] [i_19 + 1]));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 25;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 25;i_22 += 1)
        {
            {
                arr_76 [i_22] [i_22] = (((-(arr_62 [i_21]))));
                arr_77 [i_22] = ((((arr_67 [i_21] [i_22] [i_22]) ? (arr_67 [i_22] [i_22] [i_21]) : (arr_67 [i_22] [i_22] [i_21]))));
                arr_78 [i_22] = max((((arr_65 [i_21] [i_21]) && ((min(1, -47))))), (((var_14 > var_4) && (arr_62 [i_21]))));
            }
        }
    }
    #pragma endscop
}
