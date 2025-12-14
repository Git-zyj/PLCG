/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    var_12 = (min(var_12, 32));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((((!((max((-9223372036854775807 - 1), (arr_12 [i_0] [i_3] [i_2] [i_2] [i_4]))))))))));
                                var_14 = ((var_3 ? (min((arr_7 [i_2 - 1] [i_4] [i_2] [i_3] [i_0] [11]), var_3)) : (!var_5)));
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [i_2] = (min(((-(~var_0))), ((((arr_0 [i_0] [i_0]) ? 7 : (((!(arr_12 [i_1] [i_1] [i_2] [i_3] [4])))))))));
                                arr_14 [i_4] [i_4] [10] [i_1] [i_1] [i_1] [i_0] = (((var_2 <= var_9) ? (((arr_5 [i_2] [i_2] [i_2 + 1] [i_3]) ? ((((arr_9 [i_0] [i_0] [i_0] [i_3] [i_4]) == 32))) : -724639965)) : -32760));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        arr_18 [i_1] [i_5] = var_10;
                        arr_19 [i_0] [i_1] = ((-(arr_12 [i_1] [i_1] [i_2] [i_2] [i_1])));
                        arr_20 [1] [i_1] [i_2] [i_0] |= ((+((var_5 << (((arr_7 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) - 72))))));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_15 *= (((arr_21 [i_1 + 1] [1] [i_5 + 4] [i_6] [i_6]) / (arr_21 [i_1 + 1] [i_2] [i_5] [5] [i_5])));
                            var_16 *= ((~((~(arr_16 [i_0] [6] [i_2] [i_2])))));
                            arr_23 [i_0] [i_0] [i_1] [i_1] [i_0] = (-(((arr_11 [i_0] [i_1] [i_5] [i_5] [i_5] [i_0]) ? -2147483640 : (arr_15 [i_1]))));
                        }
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            var_17 = (arr_9 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_5 - 3] [i_7]);
                            arr_26 [i_7] [i_1] [i_2] [i_1] [i_0] = ((((-(arr_7 [i_0] [i_1] [i_2] [i_5] [i_1] [i_1]))) == (arr_17 [i_1 - 1] [i_5] [i_5 + 2] [i_5 + 2] [i_7 - 1])));
                            arr_27 [i_1] [i_1] [i_2] [i_5] [i_2] = (arr_5 [i_1] [i_2] [i_2 + 1] [i_7 + 1]);
                        }
                        arr_28 [i_1] = arr_2 [i_0] [i_0];
                    }
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        var_18 = (((((-(arr_2 [i_0] [i_1 + 1])))) ? ((min((arr_30 [i_1] [i_1] [i_1] [i_8]), (32 & -32760)))) : (max(var_4, (arr_5 [i_8] [i_8] [i_8 - 2] [i_8])))));

                        for (int i_9 = 2; i_9 < 8;i_9 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_1] [i_2] [i_1] = (!1);
                            var_19 = (min(var_19, ((max(((-((-724639965 ? (arr_25 [i_8] [6] [0] [i_8] [i_0]) : (-2147483647 - 1))))), (arr_6 [i_0] [i_2] [i_2] [i_9]))))));
                            arr_34 [i_1] = arr_1 [i_1 - 1] [i_8];
                        }
                        var_20 = (min(((((arr_30 [i_0] [i_0] [i_1] [i_8 + 1]) ? 1 : (arr_21 [i_0] [i_1] [i_2 + 1] [i_8 + 2] [i_1])))), var_0));
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        var_21 = (min(((((((arr_31 [i_1] [i_2] [i_2] [0] [i_1] [1]) ? var_7 : var_5))) ? (var_10 * var_7) : (((arr_35 [i_1] [1] [i_10]) / (arr_35 [i_1] [i_2] [i_10]))))), ((((arr_15 [i_1]) > (!724639992))))));
                        var_22 = (min(var_22, (((!(((((((arr_17 [i_0] [i_1 - 1] [i_1 - 1] [i_10] [i_0]) ? 32767 : var_10))) ? var_7 : (arr_29 [i_0] [i_0] [i_0] [i_2] [i_0])))))))));
                        var_23 = ((((arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 1]) ? (arr_10 [6] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1]) : (arr_36 [i_1] [i_1 - 1]))) * 7001);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                    {
                        var_24 = 29;
                        var_25 = (~var_4);
                        var_26 ^= (((arr_9 [i_0] [i_1] [i_2 - 2] [i_2] [9]) ? (~80) : (arr_17 [i_0] [i_1] [i_1 + 1] [i_1 - 1] [i_0])));
                        arr_39 [i_1] = (~-32746);
                        var_27 -= (~2147483647);
                    }
                }
                var_28 = (var_3 | 32753);
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 9;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            arr_46 [i_13] [i_1] [i_1] [i_0] = (max((arr_21 [i_0] [i_1] [i_12] [1] [11]), ((~(min(-6, (arr_16 [i_0] [i_1] [i_12] [i_13])))))));
                            var_29 = ((-27804 ? -1 : (((arr_21 [i_0] [i_1] [i_1 - 1] [i_13] [i_12 + 2]) ^ (arr_21 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_12 + 3])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
