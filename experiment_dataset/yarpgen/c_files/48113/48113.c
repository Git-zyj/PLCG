/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((0 ? ((var_12 ? var_3 : var_7)) : ((2115167954 ? var_7 : 2179799341)))));
    var_21 = 2147483647;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_22 = arr_1 [i_0];
        var_23 = (-(arr_2 [i_0]));
    }
    var_24 = var_7;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                var_25 = -91;
                var_26 = (((((min(16, 165))) ? ((min(0, (arr_6 [i_1])))) : ((2115167954 / (arr_6 [i_2]))))));
            }
        }
    }
    #pragma endscop
}
