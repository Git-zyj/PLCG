/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((+(((7 & var_5) ? var_6 : -var_0))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_15 = (min((((((!(arr_1 [13])))))), (min((((1 ? 7 : 4096))), -var_8))));
        var_16 += (((min(((var_7 ? (arr_1 [i_0 - 1]) : (arr_0 [i_0]))), ((min((arr_0 [1]), 7))))) & ((min((min((arr_1 [i_0]), (arr_1 [1]))), (arr_1 [i_0]))))));
        arr_2 [i_0] = ((4 ? ((var_0 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))) : -32755));
        arr_3 [i_0] = (arr_1 [i_0]);
        var_17 = ((~((-25290 ? -32765 : -31))));
    }
    #pragma endscop
}
