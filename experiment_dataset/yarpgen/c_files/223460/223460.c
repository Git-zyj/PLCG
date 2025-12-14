/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_14 = ((-((1 ? 949090899 : 1))));
        var_15 = ((((29946 ? var_8 : 1)) + (~-1409827600)));
        arr_2 [5] [5] = (1 != var_3);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_16 = (((((1 ? 1 : 1))) ? (((0 ? 35588 : 0))) : (0 | 2236873974)));
        arr_5 [i_1] [i_1] = ((1 ? 18446744073709551615 : 35582));
    }
    var_17 = ((!((((!29946) ? ((max(1, var_1))) : (max(var_6, 1)))))));
    var_18 = -var_1;
    #pragma endscop
}
