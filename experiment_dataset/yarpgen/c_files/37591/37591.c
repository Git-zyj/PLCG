/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = var_1;
                arr_7 [i_0] [i_1] = 56;
                var_19 = (((-2147483647 - 1) <= (~var_7)));
            }
        }
    }
    var_20 = ((((max(((2147483642 ? var_8 : 2147483640)), (18446744073709551615 < 12)))) ? 7 : (((((~var_9) && 10535379467510084779))))));
    var_21 = ((!((max((2851252242 ^ 179), (var_5 != 2150962052))))));
    #pragma endscop
}
