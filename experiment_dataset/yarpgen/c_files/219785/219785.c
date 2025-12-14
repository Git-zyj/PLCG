/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = var_9;
                var_16 *= (-var_10 / var_2);
                arr_5 [0] [i_0] [i_0] = ((min(((((((arr_3 [i_1] [i_1]) + 2147483647)) >> (((arr_2 [i_1] [i_0]) - 242))))), (max((arr_1 [8]), var_5)))));
                arr_6 [i_0] = (var_2 ^ 91);
            }
        }
    }
    var_17 -= ((((max(((min(var_0, var_4))), (min(var_9, var_13))))) ? 26140 : var_10));
    var_18 = (max(var_5, var_5));
    var_19 = ((((max(var_12, var_11))) << (((((min(var_3, (var_11 - var_3))) + 1598502543)) - 12))));
    #pragma endscop
}
