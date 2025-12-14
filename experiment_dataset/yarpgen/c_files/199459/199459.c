/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0 + 3] [i_0 + 2] = (((0 < 1) || (arr_0 [i_0 + 1] [i_0 + 3])));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 = 1;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 |= (arr_8 [i_0] [i_1] [i_2] [i_3]);
                        var_16 *= 1;
                    }
                }
            }
            var_17 = (arr_7 [10] [10] [17] [i_1]);
            arr_12 [i_0] = ((504 ? (arr_11 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0 + 3]) : (arr_4 [i_1] [i_0 + 2])));
        }
        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            var_18 = ((var_6 && ((((arr_10 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0]) & 1)))));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_19 = ((((~(arr_9 [i_0] [i_0]))) ^ 1812));
                        arr_19 [i_0] [i_0] [i_5] [i_4] = (2147483647 / -24544);
                        var_20 = 1;
                    }
                }
            }
        }
        for (int i_7 = 4; i_7 < 23;i_7 += 1)
        {
            var_21 = var_1;
            var_22 |= (-(((-3637976157204919931 || (arr_15 [i_0] [i_7] [i_0])))));
            arr_23 [i_0] [i_0] = 31264;
            var_23 = (((!var_13) ? -1 : (arr_17 [i_7 - 4])));
            arr_24 [i_0] [i_0] = -1;
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_24 = ((1 >> (-19774 + 19775)));
            arr_27 [i_0] [i_0] = (arr_15 [i_8] [i_0 + 4] [i_0 - 2]);
        }
        var_25 = -17;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 10;i_11 += 1)
            {
                {
                    arr_40 [1] [i_11] |= ((1 ? 164 : 0));
                    arr_41 [i_9] [i_9] = ((19773 | (arr_29 [i_11 + 3])));
                }
            }
        }
        var_26 = 1;
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 1;i_12 += 1)
    {

        for (int i_13 = 2; i_13 < 20;i_13 += 1)
        {
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 19;i_16 += 1)
                    {
                        {
                            var_27 *= ((4395899027456 ? (((((arr_49 [i_12] [i_12] [i_12] [i_12]) && 0)))) : 4395899027464));
                            var_28 = (((((arr_6 [i_12] [i_12]) ? 104 : (arr_1 [i_12])))) & ((var_1 ? (arr_26 [i_14] [24]) : var_12)));
                            var_29 |= (arr_1 [i_12 - 1]);
                            arr_52 [1] [i_13] [13] [i_15] [i_16] = ((0 ? (arr_0 [i_12 - 1] [i_13 - 2]) : (arr_0 [i_12 - 1] [i_13 - 1])));
                            var_30 = (-31289 + 15);
                        }
                    }
                }
            }
            arr_53 [i_12] [i_12] [i_13] = ((arr_18 [i_13 - 1] [i_13 + 1] [i_13 - 1]) / 65);
        }
        for (int i_17 = 4; i_17 < 20;i_17 += 1)
        {
            arr_56 [i_12] = 120;
            var_31 ^= (((0 ? (arr_16 [i_12]) : (arr_14 [i_17 - 1]))) < (13 - 1));
        }

        for (int i_18 = 4; i_18 < 17;i_18 += 1)
        {
            var_32 = -2013626148389202639;
            var_33 = 120;
            arr_60 [1] [i_18] = (((-(arr_9 [i_12] [i_12 - 1]))));
        }
        for (int i_19 = 1; i_19 < 20;i_19 += 1)
        {
            var_34 &= ((-1 ? (arr_57 [i_12] [i_19]) : (arr_0 [i_19 - 1] [i_19 + 1])));
            var_35 = (arr_10 [i_12 - 1] [i_12 - 1] [i_19] [i_19]);
        }
        arr_63 [i_12] [i_12] &= (arr_25 [i_12 - 1]);
        var_36 -= 55869;
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 21;i_20 += 1)
        {
            for (int i_21 = 2; i_21 < 20;i_21 += 1)
            {
                {

                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        arr_74 [13] [i_20] = 0;
                        var_37 = ((arr_10 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]) != 0);
                        arr_75 [i_12] [i_20] [1] [i_22] [i_20] = 101;
                        var_38 = ((1 != (arr_51 [i_21] [i_21 - 2] [i_21 - 2] [i_21] [i_21 - 1])));
                        var_39 = ((-(arr_4 [i_12] [i_12 - 1])));
                    }
                    var_40 = ((var_5 ? ((-97 ? (arr_55 [i_12]) : 1687851465)) : 152));
                    arr_76 [i_21 - 1] [i_21] [i_21] [i_21] = 19773;
                }
            }
        }
    }
    var_41 = var_8;
    var_42 -= ((138 ? ((var_5 ? var_6 : 0)) : 853238731));
    var_43 = -82;
    #pragma endscop
}
