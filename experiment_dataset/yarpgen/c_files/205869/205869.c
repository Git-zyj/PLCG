/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_13, (((((10 ? 11048545827064282264 : var_17)) <= var_8)))));
    var_19 = var_9;
    var_20 -= var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = -11;
        arr_2 [i_0] [i_0] &= (-5 | var_14);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_22 = ((-22811 ? 7398198246645269327 : -11));
        arr_7 [i_1] = 10014;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_23 = (arr_9 [i_2]);
        var_24 &= 10040;
    }
    #pragma endscop
}
