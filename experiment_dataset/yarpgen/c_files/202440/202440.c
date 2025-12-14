/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = var_12;
    var_18 = ((127 || ((min(((571696985 ? var_7 : var_3)), var_10)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] &= 3723270292;
        var_19 -= ((((var_11 | (arr_0 [i_0] [i_0]))) ^ var_12));
        var_20 = ((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 1]));
    }
    var_21 = (((max(2147483647, -461154134)) < 47));
    #pragma endscop
}
