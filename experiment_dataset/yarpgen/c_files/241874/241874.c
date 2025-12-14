/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_0 << (((((var_0 && var_0) ? (min(var_10, 24)) : var_16)) - 18))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = var_15;
        var_19 = (max(((((arr_2 [i_0]) > 35158))), ((~((((arr_0 [i_0] [i_0]) || -5387563491763847134)))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1 - 1] = (arr_0 [i_1 - 3] [i_1 - 2]);
        arr_6 [i_1] [i_1] = ((-(((!(arr_2 [i_1 + 3]))))));
        var_20 |= -var_9;
        var_21 = (min(var_21, (((((var_8 ? (arr_4 [2]) : (arr_3 [i_1] [i_1]))) ^ (arr_2 [i_1 - 2]))))));
    }
    var_22 = (((((~1) && (var_11 && 1))) ? var_12 : (var_11 > var_0)));
    #pragma endscop
}
