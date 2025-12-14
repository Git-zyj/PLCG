/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -18;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] = (arr_4 [i_1 + 1] [i_1 + 2] [i_0 - 1]);
                arr_7 [i_0 + 1] [i_0 + 1] = var_3;
                var_19 = (max(var_19, (((-1614027185 ? (arr_1 [i_1 + 1] [i_0 + 2]) : var_14)))));
                arr_8 [i_1 - 1] = (+-32764);
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_20 += ((var_9 ? ((49152 ? (arr_3 [12]) : (arr_3 [i_2]))) : ((2061584302080 ? (arr_3 [i_2]) : (arr_9 [i_2] [12])))));
        var_21 = ((-((var_15 ? var_7 : (arr_11 [i_2] [i_2])))));
        arr_12 [i_2] = (arr_9 [i_2] [i_2]);
        var_22 = ((9223372036854775807 ? 14 : 0));
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        arr_16 [i_3] = var_2;
        var_23 = (((~(1 > var_13))));
        arr_17 [i_3 - 1] = (((var_4 ? var_3 : var_12)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_22 [i_4] &= ((1 & (!139)));
        var_24 = var_4;
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_25 = ((((((arr_2 [i_5]) ? 14 : (arr_14 [i_5])))) && (arr_24 [i_5])));
        var_26 += ((2061584302080 ? 241 : 240));
    }
    var_27 = ((17 ? 0 : 2061584302078));
    #pragma endscop
}
