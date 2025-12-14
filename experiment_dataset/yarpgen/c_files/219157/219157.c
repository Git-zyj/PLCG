/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~(!var_12));
    var_20 = ((((max(1, (var_6 / var_8)))) ? (((max(var_17, 32749)) / var_9)) : -11));
    var_21 &= (((((var_12 ? var_4 : var_11)) - var_18)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_22 = (((var_7 * var_0) ? -var_10 : ((min((arr_1 [i_0]), (((57068 ? (arr_3 [i_0] [i_0] [i_1]) : (arr_2 [i_0])))))))));
                var_23 = ((((((arr_1 [i_1]) - (arr_1 [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_1]) : var_15)) : (max((arr_1 [i_0]), 1))));
                var_24 += (arr_1 [i_0]);
            }
        }
    }
    var_25 = (1 % 1);
    #pragma endscop
}
