/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min((-2147483647 - 1), var_4))));
    var_16 += var_5;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((1 ? (32767 + var_2) : var_1));
        arr_3 [i_0] = (((max(var_1, var_13)) >= (!var_1)));
        arr_4 [i_0] = min(var_2, ((((((var_10 ? var_13 : var_0))) && ((min(1, var_4)))))));
        arr_5 [i_0] = ((3072 ? ((-118663695 ? var_1 : (var_13 / var_14))) : ((((!((min(0, 1)))))))));
    }
    #pragma endscop
}
