/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((!5293) ? 120 : (var_3 & -1)));
        arr_3 [i_0] = var_3;
        var_11 = (-115 && 24794);
        var_12 = (var_1 | var_10);
        var_13 = (min(var_13, ((((1812386333 - -87) + -104)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_14 = (max(44985, -32755));
        arr_6 [i_1] [i_1] = ((15812 & (~14755152661474014305)));
        var_15 = (min(((max(20809, 14494))), (~-420841124)));
        var_16 = (max(var_16, 35));
    }
    var_17 = var_4;
    var_18 = ((!((((7296 % var_2) & 1812386332)))));
    #pragma endscop
}
