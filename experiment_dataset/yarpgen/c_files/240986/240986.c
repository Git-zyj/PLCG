/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~((min(var_15, var_14)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = ((((-((var_14 ? var_7 : var_5)))) & var_3));
        arr_4 [1] = ((((var_16 / var_7) ? ((var_7 ? var_4 : var_19)) : (arr_0 [4]))) <= ((var_3 ? var_12 : var_8)));
    }
    #pragma endscop
}
