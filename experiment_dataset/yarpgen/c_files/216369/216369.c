/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (~-24640);
        arr_2 [i_0] = var_8;
        arr_3 [i_0] = var_2;
        arr_4 [i_0] = ((((var_6 ? (arr_1 [i_0] [i_0]) : -24640)) >> (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((((1304645186833384959 ? ((((!(arr_6 [i_1]))))) : (max((arr_5 [i_1]), 252))))) ? (max(58469, 9980473730922503740)) : (arr_6 [i_1])));
        var_13 = max((((-24656 ? 2147483642 : 24639))), ((~((var_4 & (arr_6 [i_1]))))));
    }
    var_14 = var_3;
    var_15 = var_10;
    var_16 ^= ((min(24639, (max(-24640, 24639)))));
    var_17 = var_5;
    #pragma endscop
}
