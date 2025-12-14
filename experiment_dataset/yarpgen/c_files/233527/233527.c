/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((min(var_4, 18446744073709551591)) + 4294967295))) ? (((arr_2 [i_0 + 1]) >> (var_11 - 46448))) : -22174));
        arr_4 [i_0 + 1] = var_17;

        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            var_18 = (max(var_18, var_13));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_19 -= (((arr_1 [i_0 - 1] [i_1 - 1]) == var_0));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_20 *= ((arr_2 [i_0]) ? var_11 : var_9);
                            var_21 = (var_9 == var_3);
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    arr_18 [i_0] [i_1] [24] [24] = -24387;
                    arr_19 [i_1] [6] [6] [i_0] = arr_15 [i_0] [i_1] [i_2] [i_2] [1];
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_22 [i_0] [16] [i_0] [i_2] [i_1] = (((((-1 + 2147483647) >> 15)) < var_13));
                    var_22 = (arr_14 [i_0] [i_1] [3] [i_2] [i_6]);
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    arr_26 [i_0 - 1] [i_1] [i_2] [i_0 - 1] = (~(!3216026790));
                    arr_27 [i_1] [i_1] [i_1] [9] [i_7] [i_7] = ((var_8 ? (((var_7 + (arr_7 [i_1])))) : (~3964767748)));

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_30 [i_0] [18] [i_2] [i_7] [i_7] [i_8] [i_8] &= ((24387 ? (arr_5 [i_8]) : (((var_5 & (arr_25 [i_0] [i_1] [i_2] [9] [9]))))));
                        arr_31 [i_0] [i_1] = var_5;
                        arr_32 [i_0 + 1] [i_1 - 2] [i_7] [i_7] [i_8] [i_8] [i_8] &= (((arr_29 [i_1 - 3] [i_7] [i_7] [i_8] [i_7] [i_8] [i_1 - 3]) != (((arr_16 [7] [i_2] [i_7] [i_8]) ? 256 : 4020235551))));
                    }
                }
            }
            for (int i_9 = 2; i_9 < 23;i_9 += 1)
            {
                arr_35 [i_1] [i_1] [i_9 + 2] [i_9 - 2] = (13305219720459641047 ? var_17 : ((((var_12 <= (var_12 & -10))))));
                arr_36 [i_1] [i_1 - 4] = -var_5;
            }
            arr_37 [i_0] [i_0] [i_1] = ((var_14 | (arr_8 [i_1] [i_1 - 2] [i_1 - 4] [i_0])));
        }
    }
    var_23 = (max(var_23, (((330199547 ? 3779419042 : 216)))));
    var_24 = (max(11294050963602334009, 11390));
    #pragma endscop
}
