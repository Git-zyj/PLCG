/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_13, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (min(var_16, 47));
        var_17 -= (((var_13 ? (arr_1 [i_0] [7]) : -6341403954863132343)));
        var_18 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] [i_1 - 4] = (!11490766263113328594);
        arr_6 [i_1] = 4129007401983295617;

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_19 = (max(var_19, var_3));
            var_20 = ((-4129007401983295618 ? ((235 ? -1266558318 : var_7)) : 0));
            arr_9 [i_2] = (((arr_2 [i_1 - 4]) ? (~var_7) : (arr_8 [i_1] [i_1] [i_1 - 4])));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_14 [i_3] [i_3] = (((arr_1 [i_1 - 1] [i_1 - 2]) + var_4));
            var_21 = var_7;
            var_22 = (max(var_22, (arr_2 [i_1])));
            arr_15 [1] [i_3] [i_3] = 1048574;
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_18 [i_4] [14] = (arr_16 [i_1 - 2] [i_1 + 1] [i_1 - 2]);
            arr_19 [i_1] [i_4] = ((var_7 ? var_6 : (arr_16 [i_1] [i_1] [i_1])));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_23 [i_5] [i_5] [i_5] = (((((-(arr_16 [i_1] [i_1] [i_5])))) ? ((var_3 ? var_9 : (arr_1 [1] [i_5]))) : (arr_10 [i_1 - 4] [i_1 - 3] [i_1 - 3])));
            var_23 |= 1;
        }
    }
    #pragma endscop
}
