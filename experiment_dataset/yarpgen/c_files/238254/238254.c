/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_0 [i_0 + 1])));
        var_14 |= (arr_0 [i_0 - 3]);
        var_15 = (max(var_15, (((((((~-1) * -83))) ? var_8 : ((((max(var_10, (arr_0 [0])))) | var_3)))))));
    }
    var_16 |= var_6;
    var_17 = var_5;
    var_18 = var_0;
    #pragma endscop
}
