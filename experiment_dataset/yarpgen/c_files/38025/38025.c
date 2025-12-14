/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, -var_4));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_14 = ((~(arr_2 [i_0] [i_0 + 1])));
        var_15 = (max(((min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))), (max(var_10, (arr_2 [i_0 + 2] [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            var_16 = (arr_3 [i_2]);
            arr_8 [i_2] [i_1] [i_1] = (min(-2971878528672485749, 2971878528672485748));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_17 = (arr_10 [i_1] [i_1]);
            var_18 ^= (max(-2971878528672485749, var_3));
            var_19 += (7235 < -4083038884378863856);
            var_20 = (max(var_1, (arr_10 [0] [i_3])));
        }
        for (int i_4 = 4; i_4 < 24;i_4 += 1)
        {
            var_21 = var_9;
            var_22 += (arr_11 [i_1] [i_1]);
            var_23 = -4840903372605721587;
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    arr_19 [i_5] [i_5] [i_6] = ((-(arr_4 [i_1])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_24 = ((+(((arr_4 [i_6]) * var_6))));
                                var_25 &= (max((min(var_1, (arr_17 [i_1] [i_1]))), ((max(-10084, var_9)))));
                                var_26 ^= (arr_9 [i_5 + 1]);
                                var_27 = (max(var_27, ((max(((min(var_10, (arr_22 [i_1] [i_1] [i_7] [22])))), (~0))))));
                                arr_24 [i_1] [i_6] [i_1] [i_5] = (max((arr_7 [i_8 + 2] [i_8] [i_8]), (arr_4 [i_8 + 1])));
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            arr_29 [i_1] [i_9] = ((var_0 ? var_3 : var_8));
            arr_30 [i_9] = var_4;
            var_28 = (min(var_28, (((~(-127 - 1))))));
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_33 [i_1] [17] = ((~(((!(18446744073709551606 && -2971878528672485749))))));
            arr_34 [12] = (max((-1 != 0), (max((-127 - 1), var_3))));

            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                var_29 = ((((arr_22 [i_1] [i_11] [i_11] [i_11]) >> (((max(var_2, (arr_3 [i_1]))) - 9953295982380541628)))));
                arr_38 [i_1] [i_11] [i_11] [i_11] = var_8;
            }
            /* vectorizable */
            for (int i_12 = 1; i_12 < 23;i_12 += 1)
            {
                var_30 = ((!(((-(arr_21 [i_1] [i_1] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 24;i_14 += 1)
                    {
                        {
                            arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] = ((7 >> (!var_12)));
                            var_31 = (arr_12 [i_12] [i_12]);
                            var_32 += (arr_17 [i_1] [i_1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 3; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 24;i_16 += 1)
                    {
                        {
                            var_33 -= (arr_20 [i_12 - 1] [i_12 + 2] [i_1] [i_16 + 1]);
                            arr_51 [i_16] [i_16] [i_16] [i_16] [i_1] = (0 & var_4);
                        }
                    }
                }
                var_34 += (((arr_28 [i_12 + 1] [i_12 + 1] [i_12 + 2]) + (arr_40 [i_1] [i_1] [i_10] [i_1])));

                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    var_35 = ((9007199254740991 ^ ((-25 ? 2971878528672485749 : (-127 - 1)))));
                    var_36 = ((-(arr_48 [i_12 + 2] [i_17] [i_12] [i_12 + 2])));

                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        var_37 += (~var_0);
                        var_38 += (arr_37 [i_1] [i_10] [i_12]);
                        var_39 = 13959614822134315022;
                        var_40 = ((~(arr_26 [i_1])));
                    }
                    for (int i_19 = 1; i_19 < 23;i_19 += 1)
                    {
                        var_41 = var_0;
                        arr_58 [i_1] [i_10] [i_10] [i_12 - 1] [i_17] [i_10] [i_19] = var_12;
                        var_42 = (max(var_42, (!3007421588)));
                    }
                    for (int i_20 = 1; i_20 < 24;i_20 += 1)
                    {
                        arr_63 [i_1] [i_10] [i_1] [i_17] [i_20] [i_20 - 1] = (((arr_28 [23] [i_12 - 1] [i_12 + 1]) / -2616283780241175295));
                        var_43 = (max(var_43, var_11));
                        var_44 += (arr_59 [i_20] [i_20 - 1] [i_20] [i_20 - 1] [i_20]);
                    }
                    for (int i_21 = 4; i_21 < 22;i_21 += 1)
                    {
                        var_45 = (~1287545706);
                        arr_67 [14] = (~var_8);
                        arr_68 [i_12] [i_1] = (~4487129251575236600);
                    }
                }
            }
        }
    }
    #pragma endscop
}
