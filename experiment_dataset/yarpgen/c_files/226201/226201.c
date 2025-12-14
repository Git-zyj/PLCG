/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_18 - (~1)));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_21 = ((-(min((arr_0 [i_0]), -2054014585))));
        var_22 = (min(var_22, (((((-(((arr_0 [i_0]) ? 0 : 12196)))) << ((((((arr_2 [14]) ? var_5 : 192012024))) ? var_2 : 1)))))));
        var_23 = (min((min(var_17, var_5)), ((min((((arr_0 [15]) - 201)), (arr_1 [i_0]))))));
    }
    var_24 &= (((max((var_11 || var_3), (((-2147483647 - 1) % -2054014585)))) + (((21538 ? var_12 : 959114026)))));
    #pragma endscop
}
