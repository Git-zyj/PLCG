/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((-((var_10 ? var_15 : var_5))));
        var_20 = 2621655522;
        var_21 = ((-26099 || ((!(arr_2 [i_0])))));
        var_22 += ((~(((arr_0 [i_0] [8]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))));
        var_23 = (min(var_23, var_4));
    }
    #pragma endscop
}
