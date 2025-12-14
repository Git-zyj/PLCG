/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((var_9 ? var_6 : var_1))) ? ((var_8 ? 858068661 : var_5)) : var_7))) ? var_13 : var_9));
    var_15 = var_6;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [0] = var_10;
        var_16 = var_9;
    }
    #pragma endscop
}
