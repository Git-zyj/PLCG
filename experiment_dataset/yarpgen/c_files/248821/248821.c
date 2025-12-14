/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_15 = var_3;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [2] = ((var_4 ? (((arr_6 [11] [11]) ? var_7 : -87)) : var_11));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = -109;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_15 [6] [0] [i_4] = (~-32);
            arr_16 [i_3] = var_6;
            var_16 = -26;
            arr_17 [i_3] = ((arr_0 [4]) ? (arr_14 [i_3] [10]) : (arr_14 [i_3] [i_3]));
            var_17 = 1;
        }
        var_18 = (max(var_18, ((((arr_6 [i_3] [i_3]) <= 1)))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_19 = (min(var_19, 1));
            var_20 = 1;
        }
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_37 [i_10] [i_10] = (((((((((36 ? -1 : 23038)) + 2147483647)) << (2 - 2)))) % ((3949151873179642376 ? -932467940431950695 : 36942))));
                                var_21 = (-9223372036854775807 - 1);
                                arr_38 [10] [7] [i_10] [9] [9] [i_10] = ((((min(1, (max((arr_14 [i_5] [i_5]), (arr_30 [6] [6] [6] [6] [i_5] [6])))))) && -631259388));
                                var_22 = (min(var_22, (((-1 ? -8 : 4026531840)))));
                                arr_39 [i_10] [i_10] [i_7 - 2] [i_8] [i_8] = ((!((min((255 / -17), (min(var_8, 7)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_23 = (1 ^ 438562479);
                                arr_46 [i_12] [i_12] [8] [i_11] [i_12] = (~85);
                            }
                        }
                    }
                    var_24 = 3789686008;
                }
            }
        }
        var_25 = (min(var_25, (arr_10 [i_5])));

        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            arr_50 [8] [i_5] [8] = ((((max((arr_40 [i_13]), (((!(arr_13 [i_5] [i_5]))))))) ? (arr_30 [1] [1] [1] [5] [1] [i_5]) : ((3820053316259197442 / (((arr_13 [i_13] [i_5]) + (arr_13 [i_5] [i_13])))))));

            for (int i_14 = 1; i_14 < 9;i_14 += 1)
            {
                var_26 = var_0;
                arr_53 [i_5] [i_13] [i_14 + 1] [i_14] = ((!(((max((arr_12 [i_13]), (arr_33 [i_14 + 1] [1] [11] [1])))))));
            }
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                arr_57 [6] [i_13] [1] = ((~((((-8 ? var_0 : (arr_30 [i_15] [i_15] [6] [i_5] [6] [i_5]))) & 15))));
                var_27 = ((9223372036854775807 || (((13 ? (arr_21 [i_5] [i_13] [i_15]) : 15)))));
                var_28 = (min(var_28, (((var_12 ? (((((arr_19 [4]) - var_7)))) : ((((arr_56 [3] [0] [3]) / var_1))))))));
            }
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                arr_60 [i_5] [11] [1] [3] = (((((0 ? 18218 : 216))) ? 2773676271 : ((max((((arr_14 [i_5] [i_13]) ? (arr_29 [i_16] [i_16]) : var_13)), (arr_24 [i_5]))))));
                var_29 = (arr_30 [0] [i_5] [0] [i_5] [i_5] [i_5]);
            }
            var_30 = (max(var_30, (((+(((((arr_36 [10] [1] [10] [10] [9]) ? var_6 : (arr_3 [i_5]))) % (((7 ? 1 : 1))))))))));
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 12;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 12;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 11;i_20 += 1)
                        {
                            {
                                var_31 = (((arr_31 [i_5] [i_20 + 1] [i_5] [2] [i_20]) * (((arr_31 [9] [i_20 + 1] [6] [i_5] [i_5]) ? (arr_31 [i_5] [i_20 - 1] [i_20 - 1] [i_17] [i_20]) : (arr_31 [i_5] [i_20 - 1] [i_5] [i_5] [i_20])))));
                                var_32 = (max(var_32, ((max((arr_68 [1] [1] [i_18]), ((+((var_8 ? (arr_72 [i_5] [4] [10] [5] [i_17] [i_5]) : var_8)))))))));
                                arr_74 [i_5] [i_17] [i_19] [i_20 - 2] = (~(arr_33 [i_5] [9] [i_5] [i_20 - 1]));
                            }
                        }
                    }
                    arr_75 [i_5] [i_5] [i_5] = (--104);
                    var_33 = var_6;
                }
            }
        }
    }
    var_34 = ((-1 ? ((~((-1094911337 ? 6194912149985732674 : -938)))) : -30704));
    var_35 = ((-((max(var_2, var_13)))));
    #pragma endscop
}
