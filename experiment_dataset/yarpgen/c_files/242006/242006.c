/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((340220353732116689 ? ((((max(var_10, var_10))) ? ((var_0 ? var_4 : var_10)) : (((56 ? var_10 : var_3))))) : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = ((-(min((arr_2 [i_0] [i_1 - 1]), (arr_1 [i_0])))));
                var_18 = ((var_0 ? ((((arr_2 [i_0] [12]) ? ((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : -80))) : (arr_3 [i_0] [i_1 + 1] [i_0])))) : ((((((arr_4 [i_0] [i_0]) ? 712459365 : var_4))) ? (((((arr_1 [i_0]) <= -10516)))) : 340220353732116699))));
            }
        }
    }
    var_19 *= (max((max(var_7, var_9)), (((((max(var_6, var_11))) * 1179396441)))));
    #pragma endscop
}
