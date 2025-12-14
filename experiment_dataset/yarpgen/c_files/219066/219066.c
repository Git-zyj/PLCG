/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(var_15, var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_18 ^= (-1104074299101532154 ? -2412195918994139608 : -945583892352400953);
                var_19 = -var_11;
            }
        }
    }
    #pragma endscop
}
