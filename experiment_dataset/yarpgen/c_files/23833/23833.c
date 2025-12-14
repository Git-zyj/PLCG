/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(0, (max((~var_9), (var_1 << var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (-5243102238405603601 == 1);
                    var_16 = var_7;
                }
            }
        }
    }
    #pragma endscop
}
