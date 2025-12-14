/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = ((((min((((var_0 >> (var_10 - 1357979686)))), var_9))) && (((var_2 ? (var_1 || var_1) : (var_0 + var_4))))));
    var_14 = (!var_4);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [10] = ((!(arr_0 [i_0] [i_0])));
        var_15 = (((((-(arr_1 [i_0])))) ? (((arr_0 [i_0] [i_0]) << (((arr_1 [i_0]) - 41)))) : (((arr_0 [i_0] [i_0]) << (((arr_1 [i_0]) - 38))))));
    }
    #pragma endscop
}
