/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 ? -22547 : (max(-22561, ((max(18329, var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = -22538;
                    var_12 ^= ((((max(-22538, 13152666949242548472)) << (((1 - 5466818928152759723) + 5466818928152759779)))));
                }
            }
        }
    }
    #pragma endscop
}
