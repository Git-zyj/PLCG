/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2912249575311739900;
    var_16 = 66;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = 15534494498397811715;
                var_18 = 15534494498397811716;
            }
        }
    }
    #pragma endscop
}
