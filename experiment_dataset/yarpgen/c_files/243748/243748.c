/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 *= (max((((arr_4 [i_0] [i_0 - 1] [i_1 - 1]) ? var_1 : -7067)), var_5));
                var_12 = (((((7068 ? 0 : 11907))) * (arr_1 [i_0])));
                var_13 = 1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    arr_12 [i_2] = var_3;
                    var_14 += (max((arr_11 [1] [i_3] [i_4 - 1] [i_2 - 1]), 0));
                    var_15 ^= ((7055 ? ((var_0 ? (arr_2 [i_3]) : (!0))) : (((((-(arr_7 [i_2] [i_3])))) ? var_9 : (arr_11 [i_2 - 1] [i_4 - 1] [i_2 - 1] [i_2 - 1])))));
                    arr_13 [i_3] [1] [i_3] [i_3] |= min(0, (arr_0 [i_2] [1]));
                    var_16 = (min(1, 15243));
                }
            }
        }
    }
    #pragma endscop
}
