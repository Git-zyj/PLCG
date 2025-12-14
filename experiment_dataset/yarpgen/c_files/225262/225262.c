/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_7 ? var_12 : (!var_4)))) ? (((!(9411621145064135838 && var_1)))) : (((((min(var_8, 7))) || (var_6 || var_14)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (0 < 1054603191);
        arr_3 [i_0] = (max(1054603191, (((((-(arr_0 [i_0] [i_0]))) >= 476829390)))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_10 [i_2] [i_1] [i_0] [i_2] &= ((((var_4 ? var_6 : var_1)) * 0));
                arr_11 [i_0] [i_1] [i_1] [i_1] = ((241 ? (arr_1 [i_1]) : (arr_5 [10] [i_1] [i_2])));
            }

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_14 [i_0] [i_1] [i_1] = var_1;
                arr_15 [i_1] = (((((!(arr_5 [i_1] [i_1] [i_1])))) * ((((((var_12 || (arr_12 [i_0] [i_1] [i_1] [i_1])))) >> (((min(var_16, 3596201291773136090)) - 3596201291773136086)))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                arr_19 [i_1] = (~2147483647);
                arr_20 [5] [i_1] [i_4] [i_4] = (arr_16 [i_0] [i_1] [i_0]);
                arr_21 [i_0] [i_1] [i_0] = (arr_9 [i_1] [i_1] [0]);
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_26 [i_1] [i_1] [i_1] [i_6] = (((((arr_23 [i_0] [i_1]) || (arr_23 [i_0] [i_1]))) && var_6));
                    arr_27 [i_0] [i_1] [3] [i_0] = (((((51830 ? (arr_16 [i_0] [i_1] [i_5]) : var_9))) & var_8));
                }
                arr_28 [1] [i_5] [i_5] = (arr_9 [i_5] [12] [i_5]);
                arr_29 [i_0] [i_1] [i_0] [9] = arr_22 [i_0] [i_1] [i_1] [i_5];
                arr_30 [i_0] [i_1] [i_5] = (-906597499 - 18790);
            }
        }
    }
    var_18 = var_13;
    #pragma endscop
}
