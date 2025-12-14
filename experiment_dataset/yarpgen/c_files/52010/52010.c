/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] |= 47;
                var_10 = max((arr_1 [i_0]), (((-13464 <= (~var_8)))));
                var_11 = (max(var_11, var_9));
            }
        }
    }
    var_12 = var_0;
    var_13 = (((max(((var_5 ? var_7 : 6824844083658558155)), (max(var_7, var_4)))) & ((min(-22819898, (min(var_0, var_3)))))));
    #pragma endscop
}
