/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = -1063824202;
        var_21 = (((((((arr_1 [i_0] [i_0]) && (arr_0 [16]))) && var_13)) ? (arr_1 [i_0] [i_0]) : (((-7623744513127780043 && var_19) ? (((arr_0 [i_0]) ? var_1 : (arr_0 [i_0]))) : ((var_11 ? (arr_0 [i_0]) : var_15))))));
        var_22 ^= var_2;
        var_23 = (max((((-((var_12 ? 92 : 1))))), (((arr_1 [i_0] [i_0]) ? var_13 : (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_24 += (((arr_4 [i_1]) ? var_13 : var_19));
        arr_5 [i_1] = ((-var_16 >= (arr_4 [i_1])));
        var_25 = (max(var_25, (arr_0 [i_1])));
        var_26 -= ((((arr_3 [i_1] [i_1]) * var_12)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_11 [i_2] [i_3] = ((!(((102 ? 134 : 43942)))));
            arr_12 [i_2] [i_3] = (((arr_6 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_2])));
            var_27 = ((41688 * (arr_0 [i_2])));
            arr_13 [i_2] [i_2] = (arr_0 [i_3]);
        }
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {
            var_28 += (arr_2 [i_2]);
            arr_17 [i_2] [i_2] [i_4] = (((arr_6 [i_4 + 1]) && (var_6 | var_6)));
            var_29 = (~var_6);
            var_30 = (min(var_30, var_6));
        }

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_31 -= (arr_9 [i_2]);
            arr_20 [i_5] &= var_1;
            var_32 = (min(var_32, ((((arr_15 [i_5]) && (~var_13))))));
            var_33 = -74;
        }
        var_34 ^= var_10;
        var_35 = var_10;
    }
    var_36 ^= (max((((var_13 ? var_7 : var_4))), 3220506677674368442));
    #pragma endscop
}
