/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [6] [i_2] = var_9;
                    arr_9 [5] [i_1 - 4] [i_2] [i_2] = var_8;
                }
            }
        }
    }
    var_10 = 243;
    #pragma endscop
}
