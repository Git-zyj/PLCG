/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_3, (max(var_5, ((var_3 ? var_8 : 0))))));
    var_11 = ((var_9 ? var_2 : var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0]) - (arr_1 [i_0])));
        var_13 = (((((arr_2 [i_0] [i_0]) ? var_5 : (arr_1 [i_0])))) ? (arr_2 [i_0] [i_0]) : var_5);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (max(var_14, (!var_6)));
        var_15 += (((var_3 - var_6) > (arr_3 [i_1])));
        var_16 = (max(var_16, (arr_3 [i_1])));
        var_17 ^= var_0;
    }
    var_18 = (((55517 ? ((min(-6, var_4)) : 10256))));
    #pragma endscop
}
