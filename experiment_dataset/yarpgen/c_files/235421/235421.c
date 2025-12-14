/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (arr_3 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_13 -= (((59 >= (arr_14 [i_2] [i_3] [i_4] [i_4 + 1] [i_4 + 1]))) ? ((0 ? 1 : 1645430692)) : ((((((arr_9 [i_4 + 1] [i_3] [i_2] [2] [i_1] [i_0]) ? 680 : var_8))) ? (max((arr_4 [i_1] [9] [i_3] [i_4]), (arr_3 [i_3]))) : (arr_9 [i_4 + 1] [i_1] [i_3] [i_2] [i_1] [i_0]))));
                                var_14 = ((-(((arr_14 [i_0] [i_3] [i_2] [i_1] [i_0]) * (arr_14 [i_0] [i_1] [7] [i_3] [i_4])))));
                                var_15 |= (7274 - 5594);
                            }
                        }
                    }
                }
                arr_15 [i_0] = (arr_0 [i_0]);
                var_16 = ((-(36627 == 1)));
            }
        }
    }
    var_17 = ((((((~var_1) / 65533))) ? ((~(var_9 % var_9))) : ((20 | ((1 ? 1 : 15315))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_18 |= (((((arr_7 [i_5] [i_5] [1]) <= var_4)) ? ((((min(1, (arr_5 [i_5] [i_5] [i_5])))) ? (arr_8 [i_5]) : ((-(arr_14 [i_6] [i_6] [i_6] [i_5] [i_5]))))) : (((arr_3 [i_5]) ? var_0 : var_6))));
                arr_21 [2] = (max(((((max(3, var_11))) ? var_9 : (((arr_3 [i_6]) / var_2)))), (((arr_17 [i_5]) ? (arr_12 [i_5] [i_5] [i_5]) : (arr_9 [i_6] [i_6] [i_6] [i_5] [i_5] [i_5])))));
                arr_22 [3] [i_5] [i_5] = 1;
            }
        }
    }
    var_19 = var_2;
    var_20 = (min(var_20, var_3));
    #pragma endscop
}
