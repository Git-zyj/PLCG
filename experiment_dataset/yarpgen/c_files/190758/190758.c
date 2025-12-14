/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 = var_19;
    var_22 -= (var_12 > var_5);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_23 = (max(var_23, (((!(arr_1 [i_0] [i_0]))))));
        var_24 *= ((((arr_1 [i_0] [i_0]) ^ (arr_1 [i_0] [i_0]))) >> ((((arr_0 [i_0] [i_0]) >= (arr_1 [i_0] [i_0])))));
    }
    #pragma endscop
}
