/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (var_1 ? var_1 : var_0);
    var_12 = ((!((((((var_3 ? 63627 : var_6))) ? var_5 : var_6)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((0 ? (arr_0 [i_0] [i_0]) : (-2147483647 - 1)));
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = ((-(arr_1 [i_0])));
        var_13 = (min(var_13, var_7));
        arr_5 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    var_14 = var_8;
    #pragma endscop
}
