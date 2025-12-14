/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((127 ? 0 : 18171509561570828100));
    var_18 = var_2;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [4] = (1 - -795273571);
        var_19 = (((!var_10) ? (126 % 126) : ((1 ? var_10 : 23931))));
        arr_3 [i_0] = (((arr_1 [i_0 + 2]) * (arr_0 [i_0 + 2])));
    }
    #pragma endscop
}
