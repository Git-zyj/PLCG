/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (~var_0);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, ((((arr_4 [i_3]) ? (var_16 / var_16) : (((((1 ? (arr_5 [2] [i_3]) : var_1))) ? (((min((arr_7 [9] [9] [i_2] [i_2]), (arr_7 [i_0] [i_0] [i_2] [i_3]))))) : (arr_1 [i_2]))))))));

                            for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
                            {
                                var_19 = (((max(var_0, (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1])))));
                                var_20 = var_10;
                                var_21 += (min((arr_4 [i_1 + 3]), (max((arr_4 [i_1 + 2]), 1))));
                                var_22 = (min((arr_2 [i_2 - 1] [i_2 + 1] [i_2 + 1]), (arr_2 [i_2 + 2] [i_2 + 1] [i_2 - 1])));
                            }
                            for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
                            {
                                arr_15 [i_0] [i_0] [i_2] = ((var_7 - (((!(~5286751693039880761))))));
                                arr_16 [i_0] [i_1] [13] [i_2] [i_1] [13] [i_5] = ((((((((arr_6 [i_0] [i_0] [i_0] [i_5 + 1]) | 1))) | (arr_3 [4])))) ? 1 : (((var_7 >= ((min(var_7, (arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
                                arr_17 [i_0] [i_2] [i_2] [i_3] [i_5] = ((-(arr_5 [i_2] [12])));
                            }
                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 12;i_6 += 1)
                            {
                                var_23 = 1;
                                var_24 = (min(var_24, ((((var_2 / var_12) % (((2139095040 ^ (arr_14 [i_0] [i_0] [i_1] [i_2] [i_1] [i_6] [i_6])))))))));
                                var_25 = (!8176);
                                arr_20 [i_0] [i_1 + 2] [i_2] [8] [3] = ((((~(arr_3 [i_2]))) >= (arr_14 [i_2 - 1] [11] [11] [11] [i_6 + 1] [11] [i_6])));
                            }

                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_26 = (((min(8176, -var_15)) ^ (((arr_21 [i_0] [8] [i_3] [5]) ? 74 : var_13))));
                                var_27 = (arr_0 [i_7]);
                                var_28 += var_8;
                                arr_23 [i_0] [12] [12] [12] [i_2] [i_2] [i_2] = var_5;
                            }
                            for (int i_8 = 0; i_8 < 14;i_8 += 1)
                            {
                                arr_26 [10] [10] [i_2] [i_3] [12] = var_2;
                                var_29 = (((((arr_4 [i_0]) > var_8)) ? (min(var_16, (arr_25 [i_2 + 1]))) : (((var_7 ? (arr_10 [i_2] [i_2 + 1] [i_2] [i_2]) : (arr_9 [5] [i_8] [i_2 + 1] [i_2 - 1] [i_1 - 1] [i_1 - 1] [5]))))));
                                arr_27 [i_0] [i_2] [i_2 - 1] [12] [i_8] = ((((-var_2 <= (-127 - 1)))));
                                arr_28 [i_2] = (var_4 + 1);
                            }
                            var_30 = (arr_13 [i_0] [7] [i_3]);
                        }
                    }
                }
                var_31 = arr_18 [10] [i_0] [i_0] [i_1] [i_1] [2];
                var_32 = (min(14104180803780515653, ((-33 % ((-(arr_8 [5] [5] [i_1] [0])))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_33 = var_16;
                            var_34 = ((arr_25 [10]) ? (arr_11 [i_1] [i_1 - 1] [i_10] [i_1] [8] [i_1 + 1]) : ((((arr_13 [i_0] [i_0] [i_9]) >> ((((arr_31 [9] [i_0] [i_1 + 1] [i_0]) >= 14104180803780515663)))))));
                            var_35 = ((-(190029408 << 0)));
                            var_36 = ((~((+(min((arr_25 [1]), var_0))))));
                        }
                    }
                }
            }
        }
    }
    var_37 += ((94 ? (-var_11 < var_6) : var_15));

    /* vectorizable */
    for (int i_11 = 1; i_11 < 24;i_11 += 1)
    {
        arr_35 [i_11] [22] = var_8;
        arr_36 [i_11] = (arr_33 [i_11]);
        arr_37 [i_11] = -1;
    }
    for (int i_12 = 2; i_12 < 9;i_12 += 1) /* same iter space */
    {
        var_38 = (arr_19 [6] [i_12 + 1]);
        /* LoopNest 2 */
        for (int i_13 = 3; i_13 < 9;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                {
                    var_39 += (((min(7168, -32062))));
                    var_40 |= -78;
                }
            }
        }
    }
    for (int i_15 = 2; i_15 < 9;i_15 += 1) /* same iter space */
    {
        var_41 = (min(288221580058689536, 14092));
        var_42 = 0;
        var_43 = (arr_5 [6] [i_15]);
        var_44 = (arr_3 [i_15]);
        /* LoopNest 3 */
        for (int i_16 = 1; i_16 < 11;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    {
                        arr_58 [i_15 + 1] [i_17] = (arr_56 [i_15] [i_15] [i_17] [i_15] [i_18] [i_18]);

                        for (int i_19 = 3; i_19 < 9;i_19 += 1) /* same iter space */
                        {
                            arr_61 [i_17] [i_17] [i_17] [i_17] [2] = ((-0 ? (((arr_29 [i_15] [i_15]) + var_8)) : 121));
                            arr_62 [1] [10] |= (arr_55 [i_15] [i_15] [i_15] [4] [i_18] [i_19]);
                        }
                        /* vectorizable */
                        for (int i_20 = 3; i_20 < 9;i_20 += 1) /* same iter space */
                        {
                            var_45 &= (~20584);
                            arr_67 [i_15] [i_16] [i_17] [i_16] [i_18] [i_17] [8] = (arr_7 [i_16 - 1] [i_16 + 1] [i_16 + 1] [i_16 - 1]);
                        }
                        arr_68 [10] [i_16 - 1] [i_17] = (min((min(((var_16 ? -8192 : 1388296837308897453)), (arr_60 [i_18] [4] [4]))), ((max(var_14, -var_4)))));
                        var_46 = ((((+(((arr_46 [i_18]) ? (arr_12 [10] [10] [7] [7] [i_16]) : 1)))) / 124));
                        var_47 = ((var_14 & ((var_11 ? 134184960 : (max(var_9, -7))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
