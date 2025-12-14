/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (min((((5331 ? (((arr_2 [i_0]) >> (var_16 - 4221))) : (((max(1, var_15))))))), (max((((arr_0 [i_0]) + var_11)), var_8))));
                var_19 = (((((((var_15 ? (arr_0 [i_1]) : (arr_3 [i_0] [i_1 + 2] [i_1 + 2]))) | var_9))) ? var_2 : (max(51497, (min(3732655769239172507, (arr_2 [i_0])))))));
            }
        }
    }
    var_20 = 13378982022915140947;
    var_21 = var_4;
    var_22 = (((((((max(var_0, var_5))) && var_13))) & (((min(var_13, var_3))))));
    #pragma endscop
}
