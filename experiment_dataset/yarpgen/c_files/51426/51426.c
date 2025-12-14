/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((((9 ? (min((arr_3 [i_0] [i_0]), 9223372036854775807)) : ((min(-119, var_8)))))) ? (arr_0 [i_0]) : 3152112097);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = arr_7 [14] [i_1] [i_1];
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, var_3));
                        arr_14 [i_0] [i_1] [i_1] [i_3] = 915359599;
                    }
                }
            }
            arr_15 [i_0] [i_1] = (arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]);
            var_18 = var_10;
        }
    }
    var_19 += max((((-110 == 0) ? (max(var_0, -100)) : 46205)), 118);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                var_20 = (max((-9223372036854775807 - 1), (arr_18 [i_4] [i_5] [i_5])));
                arr_20 [7] = (min(1, 1));
                arr_21 [i_5] = ((((((arr_17 [i_4]) ? var_12 : var_15)))) ? (((arr_16 [i_4]) ? (arr_17 [i_4]) : var_6)) : (((min(var_11, -1)))));

                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_4] [i_4] [i_6] = (arr_25 [22] [i_5] [i_6] [i_5]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_34 [i_6] [i_5] [i_6] [14] [i_8] = ((9182908630254622628 ? (arr_32 [i_6] [i_6] [20] [i_7] [i_8]) : ((((max(0, (arr_29 [i_4] [i_5] [i_6] [i_6] [i_6]))) ? 77 : -25)))));
                                var_21 -= (((arr_23 [i_4] [12] [i_7] [4]) >= (arr_24 [24] [i_5] [6])));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_37 [i_6] = (arr_30 [i_4] [i_4]);

                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            arr_41 [i_6] [i_5] [i_6] [i_6] [i_10] = -72;
                            arr_42 [i_4] [i_6] [i_4] [i_6] [i_6] = ((((((arr_27 [i_4] [i_6]) ? (arr_36 [i_4] [i_4] [i_6] [i_9] [i_4] [i_4]) : 2147483647))) ? (arr_40 [12] [i_5] [i_6] [i_9] [i_10] [i_10]) : (max((arr_16 [i_4]), var_14))));
                            arr_43 [7] [i_5] [i_5] [i_6] [i_5] = 1;
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {
                    var_22 = max((arr_39 [i_4] [22] [22]), 4223467484);
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                var_23 = min((max(-9170185848725720773, 2147483647)), 1);
                                var_24 = var_12;
                            }
                        }
                    }
                    var_25 *= ((max((arr_32 [16] [i_4] [i_5] [i_11] [i_11]), -63)));
                    arr_52 [8] = (arr_25 [i_4] [i_5] [i_4] [i_5]);
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    var_26 = (max(var_26, (arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [16])));
                    var_27 ^= -119;
                    var_28 = (min(var_28, 125));
                    var_29 *= (((arr_47 [i_4]) ? (arr_53 [i_4] [i_4] [i_14] [i_14]) : var_0));
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    arr_58 [1] [i_5] [i_15] [i_5] = arr_24 [2] [i_5] [i_15];
                    var_30 -= (arr_24 [i_15] [6] [i_4]);
                }
            }
        }
    }
    #pragma endscop
}
