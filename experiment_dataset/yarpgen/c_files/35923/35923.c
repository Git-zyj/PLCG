/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 0;
    var_20 = (min((max((max(-821890328, -7455406844695044411)), (1930777479 < 3832067100731050434))), (max(795178744551285667, ((110 ? 13048 : var_12))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        arr_3 [6] = (((arr_1 [i_0] [i_0 + 1]) || (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [i_2] [i_2] = (~569668663);
                    arr_12 [i_0 + 1] = (((arr_6 [i_0 - 1] [i_0] [i_0 - 1]) ? (arr_9 [i_0] [i_1] [i_2]) : (arr_4 [i_0 + 2])));
                    arr_13 [i_0] [i_0] [11] [i_2] = (((arr_8 [13]) * (arr_1 [i_1] [i_2])));
                }
            }
        }
        arr_14 [i_0 + 2] [i_0] = (!2717565876);
    }
    #pragma endscop
}
