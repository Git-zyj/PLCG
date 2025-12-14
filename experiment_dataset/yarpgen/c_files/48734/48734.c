/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0 - 2] [i_1] &= var_6;
                var_18 ^= var_4;
                var_19 = (arr_3 [i_0] [i_1]);
            }
        }
    }
    var_20 = (max(var_20, var_13));
    #pragma endscop
}
