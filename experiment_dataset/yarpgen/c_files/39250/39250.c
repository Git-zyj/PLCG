/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = 2590045672425594744;
        arr_3 [i_0] = -2590045672425594746;
        arr_4 [i_0] [i_0] = -2590045672425594762;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_10 = 1962542419;
        var_11 = -2590045672425594741;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_12 ^= -15;
        var_13 = (min(var_13, 17887));
        var_14 *= 1;
        var_15 = 9465210116664267469;
        arr_11 [i_2] = -2590045672425594769;
    }
    var_16 = 49921;
    var_17 = var_6;
    #pragma endscop
}
