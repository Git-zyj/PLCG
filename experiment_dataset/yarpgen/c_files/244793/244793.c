/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_2;
    var_19 -= ((-((-var_13 ? var_14 : (448416904 - 117022985)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 ^= (((3796660735 % var_0) / var_16));
        var_21 ^= (((arr_1 [i_0]) | (39842 | -1519291665)));
        var_22 ^= (811152828 != -811152829);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = var_16;
        var_23 = (max(var_23, (((((((max(-811152838, 363766314777327884)) < var_1))) <= ((((((var_12 << (((arr_0 [i_1]) - 2379503221))))) && var_3))))))));
        var_24 ^= (811152828 | 0);
        var_25 ^= (arr_4 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_26 = (max(((~(arr_1 [i_2]))), (!157)));
        arr_10 [i_2] [i_2] = (((((((0 ? (arr_5 [i_2]) : var_1))) - ((var_10 << (((((arr_3 [i_2]) + 1634646949)) - 26)))))) * (147 != -126)));
        var_27 &= (((((-811152829 ? 28195 : 108))) ? (arr_1 [i_2]) : (((((arr_1 [i_2]) + 9223372036854775807)) >> (((arr_1 [i_2]) + 497587111089827303))))));
        var_28 ^= (arr_3 [i_2]);
    }
    #pragma endscop
}
