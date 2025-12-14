/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_5 >= (255 && var_16)))) >> (!41569)));

    for (int i_0 = 3; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (~6)));
        var_22 = (max(var_22, (((var_12 ? (arr_3 [i_0]) : (arr_0 [7] [i_0 - 2]))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (((0 ? 0 : 1)))));
        arr_8 [i_1] [i_1 + 1] = (var_11 - var_15);
    }
    #pragma endscop
}
