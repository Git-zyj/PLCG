/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_17 ^= ((-(arr_1 [i_0 - 1] [i_0 + 2])));
        arr_4 [i_0] = (arr_0 [i_0]);
        var_18 = arr_1 [i_0 + 2] [i_0];
        var_19 = (((arr_0 [i_0]) / var_12));
        var_20 = (min(var_20, (arr_1 [i_0 + 2] [i_0 - 1])));
    }
    var_21 = (((!((max(var_12, var_2))))));
    var_22 = ((((((min(var_9, var_15))) ^ var_15))) | (62531442 / var_6));
    #pragma endscop
}
