/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (arr_2 [i_0]);
        arr_3 [i_0] = ((-(((max((arr_0 [i_0]), (arr_2 [i_0]))) / ((((arr_1 [i_0]) * (arr_1 [4]))))))));
    }
    var_16 = (min(var_2, (((((min(var_6, var_0))) || -var_0)))));
    var_17 = (((min(var_0, var_11)) - var_2));
    #pragma endscop
}
