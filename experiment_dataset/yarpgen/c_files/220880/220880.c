/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(7339, ((((max(var_1, -7339))) ? var_2 : (!var_1)))));
    var_11 -= ((7784159004623977084 ? 0 : 18446744073709551615));
    var_12 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 |= var_5;
        var_14 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_15 = (max(((((arr_2 [i_1] [i_1]) != 23838))), (arr_4 [i_1] [i_1])));
        var_16 = 107;
    }
    var_17 = ((!(((((var_2 ? var_0 : var_7)) * (!var_5))))));
    #pragma endscop
}
