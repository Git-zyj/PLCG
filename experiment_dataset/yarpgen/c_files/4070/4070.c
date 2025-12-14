/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max((~-97), (var_2 & 1334188543513460876)))) ? var_8 : var_10));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (max((!17112555530196090757), (((arr_0 [i_0]) >> (arr_1 [i_0])))));
        var_16 = var_5;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = ((((((max((arr_5 [2]), var_11))))) * ((((min((arr_4 [i_1]), 54004))) ? (arr_4 [i_1]) : ((-(arr_4 [21])))))));
        arr_6 [i_1] = (((max((max((arr_4 [i_1]), var_2)), ((1334188543513460871 ? var_10 : 380146841)))) == (arr_5 [i_1])));
        arr_7 [i_1] = ((-17112555530196090739 * ((17112555530196090739 - (((-(arr_5 [i_1]))))))));
    }
    #pragma endscop
}
