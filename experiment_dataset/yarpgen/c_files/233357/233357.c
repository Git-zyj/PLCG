/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (arr_6 [i_2]);
                    arr_8 [i_0] [i_0] [i_1 + 1] [i_1 + 1] = (arr_2 [i_2]);
                    arr_9 [i_0] [i_1] [i_2] = (((!((min(var_2, var_11))))));
                }
            }
        }
    }
    var_19 = ((var_13 ? -922462322 : ((min(var_12, (!-44))))));
    #pragma endscop
}
