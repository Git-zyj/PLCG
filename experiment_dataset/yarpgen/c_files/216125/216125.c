/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = (arr_1 [i_2 - 1] [i_2 + 2]);
                    arr_9 [i_2] [i_2] [i_0] = ((!(arr_2 [i_2] [i_2] [i_2 - 1])));
                    arr_10 [i_0] [i_2] [i_2 - 1] = (((arr_5 [i_2 + 2] [i_2] [i_2 + 2] [i_2]) && ((!(arr_7 [i_0] [i_1] [i_2 + 2])))));
                    var_13 -= (11574 % 11);
                }
            }
        }
        var_14 = 227;
        arr_11 [i_0] [i_0] = ((245 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((!(arr_0 [i_0] [i_0]))))));
        arr_12 [i_0] = (((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (((-11 ? 191 : (arr_2 [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_16 [2] |= ((45037 ? var_3 : (arr_7 [i_3] [i_3] [i_3])));
        var_15 ^= 120;
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_19 [6] |= (arr_18 [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {

                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        arr_28 [i_6] [i_6] [i_5] [i_4] [i_6] = (17 & ((-(arr_7 [i_7 + 1] [i_6] [i_5 - 3]))));
                        arr_29 [i_6] [i_6] = 1073741824;
                    }
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            arr_36 [i_4] [i_5 + 2] [i_4] [i_6] [i_4] [i_4] [i_6] = ((((-(arr_33 [i_6]))) >= (((arr_21 [7] [7] [4]) ? (arr_20 [i_4] [i_4] [i_8]) : 42))));
                            var_16 = (min(var_16, ((((((arr_1 [i_8 - 1] [i_5]) + 2147483647)) >> (var_4 - 209))))));
                            arr_37 [i_4] [i_4] [i_6] [i_6] [13] = (((((-47 ? (arr_21 [i_4] [2] [2]) : 120))) ? var_12 : var_8));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            arr_40 [i_4] [i_5] [i_5] [i_5] [i_6] [i_6] [i_10] = (((arr_6 [i_4] [i_8 - 1]) || (arr_27 [i_10] [i_6] [17])));
                            var_17 = (max(var_17, (((!(arr_24 [i_4] [i_8 + 2] [i_10] [i_10]))))));
                        }
                        arr_41 [i_4] [i_4] [i_4] [i_4] [i_6] = (~(((arr_18 [i_5 - 2] [i_5 - 3]) / (min(var_9, var_8)))));
                    }
                    var_18 = (arr_39 [i_4] [i_4] [i_5] [i_6] [i_6]);
                    var_19 &= ((((+((var_4 ? (arr_30 [i_5]) : (arr_4 [i_4] [2] [21] [i_4]))))) != (-398394009043444342 >= 1)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        arr_44 [i_11] = (((var_4 * -60) - ((252 ? 8192 : var_5))));

        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            arr_47 [i_11] [i_11] [i_12] = ((18446744073709551615 - (arr_45 [i_11] [i_11] [i_12])));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        {
                            var_20 = -17;
                            arr_57 [i_13] [14] [i_13] [i_13] [i_13] = ((2 || (!96)));
                        }
                    }
                }
            }
            var_21 ^= 2;
            arr_58 [i_11] = ((-2 ? (arr_51 [i_11] [i_11] [i_11] [10] [i_11] [i_11]) : ((((arr_53 [i_11] [i_12] [i_11] [i_12]) ? 15872 : (arr_42 [i_11]))))));
        }
    }
    var_22 = var_8;
    var_23 = (min(var_11, ((((var_7 ? 192 : var_0)) | var_3))));
    #pragma endscop
}
