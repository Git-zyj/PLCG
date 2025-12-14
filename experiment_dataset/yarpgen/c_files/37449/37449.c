/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = ((max(-118, 4294967295)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (arr_4 [i_0] [10] [i_0])));
                var_17 += (((var_1 && (29 && var_1))));
            }
        }
    }
    var_18 ^= var_10;
    #pragma endscop
}
