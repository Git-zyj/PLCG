/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [3] [i_1] [i_2] [i_3] [9] = (arr_2 [i_1]);
                                var_15 = ((((max(((min((arr_7 [0] [i_1] [0] [0] [i_1] [13]), 16301))), (min((arr_9 [i_0] [i_1] [i_2] [i_1] [12]), -113))))) ? (max(((1542721919 ? (arr_7 [i_0] [1] [i_2] [i_3] [i_4] [i_4]) : (arr_8 [i_2]))), (arr_1 [i_3 - 2] [i_0 - 4]))) : (((((var_4 ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3]) : (arr_10 [i_0] [7] [13] [7] [i_0] [i_0] [i_3]))) >> (var_13 + 1733528772))))));
                                arr_12 [i_1] [i_1] [i_3] [i_4] = (max((((arr_4 [i_2]) <= (((arr_10 [i_0] [11] [11] [11] [i_2] [i_3 - 2] [i_3]) << (18446744073709551615 - 18446744073709551604))))), ((var_2 && (((arr_0 [6]) && (arr_0 [2])))))));
                                arr_13 [i_3] [i_3 + 2] [15] [i_2] [i_1] [i_3] = (arr_2 [i_1]);
                            }
                        }
                    }
                }
                var_16 = (arr_5 [i_0 - 4]);
            }
        }
    }
    var_17 = var_10;
    #pragma endscop
}
