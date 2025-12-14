/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_15 = (((max(((var_12 ? (arr_1 [i_0]) : var_13)), (!32758))) << (-var_0 - 1668127909383989061)));
        arr_3 [i_0] = (arr_2 [8] [i_0]);
    }
    var_16 = (max(var_9, ((min((var_8 * var_1), 23116)))));
    #pragma endscop
}
