/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 ^= (min(((-(arr_0 [i_0] [i_0]))), (((((arr_2 [6]) + 2147483647)) >> (((arr_2 [2]) + 101))))));
        var_12 = (-9223372036854775807 - 1);
    }
    var_13 = ((((!var_8) ^ var_4)));
    var_14 = var_8;
    #pragma endscop
}
