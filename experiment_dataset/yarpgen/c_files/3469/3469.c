/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 ^= 229;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 *= (max(4408279077069487097, 255));
                    var_17 = (226 > 255);
                }
            }
        }
    }
    #pragma endscop
}
