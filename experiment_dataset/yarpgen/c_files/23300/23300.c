/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = ((var_3 ? (max((((var_11 ? var_11 : var_9))), var_3)) : ((max(-1, var_6)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 += (((arr_2 [i_0 - 1]) & (arr_2 [i_0 + 1])));
        var_16 = ((-var_6 ? (arr_2 [i_0 - 1]) : var_7));
    }
    #pragma endscop
}
