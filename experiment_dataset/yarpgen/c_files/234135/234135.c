/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_10 = (max(var_10, (arr_1 [i_0 + 2])));
        arr_2 [i_0] [i_0] = ((-(arr_0 [i_0 + 1])));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_11 = (((~(!var_1))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_12 = ((((((arr_5 [i_1 + 1]) | (arr_5 [i_1 + 1])))) ? (min(var_5, (arr_5 [i_1 + 1]))) : (max(var_0, (arr_5 [i_1 - 1])))));
            arr_8 [7] [13] = ((+(((arr_3 [i_1]) ^ 2856))));
            var_13 = ((1 ? var_7 : (max((min(var_9, var_0)), (!var_1)))));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_11 [11] [i_1] [i_3] = ((~(((arr_6 [i_3] [i_1]) ? -9 : var_9))));

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_14 = ((((-(arr_9 [i_4] [i_1 - 2] [i_4])))) ? ((0 ? (arr_9 [1] [i_1 - 2] [i_4]) : (arr_9 [i_1] [i_1 + 1] [i_4]))) : (!var_5));
                arr_14 [i_1] [3] [i_4] [i_4] = ((!((((-7 + 2147483647) >> 25)))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_19 [i_1] [i_3] [i_5] = var_7;
                arr_20 [6] [i_3] = ((arr_12 [i_1 - 1]) * ((0 ? var_1 : var_4)));
                var_15 = (arr_4 [i_1 - 1] [i_1 - 2]);
            }
            var_16 -= (max((arr_13 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 - 1]), (arr_15 [i_3] [i_1 - 2] [13])));
            var_17 = ((((max((arr_16 [i_1 - 2]), (arr_16 [i_1 - 1])))) < ((((arr_16 [i_1 - 2]) <= var_2)))));
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_18 = (((arr_18 [i_1 - 1] [i_1 - 2] [i_1 + 1]) ? (max((arr_23 [i_1 + 1] [i_6] [i_6]), (arr_4 [i_1 - 2] [i_1 - 1]))) : (((min((arr_10 [i_1 - 1]), (arr_10 [i_1 + 1])))))));
            arr_24 [i_6] [i_6] = (((arr_9 [i_1 + 1] [i_6] [i_1 - 2]) * (((((arr_7 [14]) ^ (arr_10 [i_6])))))));
        }
        var_19 = (arr_17 [11] [i_1] [i_1]);
        var_20 = ((var_8 ? (var_1 > 0) : (arr_23 [9] [i_1] [i_1 - 2])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_29 [i_7] [i_7] [i_8] = var_5;
            arr_30 [13] [i_8] = (!100122878);

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_35 [i_7] [i_8] [i_9] = 42045;

                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    var_21 = (max(var_21, ((((var_0 / var_8) < (arr_27 [i_10] [i_9] [i_7]))))));

                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_22 = (!var_0);
                        var_23 = ((-(arr_41 [1])));
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                    {
                        arr_45 [3] [i_10] [i_9] [i_10] [i_12] = var_9;
                        arr_46 [4] [i_10] [3] [1] [i_8] [i_10] [i_7] = (arr_31 [i_7] [i_7] [i_9] [i_10]);
                    }
                    for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                    {
                        var_24 = (5 & -2041250983332513473);
                        var_25 = -1;
                        var_26 = (!2041250983332513473);
                        var_27 -= -24;
                        var_28 -= 1;
                    }
                    var_29 -= 6;
                    arr_50 [i_10] [i_8] [i_9] [0] = ((-(arr_44 [i_7] [i_7] [16] [i_7] [i_7] [7] [i_7])));
                }
                var_30 -= var_5;

                for (int i_14 = 1; i_14 < 16;i_14 += 1)
                {
                    var_31 = var_2;
                    var_32 -= (((arr_36 [i_9] [i_7] [i_9] [i_9]) == (((~(arr_40 [i_7] [i_7] [9] [3] [7] [i_7]))))));
                    arr_54 [i_7] [i_7] [i_7] [i_7] [i_14] [i_7] = (arr_26 [i_7] [i_8]);
                }
            }
        }

        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            var_33 = (max(var_33, ((((arr_57 [i_15] [i_7]) ? var_8 : var_5)))));
            arr_59 [i_7] [1] = var_0;
            arr_60 [i_7] [i_7] = (arr_37 [i_7] [i_7]);
        }
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            var_34 = ((var_9 < (((arr_49 [6] [i_16] [i_16] [15] [8]) ? (arr_39 [i_7] [i_7] [i_7] [15] [i_7]) : var_9))));
            var_35 = (min(var_35, ((((arr_38 [i_7]) ? ((((arr_40 [15] [4] [i_7] [1] [13] [i_16]) * (arr_58 [3] [i_16] [i_7])))) : (arr_43 [i_7] [i_7] [6] [i_7] [i_7] [2] [i_7]))))));
            var_36 = ((-(arr_41 [i_7])));
            var_37 = (max(var_37, (((-22 ? 2147483647 : -23)))));
        }
    }

    for (int i_17 = 0; i_17 < 25;i_17 += 1)
    {
        arr_67 [9] = ((~(((arr_65 [i_17]) - 3133633471))));

        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            arr_71 [i_18] [7] [24] = ((((min(var_0, (arr_65 [i_18])))) ? (((((arr_65 [5]) || (arr_68 [i_17] [i_18] [i_17]))))) : 9223372036854775784));
            var_38 = (min(var_38, ((((((arr_70 [i_18]) == (arr_70 [i_18]))) || ((min((arr_70 [i_17]), var_8))))))));
            var_39 = ((-(min((arr_65 [i_18]), (arr_65 [i_17])))));
            arr_72 [i_18] [i_18] = (((~53) ? (((((32761 ? var_4 : 6444351351265370437))) ? (arr_68 [i_17] [2] [i_17]) : var_1)) : ((((var_7 <= ((34 ? (arr_66 [17]) : var_3))))))));
        }
    }
    #pragma endscop
}
