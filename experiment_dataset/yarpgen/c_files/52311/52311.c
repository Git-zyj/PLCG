/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [12] |= (((((arr_4 [i_0] [1] [i_0 + 1]) ? (arr_2 [0]) : (arr_4 [i_0] [14] [i_0 + 1]))) + (((var_0 | var_9) ? ((min((arr_4 [i_0] [18] [i_1]), (arr_4 [i_0] [12] [2])))) : (((arr_2 [18]) - (arr_2 [16])))))));
                var_17 = (((min(var_3, 3215951418)) & ((((arr_5 [i_0 + 1]) + (~1))))));
                arr_7 [i_0] [i_0] = ((-(((((-(arr_0 [i_0]))) < (arr_5 [i_0 + 1]))))));
            }
        }
    }
    var_18 = (min(var_16, ((var_3 ? var_15 : var_3))));
    var_19 = var_8;
    #pragma endscop
}
