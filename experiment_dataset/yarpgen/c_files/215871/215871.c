/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 ? var_2 : (min(var_7, var_10))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = var_2;
        var_14 = ((171 ? (arr_1 [i_0]) : var_6));
        arr_3 [i_0] = -809614001;
    }
    #pragma endscop
}
