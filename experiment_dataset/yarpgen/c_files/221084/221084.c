/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 &= ((!(((var_2 ? var_0 : var_3)))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] |= -var_3;
        var_12 = var_2;
        arr_3 [i_0] = max(((var_2 >> (-2268815842014597999 + 2268815842014598029))), (min((arr_0 [i_0 - 2] [i_0 - 1]), var_7)));
    }
    #pragma endscop
}
