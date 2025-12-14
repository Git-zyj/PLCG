/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = ((!(((((var_2 ? var_0 : -6444766629706544934)) - var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = ((((!((!(arr_1 [i_0]))))) ? (((((((511 ? (arr_3 [i_0]) : (arr_2 [4])))) || (!514))))) : (((arr_4 [i_0 - 1] [i_0 + 1]) ? (arr_4 [i_0 + 2] [i_1]) : (arr_5 [i_0] [i_0 - 2] [10])))));
                arr_6 [i_0] [i_0 - 2] [6] &= (arr_4 [10] [i_0]);
            }
        }
    }
    var_14 += (3279737818910673284 < -3279737818910673282);
    var_15 = var_0;
    #pragma endscop
}
