/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = (((-9223372036854775807 - 1) ? (arr_0 [i_0] [i_0]) : ((1330065197 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (arr_5 [i_1]);
        arr_7 [i_1] &= ((var_4 ? (((156 == (arr_1 [i_1] [i_1])))) : (arr_1 [i_1] [i_1])));
        var_11 = (~var_1);
    }
    var_12 = ((-841050170 ? (((!var_9) ? var_7 : var_1)) : (((1632532114 >> (var_4 - 209))))));
    #pragma endscop
}
