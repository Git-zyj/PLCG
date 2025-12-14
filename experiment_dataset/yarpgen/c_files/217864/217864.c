/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_11 ^= (max(((((max(var_10, -1))) ^ var_5)), var_1));
                var_12 ^= ((var_5 ? (var_0 / var_2) : (((-3 ? (var_0 && var_7) : ((var_5 ? (arr_4 [i_0] [i_1]) : var_5)))))));
                arr_5 [i_0] [i_1 + 1] = var_0;
                var_13 += var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_14 = var_0;
                                var_15 = (min((max((var_6 / var_3), var_7)), ((((var_1 << var_1) - (arr_10 [i_2] [2] [i_2]))))));
                                var_16 = var_10;
                                var_17 = var_3;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_18 = (i_2 % 2 == 0) ? (((((((arr_18 [i_3] [i_2]) > var_0))) << (((arr_17 [i_2] [i_2] [i_2]) + 124))))) : (((((((arr_18 [i_3] [i_2]) > var_0))) << (((((arr_17 [i_2] [i_2] [i_2]) + 124)) - 12)))));
                    var_19 ^= var_9;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((((arr_22 [13] [i_7] [i_7] [i_8] [i_8 + 1] [i_9] [i_3]) - var_9)))));
                                var_21 = (var_2 & ((-1279650598 ? (arr_8 [i_2] [i_2] [8]) : var_3)));
                                arr_23 [i_2] [i_2] [i_7] [i_2] [i_2] = ((var_8 && (((var_8 * (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_22 ^= (((((2047 ? var_4 : var_2))) ? (((var_9 < var_5) ? var_0 : (((var_8 ? (arr_14 [i_2] [i_3] [i_3] [i_10]) : (arr_16 [i_2] [i_10] [i_2] [i_2] [i_2] [i_2] [i_2])))))) : (((1 ? ((var_2 << (((arr_14 [i_10] [i_3] [i_3] [i_2]) - 37982)))) : (var_5 - -22025))))));

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_23 = (min(var_23, -1279650607));
                        var_24 += var_5;
                        var_25 = var_3;
                    }
                    for (int i_12 = 2; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, ((((var_10 ? (((max(32767, var_10)))) : var_0)) != ((max(var_8, var_9)))))));
                        var_27 = (min(((var_5 / (var_10 < var_4))), ((((var_3 > 134217727) == 17708261455756469697)))));
                    }
                    for (int i_13 = 2; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        var_28 = var_4;
                        arr_35 [i_2] [i_3] [i_3] [i_13] [i_2] = 91;
                        var_29 += ((-1 * (((arr_34 [i_10] [i_13 + 1] [i_10] [i_13]) ? (((var_0 ? var_10 : 27))) : 1893059998284511682))));
                        var_30 = var_3;
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_31 ^= var_2;
                                var_32 = var_2;
                                var_33 ^= ((((((((max(var_4, (arr_7 [i_10])))) <= ((var_3 ? 7878 : var_10)))))) <= (arr_13 [i_14 + 2] [i_14 + 2] [i_14 + 4] [i_14 + 1] [i_14])));
                            }
                        }
                    }
                }
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    var_34 = (((((2 | (((var_2 || (arr_22 [i_2] [i_3] [i_3] [i_3] [9] [i_16] [i_16]))))))) || ((((29 | var_9) & ((var_6 ? var_7 : var_6)))))));
                    var_35 ^= var_1;
                    var_36 += ((((-41 ? 227 : (arr_17 [i_2] [i_16] [18]))) & (((var_0 ? (arr_31 [18] [i_16] [i_2] [1] [2] [i_16]) : (arr_43 [i_16] [i_16]))))));
                    var_37 = (min((arr_30 [i_3] [i_3] [i_3] [i_2]), (arr_39 [i_3] [i_2])));
                    arr_45 [0] [i_2] = (arr_7 [i_2]);
                }
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    var_38 ^= ((((((var_2 < (0 / var_6))))) / var_2));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 17;i_19 += 1)
                        {
                            {
                                var_39 ^= (((6698 ? ((18446744073709551615 ? var_3 : var_0)) : var_8)));
                                var_40 ^= (max((max(0, (min(var_0, var_5)))), var_7));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
