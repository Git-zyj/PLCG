/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_16 = (arr_9 [i_4] [i_0] [i_0]);
                                arr_12 [0] [i_0] [i_2] [i_0] [i_0] = (arr_0 [6]);
                            }
                        }
                    }
                    arr_13 [i_0] = var_4;
                    var_17 *= 63222;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_6 = 4; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_18 = ((var_0 + (arr_8 [i_6 - 2] [i_6 - 4])));
            var_19 = 1;
        }
        /* vectorizable */
        for (int i_7 = 4; i_7 < 11;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_20 = (var_12 * 254);
                            var_21 = -var_14;
                            arr_30 [i_10] [i_9] [i_8] [i_7] [i_5] = -1;
                            var_22 ^= ((-(arr_29 [i_7] [4] [i_7])));
                            arr_31 [i_10] [i_8] [11] [10] [i_10] = (arr_20 [i_5] [i_5] [i_5]);
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_23 -= (((arr_15 [i_5]) >= (arr_15 [i_5])));
                            var_24 |= (((arr_8 [i_5] [i_7 - 3]) | -63222));
                            var_25 = 1;
                            var_26 -= (~var_0);
                        }
                        var_27 = (((((arr_24 [1] [1]) & var_12))) ? (arr_10 [i_9] [i_9]) : (arr_28 [i_8] [i_8] [3]));
                    }
                }
            }
            var_28 = 6;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    {
                        var_29 = (max(var_29, (((((var_12 % (arr_9 [2] [i_5] [i_7 - 1])))) ? ((((arr_7 [i_5] [0] [i_5] [i_12] [i_13] [0]) || var_2))) : var_2))));
                        var_30 = (arr_35 [i_7 - 1] [i_7 - 3] [i_7 - 1]);

                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            var_31 = (((((-(arr_32 [i_5] [i_7] [i_7] [i_7] [i_13] [i_14])))) ? 1 : var_13));
                            var_32 = ((!(arr_11 [i_13] [i_13] [0] [7] [i_5])));
                        }
                        var_33 = (~var_12);
                    }
                }
            }
        }
        for (int i_15 = 4; i_15 < 11;i_15 += 1) /* same iter space */
        {
            var_34 -= min((arr_37 [i_15] [5] [i_15 - 3] [i_15 - 1]), (((arr_24 [i_15 + 1] [i_15 - 4]) + (arr_39 [7] [4] [7] [i_15 - 4] [i_15 - 3]))));
            var_35 |= ((0 + ((min(1, 615215257)))));
            var_36 = ((((((arr_2 [i_5]) ? (((arr_41 [0] [i_15 - 2]) ? (arr_23 [i_5]) : -74)) : (arr_28 [i_15] [i_15] [i_15 - 1])))) ? (arr_33 [i_5] [i_15] [i_15] [i_5] [i_15 - 4] [i_15]) : (arr_26 [i_15 - 4] [i_15 - 2] [i_15 - 2] [i_15 - 2] [i_15 - 4] [9])));
            var_37 ^= (arr_0 [i_15 - 4]);
        }
        arr_45 [i_5] [i_5] = -57784850;
        var_38 -= ((min(1, (arr_10 [i_5] [i_5]))) * ((((!(arr_3 [1] [i_5]))))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                {
                    var_39 = (~var_14);
                    var_40 = (max(var_40, ((min((min(15, (arr_36 [i_17] [i_16] [i_5]))), (min(1, (min(500149964, 2147483637)))))))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 12;i_19 += 1)
                        {
                            {
                                var_41 = (min(((min(1, var_6))), (min(8796093022207, (arr_29 [i_16] [i_17] [i_16])))));
                                arr_55 [i_19] [i_18] [i_16] [i_18] [i_16] [i_16] [i_5] = (min(0, (min(1590061373, -4))));
                                arr_56 [i_5] [i_5] [i_5] [i_5] [i_16] [i_5] [9] = (min((min(28, (arr_54 [i_5] [i_16]))), ((min((arr_54 [6] [i_5]), (arr_54 [i_17] [i_19]))))));
                                var_42 -= ((-(((!(arr_28 [i_17] [i_5] [i_18]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
    {

        for (int i_21 = 0; i_21 < 12;i_21 += 1)
        {
            /* LoopNest 2 */
            for (int i_22 = 3; i_22 < 9;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    {
                        var_43 = ((39084 ? (arr_27 [i_21] [i_20]) : ((~(min((arr_4 [i_21]), (arr_4 [i_20])))))));
                        arr_68 [i_23] [10] [10] [i_23] [i_22] [10] = ((((5398443084355329049 || (arr_62 [i_22 - 3] [i_22 + 3] [i_22 - 3]))) ? ((min(((min(62337, (arr_20 [i_20] [i_21] [i_23])))), (arr_58 [i_22 - 2])))) : (min(((min(3, var_0))), (arr_25 [i_21] [i_22] [i_21])))));
                    }
                }
            }
            var_44 = (((min((arr_50 [i_20]), 65121))));
            var_45 *= (((((((var_2 ? (arr_60 [i_20] [i_21] [i_21]) : (arr_1 [i_20])))) ? (3182667217 - var_13) : 20903))) ? (((-72 % 2040589053) + (arr_3 [i_20] [i_20]))) : ((min(((-123 ? var_0 : (arr_29 [6] [i_20] [i_21]))), var_8))));
        }
        for (int i_24 = 0; i_24 < 12;i_24 += 1)
        {
            var_46 ^= (((min(16663496686549436380, (arr_26 [i_24] [i_24] [i_20] [2] [i_20] [i_20]))) * (((((~561744724) || (((-(arr_23 [i_24]))))))))));
            /* LoopNest 3 */
            for (int i_25 = 0; i_25 < 12;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 12;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 12;i_27 += 1)
                    {
                        {
                            var_47 = (arr_1 [8]);
                            var_48 |= ((~(((arr_51 [i_20] [i_24] [i_25] [i_26] [i_27]) / (arr_51 [6] [1] [i_25] [i_26] [2])))));
                            var_49 = (min(((7 & (arr_8 [i_20] [i_24]))), ((min(var_14, ((-(arr_3 [i_25] [i_26]))))))));
                        }
                    }
                }
            }
        }
        var_50 = 2;
        /* LoopNest 2 */
        for (int i_28 = 2; i_28 < 11;i_28 += 1)
        {
            for (int i_29 = 1; i_29 < 11;i_29 += 1)
            {
                {
                    var_51 = ((-(min(var_15, ((min(var_9, 2040589053)))))));
                    var_52 = (arr_62 [i_20] [i_28] [i_29]);
                    arr_84 [i_20] [i_20] [i_29] [1] = 8;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_30 = 0; i_30 < 12;i_30 += 1)
        {
            for (int i_31 = 3; i_31 < 11;i_31 += 1)
            {
                for (int i_32 = 0; i_32 < 12;i_32 += 1)
                {
                    {
                        var_53 &= (arr_9 [i_20] [i_30] [i_31 - 3]);
                        var_54 = var_9;
                        var_55 -= ((((((arr_40 [i_20] [i_30] [i_31 - 1] [i_32]) ? (arr_40 [i_20] [i_30] [i_30] [i_32]) : (arr_40 [i_20] [i_20] [9] [i_20])))) != ((var_6 & (arr_61 [i_20] [i_32])))));
                        var_56 = ((var_0 > (arr_1 [i_31 - 3])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_33 = 0; i_33 < 12;i_33 += 1)
        {
            for (int i_34 = 0; i_34 < 12;i_34 += 1)
            {
                for (int i_35 = 0; i_35 < 12;i_35 += 1)
                {
                    {
                        var_57 ^= (min(-1994296322820160851, var_14));
                        arr_99 [i_35] [i_33] [i_34] [i_35] = 18446744073709551615;
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_36 = 1; i_36 < 1;i_36 += 1) /* same iter space */
    {
        var_58 = (min(var_58, var_13));
        var_59 -= (arr_101 [i_36 - 1]);
        var_60 = (arr_101 [i_36 - 1]);
    }
    /* vectorizable */
    for (int i_37 = 1; i_37 < 1;i_37 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_38 = 0; i_38 < 20;i_38 += 1)
        {
            for (int i_39 = 0; i_39 < 20;i_39 += 1)
            {
                for (int i_40 = 0; i_40 < 20;i_40 += 1)
                {
                    {
                        arr_113 [10] [i_38] &= 92497006;
                        var_61 = arr_111 [i_40] [15] [i_39] [i_40];
                    }
                }
            }
        }
        var_62 = (max(var_62, (((var_4 * (arr_101 [i_37]))))));
        arr_114 [i_37 - 1] = ((~((var_9 ? (arr_101 [i_37 - 1]) : (arr_101 [i_37])))));
    }
    #pragma endscop
}
