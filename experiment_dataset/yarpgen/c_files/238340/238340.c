/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (max((arr_1 [i_0]), (max(0, (~var_8)))));
        var_16 = ((((((0 ? var_15 : var_2)) + 9223372036854775807)) << (((((((arr_0 [i_0] [i_0]) + 9223372036854775807)) << (((((arr_0 [i_0] [i_0]) + 7814665051372525907)) - 25)))) - 2817413970964499852))));
        arr_5 [i_0] = ((((var_10 & (arr_2 [i_0] [i_0]))) != 1));
        var_17 = ((~var_4) & (~var_10));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_9 [i_1] = (((~var_14) > ((var_0 ? 3409346824 : (arr_0 [i_1] [i_1])))));
        arr_10 [i_1] [i_1] = var_6;
        arr_11 [i_1] [i_1] = 0;
    }
    var_18 ^= var_0;
    #pragma endscop
}
