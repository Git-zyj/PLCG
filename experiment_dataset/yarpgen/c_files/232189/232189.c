/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (min((var_13 / var_16), var_2));
    var_21 = ((!(((1 - (((41 ? var_10 : var_6))))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_22 -= var_7;
        arr_2 [2] = (((((arr_1 [i_0 + 1]) && (arr_1 [i_0 + 1]))) && (arr_1 [i_0 + 1])));
        var_23 = (min(var_23, (arr_1 [i_0])));
    }
    var_24 = var_7;
    #pragma endscop
}
