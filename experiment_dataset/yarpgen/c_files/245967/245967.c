/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((var_10 ? var_4 : (43149 + 43149))) % (((~(1 % -790029237))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = (~((1 ? var_6 : var_0)));
        arr_3 [i_0] = (var_15 * (13888111411630474356 % 1));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_18 = ((~((~(min(var_1, var_15))))));
        var_19 = (min(var_19, (~39433)));
    }
    var_20 = ((var_5 % ((var_5 ? (var_0 % var_13) : var_6))));
    #pragma endscop
}
