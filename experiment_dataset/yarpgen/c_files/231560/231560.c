/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_9 ^ (~var_2)));
    var_12 = var_10;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [1] = var_4;
        var_13 = ((10563 ? var_1 : ((max((arr_2 [i_0] [i_0]), var_1)))));
        var_14 = (((arr_2 [i_0] [i_0]) << (((arr_1 [i_0]) << (arr_1 [i_0])))));
        var_15 = (min(var_15, var_0));
    }
    #pragma endscop
}
