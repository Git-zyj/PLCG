/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((var_12 ? var_7 : var_6)) & 1174876280))) ? (((var_15 >> ((((1 ? var_15 : -9223372036854775780)) - 109308660))))) : ((var_14 ? 0 : (var_8 - var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (min((((!((((arr_5 [i_0]) - 0)))))), (min((arr_4 [i_1] [i_1 - 1]), (((arr_3 [i_0]) ? var_11 : 1))))));
                var_19 = ((((max(-var_8, 4294967295))) ? (min(-6544408257719699559, 4294967295)) : ((((arr_1 [i_1 - 1] [i_1 - 1]) - 2761168749)))));
            }
        }
    }
    var_20 = (!1);
    #pragma endscop
}
