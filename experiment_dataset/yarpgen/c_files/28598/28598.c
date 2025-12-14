/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = ((arr_0 [i_0]) ? (arr_2 [12]) : -3049248745040247240);
        var_12 |= -3049248745040247240;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_13 = -1;
        var_14 = (max(var_14, (arr_6 [i_1] [3])));
        var_15 = (((arr_7 [i_1]) << (((arr_6 [i_1] [i_1]) - 24))));
        arr_8 [i_1] [14] |= (((arr_5 [8]) ? (arr_6 [i_1] [i_1]) : (arr_7 [2])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_16 = (~2147483647);
        var_17 = ((~(((!(arr_11 [i_2] [i_2]))))));
    }
    var_18 = (var_8 ^ 6087325606615399279);
    #pragma endscop
}
