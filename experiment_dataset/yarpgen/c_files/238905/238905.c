/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= max(var_9, (var_11 ^ var_10));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [8] = (min(((min(var_0, var_10))), var_1));
        var_14 = var_12;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_15 = var_3;
        arr_6 [i_1] [i_1] = (min(var_12, var_2));
        var_16 = var_5;
    }
    var_17 = var_12;
    #pragma endscop
}
