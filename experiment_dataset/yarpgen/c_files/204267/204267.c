/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (((511 + (arr_1 [i_0]))));
        var_21 = ((!((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_13)))));
        var_22 = (max(var_22, (((-1 ? ((((134 > (arr_1 [i_0]))))) : ((-1 ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
    }
    var_23 = (((((var_17 ? (var_7 / var_6) : (((var_3 ? var_7 : var_17)))))) ? -var_14 : 18446744073709551615));
    #pragma endscop
}
