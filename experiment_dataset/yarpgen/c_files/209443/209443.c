/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_4 ? var_9 : ((var_8 ? ((1 << (var_7 - 57818))) : ((max(var_1, var_10)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (!47);
        var_14 = (max(var_14, ((max((max((arr_2 [i_0]), (arr_0 [i_0] [i_0]))), -112)))));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] = (!var_10);

            /* vectorizable */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                arr_10 [12] &= ((-(~var_4)));
                arr_11 [i_0] [8] [i_2] = ((arr_0 [i_2] [1]) > (((arr_2 [i_0]) | (arr_8 [i_0] [i_0]))));
                arr_12 [i_1 + 3] [i_0] = (arr_4 [i_0] [i_0] [4]);
                arr_13 [i_1] [i_1] [i_0] = (arr_8 [i_1] [i_0]);
            }
            /* vectorizable */
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                var_15 = (arr_2 [i_0]);

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    arr_19 [i_0] [i_0] [i_0] [i_3] [0] = (arr_18 [i_1 - 1] [i_1 - 1] [i_1 + 3] [i_3] [i_3 - 1] [i_3]);
                    var_16 = (!var_6);

                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        var_17 = (arr_16 [i_0] [i_1 + 3] [1] [i_4]);
                        arr_23 [13] [i_0] [i_3] [i_0] [3] = 0;
                        arr_24 [i_1] [i_1] [i_1] [i_0] [i_5] [i_1 - 1] [i_5] = (((arr_15 [i_1 - 1] [i_3] [i_0]) ? -5165 : 213));
                        arr_25 [i_0] [16] [3] [i_4] [i_5] [i_0] = 102;
                    }
                }
                arr_26 [1] [i_0] [i_3] = 0;
                arr_27 [i_0] [i_1 - 1] [i_3] [i_1] = (arr_5 [i_0]);
                var_18 += ((arr_0 [0] [i_1]) ? (arr_16 [i_3 + 1] [i_1] [i_1 + 1] [i_1]) : var_6);
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    var_19 = (((arr_7 [i_0] [i_1 + 3] [i_7 - 1]) ? (arr_33 [i_0] [i_1 + 3] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7]) : (arr_33 [16] [i_1 + 3] [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1])));

                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        arr_38 [i_8] [i_6] [i_6] [i_6] [i_0] &= (((((arr_35 [i_0] [i_1] [i_6] [i_7 + 1]) + 2147483647)) >> (((arr_32 [1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8]) - 19133))));
                        var_20 = (min(var_20, (((!(arr_37 [i_6]))))));
                    }
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [8] = var_3;
                        arr_42 [i_0] [15] [i_0] [2] [i_0] = (((arr_20 [i_9] [i_9 + 3] [i_0] [i_0] [i_1 - 1] [i_1 - 1]) & -var_8));
                        var_21 += (arr_39 [i_0] [13] [i_6] [13] [13] [i_1] [i_0]);
                        arr_43 [i_9 + 4] [i_7 + 1] [i_0] [2] [i_0] = (((0 ? (arr_29 [i_0] [i_0] [2] [i_7 - 1]) : var_1)));
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_46 [i_10] [i_7 + 1] [i_0] [i_0] [i_0] [i_0] = (((arr_0 [i_0] [i_1]) == 1));
                        arr_47 [i_0] [i_0] [i_0] = (--1);
                        var_22 = (min(var_22, 139));
                        arr_48 [i_0] [i_0] [i_0] [i_0] = ((-(arr_34 [i_0] [i_0] [i_1 + 3] [i_6] [i_0] [i_10])));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_51 [i_0] [i_0] [i_7] = (arr_20 [i_1] [i_1 + 1] [i_0] [i_7] [i_11] [i_7 + 1]);
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_11] = (((arr_21 [i_0] [13] [i_0] [i_0] [i_1 + 3] [1]) ? (arr_45 [i_1 - 1] [i_0]) : (arr_15 [i_7 + 1] [i_7 + 1] [i_0])));
                        var_23 -= (((~32767) != var_5));
                    }
                }
                var_24 ^= (-(arr_4 [i_1 + 3] [i_1 + 3] [i_1 + 1]));

                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    var_25 = ((~(arr_37 [i_0])));
                    arr_55 [i_0] [i_0] [i_0] [i_6] [i_12] = (!1);

                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        arr_59 [i_0] [16] [9] [i_0] [i_0] [i_0] = ((!(arr_58 [i_0] [i_1] [i_1 + 1] [i_1] [i_13])));
                        var_26 = (min(var_26, (arr_22 [i_13] [16] [i_6])));
                        var_27 ^= (0 ? 1 : (-32767 - 1));
                        var_28 = -194368289;
                    }
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] = (~35);
                        var_29 = (-218681010850219080 >= var_9);
                    }
                }
                arr_65 [i_0] [i_0] [i_0] [i_0] = (((arr_57 [i_1 + 3] [i_6] [i_6] [7] [i_6]) ? (~1) : -22));
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
    {
        var_30 += ((-((((arr_39 [1] [18] [i_15] [i_15] [i_15] [9] [1]) >= var_6)))));
        var_31 -= (((((arr_5 [i_15]) > (arr_20 [i_15] [i_15] [14] [i_15] [14] [i_15]))) ? (arr_35 [i_15] [i_15] [i_15] [i_15]) : ((4192235271213987347 ? 0 : 4192235271213987347))));
        arr_68 [i_15] [i_15] = var_5;
        var_32 = (arr_60 [16] [12]);
        arr_69 [i_15] [i_15] = var_10;
    }
    var_33 = -32767;
    #pragma endscop
}
