/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 = ((var_0 ^ ((max(var_5, var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_18 ^= var_14;
                var_19 = 59653;
            }
        }
    }
    var_20 = ((2147483647 >> (var_8 + 2093985963)));
    #pragma endscop
}
