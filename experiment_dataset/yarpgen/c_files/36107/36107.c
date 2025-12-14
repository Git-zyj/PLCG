/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((-var_11 <= var_8) ? (var_4 && var_12) : var_3));
    var_16 = ((~var_10) ? (~1835008) : (min((var_4 & var_1), (min(var_2, var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = max((arr_2 [1]), (((((arr_4 [i_2]) >= 0)) && (min((arr_2 [i_1]), var_2)))));
                    arr_8 [15] [i_1] [i_1] [16] = var_0;
                }
            }
        }
    }
    var_17 = (min((max((var_1 - var_9), (min(1, var_13)))), (((var_2 ? var_0 : var_11)))));
    #pragma endscop
}
