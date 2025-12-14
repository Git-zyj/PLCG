/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 *= var_11;
        var_18 = (((arr_2 [i_0 + 1] [i_0]) >= (arr_2 [i_0 + 1] [i_0])));
        var_19 *= (((arr_3 [i_0 + 1] [i_0]) * (arr_1 [i_0])));
        arr_4 [i_0] = (((arr_3 [i_0 + 1] [i_0 + 1]) & var_16));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = ((~(arr_0 [i_1 - 2] [i_1 - 4])));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_20 = (~(arr_1 [i_1 + 2]));
                    arr_12 [i_2] [i_3] [i_2] = (((arr_10 [7] [i_3] [i_3] [i_1]) - (arr_8 [i_1 - 4] [i_1 + 1])));
                    var_21 = (((-3339001998217188021 + 9223372036854775807) >> (18446744073709551615 - 18446744073709551563)));
                    arr_13 [i_1 + 3] [i_1] [i_3] = (((arr_8 [i_1] [1]) ? (((arr_2 [i_1] [i_2]) - (arr_9 [i_3] [i_2] [9]))) : var_14));
                }
            }
        }
        var_22 ^= var_3;
        arr_14 [i_1] [i_1 + 3] = (((arr_2 [i_1 - 1] [i_1 + 2]) - (arr_2 [i_1] [i_1 + 2])));
        var_23 = (arr_0 [i_1] [i_1 - 2]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_24 = (((((!(arr_0 [i_4] [i_4])))) > ((var_2 ? (arr_2 [i_4] [i_4]) : (arr_0 [i_4] [i_4])))));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_26 [6] [i_6] [i_6] [i_5] [i_4] [i_4] = (((arr_15 [i_7 - 1]) ? (arr_15 [i_7 + 1]) : (arr_15 [i_7 + 2])));
                        var_25 = (min(var_25, (arr_25 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6])));
                        arr_27 [i_4] [i_5 + 1] [i_6 - 1] [i_7] [i_7 - 1] [9] = ((~(arr_24 [i_4] [i_4] [i_4] [i_4])));
                        var_26 = (((arr_24 [i_6 - 1] [i_4] [i_4] [i_7 + 2]) | (arr_24 [i_6 - 1] [i_5 + 1] [i_6] [i_7 + 2])));
                    }
                }
            }
        }
        arr_28 [i_4] = (arr_1 [i_4]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        arr_33 [1] = ((((var_7 + (arr_16 [i_8]))) | 1777568565));
        arr_34 [i_8] &= (arr_6 [i_8] [i_8]);
    }
    var_27 = var_15;
    var_28 = (min(var_28, var_4));
    var_29 = (var_5 << var_1);
    #pragma endscop
}
