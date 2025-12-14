/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((0 * 47849) ? (arr_1 [i_0]) : 1)) & ((((1 ? (arr_0 [i_0]) : (arr_2 [1])))))));
        var_13 = ((~((((37889 ? var_11 : (arr_0 [i_0])))))));
        arr_4 [i_0] = var_11;
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_14 = ((~(((((~(arr_7 [24] [i_1])))) ? (arr_8 [i_1 + 2]) : (arr_7 [i_1 - 2] [i_1])))));
        arr_9 [i_1 + 2] [i_1] = ((((min((arr_5 [i_1 - 1]), (arr_5 [i_1 + 2])))) - (arr_7 [1] [1])));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                {
                    var_15 = (min((arr_13 [i_1 + 2] [i_2] [i_3 - 1]), (((max(0, 1)) << (((arr_6 [i_1]) - 1919634940))))));

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_21 [i_1] [i_4] [1] [1] [1] = (var_6 == var_12);
                            var_16 = 0;
                        }
                        var_17 ^= (max(((3322307575 ? (arr_8 [i_1 + 2]) : (arr_17 [i_1] [i_2 + 1] [i_3] [i_4] [i_3] [i_3]))), (((((-(arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 2])))) ? ((max((arr_15 [12] [i_3] [23] [23]), 52))) : (arr_8 [i_1 + 1])))));
                        var_18 = var_1;
                        arr_22 [i_4] = (((((~(((arr_10 [i_1] [i_1] [i_1]) & 64433))))) ? var_2 : (max((((arr_18 [i_1 - 2] [i_1] [i_1 - 2] [i_2] [i_3] [i_4] [i_4]) ? var_7 : 0)), var_6))));
                        arr_23 [i_1 - 2] [i_4] [i_3] [i_3] = (var_5 & (arr_19 [i_1 + 1] [4] [i_4] [i_1 + 2] [i_1]));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 24;i_8 += 1)
                {
                    {
                        var_19 &= ((max(var_6, (arr_30 [i_1] [i_6] [i_1]))));
                        var_20 *= ((var_8 ? var_1 : ((~(arr_20 [i_1 - 1] [i_1 + 1] [16] [i_7 - 1] [i_8 - 1])))));
                        var_21 = (min(var_21, ((((min(1, (arr_18 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 2]))))))));
                        var_22 = var_4;
                        arr_33 [i_8] = var_10;
                    }
                }
            }
        }
        arr_34 [i_1] = -var_9;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_23 = (!((((arr_24 [i_9] [i_9]) ? var_10 : 1463141763))));
        arr_38 [i_9] = max((max((arr_14 [i_9] [i_9]), (arr_14 [i_9] [i_9]))), (arr_14 [i_9] [i_9]));
        var_24 = (arr_7 [i_9] [i_9]);

        for (int i_10 = 1; i_10 < 18;i_10 += 1)
        {

            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_25 = ((((1 ? 2103203989 : (arr_11 [i_9] [i_10 + 3])))) ? (((!(arr_14 [i_12] [i_12])))) : ((105 ? 123 : 3985556420)));
                            var_26 = (max(var_26, var_5));
                        }
                    }
                }
                var_27 |= ((-(((((37889 ? var_4 : (arr_28 [i_9] [i_10] [i_11] [i_11])))) ? var_12 : 24))));
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 21;i_15 += 1)
                {
                    {

                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            var_28 = (min(var_28, (!var_5)));
                            var_29 = var_12;
                            var_30 = (max(var_30, var_2));
                        }
                        arr_61 [i_9] [i_10] [i_14] [i_15 - 2] [i_10] = 1562608497;
                        arr_62 [i_9] [i_10] [i_10] = arr_51 [i_9] [i_9] [i_10] [5] [i_15];
                    }
                }
            }
            arr_63 [i_9] [i_10] [i_10] = var_8;
            var_31 = (-(max((min(var_8, 2191763307)), (arr_57 [i_10]))));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            var_32 -= (arr_11 [i_9] [i_9]);

            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {

                for (int i_19 = 1; i_19 < 21;i_19 += 1)
                {
                    var_33 = (arr_8 [i_19 + 1]);
                    var_34 = (min(var_34, ((((arr_46 [i_19] [i_19 + 1] [1] [i_19 - 1]) < var_3)))));

                    for (int i_20 = 1; i_20 < 20;i_20 += 1)
                    {
                        var_35 = (((arr_47 [i_19 + 1] [i_17] [1] [i_20 + 2] [3] [i_20 + 2]) ? (arr_47 [i_19 - 1] [i_18] [i_18] [i_20 + 1] [i_20] [i_17]) : (arr_47 [i_19 + 1] [i_17] [i_18] [i_20 - 1] [i_20] [i_19])));
                        arr_76 [i_9] [i_19 - 1] [i_9] [i_9] [i_9] = (((arr_67 [i_9]) ? (arr_66 [i_9] [i_18]) : (arr_65 [i_9] [i_9])));
                    }
                    var_36 -= ((1 >> (((arr_17 [i_17] [i_17] [i_19] [i_19] [i_19] [i_19 - 1]) - 57840))));

                    for (int i_21 = 0; i_21 < 0;i_21 += 1) /* same iter space */
                    {
                        var_37 = -1;
                        arr_80 [i_9] [i_17] [i_17] [i_9] [i_21] = var_6;
                        var_38 -= ((var_4 % ((1157889309 / (arr_60 [9] [i_17])))));
                        arr_81 [i_9] [i_9] [i_9] [i_9] [i_9] = (arr_46 [i_9] [i_17] [i_17] [i_21]);
                    }
                    for (int i_22 = 0; i_22 < 0;i_22 += 1) /* same iter space */
                    {
                        arr_84 [i_9] = (!((((arr_36 [i_17] [i_17]) ? 1059232892 : (arr_18 [i_9] [i_9] [i_9] [i_17] [i_9] [i_17] [i_19 + 1])))));
                        var_39 = (min(var_39, ((((arr_16 [i_17] [i_17] [i_18]) | 4294967288)))));
                        var_40 ^= ((var_11 ? (arr_72 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22]) : var_5));
                        arr_85 [i_9] [i_9] [i_17] [i_9] = (arr_67 [i_9]);
                    }
                    for (int i_23 = 1; i_23 < 21;i_23 += 1)
                    {
                        var_41 = (var_10 + var_2);
                        var_42 = arr_69 [i_9];
                    }
                }
                for (int i_24 = 0; i_24 < 22;i_24 += 1)
                {
                    var_43 = (max(var_43, (arr_14 [i_9] [i_17])));
                    arr_93 [i_9] [i_17] [i_18] [i_24] [i_24] = ((((var_5 ? 37728 : var_9)) >= 1));
                }
                arr_94 [i_9] [i_17] [i_17] [i_9] = ((26521 ? (arr_65 [i_9] [i_9]) : (arr_65 [i_18] [i_9])));
            }
            for (int i_25 = 0; i_25 < 22;i_25 += 1)
            {
                arr_98 [i_25] [i_17] [i_25] = ((((30 ? var_9 : (arr_60 [i_9] [i_9]))) - var_7));
                arr_99 [i_25] [i_25] = (arr_57 [i_25]);
            }
            var_44 = (min(var_44, (arr_59 [4] [i_17] [i_17] [i_17] [i_9])));
        }
        for (int i_26 = 2; i_26 < 18;i_26 += 1) /* same iter space */
        {
            var_45 = (max(var_45, (((((arr_10 [i_9] [i_26 + 1] [i_9]) ? var_1 : (arr_40 [i_26])))))));
            arr_104 [i_9] [i_9] [i_9] = (!(((-(((var_4 != (arr_14 [1] [14]))))))));

            /* vectorizable */
            for (int i_27 = 1; i_27 < 21;i_27 += 1)
            {
                var_46 = (~1);
                var_47 = (max(var_47, -423793903));
                arr_108 [i_9] [i_27] [1] = (((arr_101 [i_27 - 1] [i_26 - 1] [i_26 + 2]) << (((arr_101 [i_27 - 1] [i_26] [i_26 + 1]) - 1222))));
                var_48 ^= 65513;
                var_49 = arr_48 [i_9] [i_26 + 1] [i_26] [i_26 + 1];
            }
        }
        for (int i_28 = 2; i_28 < 18;i_28 += 1) /* same iter space */
        {
            var_50 = (max(-var_4, ((((var_9 ? var_0 : (arr_35 [i_9] [21]))) << ((((var_3 ? -6 : (arr_71 [i_28] [i_28 - 2] [i_9] [i_9]))) + 13))))));
            arr_111 [i_9] |= 42355;
            /* LoopNest 2 */
            for (int i_29 = 2; i_29 < 19;i_29 += 1)
            {
                for (int i_30 = 1; i_30 < 19;i_30 += 1)
                {
                    {
                        var_51 = (min(var_51, var_5));
                        var_52 = min(-var_1, ((-14 ? 96 : 1342887415)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_31 = 0; i_31 < 1;i_31 += 1) /* same iter space */
    {
        arr_120 [i_31] = ((24 == (61 >> 1)));
        var_53 = (min(var_53, (((-(arr_112 [i_31]))))));
        arr_121 [i_31] = ((1 ? var_8 : (arr_97 [i_31] [i_31] [i_31])));
    }
    var_54 = ((((var_7 ? 2143289344 : var_1)) * var_5));
    var_55 = (!1);
    #pragma endscop
}
