/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 -= ((((min(-118, -1598782616888768638))) & (((-1 ? var_12 : (var_8 && var_8))))));
        arr_2 [i_0] = ((((min(118, (arr_0 [i_0])))) ? (((min((arr_0 [i_0]), 2147483647)) | (((0 ? 118 : 118))))) : ((((arr_1 [i_0 - 1]) & (((arr_0 [i_0 - 1]) ? var_15 : var_8)))))));
    }
    var_17 = (1598782616888768638 >= (min((~-123), (1598782616888768638 >> 1))));
    #pragma endscop
}
