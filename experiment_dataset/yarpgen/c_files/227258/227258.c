/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_11 = (min(var_11, -6879580369076243826));
            var_12 += var_3;
            var_13 = ((var_4 >> (arr_1 [i_0])));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_2] = 5570934460414311963;
            var_14 = (((min(var_9, var_2)) >> (arr_1 [i_0])));
            var_15 = (((((var_7 & (arr_1 [i_0])))) ? (((arr_3 [i_0]) | (arr_1 [i_2]))) : -var_8));
            var_16 = (min(var_16, var_1));
            var_17 *= (max((arr_4 [i_2] [i_0] [i_0]), (((arr_3 [i_0]) / var_6))));
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_18 ^= (((((-(arr_11 [i_0] [i_0])))) ? ((+(((arr_14 [i_0] [i_3] [i_3] [i_5]) ? (arr_0 [i_5]) : var_8)))) : (max(var_4, var_4))));
                                arr_21 [i_4] [i_4] [i_4] = (((arr_1 [i_4]) <= (((arr_5 [i_3 - 1] [i_4] [i_4]) ? (arr_5 [i_3 + 3] [i_5] [i_5]) : (arr_5 [i_3 + 1] [i_6] [i_6])))));
                                var_19 = (((var_5 ? (((var_3 ? var_0 : (arr_14 [i_6] [i_3] [i_3] [i_3])))) : (max(var_10, var_9)))));
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] [i_0] [i_0] = (((~(arr_14 [i_3 + 4] [i_3] [i_4] [i_3 + 4]))));
                }
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
