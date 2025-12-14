/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 ^= (((arr_0 [i_0 + 1]) * var_14));

                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_0] = (((arr_4 [i_0] [i_0 + 1] [i_3 + 1] [i_3 + 1]) & var_2));
                        var_19 = (max(var_19, 53956));
                    }
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        var_20 = var_16;

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_21 = (((33554416 & 11582) & 1487651833));
                            var_22 = (max(var_22, (var_12 || var_9)));
                        }
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_18 [3] [i_1] [i_6] [22] [i_6] [i_6] = (((arr_16 [i_6] [i_2] [i_1] [10]) % 53956));

                        for (int i_7 = 2; i_7 < 23;i_7 += 1)
                        {
                            var_23 &= (~1);
                            var_24 = (max(var_24, (arr_5 [i_0 + 1])));
                            var_25 = var_3;
                            var_26 = (min(var_26, (arr_19 [1] [1])));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_6] [i_6] [i_0] [i_8] = var_6;
                            arr_26 [i_0 + 1] [i_0] [i_1] [i_6] [i_6] [i_8] = (((((var_7 ? var_5 : var_11))) ? var_4 : ((var_5 ? var_14 : var_12))));
                            arr_27 [i_8] [9] [i_6] [i_0] [i_0] = 10949;
                            arr_28 [0] [i_6] [0] [i_0 + 1] [i_6] [i_0 + 1] = (((arr_23 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]) | ((~(arr_21 [i_6] [i_6] [i_2] [i_1] [i_6])))));
                            var_27 *= (var_15 || var_6);
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_28 ^= ((var_14 < (((arr_17 [i_0] [i_0] [i_2] [i_2] [i_9]) ? var_15 : var_14))));
                            arr_31 [i_6] [i_6] [i_2] [i_6] [i_1] [i_6] = -14249043556699500140;
                        }
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_35 [i_0] [i_0] [i_1] [i_2] [i_10] = (((arr_29 [i_10] [11] [i_0 + 1] [i_0] [i_0 + 1]) + (arr_22 [10] [i_0 + 1] [i_0] [i_10] [i_0 + 1])));

                        for (int i_11 = 4; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            var_29 = (1 % 4197700517010051475);
                            arr_39 [i_11 + 1] [4] [2] [i_1] [2] = (arr_11 [i_0 + 1] [4] [23] [23]);
                            var_30 = 16;
                        }
                        for (int i_12 = 4; i_12 < 22;i_12 += 1) /* same iter space */
                        {
                            arr_43 [i_0] [i_1] [i_1] [i_2] [i_10] [12] = (arr_23 [i_0] [i_12 + 1] [i_0 + 1] [i_0] [i_0]);
                            var_31 = (min(var_31, (65535 <= 240)));
                            var_32 &= (arr_15 [i_12] [i_10] [i_10] [i_2] [i_10] [i_0] [i_0 + 1]);
                        }
                        var_33 = (arr_22 [i_0 + 1] [i_0] [i_0] [i_10] [i_0]);
                        var_34 = -53956;
                    }
                    var_35 = (((var_0 || var_6) ? var_3 : (arr_41 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [8])));
                }
            }
        }
        var_36 = (2 <= var_5);
        var_37 = (min(var_37, (((var_10 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))))));
        arr_44 [i_0] = ((!(arr_24 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [16])));
    }
    #pragma endscop
}
