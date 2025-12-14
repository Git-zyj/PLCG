/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 + 2] [i_1 + 2] [i_2] = (0 && 28936);
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((8 ? (-1 / 16827) : -28943));
                    var_14 = (~28940);
                }
            }
        }
    }
    #pragma endscop
}
