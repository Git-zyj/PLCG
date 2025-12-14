/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_16 &= 121;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_17 |= 0;

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_18 = (arr_1 [i_0]);
                            var_19 -= (~135);
                        }
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            var_20 = -49949507;
                            var_21 = (max(var_21, (arr_11 [i_0] [i_0] [i_5 - 1] [i_3] [i_3 + 1])));
                        }

                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_22 = 6070591342466146705;
                            var_23 += 16294;
                            var_24 = (arr_9 [i_0] [i_0] [i_2] [i_3] [10]);
                            arr_20 [i_0] [i_3] [i_2] [i_1] [i_0] = ((~(arr_10 [i_0] [i_1 - 2] [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 2])));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_25 ^= 63;
                            arr_24 [i_0] [i_2] [i_2] [i_3] [i_7] &= (arr_14 [i_3] [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3 + 1]);
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [i_0] = (arr_26 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_2] [i_3 + 3]);
                            var_26 ^= 227;
                            var_27 = (!8702311341002046915);
                            var_28 = 9145;
                            var_29 = (arr_18 [i_1 + 1] [i_3 + 2] [i_2] [i_3] [i_3 + 2] [i_0]);
                        }
                    }
                }
            }
            arr_29 [i_0] [i_0] = (arr_22 [i_1 - 1] [11] [i_1 + 1]);
        }
        for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_30 = (arr_21 [i_0] [i_0] [i_9 + 1] [i_10] [i_10]);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_39 [i_0] = -27357;
                            var_31 = (min(var_31, (~6070591342466146696)));
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                var_32 = 255;
                arr_44 [i_13] [i_0] [i_0] [i_0] = (arr_35 [i_0] [i_9] [i_9 + 1] [i_0] [i_0] [i_13]);
            }
            arr_45 [i_9] |= (arr_16 [i_9 + 1]);
            var_33 = arr_14 [1] [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_9] [i_9 + 1];
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            arr_49 [i_14] [i_14] |= 18446744073709551615;
            var_34 = (min(var_34, (((!(arr_12 [i_0] [i_0] [i_14] [0] [i_0] [i_0] [i_0]))))));
            var_35 = (arr_13 [i_14] [i_0] [i_0] [i_0]);
        }
        var_36 -= 73;
        arr_50 [i_0] [2] = (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_15 = 4; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            {
                                var_37 = 1;
                                var_38 = 255;
                            }
                        }
                    }

                    for (int i_19 = 3; i_19 < 12;i_19 += 1) /* same iter space */
                    {
                        var_39 = ((-(arr_41 [i_0] [i_15] [i_19])));
                        var_40 = (arr_36 [i_0] [i_0]);
                    }
                    for (int i_20 = 3; i_20 < 12;i_20 += 1) /* same iter space */
                    {
                        arr_69 [i_0] [i_15] [i_16] [i_0] = (arr_27 [i_0] [i_20 - 2] [i_16]);

                        for (int i_21 = 1; i_21 < 13;i_21 += 1)
                        {
                            var_41 = (max(var_41, 1));
                            arr_72 [i_0] [i_0] [0] [i_0] [i_0] &= 24949;
                            var_42 = (arr_70 [i_20 - 3] [i_20] [i_20 + 1] [i_20 - 2]);
                        }
                    }
                    var_43 = -88;
                    arr_73 [i_0] [6] [10] |= arr_25 [i_15 + 1] [i_15] [i_15] [i_15] [i_15 - 3] [i_15] [i_15];
                }
            }
        }
    }
    var_44 = var_6;
    var_45 = (max(var_45, var_2));
    /* LoopNest 3 */
    for (int i_22 = 0; i_22 < 22;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 22;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 22;i_24 += 1)
            {
                {
                    arr_80 [i_22] [i_23] = (arr_79 [i_23] [i_24] [i_23] [i_23]);
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 22;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 22;i_26 += 1)
                        {
                            {
                                var_46 = (~-107);
                                arr_87 [i_22] [i_23] [i_24] [i_26] [i_26] &= (arr_83 [i_22] [i_23] [i_22] [15] [i_26]);
                                var_47 = 15762598695796736;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
