/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = (min(var_18, (((-(!var_6))))));
    var_19 = 1468052178;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 ^= ((((!(arr_2 [i_0]))) ? var_13 : var_2));
        arr_3 [i_0] = var_13;
        arr_4 [i_0] = (~var_10);
    }
    #pragma endscop
}
