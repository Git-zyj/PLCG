/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_4;
    var_14 = (var_0 ? var_9 : (((((min(var_5, var_1))) ? var_4 : ((max(var_4, var_0)))))));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_4 [7] [i_0] = (((((0 >> 0) ? (arr_2 [i_0]) : (arr_2 [i_0 - 2]))) != (((arr_1 [i_0 - 4]) ? (arr_3 [i_0 - 4] [i_0 - 4]) : (((arr_1 [i_0]) ? (arr_0 [i_0 - 4] [i_0 + 3]) : (arr_2 [i_0])))))));
        arr_5 [i_0 - 2] [i_0] = (arr_1 [1]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] = (arr_6 [i_1 + 1]);
        arr_9 [i_1] [i_1] = (!2174678698834439268);
    }
    #pragma endscop
}
