/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = (min(var_14, ((var_8 ^ (max(var_12, var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_19 ^= (((!var_14) ? (min(((max(1094096129, 23660))), ((10171163624208909787 ? (-9223372036854775807 - 1) : -13856)))) : (182 & -16896)));
                arr_6 [8] [8] |= ((((max(23636, -30897))) ? 10171163624208909787 : 2503405416));
                var_20 = (max(-8847472203257161148, var_9));
            }
        }
    }
    var_21 = ((var_6 ? var_12 : var_14));
    var_22 = (max(var_22, (((((((((var_12 ? var_6 : 23660))) ? (var_10 / -9223372036854775797) : (max(var_11, 10171163624208909789))))) ? ((((var_15 ? 8847472203257161147 : var_3)) >> (var_12 - 1650869158))) : (((((4 ? 7671365619457564571 : var_14))) ? var_12 : var_3)))))));
    #pragma endscop
}
