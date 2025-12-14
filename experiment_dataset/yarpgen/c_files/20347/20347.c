/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (arr_3 [i_1]);

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3 + 1] [i_4] = (arr_2 [i_0]);
                                var_14 |= ((!((min((arr_10 [i_0] [i_0] [i_2 - 1] [i_2 - 1] [i_3 - 2]), (arr_10 [i_2] [i_2 - 1] [i_2 - 1] [1] [i_3 + 1]))))));
                                var_15 = (min(var_15, (((!((max((arr_3 [i_0]), (arr_7 [i_2] [i_2 - 1] [i_2] [i_2 - 1])))))))));
                            }
                        }
                    }
                    arr_13 [1] = (arr_3 [i_0]);
                }
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    arr_16 [2] [2] = var_5;

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_16 = (min(var_16, (((~(arr_18 [i_0] [i_1] [i_5 + 2] [i_6 - 1] [i_0] [i_6]))))));
                        var_17 = (arr_7 [i_5] [i_5 + 2] [i_6] [4]);

                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            var_18 = var_4;
                            arr_22 [i_5] [i_6] = var_6;
                            arr_23 [i_0] [i_0] [i_1] [i_5] [i_1] [i_6] = var_4;
                        }
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            var_19 = (max(var_19, (arr_7 [i_0] [i_1] [i_6 + 2] [i_6 + 2])));
                            var_20 = arr_27 [i_0] [i_1] [i_0] [i_6] [i_8];
                        }
                    }
                    arr_28 [i_5] [i_5] [i_1] [i_0] = (max(((min(var_1, var_8))), var_13));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_21 = (min(var_21, (arr_8 [i_9] [i_1] [i_0] [i_0])));
                    arr_32 [i_0] [0] [0] = ((!(((~(arr_14 [i_9] [i_1] [i_0] [i_0]))))));
                    var_22 *= -var_11;
                }
                var_23 = var_1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 22;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        {

                            for (int i_14 = 0; i_14 < 23;i_14 += 1)
                            {
                                arr_45 [i_11] = ((!(arr_39 [i_11 - 1] [i_11 + 1])));
                                var_24 ^= var_3;
                            }
                            var_25 = (max(var_25, var_5));

                            /* vectorizable */
                            for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
                            {
                                arr_48 [i_10] [i_11] [i_12] [i_13] [i_15] [i_11] = var_4;
                                var_26 = arr_34 [2];
                            }
                            for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                            {
                                var_27 = (!30704);
                                arr_53 [15] [i_11] [i_11] [i_13] = (~(arr_50 [i_11] [i_11] [i_12] [i_11]));
                            }
                            for (int i_17 = 4; i_17 < 21;i_17 += 1)
                            {
                                arr_56 [i_10] [i_11] [i_12] [i_11] [i_17] = (max(var_4, (arr_47 [11] [11] [11] [i_17 - 1] [i_17 - 2])));
                                var_28 &= (max((max((arr_47 [i_11 + 1] [9] [1] [i_17 + 1] [i_17]), var_13)), (arr_47 [i_11 - 1] [i_17 - 1] [i_17] [i_17 - 3] [i_17])));
                                var_29 = ((~(arr_49 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
                                var_30 = ((!((max(var_3, 6676170935340063768)))));
                            }
                        }
                    }
                }
                arr_57 [i_11] = ((~(arr_37 [i_11 + 1] [i_11 + 1] [i_11 + 1])));
                var_31 = (arr_36 [i_10]);
            }
        }
    }
    #pragma endscop
}
