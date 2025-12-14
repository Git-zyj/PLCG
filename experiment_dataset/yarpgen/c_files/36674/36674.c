/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_12 = (((arr_3 [i_0 - 1]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 1])));
        var_13 = (((~(arr_2 [i_0]))) != var_10);
        var_14 = (arr_2 [i_0]);
    }
    var_15 |= ((((((((1 ? var_7 : var_6))) ? var_11 : (var_2 || var_6)))) ? (min(((min(var_3, 1))), (max(var_9, var_0)))) : (((((var_6 ? var_6 : 1)))))));
    #pragma endscop
}
