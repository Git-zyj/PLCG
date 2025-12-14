/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = ((10806992329934929324 - (~68169720922112)));
            arr_6 [i_1] = (((((var_0 >> (var_9 - 8656420907632900734)))) ? (((var_6 == (arr_2 [i_0])))) : (arr_0 [i_1 + 3])));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                var_13 = ((var_1 ? var_7 : ((-2950107169421636890 ? var_10 : (arr_3 [i_0] [i_2])))));
                var_14 = (((arr_2 [i_0]) == (arr_10 [4] [i_2 + 2])));
            }
            var_15 = ((!(arr_0 [i_0])));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_14 [i_4] [i_2 + 1] = var_11;
                arr_15 [i_0] [i_4] [i_4] [i_4] = (((!1) & 7639751743774622290));
            }
            for (int i_5 = 1; i_5 < 6;i_5 += 1)
            {
                var_16 = (min(var_16, ((((arr_0 [i_2 + 1]) == var_8)))));
                arr_18 [i_5] [5] [5] = ((var_0 == ((~(arr_9 [i_5] [7])))));

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_21 [i_0] [i_5] [0] [0] [i_5] [i_6] = (((0 - -12) / (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_17 = (arr_17 [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_18 = ((var_5 ? (arr_9 [i_5] [i_2 + 1]) : (arr_8 [i_2 + 2])));
                    arr_25 [i_5] = (~1);
                }
            }
            arr_26 [i_2] [i_2] [i_2] = ((1632088174929600998 ? -6989422029913337677 : 0));
            var_19 = (((arr_24 [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 2]) ? (arr_24 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1]) : (arr_24 [i_2 + 2] [i_2 + 1] [9] [i_2 - 1])));
        }
        for (int i_8 = 3; i_8 < 7;i_8 += 1)
        {
            var_20 -= var_6;
            arr_31 [i_8] [i_8] = (((-9223372036854775807 - 1) ? -499973401163826602 : 12));
            var_21 = ((+((12759540343288005491 ? 20922 : ((15351685790352142272 ? (-9223372036854775807 - 1) : 1))))));
            arr_32 [i_8] [i_8] [i_8] = (min(9223372036854775807, -101));
        }
        arr_33 [i_0] [i_0] = var_0;
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((((arr_12 [3] [i_9] [i_9] [6]) ? ((var_9 ? (arr_29 [i_9] [i_9] [8]) : (arr_12 [i_9] [i_9] [i_9] [i_9]))) : (arr_29 [i_9] [i_9] [0]))))));

        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            var_23 = (((~-2950107169421636900) + (min(((var_12 - (arr_16 [i_9] [i_9] [i_9]))), (arr_27 [i_9] [i_9] [i_9])))));
            arr_40 [i_9] [i_10] = var_8;
            var_24 = (max(var_24, (((-(arr_12 [i_9] [i_9] [i_9] [i_9]))))));
            var_25 = 5011064869175634331;
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            arr_44 [i_9] [i_9] = (((arr_0 [i_9]) ? var_12 : (arr_0 [i_9])));
            arr_45 [i_9] [i_11] = ((arr_12 [i_9] [i_9] [i_9] [i_9]) == (23923 / var_1));
            arr_46 [i_9] [i_11] = (((arr_22 [i_9] [i_11]) ? (arr_22 [i_9] [i_11]) : (arr_22 [i_9] [i_9])));
            arr_47 [i_9] [i_9] = (-90 + 1);
            arr_48 [i_11] [2] [i_11] &= (arr_8 [i_9]);
        }
        var_26 = (arr_39 [i_9] [i_9]);
        arr_49 [i_9] = (((((((((arr_23 [i_9]) ? var_7 : 11305697365469587863))) ? var_6 : var_10))) ? var_6 : ((((((20046 ? var_3 : var_11)) == var_1))))));
    }
    for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
    {
        arr_54 [i_12] = var_12;

        /* vectorizable */
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            arr_57 [i_13] [i_12] = (((arr_23 [i_12]) == var_4));
            var_27 *= ((var_0 ^ (arr_8 [i_12])));
            arr_58 [i_12] = (((arr_50 [i_12]) == (arr_8 [i_12])));
        }
    }
    var_28 = 2;
    var_29 = -4342;
    #pragma endscop
}
