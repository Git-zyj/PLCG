/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0] [i_0] = (i_1 % 2 == zero) ? (((((var_9 << (((((arr_11 [i_4] [i_1] [i_1] [i_1]) >> (((arr_10 [i_0] [i_1] [i_2] [i_0]) - 830)))) - 2698551912489894)))) / ((max(var_7, var_5)))))) : (((((var_9 << (((((((arr_11 [i_4] [i_1] [i_1] [i_1]) >> (((arr_10 [i_0] [i_1] [i_2] [i_0]) - 830)))) - 2698551912489894)) - 18445661510528241513)))) / ((max(var_7, var_5))))));
                                var_12 = (arr_8 [i_0] [i_1] [i_2] [i_3]);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_20 [i_5] [i_1] [i_2] [i_5] [i_1] [i_1] |= ((var_3 && (arr_12 [i_0] [i_0] [i_0 - 1] [i_2 + 1] [i_5] [i_5])));

                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            arr_25 [i_6] [i_6] [i_2] [i_5] [i_6] |= ((var_10 ? (arr_13 [i_0 - 1] [i_0 - 1] [i_2]) : (arr_13 [i_0 - 1] [i_1] [5])));
                            var_13 *= (arr_0 [i_0 + 1]);
                            var_14 = (max(var_14, ((((arr_6 [i_0 + 1]) / (arr_23 [i_6 + 2] [i_2 - 1] [i_0 + 1] [i_0 - 1]))))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_28 [i_1] [i_1] [i_2] [21] = (((((((arr_2 [i_0 - 1]) && var_6)))) != ((var_6 + (arr_1 [i_2] [i_0])))));
                        arr_29 [i_1] [i_2] [i_0] [i_1] = var_5;
                        arr_30 [18] &= (arr_17 [16] [i_1] [16]);
                        var_15 = (((((-(arr_22 [i_0 + 1] [i_0 + 1])))) / (((max(var_6, var_10)) / (29235 * 127)))));
                    }
                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 21;i_8 += 1)
                    {
                        var_16 &= ((var_4 ? (arr_15 [i_0] [i_0 + 1]) : (!var_4)));
                        var_17 = (((arr_8 [i_8 - 1] [i_1] [i_1] [i_0 + 1]) + (arr_34 [i_8 - 4] [i_1] [i_8] [i_8])));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_18 = (arr_31 [i_10] [i_9] [i_2] [i_0] [i_0]);
                                arr_41 [i_1] [i_1] [i_2] [i_2] [i_2] = (var_2 ? (((((max(var_8, (arr_12 [i_0] [i_1] [i_2] [i_9] [i_10] [i_0])))) >> (((arr_23 [i_9] [i_2] [i_2 - 3] [i_1]) - 31120))))) : ((-(((arr_2 [i_9]) ? var_1 : (arr_21 [i_0] [i_0]))))));
                                var_19 &= (((arr_33 [i_0] [i_1] [i_2 - 1] [i_9]) + (((arr_39 [i_0 + 1] [i_1] [i_2] [10] [i_10 - 1]) ? (arr_33 [i_0] [i_1] [i_2] [i_2]) : (arr_0 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = -50818;
    var_21 = ((((var_11 ? (var_6 * var_4) : (var_7 * var_6))) >= var_0));
    #pragma endscop
}
