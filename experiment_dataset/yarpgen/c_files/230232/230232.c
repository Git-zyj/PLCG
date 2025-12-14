/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_10 += ((-1834893638 ? 673301470 : 10111));
                            arr_11 [i_0] [0] [i_2] [i_1] = (-1834893638 || 11611);

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_11 |= (arr_8 [i_4]);
                                var_12 = (min(var_12, ((((arr_12 [i_0] [i_0] [7] [i_2] [2] [i_3 + 1] [4]) ? (arr_15 [i_0] [i_1 - 2] [i_0] [i_3 - 1] [i_3 + 1]) : var_0)))));
                                var_13 |= 4294967279;
                                var_14 = (((max((arr_7 [i_0] [i_1 - 2] [4]), (arr_7 [i_0] [i_1 + 1] [i_2])))) >= (max((arr_15 [4] [4] [i_1] [i_3] [i_4]), 3714529616552675926)));
                            }
                        }
                    }
                }

                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    arr_19 [i_1] = (max(var_4, ((((((arr_16 [i_0] [i_1]) ? (arr_8 [i_1]) : (arr_0 [i_0])))) ? var_0 : (9271921973004915407 + 384934370926083316)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_15 = (max((min((min((arr_5 [i_0]), (arr_1 [7] [7]))), 127)), (((((max((arr_1 [i_0] [i_7]), (arr_24 [9])))) ? (max(1834893637, 1)) : (arr_13 [i_0] [i_6] [0] [i_0] [i_7] [i_6] [i_5]))))));
                                var_16 -= 14732214457156875681;
                                arr_26 [i_0] [i_1] [i_1 - 1] [i_5] [i_6] [8] = max(((-(max(var_6, (arr_24 [i_5]))))), ((max(var_3, (arr_1 [i_0] [i_0])))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    var_17 = (arr_20 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_8 + 1]);
                    var_18 = -19;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                arr_33 [0] [i_10] [i_10] = (~-26);

                for (int i_11 = 4; i_11 < 23;i_11 += 1)
                {
                    var_19 = 54741;
                    var_20 *= (max((arr_31 [i_9] [13]), ((((arr_35 [i_9] [i_10] [14]) ? var_3 : var_8)))));
                }
                arr_38 [i_9] [i_9] [3] = var_4;

                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        var_21 = (min(var_21, ((max((arr_30 [i_9]), 1)))));
                        arr_44 [i_9] = var_4;
                    }
                    for (int i_14 = 2; i_14 < 23;i_14 += 1)
                    {

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                        {
                            var_22 = (max(var_22, (arr_39 [i_14 + 1] [21] [2])));
                            var_23 += (((arr_40 [i_14 + 1] [i_14 + 1] [i_12] [i_14 - 1]) ? (arr_45 [i_14 - 1] [i_14 - 2] [i_15] [15]) : (arr_40 [i_14 - 2] [23] [i_14 - 2] [7])));
                            arr_50 [i_9] [i_10] [i_12] [i_10] [i_9] |= var_5;
                            var_24 = var_1;
                        }
                        for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, -1570864066446099067));
                            var_26 = (arr_40 [i_9] [i_10] [i_14] [i_14 + 1]);
                        }
                        var_27 = 6604660600726667170;
                    }
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        var_28 = (min(var_28, (arr_34 [i_9] [i_10] [i_12] [i_10])));
                        var_29 = var_3;
                        arr_57 [i_9] [i_9] [i_9] [i_9] [i_9] |= var_2;
                    }
                    var_30 = (((max((arr_39 [i_9] [i_9] [i_12]), 0))) ? (arr_39 [i_9] [i_10] [i_12]) : (arr_39 [i_9] [i_10] [i_12]));
                    var_31 = ((var_0 ? ((((arr_52 [i_9] [5] [i_12] [i_12] [i_9] [i_12] [i_12]) > (arr_45 [i_9] [11] [i_12] [i_10])))) : 1));
                    var_32 |= -103;
                }
                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    var_33 = (((arr_42 [i_9] [i_10] [15] [i_9]) ? 1 : (arr_42 [i_9] [23] [i_18] [i_9])));
                    var_34 |= (arr_31 [i_9] [i_10]);
                    var_35 = ((var_4 ? var_0 : ((((arr_36 [i_9] [i_10] [i_18]) ? (arr_46 [i_9] [i_10] [i_18] [9]) : (arr_39 [i_9] [i_10] [i_10]))))));

                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        var_36 = 237838954;
                        var_37 = 66;
                        var_38 = (((arr_53 [i_9] [i_10] [i_18] [i_19]) ? (arr_53 [8] [i_10] [8] [i_19]) : var_6));
                    }
                    var_39 = (min(var_39, (((min((arr_36 [i_9] [i_10] [i_18]), (arr_32 [i_9] [i_10] [i_10])))))));
                }
            }
        }
    }
    var_40 = (max(var_2, var_1));
    var_41 = var_5;
    #pragma endscop
}
