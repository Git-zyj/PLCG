/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (~var_9)));
    var_12 = ((-var_10 ? var_3 : (((min(var_10, 1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((min((arr_3 [i_1 + 1] [i_2] [i_1 - 1]), (max(((((arr_4 [i_1] [i_1] [i_2]) / 7251398465023021063))), ((var_10 * (arr_6 [i_2]))))))))));
                    arr_9 [i_0] [i_0] [i_0] [6] = (min(((-(arr_1 [i_0] [i_0]))), (((1769305552 ? 1 : 64462)))));
                }
            }
        }
    }
    var_14 = (min(var_6, (((var_6 ? var_9 : 1664451501)))));

    /* vectorizable */
    for (int i_3 = 4; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_15 = ((-(arr_15 [12] [0])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_16 = (arr_22 [i_3] [i_3] [i_3] [i_3 - 1] [i_3]);
                                arr_24 [i_3] [i_3] [i_3] [i_5] [0] = (6548 ? (arr_19 [i_3] [i_5] [i_3 - 2] [i_5] [17]) : (arr_23 [i_7] [i_6] [i_5] [i_4] [i_3] [i_3]));
                                var_17 = (((arr_23 [i_3] [i_3 - 1] [i_3 - 4] [i_3] [i_3] [i_3 - 4]) ? 0 : (arr_23 [1] [i_3 - 1] [i_3] [i_3] [i_3 - 4] [i_3 - 3])));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_18 = ((~((var_1 ? var_7 : (arr_12 [i_3 + 1])))));
                        var_19 = ((~(arr_19 [i_3] [i_3 - 2] [i_3 - 4] [i_5] [i_3])));
                        arr_27 [i_4] [19] [i_4] [i_5] = var_0;
                    }
                    for (int i_9 = 4; i_9 < 16;i_9 += 1)
                    {
                        var_20 -= (((arr_23 [i_3 - 4] [i_3] [i_3] [i_3 + 1] [i_3 - 2] [i_3 + 1]) ? (arr_23 [i_3 + 1] [i_3] [i_3 - 4] [i_9 + 2] [i_9 + 4] [12]) : var_4));
                        arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((arr_19 [i_9] [i_9 + 3] [i_9] [i_5] [i_9]) ? (arr_16 [i_3] [i_3] [i_5]) : ((-(arr_23 [i_3] [i_5] [i_4] [i_9] [i_3] [8]))));
                        var_21 ^= ((44759 ? 482 : 65510));
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_35 [i_5] [i_10] [i_10] [15] = (arr_29 [i_3 - 3] [i_4] [i_5] [6]);
                            var_22 |= (arr_12 [i_3 + 1]);
                            var_23 = (min(var_23, ((20776 ? (arr_10 [i_3 - 4] [i_3 - 1]) : (arr_10 [i_3 - 3] [i_3 - 2])))));
                        }
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            arr_39 [i_3] [i_3] [i_5] [i_5] [i_5] = ((((arr_17 [i_5]) ? (arr_38 [i_5] [i_4] [i_4] [i_4] [i_4] [i_4]) : -3044017512419561720)));
                            var_24 = ((0 ? var_1 : (arr_31 [i_3] [i_4] [i_5] [i_5])));
                        }
                        var_25 = (min(var_25, ((((((var_3 ? var_2 : (arr_26 [i_10] [i_10] [15] [15] [i_3 - 4])))) ? var_6 : (((-1685430501 ? var_4 : var_4))))))));
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        arr_42 [i_5] [i_4] [i_5] [i_13] = -7251398465023021064;
                        arr_43 [i_4] [i_5] [i_13] = (arr_26 [i_3 - 2] [i_3 - 3] [i_3] [i_3] [13]);
                        var_26 = (min(var_26, (((-(arr_17 [i_13]))))));
                    }
                    var_27 = ((((var_3 + 9223372036854775807) << (((arr_12 [i_3]) - 35708)))));
                }
            }
        }
        arr_44 [i_3] = -var_8;
        var_28 = ((arr_25 [i_3] [i_3] [14] [i_3] [i_3 + 1]) ? var_9 : (arr_25 [i_3] [i_3 - 1] [2] [i_3] [i_3 - 2]));
    }
    #pragma endscop
}
