/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 += (max(var_6, -1775735949));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_19 = (max(var_19, (1 + 1)));
        var_20 = ((((arr_1 [14] [i_0]) ? var_14 : var_3)));
        arr_2 [i_0] [i_0] = ((-(1 <= var_13)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 = (var_6 ? var_10 : ((max(var_14, (var_8 >= -11)))));
        var_22 = (((((-9119 ? 1 : 1))) ? var_0 : (((!(arr_6 [i_1]))))));
    }
    #pragma endscop
}
