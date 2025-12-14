/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((!((((arr_1 [i_0] [i_0]) ? 1 : (arr_3 [i_0]))))));
        var_18 &= (!((((2108082854 ? 0 : 18446744073709551615)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                {
                    var_19 = var_5;

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1] [i_2] = ((!(arr_9 [i_3 - 2] [i_3 - 1])));
                        var_20 = (min(var_20, (((((var_14 ? 0 : var_11)) + (arr_11 [i_1] [i_1]))))));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_21 = ((arr_5 [i_1]) || 1);
                        arr_20 [i_1] [i_3 + 2] [i_1] [i_1] [i_1] = arr_3 [i_5];
                    }
                }
            }
        }
        arr_21 [i_1] = (0 || var_13);
    }
    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        var_22 = (min(43, (min(var_12, var_6))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_23 = ((~(((arr_0 [i_6 + 1]) ? (arr_0 [i_6 + 1]) : (arr_0 [i_6 - 1])))));
                        var_24 = ((((max(64989, var_12))) ? ((var_12 ? -1954077166373198939 : var_2)) : (((255 ? 268173312 : 35)))));
                        var_25 = 43;
                        var_26 = ((((max(((43 ? var_13 : 63331)), var_14))) ? var_10 : 137));
                        var_27 *= ((var_1 ? var_10 : ((0 ? 143 : 1))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {
                    arr_40 [i_6] [i_10] [9] [9] = 935777023;

                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            var_28 = ((!(((((var_9 ? (arr_19 [i_6] [16] [10] [i_11] [i_12 - 2] [12]) : var_2)) / ((min(var_6, 55433))))))));
                            arr_47 [i_6] [i_10] [i_11] [i_12] [i_13] = (arr_38 [i_6] [i_11] [1] [1]);
                            var_29 -= ((-(arr_24 [i_6] [i_12])));
                        }
                        /* vectorizable */
                        for (int i_14 = 2; i_14 < 9;i_14 += 1)
                        {
                            var_30 = (min(var_30, (arr_18 [4])));
                            var_31 = var_11;
                            var_32 = (min(var_32, (((255 ? (64968 / 237) : 0)))));
                            var_33 -= var_16;
                        }
                        for (int i_15 = 4; i_15 < 9;i_15 += 1)
                        {
                            var_34 = var_7;
                            var_35 -= max((arr_39 [i_6] [i_6 - 1] [i_6 - 2]), ((var_13 ? (var_12 - 42) : -var_14)));
                            var_36 = (!var_16);
                            var_37 = max((((arr_10 [i_6 - 1] [i_10]) ? (arr_10 [i_6 + 1] [i_10]) : var_12)), (((arr_27 [i_6] [9] [i_11]) ? var_3 : 268173312)));
                        }
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            var_38 = (min(var_38, ((~((((arr_34 [i_16] [i_10]) < 1)))))));
                            var_39 = ((((arr_48 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] [i_6 - 1]) ? (arr_3 [i_6]) : 1)) < 30677);
                        }
                        var_40 = (((min(((min((arr_36 [i_12] [i_10] [i_10]), var_8))), ((var_5 ? (arr_24 [i_10] [i_6]) : 557))))) ? var_9 : (((arr_1 [i_10] [1]) ? (arr_33 [5] [i_11] [i_6] [i_6] [i_6]) : (arr_12 [i_12] [i_11] [i_10]))));
                        var_41 = (min(var_41, (max(((((16 ? var_12 : var_13)) | (arr_28 [i_6] [1] [i_6]))), (((((((arr_55 [4]) >> (51 - 26)))) && (!var_11))))))));
                        var_42 = (min(var_42, ((((((var_4 || 0) ^ var_8))) ? var_15 : var_4))));
                        var_43 = ((8889 ? 0 : (((1 && (!-241799267))))));
                    }
                    for (int i_17 = 1; i_17 < 6;i_17 += 1)
                    {
                        var_44 = (arr_41 [i_17] [i_11] [4] [i_6] [4]);
                        arr_59 [i_6] [i_17] = ((~(!6603457242390621122)));
                    }
                }
            }
        }
        var_45 -= (arr_13 [i_6 - 2] [i_6] [i_6 - 1] [18]);
        var_46 = min(var_2, (-127 - 1));
    }
    for (int i_18 = 0; i_18 < 25;i_18 += 1)
    {
        var_47 = (arr_60 [i_18] [i_18]);
        arr_62 [i_18] = ((!(((-(arr_60 [i_18] [i_18]))))));
        var_48 = (min(var_48, var_16));
    }
    var_49 -= (!1);
    var_50 = (min(var_50, -268173299));
    #pragma endscop
}
