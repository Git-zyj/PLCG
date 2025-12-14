/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_3 ^ ((min(25212, 25207))))) << ((((((~(109 | 109))) + 113)) - 3))));
    var_16 = 20500;
    var_17 = (min(var_17, var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_18 = (((2443296122 % -28541) == 20496));
                    arr_9 [i_1] [i_1] [i_2] [i_2] = (((~43688) ^ 2443296122));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_14 [18] [i_1] = ((-(!0)));
                    var_19 *= 1;
                }
                var_20 = ((((1851671170 ? var_1 : 15895445311222944766)) | (max((arr_11 [i_1] [i_0 - 1] [i_0]), var_12))));

                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_1] [i_0 - 1] [i_0] [i_0 - 1] = ((-(arr_16 [i_1])));
                                arr_26 [i_0] [i_1] = var_0;
                                arr_27 [i_1] [i_1] [i_1] = (arr_23 [i_1] [i_1]);
                            }
                        }
                    }
                    var_21 = (arr_15 [i_0] [i_1] [i_4]);
                    var_22 = var_10;
                }

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        var_23 = var_2;
                        var_24 *= ((((min((arr_3 [2] [i_0]), (arr_28 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1])))) | var_8));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {

                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            var_25 = (min(var_25, (arr_32 [i_10] [i_9] [i_1] [i_0])));
                            arr_39 [i_0] [i_1] [i_1] [i_0] [i_10] = var_1;
                            var_26 = arr_5 [i_10 - 2] [i_0 - 1] [i_0];
                            var_27 = (arr_1 [i_0]);
                            arr_40 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = var_4;
                        }
                        var_28 = ((-(((~var_7) >> ((((3037966892 >> (var_7 + 84))) - 741667))))));
                        arr_41 [i_0] [i_0] [i_1] [i_0 - 1] [17] = (max((((arr_18 [i_0 - 1] [i_1] [2] [i_0 - 1]) / ((~(arr_22 [9] [i_1] [i_7] [1]))))), -var_6));
                    }
                    /* vectorizable */
                    for (int i_11 = 3; i_11 < 17;i_11 += 1)
                    {
                        arr_44 [i_0 - 1] [i_1] [i_1] [i_11] = (arr_29 [i_1] [i_11 + 2] [i_11 - 1]);
                        var_29 = (arr_0 [i_0] [i_0 - 1]);
                    }
                    var_30 ^= (arr_31 [i_0] [i_0] [i_1] [i_1] [i_7]);
                    var_31 = ((!(+-20490)));
                    var_32 = ((((arr_31 [i_0 - 1] [i_0] [i_1] [i_7] [i_7]) << (((arr_31 [i_0 - 1] [17] [17] [i_7] [i_7]) - 14746690128011838359)))));
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 1;i_12 += 1)
                {
                    arr_47 [i_1] [10] [i_12] [i_1] = ((~(arr_29 [i_1] [i_1] [i_1])));
                    var_33 = -var_13;
                    arr_48 [i_1] [i_1] [i_1] = var_1;

                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        var_34 ^= ((-(~var_0)));
                        var_35 = 1851671168;
                        var_36 = ((var_6 == (arr_15 [i_0] [i_12 - 1] [i_13 + 2])));
                    }
                    for (int i_14 = 1; i_14 < 15;i_14 += 1)
                    {
                        var_37 = (((arr_30 [i_14 - 1]) ? var_4 : (arr_38 [i_14] [i_14] [8] [i_14 + 2] [i_14])));
                        var_38 = (((2576281787 ? 1257000403 : 4294967293)));
                        arr_55 [i_1] [i_1] [i_12] [i_14 - 1] = var_7;
                        var_39 ^= 45036;
                        arr_56 [i_0 - 1] [16] [i_0 - 1] [i_0] [i_1] = (3730615515 && 20503);
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {

                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            var_40 = var_1;
                            var_41 = (((arr_54 [i_0] [i_0 - 1] [i_0 - 1] [i_12 - 1]) ? (arr_1 [i_0 - 1]) : var_0));
                            arr_62 [i_12] [i_12] [i_12] [i_1] [i_12 - 1] = -20496;
                        }
                        for (int i_17 = 0; i_17 < 19;i_17 += 1)
                        {
                            var_42 *= var_7;
                            arr_66 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_15] [i_1] = (arr_37 [i_0 - 1] [i_12 - 1] [i_15]);
                            var_43 |= ((31 == (-32767 - 1)));
                        }
                        var_44 = (arr_43 [i_0 - 1] [i_1] [i_0 - 1] [i_15] [i_12 - 1] [i_0 - 1]);
                        arr_67 [i_0] [i_1] [i_1] [i_15] [i_15] = -3724611547215112175;
                        var_45 = (arr_17 [i_0 - 1] [i_12 - 1] [i_12 - 1]);
                    }
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        arr_70 [i_0] [i_1] [6] = (1423042723 ^ 7);
                        var_46 = (max(var_46, (((-((0 % (arr_10 [i_0] [i_1] [i_12] [i_18]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
