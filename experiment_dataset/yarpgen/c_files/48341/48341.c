/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = (((min(((var_15 ? 68719476735 : var_17)), var_4)) + ((min(((max(18, -2147483643))), (7697 - var_6))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_19 = ((~(!7697)));
            arr_6 [i_0] = ((((17139 ? 14 : 57839)) >> (((arr_5 [i_0] [i_0 - 4] [i_0]) ? (arr_1 [i_0 + 1]) : var_11))));
            var_20 = ((2419954564103401972 | ((min(var_13, (((arr_5 [i_0] [8] [i_0]) % var_6)))))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = ((((((arr_8 [i_0]) ? (arr_8 [i_0]) : var_8))) ^ (((arr_4 [i_0]) ? (arr_8 [i_0]) : 14889079460042711835))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_21 ^= var_10;
                        var_22 = ((var_17 ? (min((((var_6 ? 65526 : var_17))), 2419954564103401977)) : (min(var_16, ((var_11 ? var_14 : 18446744073709551615))))));
                        arr_16 [i_0] = ((((13742 ? (arr_5 [i_0 - 4] [i_3 - 1] [i_0]) : (arr_5 [i_0 + 1] [i_3 + 1] [i_0]))) < (max((arr_5 [i_0 - 2] [i_3 + 1] [i_0]), (arr_5 [i_0 - 1] [i_3 + 1] [i_0])))));
                        var_23 = max((arr_0 [i_0]), ((min((arr_0 [i_0]), (arr_0 [i_0])))));
                    }
                }
            }
            var_24 |= (((min((arr_13 [i_0 - 1] [i_0 - 2] [i_0 - 3] [2] [i_0 - 2] [i_0]), 16026789509606149655)) >> (var_15 + 138)));
            var_25 = (min(var_25, 1));
        }
        arr_17 [i_0] = ((((max((arr_7 [i_0] [i_0] [i_0 + 1]), var_9))) ? (((-0 ? ((57861 ? (arr_4 [i_0]) : var_3)) : -20043))) : (min(var_18, (arr_15 [i_0] [i_0 + 1] [4] [i_0 - 1] [i_0 - 1])))));
        arr_18 [4] [i_0 - 2] &= 57839;
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_26 -= (min((7697 >= 25150), var_6));
        var_27 = ((+((449914334403009382 ? (arr_9 [i_5]) : 229))));
        var_28 = (var_4 <= -12);
        var_29 = (min(1, (max(var_18, (arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 8;i_10 += 1)
                        {
                            {
                                arr_33 [2] [i_7] [i_8] [i_9] [i_10 - 3] &= 16838063633573311255;
                                arr_34 [i_10 + 1] [i_9] [i_7] [i_7] [i_6] = ((~(((min(var_13, var_9))))));
                            }
                        }
                    }
                }
                arr_35 [i_7] [i_7] [i_7] = (((min((arr_30 [i_6 + 1] [4] [i_7] [i_7]), ((min(var_5, var_6))))) ^ (((min((-32767 - 1), (arr_20 [4])))))));

                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 9;i_13 += 1)
                        {
                            {
                                arr_44 [1] [i_7] [6] [i_7] [i_6] = (min((min((~-1), var_0)), 65535));
                                arr_45 [i_6] [i_7] [8] [i_11] [i_13] [i_7] = (~57850);
                                var_30 &= (((((arr_32 [i_6 - 1] [1] [i_6 - 1] [i_13 + 1] [i_13 + 2] [i_13 - 2]) ? 2137191528 : var_18)) & (~var_8)));
                                var_31 = ((var_5 + (min(2419954564103401952, (max(-1625566207, var_12))))));
                            }
                        }
                    }
                    var_32 = ((((~(arr_20 [i_6 - 1]))) << (((((arr_22 [i_6 + 1]) ? 13268053180921837401 : (arr_22 [i_6]))) - 13268053180921837401))));
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 4; i_15 < 10;i_15 += 1)
                    {
                        {
                            var_33 += 1;

                            /* vectorizable */
                            for (int i_16 = 1; i_16 < 10;i_16 += 1)
                            {
                                var_34 = (arr_22 [i_16 - 1]);
                                arr_53 [i_16] [i_7] [i_7] [7] = var_14;
                                var_35 = (0 < 18446744073709551615);
                            }

                            for (int i_17 = 0; i_17 < 11;i_17 += 1)
                            {
                                arr_57 [i_17] [i_15 - 1] [i_7] [3] [i_6] = (arr_27 [i_15 - 3] [i_15 - 4] [i_15] [i_6 + 1]);
                                var_36 = (min(var_36, (min((((((var_15 ? 5027358074921308782 : (arr_24 [i_6 - 1] [i_6 - 1])))) ? -14 : (arr_20 [i_6 - 1]))), (((((min(17, var_14))) ? (arr_51 [i_15] [i_15 + 1] [0] [i_15 - 1] [i_15 + 1] [i_17]) : (var_4 && var_16))))))));
                            }
                            for (int i_18 = 1; i_18 < 9;i_18 += 1)
                            {
                                var_37 = var_3;
                                var_38 = (min(var_38, ((((min(var_12, 82)) - (((((var_3 ? var_8 : 255))) ? var_13 : (arr_41 [i_6] [i_15] [i_6]))))))));
                                var_39 = (-var_2 / (((((-65643906 ? var_6 : var_17))) ? var_1 : ((((arr_1 [i_7]) ? var_9 : -6920073372240367758))))));
                            }
                            arr_60 [i_7] [i_15] = var_1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
