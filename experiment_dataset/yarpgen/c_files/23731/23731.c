/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = (max((min(((0 ? var_2 : var_2)), 1019047522)), (((var_2 ? -var_8 : (25593 || 10))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 -= 13;
                    var_13 = ((min(var_9, (arr_7 [i_1] [i_1 + 1]))));
                    arr_9 [i_1] [i_1 + 1] [i_2] = (max((max(39943, 12)), (min(24263, (max(-1543508453, var_8))))));
                }
            }
        }
        var_14 = (arr_3 [8]);
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_15 = var_1;
        var_16 = 8191;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_17 = (var_9 && var_1);
        var_18 = (0 - -13);

        /* vectorizable */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_19 = (min(var_19, var_3));
                        arr_25 [9] [i_4] [i_6] [4] = (((arr_23 [i_4] [i_7] [i_6] [i_7] [i_4]) ? ((var_9 ? 41267 : (arr_17 [1]))) : (((arr_23 [i_4] [i_4] [1] [i_7] [i_7]) ? 0 : var_8))));
                        var_20 = ((var_0 ? var_4 : (((-15268 ? var_3 : (arr_17 [i_4]))))));
                    }
                }
            }
            arr_26 [i_5] [i_5] [i_4] = (arr_11 [i_5] [i_4]);
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 7;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 6;i_9 += 1)
                {
                    {

                        for (int i_10 = 2; i_10 < 7;i_10 += 1) /* same iter space */
                        {
                            arr_33 [i_4] [i_4] [i_8] [i_8] [i_4] [i_9 + 3] [i_10] = 24882;
                            var_21 = ((((((arr_10 [i_5]) ? 39943 : 1019047531))) ? (arr_14 [i_5] [i_10 - 2]) : var_1));
                        }
                        for (int i_11 = 2; i_11 < 7;i_11 += 1) /* same iter space */
                        {
                            var_22 = (((var_8 / 25593) | (25607 + 11)));
                            var_23 += (arr_32 [i_8 - 3] [i_9 - 1] [2] [i_11] [i_11] [i_11 + 2]);
                        }
                        for (int i_12 = 2; i_12 < 7;i_12 += 1) /* same iter space */
                        {
                            var_24 = ((((-46 ? var_9 : var_0))) ? var_8 : -var_2);
                            var_25 ^= (var_5 > 0);
                        }
                        var_26 = ((((arr_17 [i_4]) % 39943)) < var_1);
                        var_27 = 52;
                    }
                }
            }
        }
        for (int i_13 = 1; i_13 < 8;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    {

                        for (int i_16 = 1; i_16 < 9;i_16 += 1)
                        {
                            var_28 = ((((min((max(-1733427241889910456, (arr_38 [i_16] [i_13 - 1] [i_14] [i_13 - 1] [i_4]))), var_1))) ? -21265 : (((arr_51 [6] [i_13 + 2] [2] [i_4] [i_16 + 1] [i_16 - 1] [i_16]) ? 25607 : (arr_51 [i_4] [i_13 + 1] [i_16] [i_4] [i_16 - 1] [i_16 - 1] [i_16])))));
                            arr_53 [4] [4] [i_4] [i_15] [i_15] = var_5;
                        }
                        for (int i_17 = 1; i_17 < 9;i_17 += 1) /* same iter space */
                        {
                            var_29 = var_9;
                            var_30 = var_5;
                            var_31 = (+(((arr_7 [i_4] [i_17 + 1]) & (arr_7 [i_4] [i_17 + 1]))));
                            arr_57 [i_4] [i_4] [6] [i_4] [i_15] [9] = (((37700 ? 576179277326712832 : (arr_11 [i_13] [i_13]))) - (((min(-7523202552264850851, (13 <= var_7))))));
                            var_32 ^= (max((arr_51 [0] [i_13 + 2] [i_13 + 2] [i_15] [4] [i_14] [i_14]), ((var_4 - (arr_51 [i_4] [i_13 + 2] [i_14] [i_14] [2] [i_4] [6])))));
                        }
                        for (int i_18 = 1; i_18 < 9;i_18 += 1) /* same iter space */
                        {
                            var_33 = (((max((arr_2 [7]), (((!(arr_41 [i_13] [i_13] [i_18])))))) != ((max(51, 31593)))));
                            var_34 = (arr_22 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18]);
                        }
                        var_35 = (var_3 ? (-17139 - 45) : (min(((((arr_0 [i_4]) ? 0 : (arr_17 [i_15])))), (arr_30 [i_15] [i_15] [i_14] [i_4] [i_4]))));
                        var_36 = ((((((((arr_56 [i_4] [i_13] [i_14] [i_15] [i_4] [i_14] [i_14]) << (var_3 - 240318855)))) && var_9)) && (!var_7)));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 10;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 10;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 10;i_21 += 1)
                    {
                        {
                            var_37 = 11137607865763060879;
                            arr_67 [i_4] = (-(max((arr_18 [9] [i_4] [i_4]), ((25607 << (var_2 - 14482158236836018953))))));
                            var_38 = ((min(((max((arr_17 [i_4]), (arr_61 [i_4] [i_19] [i_20] [i_21])))), var_0)));
                        }
                    }
                }
            }
            arr_68 [i_4] [i_4] = -1377115025;
        }
        for (int i_22 = 0; i_22 < 10;i_22 += 1)
        {
            arr_71 [i_4] [i_4] = arr_2 [i_22];
            var_39 = (max(0, (arr_51 [i_22] [1] [2] [i_4] [i_4] [i_4] [i_4])));
        }
    }
    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
    {
        var_40 = (max(((((arr_0 [i_23]) && (arr_63 [i_23] [i_23] [i_23] [i_23])))), var_2));
        var_41 = var_7;
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 1;i_24 += 1)
        {
            for (int i_25 = 2; i_25 < 8;i_25 += 1)
            {
                {
                    arr_81 [i_23] [i_24] = var_0;
                    var_42 = (arr_75 [i_24] [i_23]);

                    for (int i_26 = 0; i_26 < 10;i_26 += 1)
                    {
                        var_43 = ((((!(arr_35 [i_25] [i_25 - 2] [i_25 + 1] [i_25] [i_23]))) ? 33955 : (!var_4)));
                        var_44 &= (min((((arr_40 [i_25 + 2] [i_26] [i_25 - 1] [i_26] [i_25 - 1]) / var_7)), (!12)));
                        var_45 = (min(var_2, ((max(255, 24)))));

                        for (int i_27 = 0; i_27 < 1;i_27 += 1)
                        {
                            arr_88 [i_25] [i_25] [i_25] [i_23] = 64;
                            var_46 -= ((39923 ? (max((arr_76 [i_26]), (1 - 35))) : ((min((arr_55 [i_25 + 1] [i_25 + 2] [i_25 - 1] [i_26] [i_25 + 2]), (arr_18 [i_25 + 2] [i_26] [i_25 - 1]))))));
                        }
                        for (int i_28 = 2; i_28 < 8;i_28 += 1)
                        {
                            var_47 = var_3;
                            var_48 = var_1;
                            var_49 = (arr_61 [i_23] [i_25] [i_26] [i_28 + 1]);
                        }
                    }
                    var_50 = ((!(((((6 ? 14963 : 2147483647)) >> (14378254461805556056 + 4068489611903995574))))));
                    var_51 = 929861357;
                }
            }
        }
        var_52 = -128495625;
    }
    #pragma endscop
}
