/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max((max(((1373 ? var_0 : var_5)), 84)), (((-(min(805875495476641590, var_14))))));
    var_18 = (min(963828748, ((((var_14 <= 64156) ? var_0 : (-84 & 64163))))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((((max(1372, (arr_1 [i_0 - 1])))) >> ((((max(24432, var_4))) - 24402))));
        arr_4 [i_0] = var_15;
    }
    var_19 = ((((~var_13) ? (var_10 + var_5) : var_0)) <= 0);
    #pragma endscop
}
