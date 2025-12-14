/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    var_13 = (((arr_5 [i_1] [i_2 - 3] [i_2 - 2]) == var_12));
                    arr_6 [i_2] [i_1] [3] = 88;
                    arr_7 [i_1] [i_1] [i_2] = var_5;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 = ((var_9 ^ (arr_9 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 - 4])));
                        var_15 = (max(var_15, 52861));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_16 = (i_1 % 2 == zero) ? ((((arr_13 [8] [i_1] [i_1] [i_1] [i_0]) << (((arr_13 [i_0] [i_1] [i_2 - 2] [i_4] [i_4]) - 12051))))) : ((((arr_13 [8] [i_1] [i_1] [i_1] [i_0]) << (((((((arr_13 [i_0] [i_1] [i_2 - 2] [i_4] [i_4]) - 12051)) + 8439)) - 13)))));

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_17 = (((~var_0) ? (arr_2 [i_0] [i_4]) : ((~(arr_5 [i_1] [i_1] [i_1])))));
                            var_18 = (arr_13 [i_0 - 1] [i_1] [i_0] [i_0 + 1] [i_0 + 1]);
                        }
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            var_19 = 85;
                            var_20 = ((var_9 ? (arr_4 [i_0 + 1] [i_6 - 2]) : (arr_3 [i_0 + 1] [i_1])));
                            var_21 ^= (var_2 ? var_3 : var_3);
                            arr_18 [i_0] [i_0] [i_0] [i_4] [i_6] [i_1] [8] = ((var_10 ? var_5 : var_3));
                            var_22 = (((arr_17 [i_6 + 2] [i_1] [i_2 + 1] [i_0 + 1] [i_6]) ? var_5 : (arr_14 [i_6 - 2] [i_1] [i_2 - 3] [i_0 - 1] [i_2 - 3])));
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            var_23 = (arr_13 [i_0 + 1] [i_1] [i_4] [i_7] [i_7 - 1]);
                            var_24 = (((((var_11 - (arr_10 [i_0] [i_0] [5] [5])))) ? var_4 : (arr_12 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_23 [i_0 - 1] [i_4] [i_2] [i_4] [i_8] &= (((arr_5 [i_8] [i_8] [i_2 - 1]) ? var_5 : var_11));
                            var_25 = ((~(~88)));
                            var_26 = (55309 * 5012);
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_27 = (var_5 ? (arr_5 [i_1] [i_0 - 1] [i_1]) : (var_8 ^ 42));
                        arr_29 [i_1] = -var_2;
                    }
                    arr_30 [3] [3] [i_1] = max(70, (((-82 + 2147483647) << (81 - 81))));
                }
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    var_28 |= (max(((max(var_3, 1050))), (max(((max(var_3, 730737482))), ((var_5 ? var_12 : var_0))))));
                    arr_33 [i_1] [i_1] = var_9;
                    arr_34 [i_1] [i_1] [i_11] = var_0;
                }
                for (int i_12 = 1; i_12 < 14;i_12 += 1)
                {

                    /* vectorizable */
                    for (int i_13 = 3; i_13 < 14;i_13 += 1)
                    {
                        var_29 = (min(var_29, var_1));
                        var_30 = (max(var_30, var_6));
                        var_31 = (arr_15 [i_0] [i_1] [5]);
                        arr_42 [i_1] [i_1] [i_12] [i_13 + 1] = (((arr_16 [i_12] [i_12] [i_12 + 2] [i_12 + 1] [4] [9] [i_12 - 1]) <= var_12));
                    }
                    var_32 = (min(var_32, (((-(max(70, 329873447)))))));
                    arr_43 [10] [i_1] [10] [i_12] |= ((((var_5 ? (arr_32 [1]) : var_9)) | 71));
                    var_33 ^= var_2;
                }
                var_34 ^= ((((-1451089576 ? -8378419125189145372 : 123)) - (((var_11 ? (arr_20 [14]) : (arr_20 [0]))))));
                var_35 ^= var_3;
                var_36 -= (max(730737482, var_7));

                for (int i_14 = 2; i_14 < 13;i_14 += 1)
                {
                    var_37 ^= ((((((-(arr_4 [i_0] [i_1]))) ? var_7 : (arr_5 [i_14] [i_1] [i_1])))));
                    arr_48 [i_1] = var_4;
                    var_38 = (min(var_38, (((-((var_11 ? (max(4072542501, 2483676819)) : (arr_39 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_14] [i_0 + 1] [0]))))))));
                }
                for (int i_15 = 4; i_15 < 13;i_15 += 1)
                {
                    var_39 = (arr_2 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 12;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 13;i_17 += 1)
                        {
                            {
                                arr_58 [i_1] = -6941505069667139353;
                                var_40 = (((((arr_55 [i_0 + 1] [9] [i_0] [i_16]) ? (((arr_17 [i_15] [i_1] [i_1] [i_16] [i_17]) % (arr_27 [i_1] [i_1] [i_15 + 2] [i_1] [i_1] [i_0]))) : (((((arr_51 [i_0] [i_0] [i_0] [4]) + 2147483647)) >> (arr_24 [i_17]))))) | (arr_19 [i_0] [i_1] [i_15] [5] [i_17])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_18 = 4; i_18 < 12;i_18 += 1) /* same iter space */
                    {
                        var_41 = (1811290476 | 1621738959);
                        var_42 = (((!1562165606) ? (arr_35 [i_0 + 1] [i_18 + 4]) : 81));
                    }
                    for (int i_19 = 4; i_19 < 12;i_19 += 1) /* same iter space */
                    {
                        var_43 = ((max((-4919278957868574123 - 1), var_9)));
                        arr_65 [i_0] [14] [i_1] [i_0] = var_8;
                    }
                    for (int i_20 = 4; i_20 < 12;i_20 += 1) /* same iter space */
                    {
                        var_44 *= (((((arr_54 [i_0] [i_0 - 1] [i_1] [i_1] [i_20 + 2] [i_1]) ? ((max((arr_5 [i_15] [i_1] [i_20]), 31926))) : ((-2060893938 ? var_0 : var_7)))) >> ((((max(var_11, 0))) - 52575))));
                        var_45 &= ((36 ? 2483676817 : 28800));
                    }
                }
            }
        }
    }
    var_46 = 222424786;
    var_47 = -82;
    #pragma endscop
}
