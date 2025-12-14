/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            var_14 = 4294967295;
                            arr_12 [i_2] &= 1;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_15 = (min(var_15, var_3));
                            arr_15 [i_3] [i_1] [i_2 + 1] [i_1] [i_5] = ((~((9175953243152726129 ? var_9 : (arr_4 [i_1])))));
                            arr_16 [i_2] [i_0] [i_2] [i_3 - 2] [i_3 - 2] [i_1] &= 0;
                            var_16 = ((((481036337152 ? -32767 : 23)) >> (-481036337152 + 481036337175)));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_2] [i_3 + 1] [i_6] [i_6] = ((((min(var_2, (arr_7 [i_0] [i_1] [i_2 - 1] [i_0])))) ? (arr_10 [i_6]) : (var_10 ^ 110)));
                            arr_22 [i_1] [i_6] [i_1] [i_3] [i_1] = var_8;
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_1] [i_3 - 2] [i_7] = var_11;
                            arr_27 [i_1] = (((max(var_12, (var_5 ^ var_6)))) & (min((~481036337146), var_5)));
                            var_17 = ((((max(65535, 65535))) ? var_1 : (min(var_10, (~65531)))));
                            arr_28 [i_0] [i_1] [i_2] [i_1] = (((((27484 ? var_7 : ((((9341275251703770105 > (arr_19 [i_0] [i_1] [i_2] [i_1] [i_1])))))))) ? (((-481036337148 / var_7) / 1)) : (min(-481036337152, var_7))));
                        }
                        var_18 = (max(var_18, (((var_2 != (((min((max(1, 45902)), (0 && var_6))))))))));
                        var_19 = (max(var_19, ((min(-481036337148, 481036337168)))));
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        arr_33 [i_1] = 116;
                        var_20 = var_1;
                        var_21 = (max(var_21, var_5));
                        var_22 *= (((!18) + var_6));
                    }
                    var_23 = ((((min(65535, (max(0, var_8))))) ? (((((~(arr_6 [i_0] [i_0] [i_0]))) ^ 1))) : (((((var_0 ? (arr_24 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) | ((1 ? 27481 : var_2))))));
                }
                arr_34 [i_1] [i_1] [i_1] = (((((var_10 ? 65528 : -481036337143))) < ((min((((arr_2 [i_0] [i_1]) ? (arr_5 [i_1]) : var_6)), var_4)))));
                arr_35 [i_1] = -481036337143;

                /* vectorizable */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_43 [i_0] [i_1] [i_9] [i_9] [i_10] [i_11 - 1] &= -481036337153;
                                arr_44 [i_1] [i_1] = var_7;
                                arr_45 [i_0] [i_1] = (((arr_18 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10] [i_11 + 2] [i_11 + 1]) > (arr_18 [i_10 + 1] [i_10 + 1] [i_11] [i_11] [i_11 - 1] [i_11 - 1])));
                                var_24 = (arr_25 [i_9] [i_10 - 1] [i_1]);
                                arr_46 [i_11] [i_0] [i_1] = ((!(arr_32 [i_10 + 1] [i_11 - 2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                var_25 = (min(var_25, 44618));
                                arr_54 [i_1] [i_1] [i_9] [i_12] [i_13] = var_3;
                                var_26 = (var_5 | 1618);
                                var_27 += ((!(((3 ? var_4 : var_7)))));
                                arr_55 [i_1] [i_9] [i_12 - 3] [i_1] = (((!var_7) >= -var_6));
                            }
                        }
                    }

                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        var_28 = (min(var_28, (((var_10 ? var_11 : -481036337152)))));
                        arr_58 [i_0] [i_0] [i_1] [i_14] = (((arr_47 [i_0] [i_1] [i_1] [i_9] [i_1] [i_14]) ? (arr_40 [i_0] [i_1] [i_9] [i_1]) : ((2 ? var_0 : 65535))));

                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            var_29 = var_4;
                            var_30 = (-1 || var_7);
                            var_31 = (((arr_14 [i_0] [i_1] [i_9] [i_14] [i_15]) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_14 [i_0] [i_1] [i_9] [i_14] [i_15])));
                        }

                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            var_32 = var_3;
                            arr_65 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = var_11;
                            var_33 = (((((var_3 ? (arr_31 [i_1]) : (arr_36 [i_0] [i_14])))) || (((var_0 ? 9223372036854775807 : -15291)))));
                            arr_66 [i_0] [i_1] [i_9] [i_14] [i_16] = ((arr_0 [i_0] [i_0]) ? (arr_47 [i_0] [i_0] [i_1] [i_9] [i_14] [i_16]) : var_9);
                            arr_67 [i_0] [i_1] = ((9 ? var_0 : var_12));
                        }
                        for (int i_17 = 0; i_17 < 19;i_17 += 1)
                        {
                            var_34 *= ((!0) ? 4294967294 : var_8);
                            var_35 -= (~30428);
                        }
                        for (int i_18 = 0; i_18 < 19;i_18 += 1)
                        {
                            var_36 = (var_8 > var_9);
                            var_37 = 124;
                            var_38 = (min(var_38, (arr_68 [i_0] [i_1] [i_9] [i_14] [i_18] [i_14] [i_14])));
                        }
                    }
                    for (int i_19 = 2; i_19 < 18;i_19 += 1)
                    {
                        arr_76 [i_0] [i_1] [i_1] = 65531;
                        var_39 = (min(var_39, 2147483392));
                        var_40 = (max(var_40, ((((arr_74 [i_19 - 1] [i_19 - 1] [i_9] [i_19 - 2]) ? 14 : var_12)))));
                        arr_77 [i_1] = ((1 ? (((4294967293 ? 15305 : (arr_73 [i_0] [i_0] [i_1] [i_9] [i_19])))) : var_8));
                    }
                }
            }
        }
    }
    #pragma endscop
}
