/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((-var_12 ? ((117 ? var_12 : var_18)) : (~117))) > var_18));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min(121, (arr_0 [i_0])))) || (((arr_0 [i_0]) && 138))));
        var_20 = (((var_5 ? (arr_0 [i_0]) : 18446744073709551601)));
        arr_3 [i_0] = (((((10604750947196686336 ^ ((max(0, 729337419)))))) ? (((((min(39689, 24))) >= ((var_11 >> (10604750947196686336 - 10604750947196686308)))))) : ((var_16 << (((((arr_1 [i_0]) + 15423)) - 17))))));
        var_21 = ((min(((var_3 ? var_11 : var_8), ((max(var_4, 47)))))));
    }
    #pragma endscop
}
