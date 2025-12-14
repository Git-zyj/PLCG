/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_5 != var_5);

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_12 = (((arr_3 [i_0 - 1] [i_0 - 1]) == ((var_4 ? var_5 : (arr_2 [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (min(((max(var_6, 0))), ((((min((arr_2 [i_0]), (arr_9 [i_0]))) != ((var_10 ? (arr_2 [i_0]) : 74)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [5] [1] = (((min((((var_3 ? var_9 : 2728759925))), (min(var_10, (arr_14 [9] [i_2]))))) < 1));
                                var_13 = (max(var_13, (((((-(arr_1 [i_0 - 1] [i_0 - 1]))) * ((((var_7 ? var_3 : 1757431479)))))))));
                                var_14 = (1 ? (((arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ^ (arr_1 [i_0 - 1] [i_0 - 1]))) : (((arr_11 [i_0 - 1] [i_0 - 1] [i_2] [i_2]) ? (~4799537881812442593) : (((var_7 ? (arr_15 [i_0] [i_0] [i_0] [i_3] [i_4]) : 1))))));
                                var_15 = arr_11 [2] [i_1] [i_2] [i_3 - 2];
                            }
                        }
                    }
                }
            }
        }
        var_16 = (arr_5 [2]);
        arr_17 [i_0] = (((arr_8 [i_0] [i_0 - 1] [i_0]) ? (arr_1 [i_0 - 1] [3]) : ((((var_5 ? (arr_13 [i_0] [i_0]) : var_5)) & ((max(var_1, (arr_14 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        var_17 ^= ((var_7 ? 21952 : (arr_11 [i_5] [i_6] [8] [i_6])));
                        arr_26 [i_5] [i_6] [i_8] [i_8] = ((var_2 ? (arr_23 [i_5 - 1] [i_5 - 1] [i_7] [i_5]) : (arr_23 [i_6] [i_5 - 1] [i_5 - 1] [i_5])));

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_18 = (arr_2 [i_5 - 1]);
                            var_19 = var_4;
                        }
                        var_20 = (((var_7 && var_5) || ((((arr_2 [i_5]) ? 9223372036854775806 : -12001)))));
                        var_21 |= ((arr_11 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_6]) ? (arr_19 [8] [i_8]) : var_5);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                {
                    var_22 = (arr_9 [i_5 - 1]);
                    arr_33 [i_5] [i_10] [i_5] = (((!(arr_11 [i_5 - 1] [i_10] [i_11] [i_11]))));
                    var_23 = (min(var_23, ((((arr_28 [i_5 - 1] [i_10] [i_11 - 1] [i_11] [i_10]) ? var_0 : 8455716864)))));
                    var_24 += ((-15 - ((var_7 ? 32764 : var_4))));
                    var_25 = ((0 / var_9) ? (arr_29 [i_5] [i_5]) : ((((arr_27 [9] [i_10] [i_11] [i_11] [i_11 - 1]) + var_4))));
                }
            }
        }
        var_26 ^= -21952;
        var_27 = ((4294967295 % (((arr_13 [i_5] [i_5]) ? var_4 : 1))));
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    arr_40 [i_5] = 1;
                    var_28 = (((var_6 < var_1) < (arr_19 [i_5] [i_5 - 1])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
    {
        arr_43 [i_14] [i_14] = (~var_5);
        var_29 = (arr_29 [i_14] [i_14]);
        /* LoopNest 2 */
        for (int i_15 = 4; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    arr_50 [i_16] [i_15] [i_16] = (arr_8 [i_15] [i_15] [i_16]);
                    var_30 = (min(var_30, (((1 ? 1226396925 : 13125314600347030109)))));
                }
            }
        }
    }

    for (int i_17 = 0; i_17 < 13;i_17 += 1)
    {
        var_31 = ((((!(((1474792196 ? 43503 : 15))))) ? (((((arr_23 [i_17] [i_17] [i_17] [i_17]) || (arr_12 [i_17] [i_17] [i_17] [3]))) ? var_10 : ((((arr_47 [i_17] [i_17] [i_17] [i_17]) ^ var_6))))) : 27355));
        /* LoopNest 2 */
        for (int i_18 = 1; i_18 < 9;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                {

                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        var_32 = (arr_2 [i_17]);
                        var_33 = (((((2327974357 ? ((var_5 ? (arr_30 [i_17] [i_19] [2]) : var_3)) : var_3))) - (((((var_5 ? var_8 : (arr_30 [i_17] [0] [i_17])))) ? ((var_6 ? 2347 : (arr_23 [i_17] [i_17] [i_17] [i_18]))) : (arr_46 [i_17] [i_18] [i_20])))));
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 13;i_22 += 1)
                        {
                            {
                                var_34 = (min(((((((13125314600347030110 ? (arr_19 [i_18] [i_17]) : var_10))) ? 1 : -var_9))), (min((arr_12 [i_18] [13] [i_18 + 4] [i_18 - 1]), ((286912003 ? var_3 : var_2))))));
                                arr_68 [i_17] [i_18] [i_17] [i_21] [i_22] = ((4294967295 ? ((((!((var_10 && (arr_64 [i_22] [i_21] [i_21] [i_19] [i_18] [i_17]))))))) : ((((((arr_0 [i_21] [8]) * -23440))) ? ((-11914 ? var_5 : var_7)) : 4219317459))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 = (((((((max(var_5, var_2))) ? ((var_3 ? var_7 : var_2)) : 812946231))) ? var_10 : -var_1));
    #pragma endscop
}
