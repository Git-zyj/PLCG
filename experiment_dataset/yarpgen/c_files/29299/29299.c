/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [i_0];
        arr_3 [1] = var_11;
        arr_4 [i_0] = (-24382 | 0);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = 102;
                    arr_11 [i_0] [i_1] [i_1] [i_2] = var_3;
                    var_13 = 7457454808320172391;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_14 = 13233846416989100;
                        arr_14 [i_0] [i_0] [i_0] [i_1] = 549603246;
                        arr_15 [i_1] = arr_13 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1];
                    }
                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        arr_18 [i_1] [i_1] = (arr_0 [i_2 - 1] [i_0 - 1]);
                        var_15 = 24647681986613958;

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_22 [i_0] [i_1] [19] [i_4] [i_1] = (((arr_12 [i_1] [i_1] [i_2 + 1] [i_2 + 1]) ? (arr_12 [i_1] [10] [i_2 - 1] [i_4]) : (arr_12 [i_1] [i_1] [i_2 - 1] [i_4])));
                            arr_23 [i_0] [i_0] [i_1] [i_1] [i_0] [i_5] = var_4;
                            arr_24 [i_1] [i_4 + 2] = (((1 + 55) == (arr_10 [i_1] [i_5] [i_1] [i_4 - 2])));
                            var_16 = var_3;
                            arr_25 [i_1] [i_0] [i_1] [i_4 - 1] [1] = (((arr_12 [i_1] [i_1] [i_2 - 1] [i_4 + 1]) ^ 80));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_17 = (((arr_19 [i_0 - 1] [7] [20] [i_6]) ? var_5 : (arr_21 [i_6] [19] [i_2 - 1] [15] [i_4 + 2] [i_2 - 1])));
                            var_18 = arr_9 [i_0] [i_6] [i_6];
                            arr_29 [i_1] [i_1] [i_2] = ((3283731663 / (arr_6 [i_2] [i_4] [i_6])));
                            arr_30 [i_0 - 1] [21] [i_0 - 1] [i_4] [i_1] = ((var_9 ? ((18446744073709551598 ? 422212465065984 : 2147483647)) : (((arr_17 [i_0 - 1] [1] [18] [i_1]) - 33919))));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_6;
    var_20 = ((((((((var_9 ? var_10 : var_0))) ? var_1 : ((var_6 ? var_0 : var_5))))) ? var_3 : (max(var_9, 1))));

    /* vectorizable */
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        var_21 = var_2;
        arr_33 [i_7] = arr_9 [i_7] [i_7] [i_7];
        arr_34 [i_7] = (((2 == 18) + (arr_28 [6] [6] [i_7 - 1] [i_7 + 1] [i_7])));
        arr_35 [i_7] = 65507;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        arr_48 [i_8] [6] = var_5;
                        arr_49 [2] [3] = 126;
                        arr_50 [i_8] [i_11] [i_8] [i_11] = (arr_21 [i_8] [i_8] [i_9] [16] [i_11] [i_11]);
                        arr_51 [i_8] [i_9] [i_8] [i_9] = var_0;
                    }
                }
            }
        }
        var_22 = var_2;
        arr_52 [i_8] = 235;
        var_23 = -9713;
        arr_53 [i_8] = (((arr_7 [16] [i_8]) ? 17551948565866022572 : (arr_7 [1] [i_8])));
    }
    #pragma endscop
}
