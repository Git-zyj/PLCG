/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_1 ? var_8 : var_3)) << (var_7 - 49))));
    var_19 = 923177843;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    arr_9 [i_1] [i_2] = ((-(arr_1 [i_1])));
                    arr_10 [i_2] [i_1] [18] [18] = (((((arr_1 [i_2 - 1]) < (arr_1 [i_2 + 1]))) ? ((11 ? ((0 << (64 - 57))) : var_7)) : (((arr_4 [i_2] [i_0]) / (min((arr_7 [i_0] [4] [i_2 + 1]), var_12))))));
                    arr_11 [i_1] [i_1] [i_2] [i_1] = ((arr_5 [i_0] [i_1]) && (((~(arr_3 [1])))));
                    arr_12 [i_0] [i_0] [i_2 + 1] [i_2] = 7;
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_15 [i_0] |= (~((-(var_11 / 18683))));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_20 = (max(var_20, var_0));
                                arr_20 [i_0] [i_1] [17] [i_4] [i_5] [17] &= var_10;
                                var_21 = (min((((arr_19 [i_0] [20] [i_0] [i_4] [0] [20]) << (arr_14 [i_0]))), ((max((var_12 + var_12), 3)))));
                                arr_21 [4] [4] [i_3] [4] [i_5] = ((!((((arr_5 [i_0] [i_0]) ? (((arr_1 [14]) + (arr_14 [i_4 + 2]))) : (min(46871, var_12)))))));
                                var_22 = (max(var_22, ((max(var_6, (((max(var_5, (arr_1 [i_1]))))))))));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_26 [i_0] = var_13;
                            var_23 *= ((~(arr_0 [i_0] [i_1])));
                            arr_27 [i_3] [i_1] = (((((46867 ? (arr_17 [11] [i_1] [3] [i_1] [i_1] [i_1]) : (arr_5 [1] [i_1])))) ? var_7 : (arr_22 [i_0] [i_0] [i_0] [i_3] [i_6] [i_7])));
                        }
                        var_24 = (((((0 - (arr_2 [i_3])))) ? (arr_17 [i_6] [i_3] [i_3] [i_1] [i_0] [i_0]) : (((((min(var_14, var_8))) != (arr_17 [i_6] [i_3] [1] [17] [1] [i_0]))))));
                        arr_28 [i_6] [i_6] [i_3] [i_1] [1] = ((((((arr_5 [i_3] [i_3]) ? var_9 : (arr_5 [i_0] [i_1])))) ? (min((arr_5 [i_6] [i_0]), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((arr_5 [i_0] [i_3]) | (arr_5 [i_1] [i_0])))));
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_25 = (((min(var_2, ((((arr_4 [i_0] [i_0]) % (arr_31 [i_0])))))) % (((((var_1 ? var_15 : var_5))) ? (~-2290741456125349607) : 18689))));
                        var_26 = (arr_30 [11] [i_0] [i_1] [i_0]);
                    }
                }
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    arr_34 [1] [i_1] [i_1] = arr_1 [i_9];
                    var_27 = var_6;
                    arr_35 [14] [i_0] [i_0] [i_9] = ((((min(-3397157915513995823, -2002895573))) ? (((~(arr_23 [i_9 - 1] [3] [i_9] [i_9])))) : ((~(~var_4)))));

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_28 = (0 != -101);
                        arr_39 [17] [1] [i_10] [14] = (min((((arr_2 [i_0]) - 2290741456125349607)), var_2));
                        var_29 = (((~(arr_6 [i_10]))));
                    }
                    arr_40 [i_1] [i_9 - 1] = (((((-(arr_3 [4])))) ? (arr_32 [i_9 - 1] [i_9 - 1]) : (min(var_9, (min(var_3, (arr_16 [i_9] [13] [i_1] [i_1] [i_1] [i_0])))))));
                }
                arr_41 [i_0] [i_1] [i_1] = arr_31 [i_0];
                arr_42 [i_0] [i_1] = (~((((((arr_3 [i_1]) + (arr_18 [i_0] [i_0] [i_0] [5] [i_1] [4] [5])))) ? ((max(var_1, var_7))) : (((-4 >= (arr_4 [i_0] [i_0])))))));
                arr_43 [13] = ((arr_31 [i_1]) != (((min(var_10, var_12)))));
            }
        }
    }
    var_30 = ((var_7 ? var_5 : var_14));
    #pragma endscop
}
