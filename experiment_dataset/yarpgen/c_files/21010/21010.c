/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 ^= (((((95 - (arr_2 [i_0] [i_0])))) ? ((-(arr_0 [i_0] [i_0]))) : -96));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_11 = (((((var_2 ? -16744 : 63))) ? (~-77) : ((-9240 ? (arr_1 [i_1 + 2]) : var_2))));
            arr_6 [i_1] = ((-((26376 ? (arr_0 [i_0] [i_1]) : (arr_3 [i_1] [i_1])))));
            var_12 = (max(var_12, ((var_7 ? (arr_5 [12] [i_1 - 2] [i_1 + 1]) : (arr_5 [6] [i_1 - 2] [i_1 + 1])))));
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_13 = ((~((~(arr_7 [i_2])))));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_14 = ((-((63 ? var_1 : var_8))));

            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                var_15 = (((arr_9 [i_3]) ? ((var_7 ? (arr_13 [7]) : 5346590947797712415)) : (!var_3)));
                var_16 = (((arr_9 [i_4 - 3]) == (arr_12 [i_4 - 1] [i_4] [i_4])));
            }
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_17 [i_2] [i_5] = ((var_6 / (arr_16 [i_2 + 1] [i_5])));
            arr_18 [i_5] [i_5] = (((!22745) ? var_2 : var_4));
        }
        var_17 = 116;
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_18 = 1;
                var_19 = ((-(arr_21 [i_6] [i_6])));
                arr_25 [i_7] = ((((((arr_21 [i_6] [i_7]) ? (arr_21 [i_6] [i_7]) : (arr_21 [i_7] [i_6])))) ? (((arr_19 [i_6]) & (arr_19 [i_6]))) : (((arr_19 [i_7]) ? (arr_21 [i_7] [i_6]) : (arr_19 [i_6])))));
            }
        }
    }

    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        var_20 -= (min((((arr_19 [i_8 - 1]) ? (arr_19 [i_8 + 1]) : (arr_19 [i_8 + 1]))), ((+((((arr_0 [i_8] [i_8]) || 5572450001166679189)))))));
        var_21 = (!var_6);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                    {
                        arr_34 [i_8] [i_9] [i_9] [i_11] = ((((arr_1 [i_8 + 2]) ? (arr_11 [i_8 - 1]) : (arr_11 [i_8 + 2]))));
                        var_22 = ((~((((max(var_8, (arr_2 [i_8 + 2] [i_9])))) | (arr_29 [i_8 + 1] [i_9] [i_10])))));
                    }
                    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                    {
                        var_23 = (((-var_6 + 2147483647) << (((((((96 & var_8) ? ((min(-120, var_9))) : (arr_30 [6] [2] [i_10] [11]))) + 75)) - 14))));
                        var_24 = (-19031 - 1);
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                    {
                        var_25 |= ((-(((-13475 != (arr_40 [i_9] [i_10] [i_13]))))));
                        var_26 = var_7;
                        var_27 = (min(var_27, var_0));
                        arr_42 [i_13] [i_10] [i_9] [10] = (!-120);
                        var_28 = 7239409121249577733;
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
                    {
                        var_29 = (((arr_22 [i_14]) ? (arr_16 [i_8 + 2] [i_8 + 1]) : ((var_0 ? (arr_24 [i_9] [i_10] [i_14]) : 3919618786))));
                        arr_45 [i_14] [i_9] [i_10] [i_9] [i_8] [i_8] = var_0;
                    }
                    var_30 = (arr_43 [i_8 + 2] [i_8 - 1]);
                    var_31 = ((var_9 > (((arr_3 [i_8 - 1] [i_9]) ? var_3 : (arr_3 [i_8] [i_9])))));
                    arr_46 [i_9] [i_10] = (arr_22 [i_9]);
                }
            }
        }
        arr_47 [i_8] = ((~((min((arr_1 [i_8 - 1]), var_3)))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        arr_52 [i_15] |= var_3;
        var_32 = (((arr_48 [1]) ? (!var_5) : (arr_23 [i_15] [i_15] [i_15])));
        var_33 = -202;
    }
    for (int i_16 = 1; i_16 < 14;i_16 += 1)
    {
        var_34 = (((arr_48 [i_16 + 1]) << (((arr_48 [i_16 + 1]) - 72))));
        var_35 = ((((((-(arr_12 [i_16] [i_16] [i_16]))))) ? (((32767 ? (var_6 || var_4) : ((2514327998 ? var_6 : 11573))))) : (arr_13 [i_16 - 1])));
        var_36 = (((arr_15 [i_16] [i_16] [6]) || -var_6));
    }
    #pragma endscop
}
