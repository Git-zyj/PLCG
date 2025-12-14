/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_1);

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 |= var_17;
        arr_2 [i_0] = ((((((!var_8) | var_2))) ? ((var_12 ? (arr_0 [i_0] [i_0 + 1]) : var_8)) : ((((((arr_0 [i_0] [i_0]) ? var_8 : var_7))) ? (arr_0 [i_0] [i_0]) : var_17))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = (((arr_4 [i_1]) ? (-91 / 1335521695) : var_3));
        var_21 = var_5;
    }
    #pragma endscop
}
