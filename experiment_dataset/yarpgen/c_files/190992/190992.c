/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (((arr_1 [i_0]) + (arr_1 [i_0])));
        var_18 |= (arr_0 [i_0] [i_0]);
        var_19 = (((var_2 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) < (arr_0 [i_0] [i_0]));
    }
    var_20 = ((min(var_6, -var_2)));
    #pragma endscop
}
