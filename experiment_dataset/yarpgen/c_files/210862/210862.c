/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 *= (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 = (arr_2 [i_1]);
            arr_5 [i_0] [1] [7] = (1 | 1865856707);
            arr_6 [8] = var_2;
            var_20 += 0;
        }
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_4] [i_2] [i_3 + 2] [i_3 + 2] = var_7;
                                var_21 ^= (arr_10 [i_0] [i_0] [i_0]);
                                var_22 = (arr_11 [i_2 - 1] [i_3 + 3]);
                                var_23 ^= (((~65533) ? var_2 : var_0));
                            }
                        }
                    }
                    var_24 += ((0 <= (arr_15 [i_0] [i_2 - 3] [2] [i_2] [i_3 + 1])));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 23;i_8 += 1)
            {
                {
                    var_25 += ((((((arr_21 [i_8 + 1]) ? (arr_21 [i_8 - 2]) : (arr_21 [i_8 + 1])))) ? (arr_21 [i_8 - 1]) : ((max(0, var_5)))));
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_26 = (min(var_26, ((((arr_27 [i_9] [i_9 - 2] [i_8] [i_8] [i_8 + 1] [21]) + ((-(arr_27 [4] [i_9 - 1] [i_9] [i_8 - 2] [i_8 - 2] [i_7]))))))));
                                arr_31 [i_6] [i_10] [1] = ((-(((arr_19 [i_9]) ? ((-(arr_28 [i_6] [i_6] [i_8 + 1] [i_9] [i_8 + 1]))) : var_14))));
                                arr_32 [i_10] = var_0;
                                arr_33 [i_6] [i_7] [i_10] [i_9] [i_10] = (((-10 && 718375990) >> ((max(-11, 1)))));
                                var_27 = ((~(0 * 1776245512)));
                            }
                        }
                    }
                }
            }
        }
        arr_34 [i_6] [i_6] = ((var_10 % ((14096600971507052581 ^ (arr_18 [i_6])))));

        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_28 = (arr_36 [i_6] [i_6]);
            arr_38 [i_6] [i_6] = ((((((((var_12 ? var_11 : var_4))) ? (((arr_17 [i_11]) + -556976882)) : (min((arr_17 [2]), var_0))))) ? (min(-0, (var_13 % 3467469951))) : -var_12));
        }
        arr_39 [23] = ((((((!63) ? (~var_7) : var_13))) >= ((10 & (arr_28 [i_6] [19] [i_6] [i_6] [i_6])))));
    }
    #pragma endscop
}
