/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((((1 ? var_8 : (var_8 >= 1)))) ? (min(var_12, var_6)) : (((-((var_7 ? 1 : 1))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_1] = ((((var_10 ? 80 : var_2))));
                arr_5 [3] |= (var_0 ? (((~(var_6 | 1)))) : (((arr_2 [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (var_1 & var_6))));
            }
        }
    }
    var_14 = var_4;
    var_15 = (max(var_15, (((var_6 ? (((224 != (!1)))) : 1)))));
    #pragma endscop
}
