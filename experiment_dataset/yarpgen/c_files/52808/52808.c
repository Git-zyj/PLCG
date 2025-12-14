/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 &= ((-706069839555048575 / ((max(var_13, var_10)))));
    var_16 *= (max(var_9, ((max((255 != 235952224), (max(var_7, var_5)))))));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_17 = ((-(arr_1 [i_0])));
        var_18 = (((((((max((arr_2 [i_0]), (arr_1 [8])))) ? (max(var_10, (arr_1 [i_0]))) : (((var_3 ? 255 : var_4)))))) || (arr_2 [i_0 - 3])));
        var_19 = (max(var_19, (arr_2 [i_0 - 2])));
    }
    #pragma endscop
}
