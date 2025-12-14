/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_19 = ((-(((arr_2 [i_0]) & var_17))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 = var_15;
        var_21 = (!32242);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_22 = (min(var_22, (18446744073709551615 > 17177732645799734104)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_18 [i_1] [i_2] [9] [i_3] [i_4] [i_1] = (((var_12 > var_2) ^ ((18446744073709551602 ? (arr_17 [i_1] [6] [i_1] [i_1] [i_1] [i_1]) : 0))));
                            var_23 -= (((((0 ? 3 : -4))) ? (((arr_11 [13]) ^ (arr_17 [i_5] [19] [i_3] [i_2] [i_2] [i_1]))) : var_8));
                            var_24 = (min(var_24, (((1 ? (arr_16 [i_2] [1] [i_3] [i_2] [i_2]) : (arr_16 [i_1] [i_2] [i_3] [i_4] [i_5 - 1]))))));
                            var_25 = (arr_12 [i_1] [i_2] [i_3]);
                        }
                    }
                }
                arr_19 [i_3] = ((0 ? -8 : (arr_15 [i_1] [15] [5] [i_3])));
            }
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_26 = (min(var_26, ((((((arr_16 [i_7] [i_7] [i_7] [i_2] [i_7]) & var_0)) < ((~(arr_24 [i_8] [i_7] [i_6] [i_2] [i_1]))))))));
                            var_27 = ((18446744073709551615 ? (((arr_27 [i_6] [i_6] [i_6]) ? var_3 : var_15)) : var_17));
                            var_28 = var_13;
                        }
                    }
                }
                var_29 += (((-33 > 18446744073709551607) & ((var_0 ? (arr_28 [10] [i_2] [i_2] [i_2] [i_2] [i_2]) : var_2))));
            }
            var_30 = (min(var_30, ((((arr_22 [i_1] [i_1] [i_1] [i_1]) ^ 32755)))));
            var_31 = -1498313004;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            arr_33 [i_9] [i_9] [i_1] = ((~(arr_31 [i_1])));
            var_32 = (min(var_32, (((18446744073709551602 > (((arr_11 [i_1]) ? (arr_20 [i_1] [i_1]) : (arr_25 [i_1] [15] [i_1] [i_9] [i_9] [1]))))))));
        }
    }
    for (int i_10 = 1; i_10 < 17;i_10 += 1)
    {
        var_33 -= (9852649459901689425 < -4);
        var_34 = (!17731274061793241098);
        arr_38 [i_10] = (arr_26 [i_10 - 1] [18] [2] [i_10] [i_10]);
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        var_35 = ((-(((arr_27 [i_11] [i_11] [i_11]) ? (arr_8 [i_11]) : 72057576858058752))));
        arr_41 [i_11] = ((min(((1 ? 18446744073709551602 : 22)), (((arr_22 [i_11] [i_11] [i_11] [i_11]) ? 18446744073709551602 : 9)))));
        var_36 = ((!(((((arr_13 [i_11] [i_11] [i_11] [i_11]) ? (arr_10 [i_11] [i_11] [i_11]) : (-32767 - 1)))))));
    }
    var_37 = ((var_10 & (((~(~var_8))))));
    var_38 = (!((max(((var_12 ? var_18 : var_7)), (-3 & var_6)))));
    #pragma endscop
}
