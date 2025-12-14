/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 &= 19731;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (max(var_18, (((((var_11 * (max(-5558508738154887232, 7596260495087440812)))) / var_6)))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_19 = (arr_4 [i_0] [i_1] [i_2]);
                var_20 = (max(var_20, ((min(((((arr_7 [i_0] [14]) << (arr_7 [i_0] [0])))), ((var_7 ? var_10 : (arr_1 [i_1] [i_2]))))))));
                var_21 = (i_0 % 2 == 0) ? ((max(var_4, (((((arr_2 [i_0]) + 9223372036854775807)) >> (((max(var_14, var_6)) - 4037135083))))))) : ((max(var_4, (((((((arr_2 [i_0]) - 9223372036854775807)) + 9223372036854775807)) >> (((max(var_14, var_6)) - 4037135083)))))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_22 = -21108;
                var_23 ^= (arr_10 [i_0] [i_1] [i_3]);
                var_24 = (max(var_24, (arr_5 [i_0] [i_1] [i_3])));
                var_25 = (((arr_3 [i_0]) ? 46508 : (((arr_0 [i_0]) * (arr_1 [14] [i_1])))));
            }

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_26 = (max(var_26, ((((arr_1 [i_0] [i_0]) ? 5614 : (arr_6 [i_4] [i_4] [i_1] [i_0]))))));
                arr_14 [i_4] [i_4] [i_4] [i_0] &= 255;
                var_27 = 217;
                arr_15 [i_0] = (((~(!var_1))));
                arr_16 [9] [9] [i_0] = ((((min(((var_7 ? var_3 : (arr_13 [i_0] [i_1] [i_0]))), 255))) ? (max(var_9, (~-11187))) : var_5));
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                arr_19 [i_0] [i_0] [i_1] [18] = arr_7 [i_0] [i_0];
                var_28 = (((((-(max(var_11, var_9))))) ? ((~((var_2 ? var_10 : var_10)))) : (((29968 ? (max(-11187, (arr_2 [i_0]))) : (arr_0 [i_0]))))));
                var_29 = (min((min((max(18378166012765835612, var_9)), (((181 ? 74 : var_7))))), (((!(((-(arr_0 [i_0])))))))));
                var_30 = var_2;
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                arr_22 [i_0] [i_0] = ((-(max(223, ((min((arr_11 [i_0] [i_1] [i_1] [i_1]), var_15)))))));
                var_31 = (min(var_31, ((((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (((arr_11 [i_0] [i_0] [i_6] [i_6]) ? var_6 : (arr_11 [i_0] [i_0] [i_0] [i_0]))) : (arr_11 [12] [i_0] [i_1] [i_6]))))));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                var_32 *= 2302798027042736380;
                var_33 = 29992;
                arr_25 [i_0] [i_1] [i_0] = (((arr_23 [i_0] [i_1] [i_0]) ? (((((min((arr_23 [i_0] [i_1] [i_0]), var_2))) ? (arr_12 [i_0] [11] [i_7]) : (!75)))) : var_6));
                var_34 = ((!(((-11187 ? (arr_21 [17] [17] [i_0] [22]) : -17247)))));
            }
            var_35 = (max(var_35, ((max(17247, ((-((max(var_2, var_3))))))))));
        }
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_29 [0] = var_5;
        var_36 *= ((-((((-(arr_5 [i_8] [i_8] [13]))) & (max(var_13, var_14))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_37 = ((var_2 * (((!(arr_5 [i_9] [19] [i_12]))))));
                        var_38 = (((((var_10 ? var_6 : -17200))) ? (var_5 || var_7) : var_4));
                        var_39 = (min(var_39, -var_7));
                    }
                }
            }
        }
        var_40 = (arr_5 [i_9] [i_9] [i_9]);

        for (int i_13 = 1; i_13 < 6;i_13 += 1)
        {
            var_41 = ((var_10 ? 32767 : 0));
            arr_42 [i_13] = var_3;
        }
        for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
        {
            var_42 |= -17247;
            arr_46 [i_9] [i_14] = var_5;
            var_43 = (((-(arr_7 [i_9] [i_9]))));
        }
        for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
        {
            arr_50 [i_15] [8] [i_15] = ((1 ? (arr_49 [i_9] [i_9]) : (((((arr_8 [i_15] [i_9] [i_9]) || 16))))));
            var_44 = ((7995 ? 3401082292888839470 : (((var_5 ? (arr_39 [i_9] [9]) : var_1)))));
        }
    }
    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {
        arr_55 [i_16] = (min(var_4, 170));

        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {

                /* vectorizable */
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    var_45 = (min(var_45, 53902));
                    arr_62 [i_16] [i_16] [i_18] [i_19] [i_16] [i_17] = (((((var_12 & (arr_53 [i_18])))) ? var_1 : ((var_4 ? var_3 : 65535))));
                    arr_63 [i_16] [i_16] [i_17] [i_18] [i_18] = ((~(arr_21 [i_16] [i_17] [i_18] [i_19])));
                    arr_64 [i_16] [i_16] [1] [i_19] = (((((-1 ? var_12 : var_2))) || 0));
                    var_46 = (arr_10 [i_16] [i_18] [i_16]);
                }
                arr_65 [7] [i_16] = ((((((arr_12 [i_16] [7] [i_18]) < 18446744073709551615))) / (min(((var_3 ? (arr_5 [i_16] [i_17] [i_18]) : (arr_20 [i_16]))), 29968))));
                var_47 = (arr_9 [i_16] [i_16] [i_16]);
                var_48 = var_2;
            }
            var_49 = var_7;
            var_50 = (((max(var_15, (arr_58 [i_16])))));
        }
    }
    #pragma endscop
}
