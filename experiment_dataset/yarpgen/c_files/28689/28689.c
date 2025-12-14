/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_11 = 65535;
        arr_4 [i_0] = (min(var_1, (((arr_2 [i_0 + 1] [i_0 + 1]) ? var_8 : var_1))));
        var_12 = (arr_3 [i_0]);
    }
    var_13 = (-(((max(0, var_6)) * var_0)));
    #pragma endscop
}
