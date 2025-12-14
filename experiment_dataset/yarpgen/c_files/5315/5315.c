/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (((((~7) | var_0))) ? var_5 : (max((~18), (min(var_9, var_15)))));
    var_17 = (((((var_15 * (193 / var_12)))) ? (((181 | var_2) | (~var_6))) : 18));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = (!var_9);
                var_19 -= ((((var_14 && (arr_2 [i_0] [i_1] [0]))) ? (arr_2 [i_0] [i_0] [i_1]) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (((arr_4 [i_0] [i_0] [i_1]) ? 32767 : var_6))))));
            }
        }
    }
    var_20 = ((((((((var_8 ? var_2 : var_12))) ? (((min(var_6, var_2)))) : ((23 ? var_5 : var_0))))) && ((max(193, 38)))));
    #pragma endscop
}
