/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 += var_10;
                var_14 = 59931;

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = arr_0 [2] [i_1];
                                var_16 = (arr_6 [i_0 - 1] [i_1] [16] [i_1]);
                                arr_12 [13] [13] = var_3;
                            }
                        }
                    }
                    var_17 *= -19496;
                    var_18 += ((((((arr_9 [i_0] [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_2]) | (arr_9 [i_0] [1] [i_0 - 1] [1] [i_2] [1])))) ? (max((arr_3 [i_1] [23]), (arr_3 [i_1] [i_0 - 1]))) : (min(471252912513033372, (arr_3 [i_1] [i_1])))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_19 = (((arr_13 [i_0] [5] [i_5]) / (arr_5 [15])));
                    arr_15 [i_0] [i_5] = ((-(arr_8 [i_5])));
                    var_20 = (((arr_7 [i_5] [i_5] [23] [i_1] [i_1] [18]) ? 1 : 0));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_21 *= (((((var_1 ? (arr_13 [i_0 - 1] [20] [i_6]) : 471252912513033378))) ? (arr_2 [i_0 - 1] [i_1]) : var_8));
                    var_22 = var_3;
                    var_23 ^= (arr_14 [i_0] [i_1] [i_6]);
                }
            }
        }
    }
    #pragma endscop
}
