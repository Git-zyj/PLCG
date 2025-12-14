/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (max((var_14 * var_11), ((min(var_16, var_4)))));
                var_20 = ((4294967290 >= (-32767 - 1)));
                var_21 = var_0;
            }
        }
    }
    var_22 = ((var_18 ? var_18 : (min(-var_9, var_12))));
    var_23 = ((var_9 ? (((-((var_17 ? var_0 : var_4))))) : ((-var_8 ? var_7 : var_8))));
    #pragma endscop
}
