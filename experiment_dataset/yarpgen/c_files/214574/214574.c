/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = ((!(((arr_2 [i_0] [i_1]) > var_9))));

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                var_17 = (((52 > var_16) ? (((arr_3 [i_0]) ? var_15 : var_12)) : var_3));
                arr_10 [i_0] [14] [i_2 + 1] = var_12;
                var_18 = (35 && 7437181219237274244);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_19 = ((59295 ? (arr_1 [i_1] [i_3]) : 59289));
                var_20 = 107;
            }
        }
        var_21 -= (((arr_3 [i_0]) & var_15));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_22 = 6236;
                        var_23 = (max(var_23, (((((((arr_1 [i_4 + 1] [i_5 + 3]) ? (arr_3 [i_4]) : var_11))) ? (!59277) : (arr_18 [i_7] [i_6] [12]))))));
                        var_24 = (-32767 - 1);
                        arr_23 [i_7] [i_6] [i_4] [i_7] = (!(arr_13 [i_4 - 1]));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {

                    for (int i_10 = 3; i_10 < 19;i_10 += 1)
                    {
                        arr_31 [i_4] [i_8] = ((!(((var_8 ? (arr_7 [i_4] [i_8] [i_9]) : var_12)))));
                        var_25 = ((~(arr_14 [i_4 + 2])));

                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_26 = (((arr_2 [i_10 - 1] [i_4 + 2]) ? (-2147483647 - 1) : (arr_26 [i_4 - 1])));
                            arr_34 [i_4 - 1] [9] [i_9] [13] [i_8] [19] = ((59287 / (arr_26 [8])));
                        }
                        var_27 = (((arr_14 [i_4 + 1]) ? var_4 : (arr_14 [i_4 + 1])));
                    }
                    for (int i_12 = 1; i_12 < 19;i_12 += 1)
                    {
                        arr_37 [i_8] = (arr_21 [i_4 - 1] [1] [i_8] [i_9]);
                        var_28 = var_3;
                        arr_38 [i_4] [i_8] = ((((var_12 ? (arr_22 [i_9]) : var_13))) || (arr_12 [17] [i_8] [i_9] [i_12 + 2]));
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        arr_42 [15] [i_8] [i_9] [i_8] = ((!(((var_7 ? var_8 : 1)))));

                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            arr_46 [i_14] [i_13] [i_8] [i_8] [i_8] [6] [i_4 - 1] = var_7;
                            arr_47 [0] [i_8] [0] [19] [i_14] = (arr_35 [i_4 + 1] [i_4 - 1]);
                            var_29 = ((6259 + (arr_2 [i_4] [i_4 - 1])));
                            var_30 = (min(var_30, ((6241 && (-1901378689 / 6247)))));
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_31 = var_6;
                            var_32 = -1;
                            var_33 = (var_7 ? (1759850676 <= 59277) : ((var_5 ? 119 : var_14)));
                            arr_51 [i_4 - 1] [i_8] [i_8] [i_13] [i_15] = var_15;
                            arr_52 [i_4 + 1] [i_4 + 1] [i_8] [i_8] [i_9] [i_4 + 1] [i_4 + 1] = ((59289 ? 0 : 6256));
                        }
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_34 = ((((13787651070069332105 ? var_3 : -79))) - (((arr_32 [i_8] [i_8] [i_8] [i_16] [i_4]) ? (-9223372036854775807 - 1) : var_11)));
                        var_35 = (~-656813079866367706);
                        var_36 -= ((!(((~(arr_50 [i_4] [i_4] [i_9] [i_9] [i_16]))))));

                        for (int i_17 = 2; i_17 < 20;i_17 += 1)
                        {
                            var_37 = (var_10 && var_16);
                            var_38 -= ((((!(arr_0 [i_4]))) ? ((var_16 ? (arr_3 [i_8]) : (arr_55 [i_9]))) : var_13));
                            var_39 = ((var_10 ? (arr_11 [i_4 + 1] [i_8] [i_8] [i_4]) : var_5));
                        }
                        var_40 -= (((!-1901378689) ? ((32760 ? 7437181219237274248 : -99)) : (arr_8 [3] [i_4 + 2])));
                    }
                    var_41 = (((36028797018963967 | 102) % var_3));
                }
            }
        }
        arr_58 [i_4] [i_4] = var_1;
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 22;i_19 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_20 = 2; i_20 < 18;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 1;i_21 += 1)
                        {
                            {
                                var_42 = (var_9 == var_0);
                                var_43 = (((arr_65 [i_20 + 4] [i_4 + 2] [i_21 - 1] [6]) | -6859670598018290654));
                                var_44 = var_12;
                                arr_69 [i_19] [9] [i_19] [i_19] [i_19] [i_19] = (arr_13 [i_4 - 1]);
                                var_45 = (!var_2);
                            }
                        }
                    }
                    var_46 = (arr_28 [i_4] [i_18] [i_19] [i_19]);
                }
            }
        }
    }
    var_47 = (((((((max(130, var_1))) << ((((var_16 ? 2166563698 : var_8)) - 2166563686))))) ? var_9 : var_10));
    var_48 = ((((((-36028797018963966 ? 4053690292737205563 : var_5)) | (var_3 != 102))) > (((var_1 ? 150 : var_16)))));
    var_49 = var_1;
    #pragma endscop
}
