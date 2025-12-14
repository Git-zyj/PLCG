/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~-23);
    var_16 = (min((((!((min(19143, var_8)))))), -9223372036854775781));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 |= (((((arr_2 [i_0]) + 2147483647)) >> ((((-(arr_1 [i_0 + 1]))) - 672745904545226526))));
        var_18 += ((var_2 ? ((((-9223372036854775807 - 1) << ((((max((arr_0 [i_0]), (arr_0 [10])))) - 54189))))) : ((15936 ? (max(var_6, (arr_1 [i_0]))) : (max((arr_0 [i_0]), (arr_1 [i_0])))))));
    }
    #pragma endscop
}
