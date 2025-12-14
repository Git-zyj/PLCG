/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (max((((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0]))), ((((arr_0 [i_0]) ? 98 : var_5)))));
        var_17 = (((arr_1 [i_0] [i_0]) ? ((((arr_0 [i_0]) - var_14))) : (max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))));
        var_18 = ((((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) ? ((var_2 ^ (arr_1 [i_0] [i_0]))) : 6815465625136355594)) : (arr_0 [i_0])));
        var_19 = (((arr_0 [i_0]) ? (((-(!var_14)))) : (((arr_1 [i_0] [i_0]) ? (min((arr_0 [i_0]), (arr_1 [i_0] [i_0]))) : (arr_0 [i_0])))));
    }
    var_20 = var_0;
    var_21 = (max(var_10, (((-(var_1 + var_14))))));
    var_22 += var_10;
    #pragma endscop
}
