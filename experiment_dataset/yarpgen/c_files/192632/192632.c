/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((min(-2016, -36328906)))));
                var_16 = ((!((max((max((arr_4 [i_0] [i_1]), -36328906)), (-522475778 - 51))))));
            }
        }
    }
    #pragma endscop
}
