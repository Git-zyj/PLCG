/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_0 ? ((22513 ? ((var_4 ? var_2 : var_10)) : -98)) : var_1);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] = (73 && var_2);
            arr_6 [i_1] [i_1] = (arr_1 [i_1] [i_1 + 1]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_11 [i_3] [i_2] [i_3] [i_2] = -9223372036854775787;
                arr_12 [i_0] [i_0] = (1 <= 23403);
                arr_13 [i_2] [i_2] [i_2] = ((17 ? var_18 : 21797));
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                arr_16 [i_2] = ((arr_10 [i_0] [i_2] [i_4] [i_4]) ^ var_9);
                arr_17 [i_2] [i_0] [i_2] = var_7;
                arr_18 [i_2] [i_2] [i_0] [i_2] = -100;
            }
            arr_19 [i_2] = ((var_15 == (arr_14 [i_0] [i_2])));
            arr_20 [i_2] = (-1474821580 - var_17);
        }
        arr_21 [i_0] [i_0] = ((~-1) / (((var_3 & var_11) ? (((min(1, var_3)))) : ((-90 ? -1 : 11872886661107962897)))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_24 [i_5] = 103;
        arr_25 [i_5] = (arr_22 [i_5]);
        arr_26 [i_5] = ((arr_23 [i_5]) / (min(-1200410632650175092, 46171)));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_30 [i_6] = (0 ? var_17 : 255);
        arr_31 [i_6] [6] = 12;
    }
    var_21 = (var_12 == (!97));
    #pragma endscop
}
