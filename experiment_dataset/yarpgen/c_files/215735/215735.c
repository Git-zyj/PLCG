/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_10, (((((var_9 ? var_4 : var_6))) ? (((var_14 ? var_7 : var_9))) : (var_14 + var_6)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((~var_17) ? var_15 : ((((max(var_12, (arr_1 [i_0])))) ? var_16 : (min(var_9, var_13))))));
        var_20 = (max(((((arr_0 [i_0]) - var_17))), (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 ^= (((arr_4 [9]) ? 749834789 : 1));
        var_22 = (((arr_4 [i_1]) <= (((((var_11 ? (arr_5 [i_1]) : var_8))) ? var_7 : (arr_4 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_23 = (((arr_3 [i_1]) ? (((((min((arr_10 [i_1] [i_1] [i_3] [i_3]), (arr_10 [i_1] [i_2] [i_2] [i_1])))) ? var_6 : var_6))) : (max(var_1, var_11))));
                    var_24 = (!3534011697);
                    arr_11 [i_1] [i_2] [i_2] = ((!((((((var_9 ? (arr_6 [i_3]) : (arr_3 [i_3])))) ? (arr_9 [i_1]) : (arr_6 [i_3]))))));
                }
            }
        }
        arr_12 [i_1] [i_1] = (~var_0);
    }
    var_25 = (((var_13 + (var_11 || var_1))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_26 = (((arr_9 [i_4]) ? (arr_9 [i_4]) : (arr_9 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_27 = (((((arr_21 [i_4] [i_5] [i_6]) ? var_17 : var_1)) - 16));
                    arr_22 [i_4] [i_5] [i_6] = (((-(arr_4 [i_5]))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_28 = -81;
                                var_29 = (((arr_26 [i_4] [i_6] [i_7] [1]) ? (((var_10 + 2147483647) << (var_0 - 1373725861))) : (arr_3 [i_4])));
                            }
                        }
                    }
                }
            }
        }
        arr_28 [i_4] = (arr_24 [i_4] [i_4]);
        var_30 = (((arr_16 [i_4]) + var_9));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_31 = var_13;
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                arr_41 [i_9] [i_10] [i_11] [i_11] [i_12] [i_13] [i_13] = ((!(arr_27 [i_9] [i_9] [2] [i_11] [i_12] [i_13])));
                                var_32 = (!var_1);
                                var_33 = ((253 ? 36429 : 51620));
                                arr_42 [i_9] [4] [i_9] [i_9] = ((var_16 ? (arr_32 [i_10 - 1] [3] [i_10 - 1]) : var_13));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            {
                                var_34 = (min(var_34, (~var_4)));
                                var_35 = -var_8;
                                var_36 += (18446744073709551615 <= 119);
                            }
                        }
                    }
                    var_37 = ((arr_17 [i_10 - 2]) ? (arr_8 [i_9]) : ((((arr_32 [i_9] [i_10] [i_11]) ? var_2 : (arr_25 [4])))));
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
    {
        arr_50 [i_16] = var_10;
        var_38 = (max(-23711, (min((arr_29 [i_16]), var_13))));
    }
    var_39 ^= (min(((var_9 ? var_15 : ((var_4 ? var_10 : var_9)))), var_13));
    #pragma endscop
}
