/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 &= 9417290571486489912;
                arr_6 [i_0] [i_0] = 54;
                var_20 ^= var_5;
            }
        }
    }
    var_21 *= var_2;
    var_22 = (min(var_22, (max(((var_16 ? var_10 : var_5)), var_2))));
    #pragma endscop
}
