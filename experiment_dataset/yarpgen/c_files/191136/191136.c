/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (min(var_15, 8));
        var_16 = (min(var_16, -3670376463946157003));
        var_17 = 63;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 += 2044;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                {
                    var_19 = (min(var_19, 1));
                    var_20 = (min(var_20, 165548493));
                    var_21 -= 18446744073709551607;
                    var_22 = -32738;
                    var_23 = (min(var_23, 0));
                }
            }
        }
        var_24 = 1;
    }
    var_25 = (min(var_25, var_2));
    var_26 = (min(var_26, var_8));
    #pragma endscop
}
