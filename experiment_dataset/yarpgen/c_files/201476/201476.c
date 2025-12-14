/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_2, (((min(var_10, var_4)) + (var_14 + var_7)))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_21 = ((((((arr_3 [i_0 + 1] [i_0]) | (arr_0 [i_0 - 2] [i_0])))) || (max((255 <= 0), (arr_3 [i_0 - 1] [i_0 - 1])))));
        var_22 = ((var_19 / ((min(var_12, (arr_0 [i_0 + 1] [i_0 - 2]))))));
        var_23 = (max((max((arr_3 [i_0 + 1] [i_0]), var_14)), ((max((!var_17), (max(188, 0)))))));
    }
    var_24 = var_4;
    #pragma endscop
}
