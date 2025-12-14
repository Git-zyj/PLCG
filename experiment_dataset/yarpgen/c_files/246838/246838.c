/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_7 % ((min(var_14, var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 |= var_12;
                arr_6 [i_0 - 1] [i_0 - 1] = var_7;
                var_17 = (~11);
                var_18 &= 1137102187;
            }
        }
    }
    #pragma endscop
}
