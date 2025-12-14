/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [1] [i_0] = ((((((3906635152 ? 2583045801 : 105))) < var_7)) ? 2583045801 : ((((64 ? 2583045801 : var_8)) % 119)));
                    var_14 = (max(((-65 ? (max(3605017038, -49)) : (((-65 ? (arr_0 [i_0]) : var_13))))), (((var_11 * 0) ? ((115858014 >> (arr_5 [2]))) : 819120157))));
                }
            }
        }
    }
    var_15 -= var_12;
    var_16 = ((((var_12 ? (((-49 ? var_6 : var_11))) : ((var_4 ? var_4 : var_5)))) >> (var_13 - 21426696)));
    var_17 |= 69;
    #pragma endscop
}
