/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 -= (min((((arr_1 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))), var_3));
        arr_4 [i_0] = (min(72, -97));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        var_20 += ((-(arr_2 [i_1])));
        var_21 = var_13;
        arr_7 [i_1 - 1] = (50 % 96);
    }
    var_22 = (max(var_22, (((12 ? (((-96 + var_4) ? ((127 ? (-127 - 1) : 96)) : ((var_3 ? var_7 : var_16)))) : (var_1 + var_8))))));
    var_23 ^= ((!(((127 ? 95 : -97)))));
    var_24 ^= ((-((var_1 ? 118 : 77))));
    var_25 = ((15 ? -96 : ((var_2 ? -97 : (0 * 127)))));
    #pragma endscop
}
