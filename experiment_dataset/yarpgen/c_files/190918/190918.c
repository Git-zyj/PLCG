/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-var_12 & ((var_13 ? (var_2 - var_3) : var_12))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 *= ((((max(-4873, (arr_0 [i_0] [i_0])))) || ((!(arr_1 [16] [16])))));
        arr_2 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) - (arr_0 [i_0] [i_0])));
    }
    var_20 = var_12;
    var_21 = ((var_14 ? var_13 : ((var_12 ? var_15 : ((8962583570616510363 ? var_15 : 6042291450485932017))))));
    #pragma endscop
}
