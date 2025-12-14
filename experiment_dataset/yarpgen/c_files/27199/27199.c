/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = var_5;
        arr_4 [i_0] [i_0] = (((arr_2 [i_0] [i_0]) || (arr_1 [i_0])));
        var_12 = var_9;
    }
    var_13 = (max(var_13, ((max(((var_10 ? var_9 : var_5)), (min(var_9, var_6)))))));
    #pragma endscop
}
