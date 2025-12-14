/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (min((((arr_7 [i_1 + 1] [i_2] [i_3] [i_4]) ? (arr_7 [i_0 - 1] [i_2] [i_3] [i_4 - 1]) : (arr_7 [i_0 + 1] [i_1] [i_2] [i_4]))), (arr_7 [i_0] [i_0] [i_0] [i_0])));
                                var_21 = (~var_6);
                                var_22 = ((-(arr_13 [i_0] [i_2] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_4] [i_4])));
                                arr_14 [i_0] [i_1] [i_3] = ((!((((arr_0 [i_0 + 1] [i_1 - 1]) ? 1 : 1)))));
                            }
                        }
                    }
                    var_23 = (((~var_7) ? (((8 ? var_16 : var_11))) : var_13));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_17 [i_0] [i_1] [1] [i_5] [i_0] [i_5] |= (arr_11 [i_1 - 2] [i_1 + 1]);
                        var_24 = -var_5;
                        var_25 = arr_15 [10];
                        var_26 = (1 && 4294967295);
                        var_27 |= (min((max((!var_4), (arr_0 [i_1 + 1] [i_5]))), (-34 == 1)));
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_20 [i_0] [i_1 - 2] [i_1 - 2] [i_6] [i_1 - 2] = var_2;
                        var_28 = (1 >= 121);
                        var_29 -= ((var_19 ? (arr_18 [i_1] [i_6]) : (arr_3 [i_0] [i_6])));
                        arr_21 [i_0] [i_0] [2] [i_6] = (max((((((((arr_5 [i_6]) ? 1 : 14))) ? ((var_6 ? 28672 : 31)) : (((-35 < (arr_9 [i_0] [i_1 - 1] [i_2] [i_6]))))))), var_10));

                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            var_30 = (((((5 ? (arr_6 [i_7 + 1] [i_0 + 1] [i_0] [i_0]) : (var_15 - 15)))) ? var_7 : (-var_14 - 1)));
                            var_31 = (((((((var_0 ? (arr_3 [11] [i_0]) : 8))) / ((-(arr_8 [i_0] [i_1] [i_2] [i_2]))))) * (arr_7 [i_0] [11] [11] [i_6])));
                            arr_26 [i_7] = (min(125, var_7));
                        }
                    }
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        var_32 = (var_5 * 0);
                        var_33 = (((((arr_1 [i_8]) ? (arr_2 [i_1] [i_2]) : (min(var_4, (arr_8 [i_0] [i_1] [i_2] [1]))))) * 4294967295));

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_33 [i_0] [i_1] [i_2] [i_9] [1] = (max(4064, (min(4158570862, 1))));
                            arr_34 [i_0] [i_0] [13] [i_0] [i_0] [i_0] = ((!(arr_28 [i_0] [i_1] [i_1] [i_8] [i_9])));
                            var_34 -= (min(((1 + (arr_11 [i_1 + 1] [i_0 + 1]))), (((arr_19 [i_8 - 1] [i_2] [i_8 + 2] [i_2] [i_1 - 2] [i_0]) * 1))));
                            arr_35 [10] [10] [i_2] [i_8] [i_9] = max(4294967275, 1);
                            arr_36 [i_9] [i_8] [i_2] [i_0 - 2] [i_0 - 2] [i_0 - 2] |= 4294967270;
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_35 = (((((var_19 && (arr_11 [8] [i_1 - 2])))) < (((arr_11 [i_0] [i_1 - 1]) % (arr_11 [5] [i_1 - 1])))));
                            var_36 = var_9;
                            var_37 += 37159;
                        }
                    }
                }
            }
        }
    }
    var_38 = -60;
    #pragma endscop
}
