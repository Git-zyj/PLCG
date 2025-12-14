/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [10] = var_8;
        var_17 = var_1;
        var_18 ^= var_9;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_19 = min((min(var_9, var_13)), (max(var_8, var_1)));
        var_20 -= var_8;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_21 = min((max(var_11, var_15)), (max(var_8, var_13)));
        var_22 -= var_12;
        var_23 = (min(var_23, var_3));
        arr_7 [i_2] [i_2] = min((min(var_14, var_7)), (min(var_15, var_6)));
    }
    var_24 -= max(var_13, (max(var_0, 31)));
    var_25 = var_1;
    #pragma endscop
}
