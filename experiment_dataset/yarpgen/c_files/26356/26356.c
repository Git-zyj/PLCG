/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = var_9;
    var_17 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (max(var_18, (((-(arr_3 [8] [i_0]))))));
        var_19 = var_14;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_20 = ((((arr_3 [8] [i_1 - 1]) + 2147483647)) >> 7);
        var_21 = (((var_13 | var_14) ? var_14 : var_1));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_22 |= (((((var_2 ? 3472769677 : var_5))) ? (arr_14 [i_2]) : ((1073709056 ? 96 : 1))));
                            arr_17 [i_3] [i_4] = 32767;
                        }
                        var_23 = var_14;
                        arr_18 [i_1 - 1] [i_2] [i_3] [i_4] = var_4;
                        var_24 = var_1;
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_25 = (max(var_25, (!var_10)));

            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                var_26 ^= (!255);
                var_27 -= ((((!(arr_20 [i_7]))) ? (!9460077642212767575) : -113));

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_28 ^= (arr_13 [i_1 - 1] [i_1] [i_1 - 1]);
                    var_29 ^= (var_3 / (arr_5 [i_1 - 1]));
                }
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                arr_30 [i_1] [1] [i_9] = (arr_0 [i_1 - 1] [8]);
                var_30 = ((!(((255 ? 4294967295 : 0)))));
                var_31 = -18446744073709551614;
                var_32 = (((var_13 & -2147483637) + ((var_2 ? var_11 : var_6))));
            }
            for (int i_10 = 2; i_10 < 13;i_10 += 1)
            {

                for (int i_11 = 3; i_11 < 13;i_11 += 1)
                {
                    var_33 = 15872;
                    var_34 ^= (arr_34 [i_10] [2]);
                }
                for (int i_12 = 2; i_12 < 13;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_35 = (min(var_35, (-861228871 ^ 255)));
                        var_36 ^= ((22 >= 127) && (!109));
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_37 = ((var_13 ? (arr_15 [i_12 + 2] [i_12 - 1] [i_10] [0] [i_12 - 1]) : var_11));
                        var_38 = ((((~(arr_12 [i_1] [i_6] [i_10] [i_10])))) ? (arr_3 [i_10] [i_6]) : var_10);
                        var_39 = ((-(arr_2 [i_10] [i_1 - 1])));
                        var_40 = (((var_13 && 4294967295) / ((255 ? 2857763583 : (arr_39 [i_1 - 1] [i_6] [i_6] [i_14] [11] [i_12])))));
                    }
                    for (int i_15 = 2; i_15 < 12;i_15 += 1)
                    {
                        var_41 = (((var_0 + var_6) ? (4294967295 == 11) : (!var_14)));
                        var_42 = (((var_6 != (arr_21 [6] [i_10] [i_6] [i_1 + 1]))));
                    }
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        var_43 = ((var_7 * ((127 ? var_10 : (arr_5 [i_10])))));
                        var_44 |= (((arr_2 [8] [8]) << (arr_12 [i_1 - 1] [i_6] [8] [i_16])));
                    }
                    var_45 = ((1045322196 ? 4294967257 : 48));
                    var_46 = 243;
                    arr_51 [i_1 + 1] [i_1] [i_1] [i_10] = (~117);
                }
                for (int i_17 = 3; i_17 < 11;i_17 += 1)
                {

                    for (int i_18 = 1; i_18 < 14;i_18 += 1)
                    {
                        var_47 *= ((var_9 | (arr_24 [i_18] [i_17 + 4] [i_1 - 1] [i_1 - 1])));
                        var_48 = (((2147483623 - 1) ? 8 : (!var_9)));
                    }
                    for (int i_19 = 2; i_19 < 12;i_19 += 1)
                    {
                        var_49 = (arr_0 [i_1 + 1] [i_10]);
                        var_50 *= 3958591759281838867;
                        var_51 ^= ((-(arr_8 [i_6])));
                    }
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        var_52 ^= ((!(~var_13)));
                        var_53 *= (var_8 || var_3);
                    }
                    arr_64 [3] [i_10] [i_10] = 27;
                }
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    var_54 = ((var_7 ? var_5 : var_11));
                    var_55 -= ((~((1 ? 7 : 0))));
                }
                var_56 = (max(var_56, (var_13 / 65534)));
            }
            var_57 += (128 ^ 129);
            var_58 = arr_14 [i_1];
        }
        for (int i_22 = 0; i_22 < 15;i_22 += 1)
        {
            var_59 = (arr_6 [i_1 + 1] [6]);
            var_60 = (max(var_60, ((((((arr_8 [i_22]) ? (arr_43 [i_1] [i_1] [1] [2] [i_1]) : var_6)) << ((((var_13 ? var_11 : (arr_1 [i_1]))) - 10510023668906452794)))))));
            var_61 ^= (((((var_1 ^ (arr_56 [i_1] [14])))) * ((var_4 ? var_5 : var_11))));
        }
        for (int i_23 = 1; i_23 < 14;i_23 += 1)
        {
            arr_75 [i_1] |= (134217727 ^ 506338530);
            var_62 = ((var_14 ? var_6 : (arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1])));
            var_63 += (arr_45 [i_1 - 1] [i_1 - 1] [2] [12] [i_1] [i_1] [i_1 - 1]);
        }
    }
    #pragma endscop
}
