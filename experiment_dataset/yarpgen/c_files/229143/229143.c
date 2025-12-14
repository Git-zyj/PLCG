/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((20660 != (var_8 < 548546195418542076)));
    var_19 = (((((62710 % (-548546195418542076 && var_17)))) ? var_14 : ((-548546195418542061 ? (-9223372036854775807 - 1) : -548546195418542050))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_20 = (max(var_20, ((min(((min(56557, 4179290854))), ((0 ? var_9 : 28381)))))));
        var_21 += ((16290769613650991103 ? var_15 : var_15));
        var_22 += ((((119 ? (((217 ? 63306 : var_0))) : var_11)) / ((((45539 || 2229) / (0 || 16793110560842971423))))));
        var_23 += 54952;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_24 ^= -19020;
        arr_7 [i_1] = ((~(((-9223372036854775807 - 1) ? 1118376566 : 1536))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_25 = -9223372036854775807;
        var_26 = (var_2 ^ 12949);
        var_27 = (max(var_27, (var_13 % 16773)));
    }
    #pragma endscop
}
