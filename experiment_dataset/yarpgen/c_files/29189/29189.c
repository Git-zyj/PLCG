/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (max(((((var_7 ? (arr_2 [i_1]) : var_2)) + var_13)), (arr_5 [i_0 - 2])));
                var_15 = var_3;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_16 = (arr_3 [i_0] [3]);
                                var_17 |= var_2;
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                var_18 = (((((arr_1 [i_0 - 1]) ? var_8 : (arr_16 [i_0 - 2] [4] [4] [i_3] [i_0 - 2]))) - (((var_3 - (arr_1 [i_2]))))));
                                var_19 = var_9;
                            }
                            var_20 &= var_2;

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 10;i_6 += 1)
                            {
                                var_21 += (var_9 / var_12);
                                var_22 = (arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                            }
                            var_23 = 1661;
                            var_24 = 63875;
                        }
                    }
                }
                var_25 = 106211722396084189;
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_26 = (((((arr_17 [2] [i_0] [i_0] [0] [i_0 + 1]) ? (arr_0 [6]) : (arr_17 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]))) <= (arr_4 [i_0] [i_0] [i_0])));
                                var_27 &= (~var_7);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_28 = (((arr_30 [i_10]) <= (arr_30 [i_10])));
        var_29 = (((106211722396084179 && 81) ? ((max(-42, (arr_31 [i_10])))) : (63860 + 175)));
        var_30 = (max((arr_30 [i_10]), (((-(arr_31 [i_10]))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_31 = (arr_32 [i_11]);
        var_32 = (arr_34 [i_11]);
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 4; i_14 < 24;i_14 += 1)
                {
                    {
                        var_33 = ((((((arr_35 [9]) ? (arr_42 [i_14]) : var_9))) || (arr_40 [14] [i_11] [14] [i_13 + 2])));
                        var_34 = (max(var_34, var_11));
                        var_35 = (max(var_35, (((226 || (((~(arr_36 [i_11])))))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
    {
        var_36 = var_11;
        var_37 = (max(var_37, (arr_36 [i_15])));
    }
    for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
    {
        var_38 = ((var_10 ? ((1661 ? (arr_36 [i_16]) : var_2)) : ((max((arr_36 [i_16]), (arr_36 [i_16]))))));
        var_39 = (arr_38 [i_16] [i_16]);
        var_40 = (max(var_11, ((181 ? 3596912135 : var_7))));
    }
    #pragma endscop
}
