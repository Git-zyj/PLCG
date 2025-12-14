/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_9 ? ((((min(var_6, 3812257807557622186))) ? var_7 : (min(var_10, 3812257807557622200)))) : 3812257807557622186));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = (min(((11 ? 1 : ((18446744073709551602 ? 18446744073709551602 : 32767)))), ((((2147483647 ? 1730877792 : var_5))))));
        var_15 = (((~32) | (((0 ? 58581 : (arr_0 [i_0]))))));
        arr_4 [i_0] = ((var_0 + (-2147483647 - 1)));
        var_16 = (((max(1, (min(102, 25))))) ? (((min(18446744073709551607, var_5)) << (((var_8 - var_6) - 3619445262)))) : (-1 & var_5));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_9 [i_1] = ((-(((0 ^ 32) ? (min(var_10, 72057594037927932)) : ((69 ? var_11 : var_7))))));
        var_17 = (((((2053661367 | var_12) ? ((65512 ? var_3 : var_4)) : (~32661))) % ((524256 ? 186 : 1))));
        arr_10 [i_1] [i_1] = (~65535);
    }
    var_18 = -37;
    #pragma endscop
}
