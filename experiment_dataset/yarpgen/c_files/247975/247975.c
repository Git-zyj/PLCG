/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((8 ? (max(8, 25966)) : ((var_13 ? 517746160 : var_1))))), (max(((var_6 ? var_11 : var_2)), 3777221126))));
    var_19 = (max(((var_15 ? 3777221136 : var_15)), ((2799091158 << (var_13 - 1450307921)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 2] [3] [i_0] = -31007;
                    arr_9 [9] [i_0] = (((((((var_10 ? var_3 : 55640)) || -397189404)))));
                    arr_10 [i_0] [i_0] [i_2] = var_15;
                    var_20 = var_16;
                }
            }
        }
    }
    #pragma endscop
}
