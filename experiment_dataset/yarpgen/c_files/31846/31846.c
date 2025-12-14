/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (!235);
        var_13 |= ((var_8 || (-103 - var_5)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_14 ^= ((var_8 > (~var_4)));
        var_15 -= (arr_4 [i_1 + 2]);
        var_16 = (min(var_16, (((var_0 ? var_10 : 230)))));
        var_17 -= var_3;
    }
    var_18 = 230;
    var_19 = 235;
    var_20 &= (((!var_10) ? var_9 : var_10));
    #pragma endscop
}
