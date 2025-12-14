/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += min(var_6, ((max(var_8, (min(25525, -30953))))));
    var_12 = ((var_4 ? var_4 : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (min((~var_5), ((((arr_3 [i_0] [i_0] [i_1 - 1]) && ((((arr_5 [i_0]) >> (var_7 - 355112339549876437)))))))));
                var_14 = (min(((((arr_3 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_3 [i_1] [i_0] [i_1])))), ((30948 ? (arr_4 [i_0] [i_1] [i_0]) : (~15082810280485150558)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_3] [i_3] = (((15082810280485150558 - (arr_3 [i_0] [i_0] [i_3]))));
                            arr_11 [i_0] [i_0] [i_2] [i_3] = -6259350390432099757;
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_14 [i_1] [i_1] [i_4] [i_0] = var_9;

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_15 = (arr_3 [i_1 - 2] [i_0] [i_0]);
                        var_16 = (((arr_1 [i_5]) / var_0));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_17 ^= (arr_16 [i_6] [i_6] [i_4] [i_6]);
                                var_18 = (max(var_18, (((((((arr_17 [i_0] [i_0]) ? var_6 : (arr_18 [i_7] [i_1] [i_4] [i_1] [i_0])))) ? (arr_22 [i_0] [i_0] [i_6]) : (((131071 ? 33488896 : 1))))))));
                            }
                        }
                    }
                }
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    arr_28 [i_0] [i_1] [i_8] [i_0] = ((-4851654434135182524 >= (((((min(-11994, -28561))) < (~0))))));
                    var_19 = (max(var_19, (((((-(arr_4 [i_8] [i_1] [i_8])))) ? (((((var_4 * (arr_13 [i_0] [i_1] [i_0])))) ? ((1 ? (arr_25 [i_0] [i_1] [i_0]) : var_6)) : (min(1, (arr_22 [14] [i_1] [14]))))) : ((~(((arr_18 [i_0] [i_0] [i_0] [i_1] [i_8]) ? var_9 : (arr_4 [i_0] [i_0] [i_0])))))))));
                    arr_29 [i_0] [i_8] [i_0] [i_0] = ((-302358327590574787 ? (~4294967295) : (min((max(1, var_6)), ((max((arr_26 [i_1] [i_1]), var_2)))))));
                    arr_30 [i_0] [i_1] [i_0] = ((((~(max(226, (arr_22 [i_0] [i_1] [i_0]))))) | (((arr_22 [i_1 - 2] [i_1] [i_0]) ? (arr_22 [i_1 + 1] [i_1] [i_0]) : 1))));
                }
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    arr_34 [i_0] [i_1] [i_0] = 131056;
                    arr_35 [i_0] [i_1] [i_0] [i_0] = (max((min((~3475708686), (arr_5 [i_0]))), (min(((((arr_16 [i_0] [i_0] [i_1] [i_0]) + 125))), (arr_17 [i_1] [i_9])))));
                }
            }
        }
    }
    var_20 = (max(var_8, (!var_9)));
    #pragma endscop
}
