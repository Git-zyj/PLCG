/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 8308;
    var_17 = -var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = var_6;
        arr_4 [i_0] = (!68);
        var_18 = -5322211078679805917;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = ((-(arr_8 [i_1])));
        arr_10 [i_1] = var_2;
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_19 = (min(var_19, var_13));
        var_20 -= (var_15 ? var_4 : var_11);
        arr_13 [1] [11] &= (((arr_1 [i_2]) + 16175938357922418869));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        var_21 |= 60860;
        arr_16 [i_3] [1] = var_13;
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        arr_19 [i_4] = (min(2069237242, -124));
        var_22 -= (max((max(var_2, 5322211078679805914)), (54756 - 10802)));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_23 [i_5] [i_5] = var_7;
        var_23 ^= (((arr_8 [i_5]) ? (((((arr_5 [i_5]) ? 607992854 : var_8)))) : (arr_0 [i_5])));
    }
    #pragma endscop
}
