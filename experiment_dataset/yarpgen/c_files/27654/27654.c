/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (min(var_10, 9223372036854775807));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_11 |= (arr_9 [i_0] [i_1] [i_2] [i_3] [i_0]);
                        var_12 = (min(var_12, (((((((arr_3 [2] [i_1 + 2] [1]) < 4294967295))) / (arr_0 [i_0 - 1] [i_0 - 1]))))));
                        var_13 *= ((-(arr_7 [i_3] [i_1] [i_1] [i_0])));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_14 &= (((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) || (arr_9 [i_3] [i_1 + 2] [i_0 - 1] [i_0] [i_0])));
                            var_15 |= (arr_3 [i_1] [i_1] [i_1 + 3]);
                            arr_13 [i_0] [10] [10] [i_3] [i_4] [i_1] &= (0 != var_6);
                            var_16 |= 8446045453089520177;
                        }

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_17 = (min(var_17, (((var_6 ? (var_9 ^ var_1) : var_4)))));
                            var_18 &= ((var_6 / (arr_14 [2] [2] [i_1] [i_1] [7] [i_1 + 2] [i_2])));
                            var_19 += 0;
                            var_20 *= (6662457554522612548 / 1);
                        }
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_21 &= (((arr_17 [i_0 - 1]) * (((~(4294967289 || var_5))))));
                        var_22 = (min(var_22, (arr_9 [i_0] [i_2] [i_0] [i_0] [i_0])));
                        var_23 = (min(var_23, (((+(((arr_10 [i_0 - 1]) ? (arr_7 [i_0 - 1] [i_1 - 1] [9] [i_6]) : (arr_10 [i_0 - 1]))))))));
                        arr_19 [i_0] [i_0] [i_1] [i_2] [i_6] &= ((!((max((((!(arr_7 [i_0] [i_0] [i_0 - 1] [9])))), (arr_12 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_6]))))));
                        arr_20 [12] [12] [i_1 - 1] [i_0] &= (arr_17 [i_1]);
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_24 &= var_3;
                        var_25 = (max(var_25, (arr_15 [i_0] [i_1] [i_1] [5] [i_7])));
                        var_26 -= (((arr_0 [1] [i_1 + 2]) || 17179869183));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_31 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [2] &= (-4095 != 3);
                                var_27 *= (arr_26 [1] [1] [i_8] [i_8]);
                                var_28 = (min(var_28, var_5));
                                var_29 &= var_6;
                                var_30 = (max(var_30, 530862635));
                            }
                        }
                    }
                }
                arr_32 [i_0] [6] [i_1] &= (((((var_9 ? var_4 : ((max(1, -16)))))) ? ((-(arr_7 [i_0 - 1] [i_1 - 1] [i_1] [i_1 + 1]))) : ((((arr_17 [i_1 + 1]) ? (!var_7) : var_9)))));
            }
        }
    }
    var_31 -= ((var_5 || var_0) && (!var_7));
    var_32 = (min(var_32, ((max((((var_4 * var_0) ? var_4 : var_2)), -var_6)))));
    var_33 = (max(var_33, var_0));
    #pragma endscop
}
