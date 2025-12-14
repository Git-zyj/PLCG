/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((var_14 && -25) << (var_4 + 62)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (max((((arr_2 [i_1 - 1]) ? 1 : var_6)), 959983369));
                var_17 += (min(37852, -2147483640));
            }
        }
    }
    #pragma endscop
}
