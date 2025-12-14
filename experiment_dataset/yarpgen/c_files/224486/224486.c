/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_12 = (((-3563566061190441122 + 9223372036854775807) >> (((max(-24125, -24125)) + 24159))));
        var_13 = (max(var_13, (max(24120, 9))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_14 *= (--65517);
        var_15 = ((((((arr_3 [i_1]) + 1))) ? 20649 : 23));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_6 [i_2] = (min((((var_4 ^ 1) ? var_9 : -18138)), (((arr_4 [i_2]) | -3187))));
        var_16 = ((!(arr_1 [i_2])));
    }

    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        var_17 ^= ((var_7 && ((!(arr_1 [6])))));
        var_18 = ((~(((arr_3 [18]) ? ((((arr_2 [i_3] [10]) < var_5))) : -var_5))));
        var_19 |= ((min(-1542466545, 27244)));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        var_20 = (230 + 1542466544);
        var_21 = 65535;
        var_22 = var_6;
        var_23 = (arr_0 [i_4] [i_4]);
        var_24 = (max(var_24, (((var_0 & -18125) ? (arr_0 [6] [i_4 - 2]) : (((19 < (arr_10 [i_4] [i_4]))))))));
    }
    var_25 = (min(var_3, var_3));
    #pragma endscop
}
