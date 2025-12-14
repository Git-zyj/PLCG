/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0 + 1] = ((((((var_7 < (arr_2 [i_0])))) + (arr_2 [i_0]))));
        var_10 = (min(var_10, var_0));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 *= (0 < 128);
                                arr_15 [i_0] [i_4] [i_4] [i_3] [i_4] = min((((arr_1 [i_0 - 1]) + (arr_8 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]))), ((255 ? 1 : (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                                var_12 = ((((((arr_13 [i_4]) + (arr_13 [i_4])))) ? (arr_2 [i_3]) : (arr_11 [10])));
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [i_2] = ((-((var_7 ? (!var_7) : (arr_8 [i_0] [i_1] [i_1] [i_2])))));
                }
            }
        }
        var_13 ^= ((((((max(var_9, (arr_14 [20] [i_0 + 1] [4] [i_0 + 1] [1] [i_0] [20])))) ? (((arr_13 [10]) ? var_9 : (arr_4 [1] [19]))) : ((((arr_6 [22] [i_0]) & (arr_6 [i_0] [i_0])))))) != var_4));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_20 [i_5] = ((((var_2 * (arr_8 [i_5] [i_5] [i_5] [i_5]))) + (arr_13 [0])));
        arr_21 [2] = (248 + var_2);
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    arr_28 [2] [0] = var_9;
                    var_14 = (((((0 ? 49791 : 255))) || ((((arr_11 [i_7 - 1]) ^ (arr_22 [i_7 + 2]))))));
                    var_15 = min(((max(69, 0))), (min((((arr_0 [i_6] [i_8]) << (var_7 - 91))), ((max(127, 1))))));
                    var_16 = (((arr_18 [i_6]) ? ((min(var_0, (arr_13 [i_6])))) : ((((((var_2 ? var_2 : var_3))) == (max((arr_14 [i_6] [i_7] [i_7 + 1] [i_7] [i_8] [i_7] [22]), var_6)))))));
                }
            }
        }
        arr_29 [1] = ((arr_7 [i_6] [i_6] [i_6] [i_6]) & 18446744073709551615);
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_17 *= ((-((var_7 ? (((arr_10 [i_9] [i_9] [i_9] [i_9]) ? var_0 : (arr_9 [i_9]))) : ((var_7 ? (arr_23 [i_9] [i_9]) : var_7))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 10;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 7;i_13 += 1)
                        {
                            {
                                var_18 = 18446744073709551615;
                                var_19 = (max(var_19, (((((max(var_8, (arr_7 [i_11 - 1] [i_11] [7] [i_11 + 1])))) ? (((arr_2 [i_9]) ? (max(var_9, var_4)) : 15745)) : (((((0 & 18446744073709551615) || var_6)))))))));
                                var_20 = (max(var_20, (((((min(var_1, (arr_8 [i_9] [i_11] [i_9] [i_13 - 2])))) ? (((arr_8 [i_9] [i_9] [i_9] [i_13]) + (arr_8 [7] [i_10] [6] [i_10]))) : ((((arr_8 [i_9] [i_10] [i_11 + 1] [i_12]) ? var_4 : var_1))))))));
                            }
                        }
                    }
                    var_21 = ((!((max(2147483647, 1)))));

                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        arr_46 [i_9] [i_11 + 1] [i_10] [i_14] [i_11 - 1] = (((arr_12 [i_11] [13] [13] [i_11 + 1] [i_11 + 1] [i_11 + 1]) != (18446744073709551615 + 22)));
                        var_22 = var_6;
                    }
                    for (int i_15 = 2; i_15 < 10;i_15 += 1)
                    {
                        arr_50 [i_9] [i_10] [i_9] [7] [i_15] = var_2;
                        var_23 = (arr_2 [i_9]);
                    }
                }
            }
        }
        var_24 = min(((max(930532644344979362, 60860))), 1822324889627092322);
    }
    /* LoopNest 3 */
    for (int i_16 = 1; i_16 < 16;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        for (int i_20 = 1; i_20 < 15;i_20 += 1)
                        {
                            {
                                var_25 = (min(var_25, (arr_62 [i_16] [9] [i_18])));
                                arr_64 [1] [1] [i_18] [i_19] [i_19] = (((((min(var_6, (arr_59 [14]))) + (211 != -97))) ^ (((max(127, 0))))));
                                var_26 = (max((min(((var_4 + (arr_5 [i_20 + 1] [i_19]))), (0 != 930532644344979353))), (((max(var_8, var_1))))));
                                arr_65 [i_16] [i_16] [i_19] = (min(((var_3 ? (max(var_6, (arr_54 [i_17] [i_17] [i_16]))) : var_2)), (min((arr_61 [i_20 + 4] [i_20] [i_19] [i_20] [8]), ((((arr_63 [i_19] [i_19]) * (arr_6 [i_17] [21]))))))));
                            }
                        }
                    }
                    arr_66 [i_16] [i_16] = ((((((arr_55 [i_16] [i_17]) != (max(16, 4294967295))))) < ((var_3 ? (max(var_0, (arr_9 [1]))) : (2 < 10122100908247932422)))));
                }
            }
        }
    }
    var_27 = ((var_8 ? (((1 + ((127 ? 272007638 : 8381779))))) : var_6));
    var_28 = var_0;
    /* LoopNest 2 */
    for (int i_21 = 2; i_21 < 17;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 19;i_22 += 1)
        {
            {
                arr_72 [i_22] = ((max(((var_5 ? (arr_10 [i_22] [2] [i_22] [i_21]) : var_3)), (!var_2))));
                var_29 = ((((-var_9 ? (1 >= -1) : (arr_61 [i_21 - 1] [i_22] [i_22] [i_21 - 1] [i_22]))) + (((((var_3 - var_1) >= (max(65516, 8580477393927489010))))))));
            }
        }
    }
    #pragma endscop
}
