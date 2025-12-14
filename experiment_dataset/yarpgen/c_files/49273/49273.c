/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_9, ((var_5 ? var_11 : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [3] [i_1] = ((2333726850 ? 13073665057661152643 : 2333726844));
                arr_7 [i_0] [i_1] = ((var_2 ? var_4 : ((((var_11 ? var_7 : (arr_1 [i_1])))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_15 = (arr_2 [i_2]);

                    for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, (arr_8 [i_0] [i_0])));
                        var_17 = (min(var_17, (((9223372036854775807 ? ((var_10 ? -var_1 : var_0)) : (arr_9 [i_0] [i_1]))))));
                        var_18 = (~var_12);

                        for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            var_19 = (max(var_19, (((((max(var_13, 37968))) ? ((((min((arr_5 [i_0] [i_1] [i_1]), 1243808058))) - var_5)) : (((((min((arr_8 [i_4] [i_1]), var_9))) ? var_12 : var_0))))))));
                            var_20 = 33554400;
                            var_21 = ((((min(var_9, var_10))) ? 5373079016048398972 : var_13));
                            arr_17 [i_0] [i_2] [i_2] [i_1] [i_2] = var_5;
                        }
                        for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [8] [i_1] [i_3] [i_5 - 1] = (arr_14 [i_1]);
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_5] [i_0] [i_1] = 2726667878;
                            var_22 = (max(var_22, 13073665057661152643));
                        }
                    }
                    for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_23 = (max(var_1, ((((((var_6 + (arr_15 [i_0] [i_2] [i_2] [13] [i_6])))) ? (arr_9 [i_1] [i_1]) : var_13)))));
                        arr_25 [i_0] [i_1] = (arr_0 [i_0] [i_0]);
                        var_24 = ((min((arr_1 [i_0]), (arr_9 [i_1] [i_1]))));

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_25 = (((-2147483640 ? (min(13073665057661152643, var_4) : ((((arr_26 [i_1] [5] [i_2] [i_1] [i_7]) - (-9223372036854775807 - 1))))))));
                            arr_28 [i_0] [i_1] [i_2] [i_1] [i_1] = var_1;
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, (((-771336376 ? (arr_29 [i_8] [i_2] [i_1] [i_0]) : -1435918931)))));
                        var_27 ^= var_3;

                        for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            var_28 = (((var_7 / (arr_31 [i_0] [i_0] [i_1] [i_2] [i_8] [i_8] [i_9]))));
                            var_29 = (((-9223372036854775807 - 1) ? (((arr_4 [i_0] [i_1] [i_0]) ^ var_7)) : (~32767)));
                            var_30 = (max(var_30, (arr_16 [i_2] [i_8])));
                        }
                        for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            var_31 = (max(var_31, var_12));
                            var_32 = (min(var_32, var_5));
                            var_33 ^= (arr_19 [i_8 + 1] [i_8] [i_8] [i_8] [i_8] [7] [5]);
                            var_34 = var_5;
                            var_35 = -9223372036854775807;
                        }
                        for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            arr_40 [i_1] [i_1] [i_0] [i_1] [i_11] = var_12;
                            var_36 = ((278738842 != (~var_10)));
                        }
                        for (int i_12 = 1; i_12 < 11;i_12 += 1) /* same iter space */
                        {
                            arr_43 [i_1] [i_8] [i_1] = var_3;
                            arr_44 [i_1] [i_1] = var_3;
                            arr_45 [i_1] [i_1] = (arr_31 [i_0] [i_1] [i_2] [i_8] [i_1] [i_1] [i_0]);
                        }
                    }
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    arr_49 [6] [i_1] [i_1] = (arr_32 [i_1] [i_1]);
                    var_37 = (max(var_37, var_11));

                    for (int i_14 = 2; i_14 < 13;i_14 += 1) /* same iter space */
                    {
                        var_38 = (arr_31 [2] [i_1] [i_13] [i_14] [i_14 - 1] [i_1] [i_14]);
                        var_39 = (min(var_39, (((((var_2 ? 5757911500633323592 : (arr_15 [i_0] [9] [i_13] [i_14] [i_14]))) == (~-122))))));
                    }
                    for (int i_15 = 2; i_15 < 13;i_15 += 1) /* same iter space */
                    {

                        for (int i_16 = 1; i_16 < 13;i_16 += 1)
                        {
                            arr_56 [i_0] [i_1] [i_1] [i_15] [i_16 - 1] = 2333726844;
                            var_40 = var_5;
                            var_41 ^= 5757911500633323594;
                        }
                        arr_57 [i_1] [i_15] = arr_9 [i_1] [i_1];
                    }
                    arr_58 [i_0] [i_1] [i_1] = (((arr_46 [i_0] [10] [i_0]) ? var_4 : ((var_13 ? var_0 : var_5))));
                }
                for (int i_17 = 1; i_17 < 12;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {

                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
                        {
                            var_42 = (min(var_42, var_9));
                            var_43 = var_13;
                            arr_69 [i_0] [6] [i_1] = (-9223372036854775807 - 1);
                            var_44 = (arr_36 [i_1] [i_17] [i_19]);
                        }
                        for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
                        {
                            arr_72 [i_1] = var_6;
                            arr_73 [i_0] [i_1] [i_18] [i_0] |= (((arr_30 [6] [i_1] [i_18] [i_1]) ? (arr_33 [i_20]) : (((arr_10 [i_1] [i_0]) * var_6))));
                        }
                        for (int i_21 = 0; i_21 < 14;i_21 += 1) /* same iter space */
                        {
                            arr_77 [i_17] [7] [i_17] [i_1] [i_1] = (arr_18 [i_0] [i_1] [12] [i_18] [i_0]);
                            arr_78 [i_0] [i_1] [i_17 + 2] [i_17 + 2] [i_1] = ((1321 ? ((var_13 ^ ((((arr_33 [i_21]) ? -633423978 : var_7))))) : ((min(-var_7, (arr_39 [i_0] [i_1] [i_1] [3] [i_21] [i_1] [i_17]))))));
                        }
                        arr_79 [i_1] [i_17] [i_1] [i_1] = ((-(((((-72 ? 2333726850 : 17))) ? (((arr_67 [i_0] [i_1] [i_17] [i_0] [i_0]) ? var_3 : var_3)) : var_13))));
                        arr_80 [i_1] [i_18] = ((-((2333726844 ? ((var_13 ? var_5 : var_4)) : var_6))));
                        arr_81 [i_1] = var_2;
                    }
                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 14;i_22 += 1)
                    {
                        var_45 = (var_10 * -122);
                        var_46 = (min(var_46, 523776));
                    }
                    var_47 *= ((+(min(((var_0 ? (arr_1 [i_0]) : var_3)), (arr_71 [i_0] [i_0] [i_0] [i_1] [i_17] [i_17])))));
                }
            }
        }
    }
    #pragma endscop
}
