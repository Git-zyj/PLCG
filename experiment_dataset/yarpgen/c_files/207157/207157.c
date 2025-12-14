/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_15 = (((var_9 ? var_3 : (arr_2 [i_0]))));
        var_16 = -4643;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] = (((((var_10 ? var_4 : 1))) ? (arr_3 [i_1]) : (1 == var_8)));
        var_17 ^= (((~-25) | (arr_5 [i_1] [i_1])));
    }
    #pragma endscop
}
