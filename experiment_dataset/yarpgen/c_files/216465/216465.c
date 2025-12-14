/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_2 + 2] [i_1] [i_2 - 2] = (~-1067326169);
                    arr_9 [i_0] [i_1 + 1] [i_2] = ((arr_4 [4] [i_1 - 1]) / (((((arr_5 [14]) ? var_11 : var_10)) * (((arr_5 [i_0]) / (arr_2 [i_0] [i_1 + 1]))))));
                }
            }
        }
    }
    var_17 = (max(691800851, var_7));
    #pragma endscop
}
