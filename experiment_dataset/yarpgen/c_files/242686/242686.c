/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 = (-1 && var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = 249;
                var_23 = (min(var_23, (((~((max((arr_5 [i_1]), var_3))))))));
                var_24 = (((max(((var_15 ? var_5 : var_1)), ((((arr_3 [i_0]) && 1))))) - (((((arr_1 [i_0]) | var_2)) & ((((arr_3 [i_0]) != 1)))))));
                var_25 *= (-var_1 % 239);
                arr_6 [8] [8] [8] = -var_6;
            }
        }
    }
    #pragma endscop
}
