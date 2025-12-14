/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_13 = ((!((((((var_6 ? var_4 : var_8))) ? -0 : (!var_8))))));
        arr_3 [i_0] = var_11;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_18 [i_3] [i_2] [i_5] [i_5] [i_2] = (min((1 | 1), (((arr_4 [i_1] [i_1]) ? (arr_7 [i_5] [i_4]) : ((((arr_13 [i_1] [i_2] [i_1]) && var_7)))))));
                            var_14 *= (!var_2);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_21 [i_1] [i_2] [i_1] = (!(arr_10 [i_6] [i_2] [i_3]));
                            arr_22 [i_2] [i_4] |= ((-(1 <= var_11)));
                            var_15 = ((var_3 ? (var_7 / var_12) : (arr_8 [i_2] [i_2])));
                            arr_23 [i_1] [i_2] [i_3] [i_3] [i_2] = (arr_17 [i_3] [i_2] [i_3] [i_3]);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_16 = (!var_11);
                            arr_26 [i_1] [i_1] [i_2] [i_2] [i_4] [i_7] [i_7] = 1;
                            var_17 = ((!(((((((arr_9 [i_1] [i_2] [i_3]) & var_6))) ? ((var_2 ? var_11 : var_2)) : 1)))));
                        }
                        arr_27 [i_2] [i_3] [i_2] [i_2] = (((arr_6 [i_1] [i_1]) % 1887891937));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_31 [i_1] [i_1] [i_2] [i_3] [i_4] [i_8] = (((arr_8 [i_2] [i_4]) != (arr_24 [i_8] [i_4] [i_3] [i_2] [i_1] [i_1])));
                            var_18 = var_1;
                            var_19 *= (((arr_24 [i_1] [i_3] [i_3] [i_4] [i_3] [i_1]) ? var_5 : var_10));
                        }
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            var_20 = ((((max((((var_8 ? (arr_6 [0] [i_4]) : (arr_13 [1] [1] [i_2])))), var_1))) ? (((var_1 < (arr_32 [i_1] [17] [i_1] [i_1] [i_2] [i_9 + 1])))) : var_4));
                            arr_35 [i_1] [i_2] = (max(((min(1, 1))), -var_5));
                            var_21 *= ((((7227 >> (var_8 - 2595660181))) >= ((var_2 ? 24770 : (arr_15 [i_9 + 1] [i_9 + 3] [i_9] [i_9 + 2] [i_9] [i_9 + 3])))));
                            arr_36 [i_1] [i_1] [i_2] [i_3] [10] [i_4] [i_9] = -var_4;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_22 = ((!(arr_19 [i_1] [i_2] [i_3] [i_2] [i_1])));
                            arr_39 [i_1] [i_10] [i_3] [i_3] [i_4] [i_10] |= var_8;
                            arr_40 [i_4] [i_2] [18] = (2749289130 && 1);
                        }
                        var_23 ^= (((((var_6 ? var_6 : ((0 >> (arr_11 [i_1] [i_4])))))) ? (max(var_1, (arr_17 [i_1] [i_4] [i_3] [i_4]))) : (((arr_13 [i_1] [i_2] [i_4]) ? (arr_13 [i_1] [i_2] [i_2]) : var_8))));
                        arr_41 [i_1] [i_2] = (((((-(arr_32 [i_1] [i_2] [i_3] [i_3] [i_2] [i_4])))) ? var_6 : ((-(arr_32 [i_4] [i_4] [1] [i_4] [i_2] [i_4])))));
                    }
                }
            }
        }
        var_24 &= (((((!(arr_8 [0] [i_1])))) & ((3094647412 ? -1 : ((var_8 ? var_2 : var_9))))));
        var_25 *= ((var_12 ? (((1 ? var_12 : (arr_13 [i_1] [i_1] [i_1])))) : (var_8 + var_8)));

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_26 = (1 & -32742);
            var_27 = (((((var_2 * (arr_8 [i_11] [i_11])))) ? (((arr_8 [i_11] [i_11]) ? (arr_8 [i_11] [i_11]) : var_2)) : (((arr_8 [i_11] [i_1]) ? var_0 : (arr_8 [i_11] [i_11])))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_28 = ((24770 ? 2595476418 : 1865074416));
                            var_29 ^= (!((max((var_8 ^ var_11), ((((arr_14 [i_1] [4] [i_13] [i_14]) ? var_5 : var_12)))))));
                        }
                    }
                }
            }
            arr_51 [i_1] [i_11] = ((var_9 * (arr_38 [i_1] [i_11] [i_1] [i_11] [i_1])));
            var_30 += (((arr_11 [i_1] [i_11]) ? (!1) : (((arr_11 [i_11] [i_11]) ? 1 : var_7))));
        }
    }
    var_31 = (min((~1), ((-(!var_9)))));
    #pragma endscop
}
