/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = ((+(min(((((arr_0 [6]) ? (arr_0 [7]) : var_9))), (((arr_0 [i_1]) ? 4368069646121061977 : 60))))));
                arr_5 [i_0] [i_0] = (((arr_2 [i_0 + 1]) ^ (((((14078674427588489647 % (arr_3 [i_1]))) != (max((arr_2 [i_0 + 2]), 14078674427588489647)))))));
                var_13 = (arr_3 [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] [i_5] [i_4] [i_4] [i_5] [i_2] = (max(((((arr_6 [i_5] [i_2]) && -61))), ((189 ? (arr_6 [i_2] [i_2]) : (arr_6 [i_3] [i_2])))));

                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_14 = (arr_6 [i_6] [i_6]);
                                var_15 = (((((((((arr_14 [i_5] [i_2] [i_2]) <= (arr_13 [15] [i_3] [i_4] [i_3]))))) ^ -38)) != ((max((((arr_15 [i_5] [i_5]) ? 2147483647 : (arr_8 [i_5]))), var_6)))));
                                var_16 = (arr_15 [i_5] [i_5]);
                            }
                        }
                    }
                }
                arr_21 [i_2] [i_2] = (((((((arr_6 [15] [i_3]) > (arr_6 [6] [i_2]))))) & (((arr_6 [i_2] [5]) & (arr_11 [i_2])))));
            }
        }
    }
    #pragma endscop
}
