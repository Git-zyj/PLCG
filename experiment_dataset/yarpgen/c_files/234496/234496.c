/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_14 = (min((arr_0 [i_0] [i_0]), (max((arr_0 [i_0] [i_0]), var_9))));
        var_15 -= ((((((arr_0 [i_0 - 1] [i_0 + 1]) + 2147483647)) << (((((arr_0 [i_0 + 1] [i_0 + 1]) + 1869512749)) - 26)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 = (max(var_16, (((((((min(-1243894564, -101))) ? ((~(arr_0 [i_1] [i_1]))) : ((var_11 ? var_3 : var_8)))) << (var_12 - 39))))));
        arr_5 [i_1] [i_1] = (15158103792699203523 & 41882);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_17 *= (~var_4);
        var_18 &= (((((arr_2 [i_2] [i_2]) >> (((arr_7 [i_2] [i_2]) - 12813)))) ^ (~var_9)));
    }
    var_19 = (((~var_10) ? ((739379782 ? var_5 : var_9)) : 107));
    var_20 = ((((((min(var_0, var_5)) + var_8))) ? (((((var_3 ? -1680935189 : 305312656))) % ((var_0 ? -31113 : 6932693109907530872)))) : var_8));
    var_21 = var_9;
    #pragma endscop
}
