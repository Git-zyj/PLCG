/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((((max(var_7, var_1)))) + -5006734996495930280)) + 9223372036854775807)) >> var_0));
    var_18 &= (!var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 *= (!-var_13);
                    arr_9 [i_1] [i_1] [i_2] = -var_4;
                    var_20 = (min(var_20, ((((arr_0 [17] [13]) / (min((((-(arr_5 [10])))), (arr_7 [i_0] [i_0] [i_2]))))))));
                    var_21 = ((~(((arr_1 [13]) ? ((var_13 ? (arr_8 [i_2] [i_2] [i_2] [i_1]) : (arr_2 [i_0]))) : -var_7))));
                }
            }
        }
    }
    var_22 = var_16;
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_14 [i_3 - 2] = ((var_0 ? -var_4 : (max(5006734996495930279, (((5006734996495930273 <= (arr_13 [i_3] [17]))))))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_23 = ((-(((((var_9 ? (arr_12 [1] [i_5] [1]) : var_14))) ? ((var_0 ? (arr_17 [i_3] [i_5] [i_6]) : var_2)) : ((max((arr_11 [i_3]), var_13)))))));
                            var_24 = (min(var_24, (((-((~(arr_13 [i_3 + 1] [i_5 + 1]))))))));
                            var_25 += ((((((!var_13) ? (arr_16 [i_3] [i_5]) : ((0 ? (arr_17 [i_3] [i_3] [0]) : (arr_10 [3])))))) ? ((((arr_18 [i_5] [i_5 - 1] [i_3 + 1] [i_5 - 3] [i_3 - 3] [i_3 + 1]) ? (!-5006734996495930274) : (arr_17 [i_3] [i_4] [i_6])))) : var_9));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                arr_28 [i_3] [i_3] [i_7 + 1] [i_8] = ((!(arr_19 [i_3 - 3] [i_4] [i_7] [i_8] [i_9])));
                                var_26 = ((~((((((arr_24 [i_3 - 2]) ? (arr_13 [i_3 + 2] [i_3 + 2]) : var_16))) ? ((~(arr_21 [i_3] [i_4] [i_8]))) : ((var_8 ? 255 : var_16))))));
                                var_27 = (arr_26 [i_3] [i_4] [i_7] [i_8] [i_7] [i_8]);
                                var_28 ^= (min((min((arr_23 [i_7]), (arr_12 [i_4] [i_4] [i_9]))), ((((((var_5 ? var_4 : (arr_17 [i_3] [i_4] [i_9])))) ? (((arr_27 [i_7]) - 1)) : ((max(var_13, (arr_19 [1] [1] [i_9] [i_9] [5])))))))));
                            }
                        }
                    }
                }
                var_29 += (arr_24 [i_3]);

                for (int i_10 = 1; i_10 < 24;i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                var_30 = 5006734996495930273;
                                arr_38 [5] [1] [21] &= ((1056964608 ? (arr_10 [i_10]) : (arr_34 [i_3])));
                            }
                        }
                    }
                    var_31 = (((var_14 != (arr_27 [i_3 - 3]))));
                }
                for (int i_13 = 1; i_13 < 24;i_13 += 1) /* same iter space */
                {
                    arr_42 [i_3] = (arr_19 [i_3] [i_4] [i_3] [i_3] [i_4]);
                    var_32 = (((((arr_33 [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13 + 1]) ? (arr_31 [i_3] [i_3 + 1] [i_13] [i_13 - 1]) : (arr_31 [i_3] [i_3 - 3] [i_13] [i_13 + 1]))) << ((-var_6 << (-var_14 - 72)))));
                    var_33 = (max(var_14, ((var_6 ? 3832145117 : ((-(arr_10 [i_3])))))));
                }
            }
        }
    }
    #pragma endscop
}
