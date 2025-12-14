/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_8 ? var_1 : (157265878 & -1524400924)))) | ((var_3 ^ ((var_8 ? var_16 : var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 -= ((((!(arr_1 [i_0]))) ? ((var_8 ? var_0 : (arr_1 [i_0]))) : var_0));
                var_20 -= ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_14))) && ((min((arr_4 [i_0] [i_0] [i_1]), var_3)))));
                arr_5 [i_0] [i_0] [i_0] &= ((((max((arr_3 [i_0] [i_1]), 213))) ? ((var_13 ? var_8 : var_14)) : (~-1)));
            }
        }
    }
    var_21 = (((((min(3311973969, 207))) ? (var_11 - var_5) : var_4)));
    #pragma endscop
}
