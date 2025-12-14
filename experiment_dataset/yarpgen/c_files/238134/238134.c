/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_8 ? var_8 : (((max((-112 || var_4), var_1))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 = ((((((arr_0 [i_0 - 1]) ? var_7 : (arr_0 [i_0 - 1])))) ? (arr_1 [i_0]) : (((arr_0 [i_0]) ? (arr_2 [i_0 - 1]) : -6881799997937270424))));
        var_13 |= (!var_10);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (arr_4 [i_1] [i_1 - 2]);
        var_14 = ((-18 ? -66 : -66));
    }
    #pragma endscop
}
