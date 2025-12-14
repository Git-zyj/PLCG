/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((var_10 << (((((~var_2) - var_7)) - 3421839940))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 ^= (arr_1 [i_0] [i_0]);
        var_22 = (((arr_0 [i_0]) * ((((arr_1 [i_0] [i_0]) ? -103 : var_7)))));
        arr_4 [i_0] = (-(arr_3 [i_0]));
    }
    #pragma endscop
}
