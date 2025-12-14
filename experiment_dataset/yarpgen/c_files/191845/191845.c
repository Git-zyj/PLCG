/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = (min(var_21, -var_15));
    var_22 += (!var_17);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_23 = (min(var_23, var_16));
                    var_24 ^= (min(var_0, (var_13 / var_12)));
                    var_25 = (min(var_25, (((var_19 && (((-((min(var_1, var_12)))))))))));
                }
            }
        }
    }
    var_26 = (min(var_26, var_8));
    #pragma endscop
}
