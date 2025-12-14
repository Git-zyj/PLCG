/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_0] [i_4] [i_3] [i_4] = (~(arr_4 [1] [i_0]));
                                var_11 = -525;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_18 [3] [i_1] [i_0] [i_5] = -4503599358935040;
                        arr_19 [8] [i_1] [i_1] [i_1] [i_1] [8] &= ((!(((((1 ? (arr_12 [i_2] [4] [i_2] [i_5] [i_0]) : var_7)) | (!var_2))))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_12 = (max(var_12, ((~(!var_4)))));
                            var_13 ^= 262128;
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            arr_26 [1] [i_1] [i_2] [i_5] [i_0] = var_2;
                            arr_27 [i_0] [i_1] [i_0] [4] [i_7] = (min(((((max(66, (arr_8 [12] [i_0] [0] [1])))) ? (max(30720, 10070048892614391818)) : ((max(var_6, var_10))))), var_7));
                            var_14 = 1498737842;
                            var_15 = 3661;
                            arr_28 [i_0] [12] [i_7] = ((var_0 ? ((max((arr_4 [i_0] [i_0]), 42))) : (max(var_2, (((arr_10 [0] [i_1] [i_0] [12]) ? (arr_11 [i_5] [i_2]) : var_5))))));
                        }
                        arr_29 [i_0 + 2] [i_0] = 14;
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        arr_34 [6] [i_1] [i_1] [i_0] [i_2] [6] = (max((max(1, (arr_0 [i_0 - 3] [i_0 + 1]))), -108));
                        arr_35 [i_0 + 2] [5] [i_0 + 2] [i_0] = ((arr_0 [i_0 - 1] [i_0 - 2]) ? (((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0 + 2] [i_0 + 2]) : (arr_0 [i_0 + 1] [i_0 + 2]))) : ((((arr_0 [i_0 + 2] [i_0 + 1]) || (arr_0 [i_0 - 1] [i_0 - 2])))));
                        var_16 = 1;
                        arr_36 [i_0] [i_1] [i_2] [i_2] [i_8] [i_8] = 1572665936184243972;
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 10;i_10 += 1)
                        {
                            arr_44 [i_0 + 2] [i_1] [i_2] [7] [i_10] [i_0] = var_2;
                            var_17 = 18127;
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            var_18 *= ((-(arr_24 [i_2] [i_9] [i_2] [i_0 - 2] [i_2])));
                            arr_47 [i_0] [i_1] [8] [i_9] [i_0] = (arr_38 [i_0] [11] [i_2] [i_9]);
                            var_19 = ((~(arr_17 [i_11] [i_0] [i_0])));
                        }

                        for (int i_12 = 1; i_12 < 12;i_12 += 1)
                        {
                            arr_50 [i_0] [i_0] [1] [i_2] [i_9] [i_0] = min((((arr_17 [i_0] [i_0] [i_0]) ^ var_10)), ((min((arr_24 [i_0] [i_12 + 1] [i_2] [i_9] [i_0]), (arr_9 [i_0] [i_12 + 1] [i_2] [i_9] [i_0 - 3])))));
                            var_20 = (min((0 % -198367189), ((var_1 ? var_6 : 1))));
                            arr_51 [i_0] [i_1] [i_0] [i_2] [i_12 + 1] = max(var_9, (arr_10 [i_0] [i_0] [i_0] [i_0 - 1]));
                        }
                        var_21 = (12 != -3073549483488477249);
                    }
                    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                    {
                        arr_54 [i_0] [i_1] [i_0] [i_13] = (max(((-(arr_38 [i_0] [10] [11] [i_0 + 1]))), ((1 ? (arr_4 [i_0 - 3] [i_0]) : (arr_0 [i_0 - 2] [12])))));

                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            arr_57 [i_0] [i_1] [i_0] [0] [9] [8] = ((((max((-19 + var_5), (arr_3 [10] [i_0 - 1])))) ? (arr_15 [i_0 + 1] [i_0] [9] [i_2]) : 77));
                            var_22 = (~-4503599358935044);
                            var_23 = (arr_37 [i_0] [i_1] [i_0] [i_13]);
                            var_24 = (min(var_24, (((((((((arr_49 [i_0] [i_2] [i_2] [i_14] [i_2]) ? 165891747 : -3647))) && (((var_8 ? var_1 : var_6))))) ? 1 : (-2147483647 - 1))))));
                            var_25 = (max(var_25, (arr_38 [i_1] [10] [i_2] [12])));
                        }
                        arr_58 [i_0 - 2] [9] [i_0] [i_0] = (arr_0 [i_13] [i_1]);
                        var_26 = ((((((arr_21 [i_0] [i_0 - 1]) ? -2 : (arr_21 [i_0] [i_0 + 1])))) ? (((arr_21 [i_0] [i_0 + 1]) / 6765)) : (((arr_21 [i_0] [i_0 + 2]) ? var_8 : (arr_21 [i_0] [i_0 - 3])))));
                        var_27 = ((1 ? ((((arr_0 [i_0 - 3] [1]) ? (arr_11 [i_0] [i_0 - 3]) : (arr_13 [i_0 + 2] [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 - 2])))) : (((max(var_1, 17282)) >> (var_4 - 2936019969221201784)))));
                    }
                }
            }
        }
    }
    var_28 &= (max((((~(!-42)))), (max(56, ((var_3 ? var_2 : var_6))))));
    var_29 = (max(var_29, ((1 ? var_10 : (var_7 + -1)))));
    #pragma endscop
}
