/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((684079296 ? 684079296 : -684079296));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = ((!(((var_13 << (((arr_1 [i_0]) + 32288153)))))));
        var_16 = (~(-1677004317 | var_5));
        arr_2 [i_0] [i_0] |= (((arr_1 [9]) | (((min(var_8, var_3))))));
    }
    var_17 = ((min(var_12, var_4)) * (((((((var_1 ? var_6 : var_10))) || -684079291)))));
    var_18 = var_7;
    #pragma endscop
}
