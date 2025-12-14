/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (((((arr_1 [i_0] [9]) + 9223372036854775807)) << (((((arr_1 [i_0] [i_0]) + 7497174701382533405)) - 20))));
        arr_3 [12] = (arr_1 [i_0] [8]);
        arr_4 [1] [i_0] = (arr_1 [i_0] [i_0]);
        var_17 = (~11);
        var_18 = (min(var_18, (arr_0 [i_0] [i_0])));
    }
    var_19 = ((var_12 ? var_15 : ((19 ? (min(14, var_12)) : var_1))));
    #pragma endscop
}
