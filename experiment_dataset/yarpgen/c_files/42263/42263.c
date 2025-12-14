/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 ^= (((max(var_1, ((~(arr_1 [2] [i_0]))))) % ((((-(arr_1 [10] [i_0]))) | (((var_1 ? 134 : var_11)))))));
        var_14 ^= ((((-(arr_0 [i_0])))));
        var_15 -= (min(((((min((arr_1 [i_0] [i_0]), 255)) + var_0))), ((((((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0])))) ? ((((arr_1 [i_0] [i_0]) ? 1437836617 : (arr_1 [i_0] [i_0])))) : (max(var_10, (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_16 = (arr_4 [i_1] [7]);
                    var_17 = (max(var_17, (((-(((arr_8 [i_1] [i_1]) ? var_11 : (arr_8 [i_1] [i_2]))))))));
                }
            }
        }
        var_18 &= 2857130678;
        var_19 = ((-(((1 - (arr_4 [i_1] [i_1]))))));
        var_20 = (max(var_20, (arr_3 [4] [4])));
        var_21 = (max(1, ((((var_7 ? 2857130678 : (arr_0 [i_1])))))));
    }
    var_22 = var_2;

    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_23 = ((~var_10) ? var_10 : (arr_0 [i_4]));
        var_24 = (min(var_24, 157));
        var_25 = (arr_9 [1] [i_4] [19] [3]);
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_26 = var_8;
        var_27 = var_10;
        var_28 = ((((((!(arr_10 [i_5] [i_5] [i_5]))))) ? 146 : (!-9201482398616003299)));
        var_29 = var_1;
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_30 = 159;
        var_31 = var_5;
        var_32 = 49;
        var_33 = (arr_18 [i_6]);
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_34 = var_10;
        var_35 ^= var_3;
    }

    /* vectorizable */
    for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                {
                    var_36 = ((arr_10 [7] [i_9] [i_9]) ? ((~(arr_10 [i_8 + 1] [i_9] [i_8 + 1]))) : (((121 ? (arr_11 [i_9] [i_9]) : (arr_18 [i_8 + 3])))));

                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_37 = (arr_10 [16] [i_9] [16]);
                        var_38 = ((!(((~(arr_2 [i_10 - 1]))))));
                        var_39 = (((arr_7 [i_11] [i_11]) ? (arr_25 [i_8] [i_8 + 2]) : (arr_30 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 2])));
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        var_40 = (((arr_14 [i_10 + 1] [i_8 + 1]) && (arr_14 [i_10 + 1] [i_8 - 1])));
                        var_41 = (max(var_41, ((((arr_32 [i_12] [i_10 + 1] [i_8 + 2]) <= (arr_6 [i_8 - 2] [i_9] [i_10 - 1]))))));
                        var_42 = (arr_15 [i_8 + 2] [i_9]);
                        var_43 = ((!(((~(arr_6 [i_12] [i_9] [19]))))));
                        var_44 ^= (((arr_23 [i_10 + 1]) ? 9201482398616003287 : (arr_31 [i_8])));
                    }
                    var_45 -= var_1;

                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        var_46 = (((((1 ? 134 : 1027625140))) / (((arr_0 [i_13]) ? var_3 : var_6))));
                        var_47 ^= 2028874489;
                        var_48 = 9223372036854775784;
                    }
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        var_49 = (min(var_49, var_1));
                        var_50 = ((var_10 % (((~(arr_0 [i_14]))))));
                        var_51 = ((((arr_0 [i_8]) ? -9201482398616003299 : -2330)) != -9201482398616003318);
                    }
                    var_52 = ((!(((2857130694 ? -5 : 35)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                {
                    var_53 = ((-(arr_23 [i_16])));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 12;i_18 += 1)
                        {
                            {
                                var_54 = ((!(arr_23 [i_17])));
                                var_55 = (arr_24 [i_8 - 2]);
                            }
                        }
                    }
                }
            }
        }

        for (int i_19 = 0; i_19 < 13;i_19 += 1) /* same iter space */
        {
            var_56 = 541972590;
            var_57 = (arr_45 [i_8 + 1] [i_19] [i_19] [i_8 + 1]);
            var_58 = (-1794927434869911796 & 7469638265513721563);
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 13;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        {
                            var_59 = 1;
                            var_60 &= (arr_30 [i_8 + 3] [i_8 + 2] [i_8] [i_8 + 1]);
                            var_61 = (arr_24 [i_21]);
                        }
                    }
                }
            }
        }
        for (int i_23 = 0; i_23 < 13;i_23 += 1) /* same iter space */
        {

            for (int i_24 = 2; i_24 < 11;i_24 += 1)
            {
                var_62 = (~1);
                var_63 = -var_0;
            }
            for (int i_25 = 0; i_25 < 13;i_25 += 1) /* same iter space */
            {
                var_64 = ((!(arr_31 [4])));
                var_65 = ((243 < (arr_48 [i_8] [i_8 + 3] [8] [i_8 + 1] [10] [i_8] [6])));
            }
            for (int i_26 = 0; i_26 < 13;i_26 += 1) /* same iter space */
            {
                var_66 = arr_51 [i_8] [i_23] [1];
                var_67 = (!1502230063);
            }
            var_68 = (arr_45 [i_8] [i_8 - 1] [0] [6]);
            var_69 = (arr_63 [1] [i_23] [4]);
        }
        for (int i_27 = 0; i_27 < 13;i_27 += 1) /* same iter space */
        {
            var_70 -= (arr_51 [i_8] [i_8] [i_27]);
            var_71 ^= (arr_26 [i_27]);
        }
        for (int i_28 = 0; i_28 < 13;i_28 += 1)
        {
            var_72 = ((~(arr_7 [2] [2])));

            for (int i_29 = 0; i_29 < 13;i_29 += 1)
            {

                for (int i_30 = 0; i_30 < 13;i_30 += 1)
                {
                    var_73 = (~var_8);
                    var_74 = ((-(arr_27 [i_8 + 1] [i_8 + 1] [i_8 - 2])));
                    var_75 = (((arr_61 [i_8 + 3] [i_8 + 1]) & ((15 ? var_0 : (arr_56 [i_30] [i_30] [i_29] [i_28] [i_28] [i_8])))));
                    var_76 = ((~(arr_65 [7] [i_8 - 2])));
                }
                for (int i_31 = 0; i_31 < 13;i_31 += 1) /* same iter space */
                {
                    var_77 *= (~var_3);
                    var_78 = (1 ? var_4 : -1614707915);
                    var_79 &= ((var_3 ^ (arr_43 [i_8 - 2] [i_28])));
                    var_80 = ((((var_11 != (arr_61 [i_8] [i_8])))) << (((arr_48 [i_31] [10] [i_28] [i_28] [i_28] [i_8] [i_8 + 1]) - 35316)));
                }
                for (int i_32 = 0; i_32 < 13;i_32 += 1) /* same iter space */
                {
                    var_81 = ((~(arr_6 [i_8] [i_8] [i_8 + 1])));
                    var_82 = var_3;
                }
                var_83 = (((arr_48 [i_8 - 1] [i_8] [i_8] [i_8] [i_28] [2] [i_29]) / (1614707914 - -84)));
            }
            for (int i_33 = 0; i_33 < 13;i_33 += 1)
            {
                var_84 -= 2013733792259641704;
                var_85 = (((arr_3 [i_33] [i_8 - 2]) ? (((5 ? var_8 : (arr_18 [3])))) : (~var_5)));

                for (int i_34 = 0; i_34 < 13;i_34 += 1)
                {
                    var_86 = -1614707931;
                    var_87 = (min(var_87, 1437836617));
                }
                var_88 = (arr_4 [i_33] [i_33]);
            }
            for (int i_35 = 0; i_35 < 13;i_35 += 1)
            {
                var_89 = (max(var_89, 1));
                var_90 = (((arr_15 [i_28] [i_35]) ? 32500 : (~var_8)));
            }
            var_91 = (((!9201482398616003318) * 627922875));
        }
        var_92 = ((-(arr_36 [2] [i_8 - 2] [2])));
    }
    for (int i_36 = 2; i_36 < 10;i_36 += 1) /* same iter space */
    {
        var_93 = ((!((!(((-(arr_16 [i_36]))))))));
        var_94 = 18106931627814122592;
    }
    #pragma endscop
}
