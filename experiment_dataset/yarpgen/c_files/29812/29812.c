/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_14 -= ((~(((arr_1 [i_0 + 2] [i_0 + 4]) ? (arr_1 [i_0 + 2] [i_0 - 1]) : (arr_1 [i_0 - 1] [i_0 + 3])))));
        var_15 = (((!((max(var_6, (arr_2 [i_0] [i_0])))))));
        var_16 = (-1337 | 53285);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 |= (~-1337);
        var_18 &= (arr_1 [i_1] [i_1]);
    }
    var_19 = var_7;
    var_20 = var_0;
    var_21 += ((var_1 > (((131 ? -3919 : var_13)))));
    #pragma endscop
}
