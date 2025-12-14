/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_12));
    var_15 = ((-(((var_8 - 24) + (((24 ? -1516058140 : var_11)))))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [15] = (!-0);
        var_16 = (~var_8);
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_17 = 3427042190604858922;
        var_18 ^= (~((1 ? var_2 : -19176)));
        arr_6 [15] = ((((((3828748172171745020 / var_1) ? (24 * 0) : 18446744073709551585))) ? ((var_9 ? var_0 : (((6638551998227065279 ? var_11 : var_3))))) : (((((var_5 ? 2794 : 18446744073709551615)))))));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        arr_9 [i_2] [9] = -var_6;
        var_19 ^= (((-6042150028463978775 ? var_9 : 2791)));
        var_20 = ((((min(1742741336, var_11))) ? ((((!(34 && var_7))))) : (~3515228937498377993)));
        var_21 ^= (((4294967292 >= var_11) / ((-6042150028463978775 ? 1 : var_7))));
    }
    var_22 = var_3;
    #pragma endscop
}
