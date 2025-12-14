/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_8;
    var_14 -= (((!-18446744073709551615) ? 126 : (((((1 ? 2899421612 : 41579))) ? 23952 : var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = var_11;
                var_16 = ((8589934591 ? 41579 : 18446744065119617024));
            }
        }
    }
    #pragma endscop
}
