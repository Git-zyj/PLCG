/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((2147483638 ? 2147483638 : 1));
                var_15 = 0;
            }
        }
    }
    var_16 = var_1;
    var_17 = var_5;
    #pragma endscop
}
