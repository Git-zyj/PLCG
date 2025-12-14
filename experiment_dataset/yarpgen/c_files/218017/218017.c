/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(var_16, (max(var_17, 2648017728))))) != (((var_13 - -38) ? (max(38, 12402142970539698297)) : (((-33 ? 1067405842 : var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (((!(arr_1 [i_0] [i_0]))));
                var_20 = 221;
            }
        }
    }
    var_21 = ((var_4 ? var_8 : var_12));
    var_22 = (min(((var_11 ? -var_17 : (min(var_15, var_12)))), (((var_11 ? (-33 && var_16) : var_3)))));
    var_23 = 1770526218;
    #pragma endscop
}
