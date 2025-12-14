/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((-2147483647 - 1) >= (((arr_2 [i_0 + 1] [i_0 + 1]) << (((arr_2 [i_0] [i_0 + 1]) - 6033436717857658058))))));

                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    var_16 ^= (~10311057567746828302);
                    var_17 = (10311057567746828302 - 4294967279);
                }
                arr_9 [i_0] = ((((~0) >= (2147483617 || 0))));
            }
        }
    }
    var_18 = (~var_13);
    var_19 |= var_9;
    #pragma endscop
}
