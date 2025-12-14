/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (max(var_19, -0));
                arr_5 [i_1] = (~16);
            }
        }
    }
    var_20 = (min(var_20, (((var_16 ? (((-(var_3 < var_8)))) : 14923132510335525557)))));
    var_21 ^= var_11;
    #pragma endscop
}
