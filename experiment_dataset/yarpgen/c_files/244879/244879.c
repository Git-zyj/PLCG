/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = ((~((-(arr_0 [i_0])))));
            arr_7 [i_0] = ((((((!(arr_4 [i_0] [i_1]))))) ? ((min(((((arr_2 [i_0 + 1]) < (arr_1 [i_0])))), var_16))) : -1));
            arr_8 [i_0] [i_0] = 1;
        }
        arr_9 [i_0] [i_0] = ((arr_0 [i_0]) ? (--25) : ((((((arr_3 [i_0] [i_0]) != (arr_5 [i_0]))) && (((arr_2 [10]) < -1))))));
        arr_10 [i_0] = (arr_0 [i_0]);
        arr_11 [i_0] = (min(-var_18, (~65535)));
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_19 = max(((!(arr_16 [i_2 - 1] [i_2 - 1] [i_3 + 2]))), ((!(((0 ? var_15 : var_0))))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_24 [i_2 - 1] [i_3] [15] [i_5] = (((((~((min((arr_19 [i_3] [i_4 - 1]), 255)))))) ? (min((arr_16 [i_3] [i_3 + 1] [i_4 + 1]), (arr_16 [i_2 - 2] [i_3 - 1] [i_4 - 1]))) : (-21 % 44)));
                        arr_25 [i_2] [i_5] [i_4 + 1] [i_5] = (((((((arr_12 [i_2]) * 0)) ^ ((var_3 + (arr_12 [i_4]))))) + (min((arr_16 [i_4 + 1] [i_3] [i_4]), (arr_20 [i_4 + 1] [i_3 + 1] [i_4] [i_2])))));
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
        {
            arr_28 [0] [i_2 - 1] [5] = (min(((min(-7298, 1))), var_18));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            arr_36 [i_2] [1] [i_8] [i_2 - 3] [23] = var_15;
                            arr_37 [i_2] [9] [i_8] [i_2] [22] [i_8] = var_6;
                            arr_38 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_2 - 2] = (max(var_10, (min((arr_30 [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2 - 3]), (arr_30 [i_2 + 1] [i_6 + 2] [i_7] [i_8])))));
                            var_20 = (((~33) ? ((((arr_18 [i_6] [i_7] [i_9]) ? var_14 : (arr_20 [i_9] [i_8] [2] [i_2])))) : ((~(arr_33 [i_2 + 1] [i_6 + 2] [i_6 - 1] [i_8])))));
                            arr_39 [22] [9] [i_2 + 1] [16] [i_9] [i_8] = var_0;
                        }
                    }
                }
            }
            var_21 = (-(arr_16 [i_6] [21] [21]));
            arr_40 [23] [23] [i_6] = var_13;
        }
        for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
        {
            arr_43 [i_10] [i_10] = (((arr_31 [i_10] [i_10 + 2] [i_10] [i_10 - 1]) ? -1 : (arr_31 [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1])));
            arr_44 [i_10] = (((((~(~var_0)))) ? (arr_16 [i_2 - 2] [i_2 - 2] [i_2 - 2]) : (min(14905875309928991233, 31191))));
            var_22 = (max(-6, 20884));
            var_23 = arr_41 [i_2 - 3] [i_10] [i_2 - 3];
        }
        arr_45 [i_2] = (((-var_12 & (arr_30 [i_2] [i_2] [i_2 - 1] [i_2]))));
        arr_46 [i_2 - 3] = ((3 < ((min((arr_12 [i_2 - 1]), var_16)))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        arr_50 [i_11] [1] = (((arr_22 [i_11] [i_11] [i_11] [i_11] [i_11]) ? (arr_49 [i_11] [i_11]) : (arr_22 [i_11] [i_11] [i_11] [i_11] [i_11])));
        arr_51 [i_11] = (((((-(arr_35 [i_11] [i_11] [i_11])))) ? ((1715499374 / (arr_23 [i_11] [14] [i_11] [14] [i_11] [i_11]))) : (arr_14 [i_11] [i_11])));
        arr_52 [i_11] [i_11] = (~(arr_19 [i_11] [i_11]));
    }
    for (int i_12 = 1; i_12 < 15;i_12 += 1)
    {
        var_24 = ((~((13 ? (arr_35 [i_12 + 1] [i_12] [11]) : (arr_35 [i_12 - 1] [4] [19])))));

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_57 [9] = var_3;
            var_25 = (arr_17 [0] [i_13]);
        }
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            arr_60 [i_14] [i_12] = (~((((arr_14 [i_12] [i_12 + 1]) > var_9))));
            var_26 = (((!((!(arr_32 [i_12] [i_14] [i_12] [i_14] [18]))))) ? (((((((arr_19 [i_12 + 1] [i_14]) & var_15))) != (((arr_26 [i_12] [8] [22]) ? (arr_56 [i_12] [i_14]) : (arr_21 [i_12] [i_14])))))) : (arr_30 [i_14] [1] [1] [i_12]));
            arr_61 [i_14] [i_12 - 1] [i_12] = ((-((((((arr_22 [i_12] [i_12] [i_12] [i_12] [i_14]) ? var_18 : var_4))) ? (min((arr_54 [i_12] [0]), (arr_56 [i_12] [i_12]))) : (!var_18)))));
        }
    }
    var_27 = (var_4 > (15 + var_15));
    #pragma endscop
}
