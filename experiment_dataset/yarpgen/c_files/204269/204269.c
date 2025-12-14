/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_1;
        var_18 = (min(var_18, (((max((arr_1 [0]), var_12))))));
        arr_3 [i_0] = arr_1 [i_0];
        var_19 = ((~(arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_20 = (arr_5 [i_1]);

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_1] = (arr_4 [i_1]);
            var_21 |= ((63 + (arr_9 [i_2 - 1])));
        }
        arr_11 [i_1] = 2094386967;
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 23;i_3 += 1)
    {
        var_22 = (max(var_22, var_3));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] = var_2;
                                arr_26 [i_3] [i_3] [i_5] [i_5] [i_5] [i_5] [i_5] = (((arr_23 [23] [i_3] [i_3] [i_3]) | (~var_8)));
                                arr_27 [i_3] [i_3] = (arr_14 [i_3 + 2]);
                                var_23 = ((((arr_15 [i_3]) < -2094386956)));
                            }
                        }
                    }
                    var_24 &= (!(arr_22 [i_3 - 1] [i_3 - 3] [i_3 + 2] [i_3 - 4] [i_3 - 1]));
                    arr_28 [i_3] [i_3 - 4] [i_3] = (arr_15 [i_5]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_25 = (var_15 == var_5);
        arr_31 [i_8] = 1;
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 22;i_11 += 1)
            {
                {
                    arr_39 [i_11] [i_10] [i_10] [i_9] = (((-2147483642 ? -1 : -2094386956)));
                    arr_40 [i_10] = -2094386957;
                    arr_41 [i_10] [i_10] = (min(2094386961, (max((((2094386952 + (arr_21 [i_9] [1] [i_9])))), ((var_16 ? (arr_22 [i_9] [i_9] [i_9] [13] [i_9]) : (arr_35 [i_9] [i_10])))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_26 = (max((arr_44 [i_11 - 2] [i_11] [i_11 - 3] [i_10 + 2]), (arr_12 [i_11 + 1] [i_10 + 1])));
                                var_27 = (((arr_19 [i_9] [i_10]) ? (((((!(arr_35 [i_13] [i_10])))))) : ((4294967288 ? (arr_44 [i_10] [i_10 - 3] [i_10 - 2] [i_10 + 3]) : (max((arr_17 [i_10]), -2094386951))))));
                                var_28 = (arr_13 [i_10] [i_10 + 2]);
                                arr_49 [18] [i_10] [18] [i_10] [i_9] &= var_17;
                            }
                        }
                    }
                    arr_50 [i_9] [i_10] = 5347;
                }
            }
        }
    }
    var_29 = (max(var_29, var_17));
    #pragma endscop
}
