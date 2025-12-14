/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max(-1451667024, -1451667024);
    var_12 = -var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [8] &= (min((~1188681269), 15777));
                arr_6 [i_0] = (min(((var_3 ? (arr_1 [i_0]) : -1451667024)), -var_1));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 |= (arr_0 [i_0]);
                                var_14 += max(17289, (((arr_4 [13] [i_2] [i_2 + 1]) ? var_0 : (arr_3 [i_2] [i_2]))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [12] [11] = (((((-(min((arr_13 [4] [i_1] [3] [3] [i_1 - 1]), 0))))) ? (((((arr_3 [i_0] [i_1]) ? var_10 : var_8)) >> (arr_14 [i_0] [i_1]))) : -1));
            }
        }
    }
    #pragma endscop
}
