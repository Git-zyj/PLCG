/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = -var_0;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 15708;
        var_22 ^= -978;
        var_23 = -69;
        arr_5 [i_0] = 62925;
    }
    for (int i_1 = 4; i_1 < 24;i_1 += 1)
    {
        arr_10 [i_1] [i_1] &= -29;
        var_24 = -32;
    }
    #pragma endscop
}
