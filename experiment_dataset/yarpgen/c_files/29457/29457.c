/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [1] [i_1] = (arr_2 [i_0] [i_0]);
                    var_15 = (max(var_15, ((((-2147483647 ? (arr_9 [i_0] [i_1]) : 1))))));
                }
            }
        }
        var_16 = 1;
    }

    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_17 = (max(var_17, ((((((~13766) + 2147483647)) >> ((((var_6 ? 12710959508645286599 : 0)))))))));
        var_18 = ((-(((arr_10 [i_3] [i_3] [i_3 - 2]) ? ((171 ? 1 : (arr_4 [i_3] [i_3 - 2] [i_3 - 1]))) : -var_14))));
        var_19 = arr_13 [i_3];
        arr_15 [i_3 - 2] [i_3 - 1] &= (arr_0 [i_3] [i_3 - 1]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_20 = var_4;
        arr_19 [i_4] [i_4] = ((-(((arr_18 [i_4]) << (31116 - 31106)))));
        var_21 = (1 || var_12);
        var_22 = (max(var_22, (((arr_17 [i_4] [i_4]) || (arr_16 [i_4])))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_23 = ((19429 + (((var_0 || (arr_21 [i_5]))))));

        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] = (((((18446744073709551615 * (((min((arr_30 [5] [i_7] [i_5] [i_7] [i_7]), (arr_22 [1] [i_9])))))))) ? var_8 : 12710959508645286599));
                            arr_33 [i_5] [i_5] = (((((((((arr_26 [i_5] [i_5]) | var_7))) ? (~170) : (max((arr_21 [i_5]), var_4))))) || (!22)));
                            arr_34 [i_5] [i_7] [i_5] [i_5] [i_8 + 1] [i_7] = ((0 <= 1) || (((var_14 ? (arr_22 [i_8 - 1] [i_8 - 1]) : (arr_20 [i_5] [i_8 - 1])))));
                        }
                    }
                }
            }
            var_24 += (max((((arr_27 [i_5] [i_5] [i_6]) ? (arr_23 [i_5] [1]) : (arr_25 [i_5] [i_6] [i_6]))), 1));
            arr_35 [i_5] [i_6] [i_5] = var_11;
            arr_36 [i_5] [6] [i_6] = var_4;
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
        {
            arr_39 [i_5] = (max((((((arr_27 [i_5] [i_10] [i_10]) / var_10)) < (((var_5 ? 20345 : 0))))), 1));
            arr_40 [i_5] [i_5] = 1;
            var_25 = 1;
            arr_41 [i_5] = (max((arr_27 [i_5] [i_5] [i_5]), ((var_5 ^ (arr_27 [i_10] [i_10] [16])))));
        }
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 23;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                {
                    var_26 = (max(var_26, 1));
                    arr_49 [i_12] [i_12] [i_13] = (((19429 ? 10803 : 262016)));
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 1;i_15 += 1)
                        {
                            {
                                arr_55 [i_12] [i_12] [i_12] [i_12] = var_6;
                                arr_56 [i_11] [i_12] [i_14] [i_12] = (((arr_52 [i_12] [i_14 - 1] [i_15] [i_15 - 1] [i_15 - 1]) + (arr_43 [i_11])));
                            }
                        }
                    }
                    var_27 = (arr_45 [i_11 - 2]);
                    var_28 += ((-(var_9 ^ 234)));
                }
            }
        }
        var_29 = (arr_51 [i_11] [i_11] [i_11]);
        arr_57 [i_11 + 1] = (((~var_3) - 14893778387549641531));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 24;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 24;i_19 += 1)
                        {
                            {
                                arr_66 [i_16] [i_16] [i_17] = 1;
                                var_30 = 12710959508645286596;
                                var_31 += (arr_60 [i_11] [i_19] [i_11 - 2]);
                                var_32 = (((((-(arr_47 [i_11] [i_16])))) ? (((arr_64 [i_16] [i_11 - 2] [i_16] [i_16] [i_16] [i_19] [i_17]) & 65513)) : (arr_48 [i_16] [i_11 + 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 24;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 23;i_21 += 1)
                        {
                            {
                                var_33 = ((255 ? (arr_70 [i_21 + 1] [i_11 - 2] [i_21 + 1] [7]) : -1596301446));
                                var_34 -= ((~(((arr_48 [1] [i_16]) ? 65 : var_2))));
                                var_35 = (((-2131193651 & 254) | (arr_63 [i_11] [i_16] [i_16] [i_21 + 1])));
                            }
                        }
                    }
                    arr_72 [i_16] [i_16] [i_16] [i_16] = ((-(arr_42 [i_11 - 2])));
                    arr_73 [i_16] [i_16] [i_17] [i_17] = ((~(arr_50 [i_11 + 1])));

                    for (int i_22 = 4; i_22 < 21;i_22 += 1)
                    {
                        var_36 = (min(var_36, ((((var_4 != 1) ? (((((arr_76 [i_11] [i_11] [i_11] [i_11 - 1]) < (arr_60 [i_11] [i_22] [i_11]))))) : (arr_42 [i_11]))))));

                        for (int i_23 = 0; i_23 < 1;i_23 += 1)
                        {
                            var_37 = ((21 ? (arr_44 [i_16]) : ((4294967295 ? 1879048192 : 0))));
                            arr_80 [i_11] [i_11] [i_11] [i_11] [5] [i_11] [i_16] = 0;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
