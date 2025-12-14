/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_1;
    var_16 = var_13;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0 + 2] = var_4;
        arr_4 [i_0] = 440151705;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_17 += var_2;
        var_18 *= arr_7 [i_1];
    }
    var_19 = ((!var_3) ? var_7 : var_3);
    var_20 = max(var_3, ((max(var_4, var_5))));
    #pragma endscop
}
