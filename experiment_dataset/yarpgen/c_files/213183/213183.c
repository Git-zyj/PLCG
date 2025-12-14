/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((~(arr_1 [i_0] [i_1])))) ? (arr_3 [i_0] [i_1] [i_0]) : (((43154075 ? var_6 : (arr_1 [i_0] [i_1]))))));
                arr_7 [i_0] [i_1] = (((arr_0 [i_0]) ? var_9 : (arr_5 [i_0] [i_0] [i_0])));
                var_11 = (max(var_11, ((((arr_3 [i_0] [i_1] [i_0]) ? (((arr_3 [i_0] [i_1] [9]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_1] [i_1]))) : (arr_3 [i_0] [i_0] [i_0]))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    arr_11 [12] [i_0] [12] [i_2] |= (arr_3 [i_2 + 3] [i_2 - 2] [i_2 + 3]);
                    arr_12 [i_0] [11] [i_0] = ((-1 ? ((352662759 ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((arr_1 [9] [i_2]) ? -1004848517 : 1))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_15 [i_3] [i_3] [i_3] [i_0] |= (arr_9 [i_0] [i_1]);

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_19 [i_0] [i_0] [6] [i_3] [i_4] = (((!(arr_1 [14] [i_3]))));
                            var_12 = (max(var_12, (((arr_13 [10] [10] [8] [i_3] [i_4]) ? var_0 : (((var_1 ? (arr_17 [i_3]) : var_3)))))));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_0] = ((~(((!(arr_22 [i_2 - 1] [i_1] [i_2] [i_2] [20] [i_1] [i_0]))))));
                            arr_25 [i_0] [i_1] [i_2] [i_3] [10] [i_1] [i_0] = (1 ? (((arr_16 [i_0] [17] [i_2 - 2] [i_3]) ? var_8 : var_6)) : var_3);
                            var_13 = (((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2 - 1] [i_2]) * (var_5 | var_3)));
                        }
                    }
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        var_14 = (min(var_14, ((((arr_3 [i_0] [i_1] [i_6]) ? var_0 : ((((arr_22 [i_0] [i_0] [10] [i_0] [i_0] [i_0] [14]) - (arr_9 [i_1] [i_0])))))))));
                        var_15 = (((arr_4 [i_2 + 1] [i_2 - 1] [i_6 - 3]) ? (arr_4 [i_2 + 3] [i_2 + 1] [i_6 - 3]) : (arr_4 [i_2 - 1] [i_2 + 3] [i_6 - 1])));
                        var_16 += 17365;

                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_1] = 65535;
                            arr_33 [i_0] [i_0] [i_2] [i_0] [i_7] = ((((!(arr_29 [i_0] [i_0] [19] [i_0] [i_0] [i_0] [i_0]))) ? 4293918720 : (arr_13 [i_6 + 1] [i_2 - 2] [i_2 - 2] [i_6 + 1] [i_7])));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_17 = (min(var_17, ((((!728840268) ? ((-17389 ? var_6 : (arr_16 [12] [i_2] [12] [12]))) : (arr_4 [i_0] [i_6] [i_6]))))));
                            var_18 = (min(var_18, var_9));
                            arr_38 [i_0] [15] [i_2] [i_6] [i_0] = ((-(arr_31 [i_0] [9] [i_2] [i_6] [i_0])));
                        }
                    }
                }
                for (int i_9 = 1; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    arr_41 [i_1] [i_1] [i_0] = (!(var_10 < var_3));
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            {
                                arr_47 [i_0] [i_0] [i_0] [i_0] = (((arr_27 [i_0] [1] [i_9] [i_10]) / var_10));
                                arr_48 [i_0] [i_10] [i_0] = (arr_23 [i_0] [i_0] [i_1] [13] [i_1]);
                                var_19 |= (((((-17368 ? (arr_46 [i_9] [i_9] [i_9] [i_10] [i_9]) : (!56844)))) ? (arr_8 [i_0] [i_1]) : (arr_5 [i_10] [i_10] [i_9])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 20;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_20 = ((arr_54 [19] [i_0] [i_12 + 1] [i_12 + 1]) ? var_5 : var_2);
                        var_21 = (((arr_29 [i_12] [i_12] [i_12] [i_12] [i_12 + 1] [i_12 + 1] [i_13]) | var_3));
                    }
                    arr_55 [i_0] [i_0] [i_12] = ((~(arr_53 [i_0] [i_1] [i_1] [i_1] [i_12] [i_0])));
                    arr_56 [6] [i_1] [6] |= ((-var_4 - ((var_6 ? -2 : (arr_39 [i_0] [i_0] [16] [i_12])))));
                }
                /* vectorizable */
                for (int i_14 = 1; i_14 < 18;i_14 += 1)
                {
                    arr_61 [i_0] [i_0] [i_1] [12] = (((arr_50 [i_1] [i_14 + 3] [i_14]) - (~1602421171888360722)));
                    var_22 = (arr_27 [i_0] [i_1] [19] [i_1]);
                }
                var_23 = (min(var_23, (arr_28 [8] [i_1] [i_0] [8])));
            }
        }
    }
    var_24 = ((var_4 * (((((17363 ? var_4 : var_7))) * (var_0 / var_4)))));
    var_25 = var_4;
    #pragma endscop
}
