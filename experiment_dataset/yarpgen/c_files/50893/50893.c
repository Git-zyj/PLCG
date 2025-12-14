/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [1] [1] [17] |= ((var_4 ? (~var_6) : 22));
                            arr_11 [i_0] [6] [i_0] [i_2 - 1] [i_0] [1] &= ((((-((-29849 ? 29848 : var_5)))) >= (((arr_7 [12] [i_1]) ? (((arr_5 [6] [i_3] [5]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_0] [i_2 - 1]))) : var_4))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_16 [i_0 + 1] [i_1] [i_4] [i_4] &= (!-7898);
                            var_11 &= ((((((1920 ? 9223372036854775807 : (-9223372036854775807 - 1))) != var_10)) ? (((arr_14 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 2]) % (arr_14 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1]))) : ((255 ? 9223372036854775804 : -29849))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 17;i_7 += 1)
        {
            {
                var_12 = ((((!var_8) && ((((arr_12 [i_7 - 3]) / 9223372036854775807))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_31 [8] [8] [i_8] [i_8] = ((((((var_7 ? var_2 : (arr_5 [i_6] [i_6] [i_6]))))) - (((((575334852396580864 ? 1078752169 : 10330383259169894090))) ? (((arr_15 [i_9]) ? var_1 : -1)) : var_3))));
                            arr_32 [i_6] [i_6] [i_6] [i_6] = ((((arr_1 [i_8]) ? var_0 : (((arr_0 [i_6] [i_6]) ? (arr_9 [14] [14] [i_8] [14] [14]) : var_2)))));
                            var_13 = (min(var_13, var_4));
                            var_14 = (min(var_14, ((((((((arr_28 [i_6] [i_7] [i_7] [i_8] [i_9]) ? (arr_1 [i_6]) : 1))) * 16616))))));
                            arr_33 [i_6] [i_6] [i_7] [i_8] [i_9 + 1] = (((((((((arr_30 [i_6] [i_6] [i_6]) - (arr_28 [i_6] [i_6] [15] [i_6] [i_6])))) ? ((((arr_5 [10] [i_7] [i_7]) < (arr_6 [i_6] [i_7] [i_6])))) : (arr_2 [i_6] [i_7])))) ? -59 : ((~((var_2 ? var_10 : var_9))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
