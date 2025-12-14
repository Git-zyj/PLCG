/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((((!6374083483954829562) != (~var_12))) || ((((var_12 ? (arr_0 [i_0]) : var_14))))));
        arr_4 [i_0] = (((((arr_0 [i_0]) ? var_4 : (((398792122 ? 53276 : (arr_1 [i_0])))))) > ((((!((min(var_4, 2)))))))));
        var_17 = ((((((var_6 ? (arr_2 [i_0] [8]) : var_6))) ? -54 : (var_8 > var_15))));
    }
    var_18 = (!(((~(var_1 - 14)))));
    #pragma endscop
}
