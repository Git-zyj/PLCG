/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_0 [i_0] [i_0 + 2])));
        arr_3 [i_0] = ((~(arr_0 [i_0] [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_14 = (min(var_14, (((20443 % (56955 <= 4594946592815079360))))));
        var_15 = (max(var_15, var_5));
        var_16 = (~var_1);
    }
    var_17 = ((var_6 & ((var_12 ^ (var_9 && var_0)))));
    var_18 = ((var_2 >> (var_9 - 30910)));

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_19 = ((~((~(arr_1 [i_2])))));
        var_20 = (min(var_20, ((((((((~var_2) ? (arr_6 [i_2]) : -8506725437513303710)) + 9223372036854775807)) >> ((((var_8 ? (arr_6 [i_2]) : (arr_7 [i_2]))) - 53124)))))));
        var_21 = (arr_5 [15] [i_2]);
        var_22 = var_6;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (max(var_5, (((arr_11 [i_3] [i_3]) ? (~-2455206558105414607) : (~8579)))));
        var_23 = (~(arr_10 [i_3]));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_24 = var_8;
        arr_15 [1] &= (-1 <= (arr_9 [i_4] [i_4]));
        var_25 = (~(arr_9 [i_4] [i_4]));
    }
    #pragma endscop
}
