/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 = (29038 + 219);
                    var_12 = (-32767 - 1);
                }
            }
        }
        var_13 = 34;
        var_14 += ((((max((arr_0 [i_0]), (((arr_3 [i_0]) ^ var_2))))) ? 37 : ((-(-32767 % -32766)))));
        var_15 = 9223372036854775807;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_16 *= -6389224101817385125;
        var_17 = 45863;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_18 &= ((-32764 ? (arr_10 [i_4]) : (9223372036854775807 && var_0)));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_19 = (((arr_19 [i_8] [2] [i_8] [i_8 - 1] [i_8]) ? (arr_25 [i_8] [i_8] [i_8 - 1] [i_4] [i_8 + 1]) : (arr_19 [i_8] [i_8] [i_8] [i_8 + 1] [i_8])));
                                arr_26 [i_8] [i_4] [i_6] [i_5] [i_5 - 1] [i_4] [6] = var_4;
                                var_20 = ((-32748 ? (arr_24 [1] [i_4] [i_7 + 2] [10] [i_7 + 2] [i_4] [i_6]) : (arr_23 [i_4] [i_4] [i_5 + 1] [i_7] [i_8 - 1] [i_8 - 1])));
                                arr_27 [i_4] [12] [i_4] [i_4] [i_4] = 23;
                            }
                        }
                    }

                    for (int i_9 = 3; i_9 < 9;i_9 += 1)
                    {
                        var_21 = (((-9223372036854775803 ? (arr_21 [i_4] [i_4]) : 22)));
                        var_22 ^= var_1;
                        arr_30 [8] [i_4] [i_4] = var_7;
                        var_23 = (min(var_23, (!16934829167334817829)));
                    }
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        var_24 = var_9;
                        var_25 = (max(var_25, 1619479826444986710));
                    }
                    for (int i_11 = 3; i_11 < 12;i_11 += 1)
                    {
                        arr_36 [i_4] [i_4] [i_4] [i_11] [i_5] = (((arr_28 [i_5 + 1] [i_5]) ? (((var_7 ? var_6 : (arr_31 [i_4] [i_5] [i_6] [i_11] [i_4])))) : (~1511914906374733814)));
                        arr_37 [10] [11] [11] [i_4] = var_5;
                        var_26 = ((((arr_31 [i_4] [5] [5] [5] [i_4]) / var_4)));
                    }
                }
            }
        }
        var_27 = (min(var_27, (arr_24 [i_4] [i_4] [4] [i_4] [i_4] [8] [6])));
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
    {
        var_28 = (((arr_35 [i_12] [i_12] [2] [i_12] [i_12] [i_12]) - -10));
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 11;i_14 += 1)
            {
                {
                    var_29 = (arr_10 [i_12]);
                    arr_47 [i_12] = ((~(((arr_11 [i_12]) ? (64 & -7302012726964894065) : 1097039938))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            {
                                arr_54 [i_12] [i_13] [i_14 - 3] [i_13] = (((((58720256 ? var_9 : (arr_24 [i_16] [i_12] [i_16] [3] [i_13 - 2] [i_12] [i_13 - 2])))) ? ((0 ? (arr_15 [i_14] [i_14 - 2] [i_13 - 1] [i_13 - 1]) : (arr_24 [i_16] [i_12] [i_15] [i_15] [i_14 - 2] [i_12] [i_13 + 2]))) : (arr_52 [i_13 - 1] [9] [9])));
                                var_30 = var_1;
                                var_31 = (min(var_31, (((~13510798882111488) ^ -31))));
                            }
                        }
                    }
                    arr_55 [i_12] [i_12] [i_12] = var_6;
                    var_32 += ((((((arr_35 [i_13] [0] [i_13] [i_13] [0] [i_12]) & (arr_35 [i_12] [i_12] [i_13] [i_13 - 2] [2] [i_12])))) / (((arr_35 [i_12] [i_12] [i_12] [i_12] [2] [i_12]) ? var_6 : var_4))));
                }
            }
        }
        var_33 = (!-32760);
    }
    #pragma endscop
}
