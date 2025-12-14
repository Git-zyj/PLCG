/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~(14032884105772184721 & var_3))));
    var_14 &= ((min(((min(7403, 1)), var_9))));
    var_15 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = ((+(((arr_1 [i_0]) * var_11))));
        var_17 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    var_18 = 4413859967937366897;
    #pragma endscop
}
