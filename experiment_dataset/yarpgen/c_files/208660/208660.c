/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((~(min((min(var_18, var_7)), ((var_11 >> (var_4 - 14661)))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0 - 1] [i_0] |= (((arr_3 [i_0]) - var_10));
        arr_5 [i_0] [7] = ((39164 != (var_11 <= var_13)));
        var_21 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 = (~(((var_3 ? (arr_3 [19]) : var_15))));
        var_23 = (max(var_23, ((min(((((max(var_12, var_0))) ? (var_1 * var_2) : (arr_7 [i_1]))), ((min(var_9, var_14))))))));
    }
    var_24 = ((~(var_14 != var_18)));
    #pragma endscop
}
