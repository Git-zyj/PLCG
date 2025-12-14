/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_12 = var_7;
        var_13 = var_0;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_14 = (max(var_8, -1));
        var_15 = arr_1 [i_1];
        var_16 = (min(var_16, var_5));
        var_17 |= var_7;
    }
    var_18 *= var_3;
    var_19 = 15;
    var_20 = (max(((-(var_10 - var_1))), var_0));
    #pragma endscop
}
