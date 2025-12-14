/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (1 * 126976);
    var_16 = ((1 ? (((1 ? 1 : var_5)) : -1152851135862669312)));
    var_17 += (((((0 ? 1 : 1))) ? ((min(1, var_10))) : ((min(1, 1)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = 1;
                    arr_8 [i_2] &= ((32 ? 224 : ((14 ? ((var_6 ? 32767 : (-9223372036854775807 - 1))) : 3))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                {
                    var_19 |= ((max((arr_15 [i_4 - 1] [i_3]), (arr_16 [4] [i_5 + 3] [i_4 - 1] [i_3]))) != (((((arr_12 [i_5 + 2] [i_4 - 1] [i_4 - 1]) || (arr_9 [i_4 - 1] [i_4 - 1]))))));
                    arr_18 [9] [1] [i_5] [1] = (((arr_10 [i_5 + 3] [i_5 + 1]) ? (((arr_9 [i_4 - 1] [i_4 - 1]) - (arr_10 [i_4 - 1] [i_5 + 2]))) : (((((var_4 ? (arr_11 [1] [i_5]) : 1)) - (arr_11 [i_4 - 1] [i_5 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
