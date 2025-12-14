/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_14 ^= var_1;
                arr_5 [i_0] [i_0] [i_1 + 2] = 165;
            }
        }
    }
    var_15 = (max(-var_2, 163));
    var_16 ^= var_3;
    var_17 = var_11;
    #pragma endscop
}
