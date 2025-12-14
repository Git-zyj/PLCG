/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [6] = (((((var_9 ? (arr_0 [9]) : var_4))) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])));
        arr_3 [i_0] [6] = ((-(arr_1 [i_0 + 1])));
        arr_4 [i_0] = 159;
        var_13 = (min(var_13, (((!(arr_0 [i_0]))))));
    }
    var_14 = (-(max(-var_4, -456994647)));
    var_15 += (((!(-2147483646 ^ var_0))) ? 98 : var_11);
    var_16 = (max(var_12, (((-98 ? 99 : var_0)))));
    #pragma endscop
}
