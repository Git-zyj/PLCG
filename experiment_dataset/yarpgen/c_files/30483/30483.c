/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] &= (max((((7449 ? (arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 2]) : (arr_4 [i_0 + 1] [i_0 - 3] [i_0 - 2])))), ((((max(var_0, 7449))) ? (-7436 == var_5) : (max(var_6, (arr_1 [i_1])))))));
                arr_6 [19] [15] [i_0] &= ((((-7449 & (arr_4 [i_0] [i_0 + 1] [i_1]))) << ((((max((arr_4 [8] [i_0 + 1] [8]), 104))) - 12946))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] = (((((42 ? (arr_2 [i_2]) : (arr_8 [i_2] [i_2])))) ? (((arr_8 [i_2] [i_2]) / -7450)) : (arr_8 [i_2] [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_16 [i_3] [i_4] = (((((-118 ? var_2 : 7434))) ? (arr_14 [i_3] [i_3] [i_4] [i_5] [i_4]) : ((((arr_15 [i_5] [i_4] [i_3] [i_2] [i_2]) == 93)))));
                        arr_17 [1] [i_2] [6] [1] [i_5] = ((((((arr_13 [6] [i_3] [i_3] [i_3]) ? var_5 : (arr_11 [i_5])))) && (arr_13 [i_2] [i_3] [i_4] [i_4])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
