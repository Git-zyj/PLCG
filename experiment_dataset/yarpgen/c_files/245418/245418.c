/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = var_0;
                var_21 = ((9 ? (min(-3901, var_16)) : (((min(158, (arr_1 [i_0])))))));
            }
        }
    }
    var_22 &= (-102 * 96);
    var_23 = ((((((679000980 & 1) ? ((var_16 ? var_14 : var_12)) : var_15))) ? (((77 ? (-102 % 101) : (((-127 - 1) % 8355840))))) : (((!var_6) ? var_13 : var_16))));
    var_24 &= var_7;
    #pragma endscop
}
