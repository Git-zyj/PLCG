/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [6] [6] = var_10;
                arr_6 [0] [0] [0] |= ((((((((var_6 ? var_7 : var_6))) ? var_8 : ((var_16 ? var_10 : var_18))))) ? (arr_2 [i_0] [i_1]) : var_19));
            }
        }
    }
    var_20 = var_11;
    var_21 = (((((-1488968149 ? ((39871 ? var_13 : 3289360607)) : (((-2358399929693967296 ? var_19 : 2358399929693967299)))))) && var_9));
    var_22 = (~var_8);
    var_23 = var_18;
    #pragma endscop
}
