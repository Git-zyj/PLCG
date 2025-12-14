/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(((var_8 ? var_0 : var_0)), (max(var_8, var_9))))) | (((((var_5 ? var_4 : var_8))) ? var_8 : var_2))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (var_0 * var_6);
        var_11 *= (((arr_0 [i_0]) * (((arr_2 [i_0] [8]) ? 0 : (arr_0 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_12 &= (((((arr_6 [i_1 - 1]) * var_3))) ? ((max((arr_6 [i_1 - 2]), (arr_6 [i_1 - 1])))) : (((arr_4 [i_1 - 2] [i_1 - 1]) ? (arr_6 [i_1 - 2]) : (arr_4 [i_1 - 1] [i_1 - 1]))));
        arr_7 [i_1] [i_1 + 1] = 149;
    }
    var_13 *= (min((((4095 ? 149 : 0))), (min(-8889859553286943583, 7))));
    var_14 ^= (max(var_8, ((var_3 ? var_0 : var_1))));
    #pragma endscop
}
