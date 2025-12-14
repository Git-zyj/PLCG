/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_0, ((((min(var_11, var_2))) ? ((var_4 ? -74 : var_11)) : (!var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((!var_3) || (((-120 ? 16 : 65237))));
                var_17 = (min(298, 65535));
                var_18 = ((5857667263214866487 ? (min((arr_3 [i_1 - 2] [i_1 - 2] [i_1 + 1]), var_9)) : var_0));
            }
        }
    }
    var_19 = var_12;
    #pragma endscop
}
