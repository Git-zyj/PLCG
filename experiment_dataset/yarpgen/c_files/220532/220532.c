/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_12 -= 2215281767;
        var_13 ^= var_1;
        arr_3 [i_0] = var_0;
        arr_4 [i_0] = (-18 && 2079685528);
        var_14 = var_3;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_15 = (max(var_15, ((max(38, 7)))));
        arr_8 [i_1] = ((((((arr_6 [i_1 + 2] [i_1 - 1]) & (((min(var_8, 4))))))) ? 1547733642 : (min((arr_6 [i_1 - 2] [i_1 - 2]), (arr_7 [i_1 - 1] [i_1])))));
        var_16 |= ((min(((1491195314 ? -72 : var_6)), (max((arr_7 [i_1] [i_1]), 32)))) | (var_1 > var_3));
    }
    var_17 = -62;
    #pragma endscop
}
