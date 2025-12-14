/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (max((~0), 1));
                arr_5 [i_0] [i_0] = 4965899388120782125;
            }
        }
    }
    var_11 ^= max(-var_1, 432345564227567616);
    #pragma endscop
}
