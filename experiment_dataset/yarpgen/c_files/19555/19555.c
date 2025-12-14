/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = (-((-2261901096107146184 ? 2261901096107146208 : 42898)));
        var_14 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 = ((~(((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])))));
        var_16 = ((1 ? -9067 : -5232613371300376171));
    }
    var_17 = (var_7 ? var_12 : var_6);
    #pragma endscop
}
