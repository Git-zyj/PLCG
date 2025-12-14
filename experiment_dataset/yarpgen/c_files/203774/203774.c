/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_10 = var_5;
                    arr_9 [i_1] = (min(((((arr_3 [i_1] [i_1]) + 0))), (((var_9 - 2101056988194782603) ? var_6 : (max(var_7, 255))))));
                    var_11 ^= max((max((max(var_3, (arr_7 [i_2] [1] [i_1] [i_0 - 2]))), (arr_6 [i_1 - 1] [i_1 - 1] [i_0 - 1]))), (((((var_3 ? 1 : var_5)) >= var_0))));
                    arr_10 [i_1] [3] [i_0] [i_1] = var_0;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_12 = min((((((~0) + 2147483647)) << ((((((~(arr_18 [i_5] [i_5] [i_4] [i_3]))) + 859967909000936391)) - 16)))), (~1));
                    arr_19 [i_3] [i_4] [i_3] = ((((max(-29868, var_6))) ? (((((((~(arr_15 [i_4] [11])))) && (!var_7))))) : (((arr_11 [i_5] [i_4]) ? var_3 : var_5))));
                    arr_20 [i_3] [i_3] = (max((!var_6), var_1));
                    arr_21 [i_3] [16] [i_3] = (((((min((arr_16 [i_5] [i_4] [i_3]), var_9)) >= -5629092003311775246)) ? var_5 : ((var_9 ? var_3 : (min(var_8, var_9))))));
                    var_13 = (min(var_13, (((3 ^ ((((((arr_17 [i_5] [1] [1] [i_3]) >> (5629092003311775246 - 5629092003311775222)))) + ((5629092003311775231 ? (arr_18 [i_3] [i_3] [i_4] [i_3]) : var_1)))))))));
                }
            }
        }
    }
    #pragma endscop
}
