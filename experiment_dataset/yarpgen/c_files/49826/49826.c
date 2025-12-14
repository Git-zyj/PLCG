/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 -= ((var_1 ? (((arr_1 [i_0]) + var_15)) : (((((arr_0 [i_0]) ? var_5 : var_14))))));
        arr_2 [16] = ((var_7 ? (arr_1 [i_0]) : (max(((2436 << (((-50 + 72) - 5)))), (var_9 - var_12)))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_17 = ((-(min(-12195, -var_6))));
        var_18 = ((14584289626840237995 ? var_9 : (!32765)));
        var_19 -= ((((((12196 ? 12189 : var_2)) ? -62 : (!1)))));
        var_20 = (((~1) ? (((!(arr_5 [i_1 + 3] [14])))) : ((min((max(83, 25)), (2147483643 > -467899380))))));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        arr_9 [0] |= min(1813637210, (min(-11057, (max(var_4, 262704980)))));
        var_21 = ((((((max(var_7, -11058)) * -0))) ? var_3 : (min(((((arr_6 [i_2 - 2]) ? 4032262315 : 7))), var_0))));
        arr_10 [22] &= (var_6 ^ ((((~7) ? ((1 ^ (arr_6 [0]))) : (arr_6 [i_2])))));
    }
    var_22 = var_14;
    var_23 = var_9;
    #pragma endscop
}
