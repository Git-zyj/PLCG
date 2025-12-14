/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        var_15 = (969831872978291263 & var_10);

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_16 = (min((arr_9 [i_3] [i_3] [i_3]), var_1));
                            var_17 = (max((max(var_13, (arr_6 [i_3 - 4] [3] [3] [16]))), (arr_6 [i_3 - 4] [i_3] [22] [3])));
                            var_18 = (max(var_18, (var_10 && var_11)));
                            var_19 |= ((+((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_0)))));
                            var_20 = var_4;
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_21 ^= ((var_9 ? var_13 : (arr_2 [i_3 + 2])));
                            var_22 = (min(var_22, (arr_11 [18] [i_0] [i_1] [i_1] [i_2] [i_3 + 3] [i_5])));
                            var_23 = (arr_9 [i_3] [i_3] [i_3]);
                        }
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            var_24 -= (arr_15 [i_0] [i_1] [i_2] [i_0] [i_6]);
                            var_25 = (max(var_25, var_14));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_26 &= ((max((arr_19 [i_3 - 2] [i_0]), (arr_18 [i_3 - 4] [i_1] [i_0]))));
                            arr_23 [i_3] = (min((((min(var_3, var_14)) - (min(var_9, var_12)))), ((max((arr_20 [i_0] [i_3 - 2] [i_2] [i_0] [i_0] [1] [i_0]), 0)))));
                        }
                    }
                    var_27 = (((arr_1 [i_0] [i_1]) ? ((((var_13 ? (arr_4 [i_1]) : (arr_2 [i_0]))))) : var_14));
                    var_28 *= max((min(var_6, (arr_16 [i_0] [i_1] [i_2]))), (((var_9 ? (((arr_20 [i_2] [16] [1] [i_0] [i_0] [i_0] [i_0]) ? var_1 : var_4)) : (arr_0 [4])))));

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_29 = var_6;

                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_30 = -7597952616243868126;
                            arr_29 [i_0] [i_2] [i_2] [3] [i_0] [5] |= ((((-(arr_28 [i_2])))) ? ((var_7 ? 1433860797 : (((arr_5 [i_1] [21] [15]) - var_2)))) : (max((var_5 / var_3), ((var_6 ? var_3 : var_14)))));
                            var_31 |= ((-((var_7 ? var_0 : ((var_0 - (arr_2 [i_8])))))));
                            arr_30 [i_0] [i_1] [i_2] [i_8] [i_9] = var_4;
                        }
                        for (int i_10 = 2; i_10 < 21;i_10 += 1)
                        {
                            arr_35 [i_0] [4] [i_0] [20] [i_0] [i_10] [i_0] = -var_7;
                            var_32 = (((min((arr_20 [i_0] [21] [i_1] [i_0] [i_1] [i_0] [i_10]), var_2))));
                            var_33 = (min((arr_31 [i_1] [i_2] [i_10] [i_10 - 1]), (arr_8 [i_0] [i_2] [i_8] [i_10])));
                            var_34 = ((var_5 ? (min(((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] [i_0]) && 4))), (arr_18 [1] [21] [i_10]))) : (arr_26 [i_0] [11] [i_0] [i_0] [i_0] [9])));
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            arr_39 [i_0] [i_1] [7] [7] [i_11] = ((+(((((arr_11 [16] [i_11] [i_1] [14] [i_2] [i_8] [16]) ? var_6 : 12412934657244601635)) | var_10))));
                            var_35 = (max(var_35, var_10));
                            arr_40 [i_11] [i_1] [i_2] [i_8] [i_11] [i_11] [i_11] = (((1 ? 16881391866934386474 : -567580947)));
                            var_36 = ((!(((+(((arr_27 [1] [1] [i_2] [i_8] [i_8] [i_11]) ? var_10 : var_10)))))));
                            var_37 = (min((arr_16 [i_2] [i_2] [2]), ((var_2 ? -var_10 : (((var_3 ? var_0 : var_6)))))));
                        }

                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            var_38 = (((var_13 != var_4) >> (((((arr_32 [i_0] [17] [i_1] [i_2] [i_8] [i_8] [i_12]) ? (arr_32 [i_0] [i_1] [i_1] [i_2] [i_8] [i_8] [i_12]) : (arr_32 [i_0] [i_1] [19] [19] [i_2] [19] [i_12]))) - 2973781244346490347))));
                            arr_43 [i_0] [i_1] [19] [i_8] [i_12] [i_12] = ((~(((arr_32 [i_0] [1] [i_0] [i_1] [i_2] [i_8] [i_12]) ? (arr_32 [i_0] [i_1] [i_2] [i_8] [18] [i_8] [i_12]) : var_2))));
                            var_39 = ((var_12 ? (arr_7 [i_1] [4]) : (~var_14)));
                            var_40 = (arr_14 [18] [i_0] [i_1] [i_2] [i_0] [i_12] [i_12]);
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_41 = ((((((arr_37 [i_0] [i_1] [i_0] [i_8] [i_0] [i_13]) ? var_11 : (arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((((!(arr_20 [i_0] [i_0] [i_0] [i_1] [i_2] [6] [i_1]))))) : (min((arr_41 [i_0] [i_1] [i_13]), (arr_14 [i_0] [i_1] [i_1] [i_2] [i_13] [i_13] [i_13])))));
                            arr_47 [9] [9] [i_2] [9] [i_0] &= (min(var_6, ((((var_11 > (arr_21 [9]))) ? -var_14 : ((var_11 ? (arr_10 [21] [i_8] [i_8] [i_2] [i_1] [16]) : 4095))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_14 = 4; i_14 < 21;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            var_42 = var_14;
                            var_43 = ((((var_12 ? (arr_12 [i_0] [i_14] [i_0] [i_1] [i_0] [i_0]) : (arr_9 [i_14] [i_1] [i_0]))) != (arr_45 [i_0] [i_14 - 3] [1])));
                            var_44 = (arr_26 [i_14 - 3] [i_14] [15] [15] [i_14 - 2] [19]);
                            var_45 = (min(var_45, (((((arr_14 [i_0] [i_1] [i_2] [i_1] [i_15] [i_14] [i_15]) ? var_4 : var_6))))));
                        }
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            var_46 = var_9;
                            var_47 = ((((((arr_2 [i_0]) ? (arr_51 [i_16] [i_0] [i_2] [i_0] [i_0]) : var_7))) ? var_1 : (((var_8 <= (arr_53 [i_14] [i_16] [i_16]))))));
                        }
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            arr_58 [i_14] [12] = ((var_6 ? (arr_7 [i_2] [i_2]) : (var_8 & var_13)));
                            var_48 = (((arr_0 [i_14 + 2]) ? var_9 : var_7));
                            arr_59 [i_0] [i_0] [22] [i_14] [i_0] [i_0] [i_0] = var_12;
                            var_49 = var_4;
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            var_50 = ((-(((!(arr_45 [i_0] [1] [i_2]))))));
                            var_51 = (((((~567580938) + 2147483647)) >> ((((var_7 ? var_11 : (arr_61 [i_0] [1] [i_18]))) - 3241527016))));
                        }
                        var_52 -= ((var_4 ? (var_14 | var_10) : var_13));
                        var_53 = (max(var_53, (arr_32 [20] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                        var_54 = var_4;
                    }
                    var_55 = ((max(((var_14 ? var_11 : var_1)), (((var_13 ? var_8 : var_14))))));
                }
            }
        }
    }
    var_56 = var_2;
    #pragma endscop
}
