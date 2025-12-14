/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1 + 3] [i_3] [i_3] [i_4] = (((((var_10 ? ((var_9 ? (arr_9 [i_0] [i_1 + 2] [i_2] [i_3] [i_3] [i_4]) : (arr_8 [i_2] [i_2]))) : ((((arr_2 [i_0] [i_0] [i_0]) != (arr_5 [i_0] [i_1] [i_2]))))))) ? (((arr_1 [i_1 - 1] [i_1 - 2]) ? -5721 : (max(var_11, var_10)))) : ((((var_1 ? var_5 : var_1))))));
                                var_14 = (max((min((arr_9 [i_4] [i_3] [i_2] [i_2] [i_1 + 2] [i_0]), (arr_10 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3]))), var_8));
                                arr_12 [i_1] [i_2] [i_1] &= (arr_10 [i_1 - 2] [i_1 - 2] [i_1 + 2] [i_1] [i_1] [i_1 - 3]);
                                var_15 = (arr_9 [i_0] [i_1 + 3] [i_4] [i_4] [i_4] [i_4]);
                                var_16 = var_7;
                            }
                        }
                    }
                    var_17 = (((((var_3 >= (arr_1 [i_1 - 2] [i_1 + 2])))) & (((arr_9 [i_0] [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_2]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 - 1])))));
                }
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    var_18 = (max((+-127), ((((arr_8 [i_5 - 1] [i_1 + 2]) >= ((62 ? (arr_10 [i_5 - 1] [i_1] [i_1 - 3] [i_1 + 3] [i_0] [i_0]) : 21963)))))));
                    arr_17 [i_1] [i_1] [i_5] [i_5] = (max((arr_8 [i_1 - 1] [i_1 - 4]), (min(var_4, 11969570742957185904))));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_19 = (min(var_19, (((arr_5 [i_0] [i_1 - 1] [i_6]) ? (((var_12 != var_3) ? ((-(arr_10 [i_0] [i_0] [i_0] [i_1 - 3] [i_0] [i_6]))) : (max(6477173330752365712, 11)))) : var_0))));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_20 *= (((arr_14 [i_7] [i_7] [i_6] [i_1 - 2]) ? ((max((arr_14 [i_7] [i_7] [i_7] [i_1 - 1]), (arr_14 [i_6] [i_6] [i_6] [i_1 - 1])))) : var_10));

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            var_21 *= (arr_21 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1]);
                            arr_26 [i_0] [i_0] [i_1] [i_0] [i_7] [i_8] = var_9;
                            var_22 = 127;
                            arr_27 [i_8] = (((arr_4 [i_8 - 1]) ? var_0 : 1152921229728940032));
                        }
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, ((max(((((((arr_7 [i_1] [i_1] [i_9]) ? var_1 : (arr_24 [i_0] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) >= var_3))), (arr_21 [i_9] [i_6] [i_1] [i_1 - 1] [i_1] [i_0]))))));
                        arr_30 [i_0] = ((((max((arr_6 [i_6] [i_9]), var_5))) ? (((((arr_20 [i_0] [i_0] [i_6] [i_9]) || (arr_6 [i_0] [i_0]))))) : (max((arr_13 [i_1 - 3]), (arr_20 [i_9] [i_6] [i_1] [i_0])))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                arr_37 [i_1] [i_6] [i_1] &= (max((min(184, (14756524178007446998 <= var_13))), (((((var_4 ? (arr_36 [i_0] [i_1] [i_6] [i_10] [i_11]) : var_9)) < (arr_16 [i_10] [i_1] [i_1] [i_1 - 4]))))));
                                var_24 = (var_2 / 1056964608);
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_40 [i_0] [i_1 - 4] [i_12] [i_12] [i_1 - 4] = ((+(max((var_5 / var_6), (var_2 / 11969570742957185904)))));
                        var_25 = (arr_4 [i_0]);
                        arr_41 [i_0] [i_1] [i_12] [i_12] [i_12] = arr_39 [i_12] [i_6] [i_0] [i_12];
                        arr_42 [i_12] [i_0] [i_6] [i_1] [i_12] = var_11;
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {

                        for (int i_14 = 2; i_14 < 18;i_14 += 1)
                        {
                            var_26 = ((168 ? 575037789 : (arr_8 [i_14 - 2] [i_1 - 2])));
                            arr_48 [i_14 - 1] [i_13] [i_6] [i_13] [i_0] = -111;
                        }
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            arr_52 [i_15] [i_13] [i_6] [i_13] [i_0] = (~14756524178007446983);
                            var_27 = (max(var_27, ((((((arr_39 [i_1] [i_1 + 3] [i_15] [i_6]) + 2147483647)) >> (((arr_39 [i_0] [i_1 + 2] [i_15] [i_15]) + 934617392)))))));
                        }
                        arr_53 [i_1 + 1] [i_6] [i_13] = var_3;
                    }
                }
                var_28 = (arr_51 [i_0] [i_0] [i_1] [i_1]);
            }
        }
    }
    var_29 = (max(var_29, ((var_4 / (min((18446744073709551613 * 8128), -62))))));
    var_30 |= var_8;
    #pragma endscop
}
