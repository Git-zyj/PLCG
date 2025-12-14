/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_12;
        var_13 = ((4217863384 ? (1 + 65137) : ((55876 ? 1 : 1740830841))));
    }
    var_14 = var_9;
    var_15 = var_12;

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 *= ((((min(var_0, (min(23410, 1))))) > (!-var_9)));
        arr_6 [i_1] = ((4611686018427387904 ? 255 : -122));
        var_17 ^= ((((18621 | ((var_6 ? 4294967295 : var_0)))) >> (var_2 - 170)));
    }
    #pragma endscop
}
