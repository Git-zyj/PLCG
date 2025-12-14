/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, 10800780958373768494));
                    var_19 = (max(var_19, (((~(57378 | 255))))));
                }
            }
        }
    }
    var_20 = (max(var_20, 57380));
    #pragma endscop
}
