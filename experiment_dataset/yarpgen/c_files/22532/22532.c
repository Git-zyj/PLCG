/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_20 = 1758152413;
                    var_21 = (min(var_21, ((((((26945602 ? (min(26945602, (arr_0 [5] [3]))) : -2140180447))) ? ((max(var_1, (arr_5 [i_1] [i_1 + 1] [i_2] [i_2])))) : (max(-1, 1023)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_22 &= (max(27845, ((1526533689 - (min((arr_2 [i_1] [i_3]), var_0))))));
                                var_23 = ((var_11 ? (min((arr_2 [i_1 + 1] [i_1 - 1]), (arr_2 [i_1 + 1] [i_1 - 1]))) : (!-1758152413)));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_24 = (max(var_18, ((-(arr_6 [i_1 - 1])))));
                    var_25 = (((var_19 + var_15) ? ((((arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1]) * 27861))) : -8103106365928769661));
                }
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    var_26 = ((((arr_5 [i_6] [i_6] [i_6] [i_6]) ? ((max((arr_6 [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [1])))) : var_13)));

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_7] = var_11;
                        var_27 = var_15;
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_28 = ((((1758152393 / ((37689 << (2499405132 - 2499405128))))) >> var_17));
                        arr_21 [i_6] [i_8] |= (arr_11 [i_0] [13] [i_6 - 1] [i_6 - 1] [i_8]);

                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            var_29 = (min(var_29, ((((var_9 ? 1 : 27869))))));
                            var_30 = (arr_3 [i_0] [i_6 + 1] [i_6]);
                            arr_24 [i_6 + 1] = (((139 ? 1 : -44)));
                        }
                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            var_31 = (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2]);
                            var_32 += -10;
                            arr_29 [i_0] [12] [i_0] [12] [0] [12] = (~(arr_0 [i_1 + 1] [i_10 + 3]));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_0 ? 4728 : 3309933020));
                        }
                        arr_31 [i_6 - 1] [i_6] |= (min(((239 ? 97 : (arr_22 [9] [9] [i_1 + 1] [i_0] [i_0]))), (!985034273)));
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        arr_36 [i_0] [i_1] [11] [i_11] |= (max((min(var_5, (((!(arr_34 [i_6] [i_11] [i_0] [i_11])))))), (!var_10)));
                        var_33 = var_15;
                        var_34 = 288670238;
                        var_35 &= var_16;
                    }
                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        var_36 |= (min((((arr_39 [i_12 + 1] [i_1 - 2] [1] [i_6]) | (min(985034291, 76)))), (((((max((arr_16 [i_0] [i_1 - 1] [i_6] [i_6]), 985034273))) ? (var_9 == var_14) : ((min(1, 133))))))));
                        var_37 = ((((max(162, var_7))) ? (arr_38 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (!var_10)));
                    }

                    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                    {
                        arr_43 [8] [i_1] [i_6] [i_13] = (max((arr_40 [i_0] [5] [i_0] [i_13]), -474180210));
                        var_38 ^= var_2;

                        for (int i_14 = 1; i_14 < 13;i_14 += 1)
                        {
                            arr_46 [i_0] [i_14] [i_0] [i_13] [i_0] [i_1] = (min(((-(arr_40 [i_1] [i_1] [1] [i_1]))), ((27845 ? (arr_25 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_1 - 1] [i_6 - 1] [i_14]) : (arr_25 [i_0] [i_0] [i_0] [i_0] [i_1 - 2] [i_6 - 1] [i_0])))));
                            var_39 = ((((arr_42 [i_0] [i_14 - 1] [i_6 + 1] [8] [i_14] [i_6 + 1]) >= 21620)));
                        }
                    }
                    for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                    {
                        arr_49 [9] [i_15] [i_15] [i_0] = var_5;
                        arr_50 [i_1] [13] [i_15] [i_1 + 1] [i_1] [i_1 + 1] = var_15;
                        var_40 = -1758152383;
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            {
                                var_41 = ((var_18 ? var_5 : (arr_27 [i_1] [i_1 - 1] [i_1 - 1])));
                                arr_58 [i_0] [i_1] [i_16] [i_1] [i_17] [i_18] = (arr_2 [i_1] [i_1 - 1]);
                                var_42 = -82;
                                var_43 = -0;
                            }
                        }
                    }
                    var_44 = (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_16]);
                    arr_59 [i_0] [i_1] [i_16] = (var_8 || -8589294965500160113);
                }
                var_45 = (max(var_45, ((((119 ? (arr_0 [i_1 + 1] [i_1 - 2]) : (arr_0 [i_1 - 1] [i_1 + 1])))))));
                var_46 = (min(var_46, -1758152394));
            }
        }
    }

    for (int i_19 = 0; i_19 < 16;i_19 += 1)
    {
        var_47 = 137;
        var_48 ^= (arr_61 [i_19]);
        arr_62 [i_19] &= ((min((232 != var_17), var_15)));
        var_49 = ((-(arr_60 [i_19])));
    }
    #pragma endscop
}
