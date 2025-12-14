/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (-1 ? (arr_0 [i_0]) : (arr_0 [i_0]));
        var_21 += (((arr_1 [2]) ? var_17 : -1));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_22 += (!(!var_9));
        var_23 = (max(var_23, 1));
    }
    var_24 = (max(((((!var_9) > (!var_13)))), 218));
    #pragma endscop
}
