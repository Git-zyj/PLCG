/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!-var_5);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [9] [i_1] [i_0] = ((-(((!((var_11 < (arr_2 [i_1] [i_1 - 1]))))))));
                var_17 = (min(((-(((arr_2 [i_0] [i_1]) + (arr_3 [i_1] [i_1 - 1] [i_1]))))), (arr_1 [i_1 - 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_18 = ((65535 ? var_7 : (((var_8 <= (arr_11 [i_2] [16] [i_5]))))));
                            arr_19 [i_2] = ((var_4 ? (((arr_5 [i_5] [i_5]) * 0)) : ((~((var_6 ? var_4 : var_14))))));

                            for (int i_6 = 4; i_6 < 23;i_6 += 1)
                            {
                                arr_22 [i_4 - 1] [i_5] [i_3] [i_3] [i_5] [20] = var_0;
                                var_19 = (max(var_19, ((min(var_1, (min(((((arr_10 [i_6]) ? 171 : var_10))), var_13)))))));
                                var_20 = ((~((((max((arr_13 [i_2 - 1] [i_3] [i_4] [i_5]), var_2))) ? var_2 : (arr_14 [i_3] [i_4] [i_6])))));
                            }
                            for (int i_7 = 0; i_7 < 24;i_7 += 1)
                            {
                                arr_26 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] = ((38 >> (16 && 1)));
                                var_21 ^= (min(((-30 ? (arr_7 [i_2 - 1] [i_2 + 1] [i_4 + 1]) : (arr_7 [i_2 - 1] [i_2 - 1] [i_4 + 1]))), (((arr_13 [i_2 + 1] [i_2 + 1] [i_4] [i_4 - 1]) ? (arr_18 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_8 [i_2 + 1] [i_2 + 1] [i_2 - 1])))));
                                var_22 |= ((!(arr_20 [i_2] [i_2] [i_3] [10] [i_5] [i_7] [i_7])));
                                arr_27 [i_3] = ((!((60 >= (arr_15 [i_7] [i_5] [i_2 - 1] [i_2 - 1])))));
                                var_23 = ((-(~var_1)));
                            }
                            arr_28 [i_2] [i_3] [i_2] [i_5] = (arr_5 [i_5] [i_2 - 1]);
                        }
                    }
                }
                arr_29 [i_2] &= ((-(!198)));
                arr_30 [17] = ((((arr_6 [i_2 + 1]) * (arr_6 [i_2 + 1]))));
            }
        }
    }
    var_24 ^= (min(((((var_2 ? var_9 : var_9)))), (185 + -16)));
    #pragma endscop
}
