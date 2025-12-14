/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((var_6 ? var_11 : 1695424063));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((-2147483639 ? (-2147483647 - 1) : (arr_0 [i_0] [i_0])));
        var_15 &= ((((-3955 ? 2147483639 : 0)) < (arr_1 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_16 = (max(var_16, (((~((((((2147483639 == (arr_5 [i_1])))) < var_6))))))));
        var_17 = (max(var_17, (((-(arr_5 [i_1]))))));
    }
    #pragma endscop
}
