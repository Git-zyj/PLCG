/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(((min(var_1, 1))), ((((!(arr_0 [i_0]))) ? ((var_3 ? (arr_0 [i_0]) : var_8)) : var_8))));
        var_10 = (min(var_10, ((((var_2 ? (arr_0 [6]) : ((var_2 & (arr_0 [i_0])))))))));
    }
    var_11 = ((~(min(((1 ? var_4 : var_6)), var_8))));
    var_12 = ((0 ? 0 : -1));
    var_13 = ((min(0, ((0 ? var_6 : var_7)))));
    var_14 = var_1;
    #pragma endscop
}
