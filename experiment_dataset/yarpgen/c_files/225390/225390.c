/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (((((2938755282059422190 ^ (arr_3 [i_1]))))) ? (arr_9 [i_2 + 2] [i_2 + 2] [i_2 + 3] [i_2 + 2]) : ((((var_10 ? 15285 : var_0)))));
                    arr_10 [i_1] = (((max((var_2 == 4294901760), 3221225472)) & (((-1784222864 ? var_5 : var_13)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                {
                    arr_19 [i_4] [i_4] = (((~5104158908624295916) >> ((9974 ? 43 : var_7))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_27 [i_7 - 1] [i_4] [i_7] [i_7] [i_6 + 1] [i_7] [i_5] = (((arr_23 [i_7] [i_7] [i_7 - 1] [i_7] [i_7]) < (!var_13)));
                                arr_28 [1] [i_4] [1] [i_7] [i_7 - 1] [i_6 + 1] [i_6] = 549755805696;
                                arr_29 [i_3] [i_7] [i_5] [i_6] [i_7] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        arr_32 [i_8] = arr_0 [i_8 - 1];
        var_16 = (arr_7 [i_8]);

        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            arr_36 [12] [i_9] [i_8] = (arr_8 [i_8] [i_8 + 1] [i_8 + 1] [i_8]);
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        arr_42 [i_8 + 1] [i_9] [i_10] [i_11] [i_10] = 1;
                        var_17 = ((~(arr_41 [i_8] [i_8] [i_10] [i_11] [i_8] [i_11])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_52 [i_9] [1] [i_9] [i_13] [i_8] = (((arr_38 [i_13 - 1] [i_9]) ? (var_1 / 1) : ((var_14 >> (var_11 - 18803)))));
                            var_18 += ((-5182252460985197701 ? (arr_1 [i_8] [i_8]) : var_11));
                            var_19 *= ((!(arr_30 [i_8 - 1] [i_12])));
                        }
                    }
                }
            }
        }
        for (int i_15 = 1; i_15 < 23;i_15 += 1) /* same iter space */
        {
            var_20 += (arr_31 [i_15]);
            var_21 = (max(var_21, (((~(arr_43 [i_15] [i_15] [i_8 + 1]))))));
        }
        for (int i_16 = 1; i_16 < 23;i_16 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 24;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        {
                            var_22 = (min(var_22, (((var_4 ? var_0 : var_7)))));
                            var_23 = (max(var_23, ((((arr_2 [i_8 + 1]) - var_3)))));
                        }
                    }
                }
            }
            var_24 = (var_12 + -var_6);
            var_25 = (min(var_25, var_12));
            var_26 ^= (arr_40 [i_16] [i_16] [i_16]);
            arr_69 [i_8 - 1] [i_8] [i_16 - 1] = (((arr_9 [i_8 - 1] [i_16] [i_16 + 1] [i_8]) ? (arr_68 [5] [5] [22] [i_16] [i_16] [i_16] [i_16]) : -var_4));
        }
    }
    for (int i_20 = 1; i_20 < 10;i_20 += 1)
    {
        var_27 = (max(var_27, 7712));
        arr_72 [i_20] [i_20 + 1] = ((!(arr_64 [i_20] [i_20 - 1] [i_20] [i_20 + 1])));
        arr_73 [i_20 + 1] [i_20] = ((-(arr_50 [i_20 + 1] [i_20 - 1] [i_20 + 1] [i_20] [i_20] [i_20] [i_20 + 1])));
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 11;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 11;i_22 += 1)
            {
                for (int i_23 = 3; i_23 < 10;i_23 += 1)
                {
                    {

                        for (int i_24 = 0; i_24 < 11;i_24 += 1) /* same iter space */
                        {
                            var_28 = (min((arr_25 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_23 - 1] [i_20] [i_23 - 3]), (arr_64 [i_23] [i_23 + 1] [i_23 - 1] [i_24])));
                            arr_85 [i_21] [i_21] [i_23] [i_24] &= var_7;
                        }
                        for (int i_25 = 0; i_25 < 11;i_25 += 1) /* same iter space */
                        {
                            arr_90 [7] [i_20] [i_22] [i_23] [i_25] = var_8;
                            arr_91 [i_20] [i_20] [10] [6] [i_25] = 43257;
                        }
                        for (int i_26 = 0; i_26 < 11;i_26 += 1) /* same iter space */
                        {
                            arr_94 [i_20] [i_21] [i_21] = var_11;
                            arr_95 [i_26] [i_26] [i_26] [i_26] [i_20] [i_26] = (!(arr_8 [i_23] [i_23] [i_23 - 2] [12]));
                        }
                        for (int i_27 = 0; i_27 < 11;i_27 += 1) /* same iter space */
                        {
                            arr_100 [i_20] [i_20 - 1] [i_20] [i_20] [i_20] [i_20] = 2251731094208512;
                            arr_101 [i_20] [i_23] [i_21] [i_20] [i_20] = 0;
                            var_29 = (!43239);
                            arr_102 [i_23 - 3] [i_23] [1] [i_23] [i_23] [i_20] = var_14;
                        }

                        for (int i_28 = 0; i_28 < 1;i_28 += 1)
                        {
                            var_30 = (max(var_30, (((max((arr_16 [i_20 - 1]), (arr_20 [i_28] [i_21] [i_22] [i_21])))))));
                            arr_107 [i_20] [i_21] [i_22] [i_20] [i_20] = ((var_0 ? var_8 : ((((arr_34 [i_28] [i_21] [i_20]) ? (arr_65 [i_20] [17] [i_22] [i_22] [1] [i_28]) : (arr_16 [i_22]))))));
                            arr_108 [i_22] [i_21] [i_22] &= (((~((max((arr_86 [i_20] [i_23] [i_23 - 1] [i_23] [i_23]), var_11))))));
                            var_31 = (((((-(arr_78 [i_28] [i_21] [i_20])))) ? (arr_11 [i_21]) : (((224 >= (arr_35 [i_23 - 3] [i_23 - 1]))))));
                            arr_109 [i_20 - 1] [i_21] [6] [i_20] [i_28] = -22657;
                        }
                        arr_110 [i_20] [i_20] [i_21] [i_21] = var_4;
                    }
                }
            }
        }
        arr_111 [i_20] = (!var_5);
    }
    var_32 = ((var_10 | 67553994410557440) * ((((max(var_6, var_6))))));
    #pragma endscop
}
