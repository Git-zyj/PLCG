/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = var_2;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        var_14 |= var_4;
                        var_15 = (min((--1), (((((25466 ? -124 : var_10))) ? 25476 : var_6))));
                        var_16 ^= 0;
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, 2109617114));
    #pragma endscop
}
