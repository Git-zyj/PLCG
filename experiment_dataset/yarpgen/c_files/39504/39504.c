/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = (max(var_19, ((((((~var_5) | 64)) | (64 ^ 103))))));
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_21 += ((~((min(30429, 0)))));
                var_22 = (min(var_12, ((~(var_9 % 136)))));
            }
        }
    }
    #pragma endscop
}
