/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = ((((-(max(var_9, var_15)))) * (!-7257419113672281587)));
                var_17 = ((max(var_8, (3366696620 == 1))));
                var_18 = (max(var_18, (((((max(1, (18446744073709551615 >> 8)))) && 2821096041)))));
            }
        }
    }
    var_19 = var_11;
    var_20 = var_3;
    #pragma endscop
}
