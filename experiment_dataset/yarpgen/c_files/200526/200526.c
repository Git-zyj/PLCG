/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 = (68 & 11452307967590166743);
    var_22 = (!var_7);
    var_23 = (min(var_3, var_1));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (((250 ? (arr_2 [i_0]) : var_11)));
        arr_4 [i_0 - 1] [i_0] = (((arr_0 [i_0 - 2]) ? var_17 : (((arr_0 [i_0]) * var_16))));
        var_24 = (((arr_2 [i_0]) ^ 31094));
        var_25 = (3667260196 % 42201);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_26 = max((arr_5 [i_1]), (min((arr_6 [i_1]), (arr_6 [i_1]))));
        var_27 = (((arr_5 [i_1]) ? (min((min(2466228659, 41)), ((((arr_5 [i_1]) ? 23334 : (arr_5 [i_1])))))) : 19625));
        var_28 = (min(var_28, (arr_6 [15])));
        var_29 = (max(var_29, ((((((((var_6 | (arr_6 [i_1])))) ? (arr_6 [i_1]) : (min(281474976710656, 1)))) < 1)))));
        var_30 = ((((min((arr_6 [i_1]), (arr_6 [i_1])))) ? (arr_6 [i_1]) : (min(722835556, 18446462598732840939))));
    }
    #pragma endscop
}
