/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((1 ? 59431 : 4374691007915525478));
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 *= max(((~(min((arr_1 [i_1]), var_8)))), (arr_1 [i_1]));
                var_21 = (min(var_21, (arr_4 [i_0])));
                arr_5 [i_1] [2] [1] &= ((!((((!(arr_3 [i_0] [16] [i_1]))) && (923017488 || 923017487)))));
                var_22 = (max(var_22, (((-var_2 & ((var_1 ? (arr_0 [i_1] [4]) : var_4)))))));
            }
        }
    }
    var_23 = (min(-var_10, ((max(-23, var_5)))));
    var_24 = 63109;
    #pragma endscop
}
