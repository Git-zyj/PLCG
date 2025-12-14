/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((1 || var_14), (~0)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = ((((((var_0 << (var_9 - 8455420827926093406))) ? (((arr_3 [i_0]) - 1837991371)) : var_4))));
        var_17 = var_5;
        arr_4 [i_0] = ((((((1071644672 ? 0 : 1))) ? ((max(302029884, 1))) : (min(0, 3458764513820540928)))) - var_1);
        var_18 = (max(var_18, ((min(96, (min((arr_2 [i_0] [i_0]), 15287998526597957284)))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_19 = (((4421597159159163926 / 1105279889535821586) & ((((((arr_6 [i_1]) + 2147483647)) >> (var_9 - 94))))));
        arr_9 [i_1] = var_6;
        var_20 ^= var_3;
    }
    var_21 = 32760;
    #pragma endscop
}
