/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (70368744177663 - var_8);
    var_12 = (max(((((max(9009, var_6))) ? -92 : (~var_10))), 4817));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (79 ? 91 : 0);
        var_14 = (((arr_0 [i_0]) ? ((((arr_1 [i_0]) ? 1 : 0))) : (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = var_10;
    }
    #pragma endscop
}
