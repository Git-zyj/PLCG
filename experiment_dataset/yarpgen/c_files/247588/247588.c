/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (((-var_10 ? ((min(var_7, var_9)) : (var_2 != -7436)))));
        var_17 = (max(var_17, (((-(((((~(arr_1 [i_0])))) ? ((7433 ? var_13 : var_10)) : ((-7434 ? var_9 : var_11)))))))));
    }
    var_18 = var_11;
    #pragma endscop
}
