/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 += (var_9 / var_3);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((129 ? ((var_6 ? 10618 : ((1 ^ (arr_0 [i_0] [i_0]))))) : (((1 ? 1 : var_3)))));
        var_20 = (max(var_20, ((((max(1, 0)) ? ((((((arr_0 [1] [i_0]) + var_12)) - var_6))) : 13264378887409596453)))));
        var_21 = (((((6094948926412791590 ? 1 : 1))) | ((var_13 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] = (((((arr_0 [2] [i_1]) ? (arr_2 [i_1] [8]) : (arr_2 [4] [4]))) * (((arr_2 [12] [12]) / (arr_4 [i_1] [i_1])))));
        var_22 = (arr_1 [0]);
    }
    #pragma endscop
}
