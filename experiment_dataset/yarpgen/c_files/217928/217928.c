/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 604837734;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (var_7 ? (!var_3) : var_11);
        var_15 = (~894783950);
        arr_2 [10] = (var_2 ? 1322639137 : 3400183332);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {
                    var_16 = 1322639119;

                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_17 = var_9;
                        arr_11 [i_1] [12] [i_3 + 1] [i_3 - 1] [i_4] [i_4] = var_0;
                        var_18 = 1322639134;
                        var_19 = min(((var_5 ? var_3 : var_12)), ((1515571562 / (var_1 || 2972328179))));
                        var_20 &= var_8;
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        arr_14 [10] [i_1] [10] [15] [i_1] = var_4;
                        arr_15 [i_1] = (var_0 ? var_7 : 724055687);
                    }
                    var_21 = var_9;
                    var_22 = (((1576864618 ? ((2259121566 ? 906398657 : 946737727)) : (max(32767, var_3)))) >> (((max(var_0, var_12)) - 3674225880)));
                }
            }
        }
        var_23 = ((var_0 & var_1) & ((var_3 >> (604837722 - 604837701))));
        var_24 = min((((var_12 < 4294967295) ? (~2045333007) : (max(var_10, 616633255)))), ((-616633262 ? var_3 : (var_4 - var_3))));
        arr_16 [i_1] = var_4;
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_25 = (3170144640 ? (((3678334040 - 3012848553) / ((3678334040 ? var_2 : var_7)))) : (((((var_4 ? 4294967295 : var_2))) ? var_6 : 2543018798)));
        arr_20 [i_6] = ((!((min(((3 ? 906398657 : 176956276)), (var_7 * var_9))))));
        arr_21 [5] = (((((((616633269 ? var_1 : var_7))) ? (max(var_1, 3568924062)) : 1))) ? 1921404129 : var_5);
        var_26 = max((min(0, var_9)), (var_7 || 4294967295));

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_27 = var_10;
            var_28 = ((((var_7 ? var_2 : 2601979583))) ? var_11 : ((var_2 ? 1774994286 : 4294967284)));
            var_29 = (((min(var_8, (var_7 / var_2)))) ? ((var_3 ? var_7 : var_7)) : var_12);
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_30 = min((((var_7 != var_4) ? ((4294967295 ? 2287003309 : var_10)) : var_11)), (3827308543 & var_4));
            var_31 = ((((2171229788 ? 1502182207 : var_7))) ? ((var_6 ? var_4 : var_2)) : (min(var_10, var_11)));
        }
        for (int i_9 = 3; i_9 < 19;i_9 += 1)
        {
            var_32 *= var_4;

            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                arr_32 [i_9] [i_9 + 2] [18] [i_9] = 1071226298;
                var_33 = min((((!((max(var_1, 3678334038)))))), (max(((3674448410 ? var_8 : 4294967295)), var_0)));
            }
            arr_33 [i_6] [i_6] [i_9] = ((((1715629599 ? (692289821 < var_5) : var_10))) ? ((((((var_4 ? var_0 : 524287)) == ((4294967282 ? 14 : var_6)))))) : ((((0 ? 11 : var_10)) | (2482063465 % 2543994502))));
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        arr_36 [i_11] = 2963543838;
        var_34 = (1387669577 >> ((var_7 ? 0 : 1475543049)));

        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            var_35 = (var_11 ? ((3905498761 ? var_11 : 1071226298)) : ((var_0 ? var_0 : 3624235302)));
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    {
                        arr_45 [i_13] [i_13] [i_12] [i_12] [i_11] [i_11] = 134217720;
                        arr_46 [i_12] [i_12] [i_13] [i_14] [i_12] = (~var_6);
                        var_36 = (var_6 ? var_3 : var_1);
                    }
                }
            }
            var_37 += (3552281777 ? var_7 : var_6);
            var_38 |= (!var_12);
            var_39 = (!4294967268);
        }
    }
    #pragma endscop
}
