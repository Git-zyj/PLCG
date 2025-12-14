/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((max(var_12, var_6))) ? 17584 : var_13)) >= (((17608 ? -17586 : 17582)))));
    var_15 = (min(var_15, var_4));
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] [11] = (min(17588, -17586));
                var_17 = ((!((((arr_1 [i_0 + 2] [i_0 + 4]) ^ 17582)))));
            }
        }
    }
    #pragma endscop
}
