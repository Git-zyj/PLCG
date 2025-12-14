/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (!(((((max(var_7, var_2))) ? (var_7 || var_9) : ((var_5 ? -1354603037 : var_12))))));
    var_14 = (min((((!(((var_9 << (var_3 - 1803638882))))))), (((!-89) ? var_0 : var_7))));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_15 ^= (((arr_1 [8]) != (((!(((arr_1 [18]) < var_9)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (((var_5 + 2147483647) << (64 - 64)));
            var_16 = 15360;
            var_17 = ((0 ? var_5 : (109 && var_12)));
            var_18 = (~var_10);
        }
        var_19 = var_12;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_20 *= (((arr_0 [i_2]) ? ((-(arr_5 [i_2] [i_2]))) : (((min(var_5, var_0))))));
        var_21 = var_6;
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_12 [1] = ((-(((arr_10 [i_3]) ? var_7 : var_4))));
        arr_13 [i_3] [i_3] = ((arr_10 [i_3]) >> ((((var_12 ? var_2 : -109)) + 119)));
        var_22 = var_0;
        var_23 = 141860360151089974;
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        arr_17 [i_4] = (1354603018 ? (arr_14 [i_4] [1]) : (min((arr_11 [i_4 + 1]), (~1023))));
        var_24 = (min(var_24, (arr_10 [i_4 + 1])));
        var_25 = ((var_1 ? (arr_7 [i_4] [i_4 - 1]) : (((((arr_3 [17] [i_4] [i_4]) > (-122 - 19232)))))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_26 = var_9;
                        var_27 = var_6;
                    }
                }
            }
            arr_27 [i_4] [i_5] [i_5] = (((((7770 ? var_7 : -89))) ? (arr_5 [i_5] [i_5]) : (~var_2)));
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_28 = ((((99 ? var_10 : var_12)) | ((((arr_36 [i_4 - 1] [i_4] [i_4] [i_4] [12] [i_4] [i_4 - 1]) ? var_2 : 0)))));
                            var_29 = ((var_8 > (((var_4 % (arr_22 [i_4]))))));
                            arr_37 [i_4] [i_5] = var_5;
                            arr_38 [i_4 + 1] [i_5] [i_4 + 1] [i_4 + 1] [i_4] [i_5] [i_8] = ((~(!var_12)));
                            var_30 = (((var_1 * 79) ? (((-(arr_25 [i_8] [i_5] [8] [i_9] [i_10])))) : 1));
                        }
                    }
                }
            }
            arr_39 [i_4] = ((var_0 * (arr_0 [i_4])));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            var_31 = (arr_25 [i_4 - 1] [i_4 + 2] [i_4] [i_4] [i_4 + 1]);
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        arr_49 [i_4 + 2] [i_4 + 2] [i_13] [1] [i_4] = var_12;
                        var_32 = (((arr_47 [i_4 + 2]) ? var_12 : (arr_40 [i_4])));
                        arr_50 [i_4] [i_4] [1] = ((~(~1354603037)));
                    }
                }
            }
            var_33 = ((-(arr_14 [i_4 - 1] [i_11])));
            var_34 = (arr_0 [i_4]);
        }
        /* vectorizable */
        for (int i_14 = 1; i_14 < 12;i_14 += 1) /* same iter space */
        {
            var_35 = ((18446744073709551594 - (arr_28 [i_14 + 2] [i_14] [i_4] [i_14 - 1])));
            var_36 = 1291353549;
            arr_53 [i_4] [i_4] = (arr_20 [i_4] [i_4]);
        }
        for (int i_15 = 1; i_15 < 12;i_15 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        {
                            var_37 = max(((~(arr_16 [i_4]))), (arr_48 [i_4] [i_4] [i_4] [9]));
                            var_38 = (max((((1291353549 * (arr_40 [i_4])))), (((((0 ? var_10 : var_7))) ? var_9 : (arr_5 [i_4] [i_16])))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_19 = 1; i_19 < 13;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        {
                            var_39 = ((((((1159891219 >> 0) ? (((var_4 < (arr_0 [i_20])))) : (65535 != var_6)))) ? ((max(((var_5 ? 9223372036854775807 : 420)), 1))) : (((((arr_64 [i_4] [i_4 - 1]) >> (var_2 - 47))) ^ var_10))));
                            var_40 = ((((!(var_4 ^ 1259017356))) ? (arr_35 [i_21] [i_21] [i_21] [i_21] [6]) : var_4));
                        }
                    }
                }
            }
            arr_70 [i_4] = var_6;
            arr_71 [i_4] [i_4] [i_4] = (arr_26 [i_4] [i_4] [i_15 + 1] [i_4] [i_15] [i_4]);
        }
    }
    #pragma endscop
}
