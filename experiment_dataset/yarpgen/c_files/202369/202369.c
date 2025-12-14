/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (!var_9);

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_1] = ((10385 ? 117 : -756648226));

            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    var_11 = (((((((arr_9 [i_0] [i_1] [i_3]) ? (arr_8 [i_1] [i_2] [i_1]) : 126))) ? ((-756648209 ? var_3 : -120)) : (min((arr_0 [i_2]), (arr_12 [i_0] [i_0] [i_0]))))));
                    var_12 |= ((756648221 ? ((((var_5 ? var_1 : var_7)))) : 0));
                    arr_13 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3 - 1] = var_3;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_13 = (max(var_13, var_9));
                        var_14 = (min(var_14, (((!(var_4 << 1))))));
                        arr_19 [i_1] = var_1;
                    }
                    var_15 = (((1971016611 != 122) < (var_0 != var_3)));
                    arr_20 [i_0] [i_1] [i_2] [i_4] = (((-9223372036854775807 - 1) * (var_2 < 0)));
                }
                arr_21 [i_1] [i_1] [12] = (-756648248 ^ -103);
            }
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                arr_26 [i_0] [i_1] [i_6] = (((max(((var_4 ? var_0 : 2213705562289824185)), -5453756)) ^ (((((((var_6 + 2147483647) << (var_3 - 1616635407)))) ? ((3029 ? -1746147318 : 209)) : ((63 & (arr_12 [23] [i_1 + 2] [i_6]))))))));
                arr_27 [i_1] = (min(((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / var_9))), (((arr_23 [i_1] [i_1] [i_1]) * 12056715141385546734))));
            }
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                arr_31 [i_1] [i_1] [i_7] = arr_15 [i_0] [i_0] [i_1] [i_0] [i_1] [6];
                var_16 = (((756648203 | 1) ^ (-4937 == -120)));
                var_17 |= (((((((min((arr_12 [i_0] [i_1] [i_7]), (arr_6 [14] [10])))) ? ((var_0 ? var_4 : (arr_22 [i_0] [i_1] [i_0]))) : (!var_1)))) ? 1 : var_0));
            }
        }
        arr_32 [i_0] = (!var_7);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 8;i_8 += 1)
    {
        var_18 = var_7;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_19 = (-(((arr_10 [i_8] [i_8] [i_8] [i_10] [i_8] [i_8]) ? var_8 : (arr_3 [i_10]))));
                    var_20 = var_4;
                }
            }
        }
        var_21 = (19 == (arr_0 [i_8]));
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {

        /* vectorizable */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            arr_47 [i_11] [i_11] = (((((var_1 ? 1 : var_0))) ? var_0 : (((-2147483647 - 1) ? 1 : -1114754475))));

            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                var_22 += ((var_2 || (arr_9 [i_11] [i_13 + 1] [i_13 - 1])));
                arr_51 [i_11] [i_12] [i_12] [i_12] = var_7;
            }
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                var_23 = 21997;
                var_24 = ((arr_49 [i_11] [i_11] [i_12] [i_14]) ? (arr_49 [i_11] [i_12] [i_12] [i_14]) : (arr_24 [i_14] [i_12] [i_11]));
                arr_54 [i_11] [i_11] [i_11] = (((((var_1 ? (arr_25 [i_11] [i_12] [i_14]) : var_7))) ? var_4 : ((((arr_17 [i_14] [i_12] [i_12] [i_11]) && -679942410)))));
            }
            arr_55 [i_11] [i_12] [i_12] = (arr_44 [i_11]);
            var_25 = var_7;
            arr_56 [i_11] = ((-32757 ? (65061 > var_5) : var_0));
        }
        /* vectorizable */
        for (int i_15 = 3; i_15 < 11;i_15 += 1)
        {
            var_26 = -94;
            var_27 += (40792 && var_0);
            var_28 += (((arr_42 [i_11]) ? var_8 : (((arr_58 [i_15]) * var_6))));
            var_29 = ((((var_7 & (arr_23 [i_11] [i_15] [i_11])))) ? var_2 : -2147483629);
        }
        arr_59 [i_11] = (-29 >= var_1);
        arr_60 [i_11] [i_11] = 1;
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 14;i_17 += 1)
            {
                {
                    var_30 = (((arr_61 [i_16]) ? (((-2147483638 || var_7) & var_6)) : var_6));
                    var_31 = (((arr_1 [i_11]) ? (min((-112 & var_4), var_8)) : var_8));
                    var_32 = (~183);
                    var_33 = var_1;

                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        var_34 = ((var_9 ? var_3 : ((var_1 ? var_5 : var_4))));
                        var_35 = (min(var_35, (-2147483647 - 1)));
                        arr_69 [i_11] [i_11] [i_11] [3] = ((1611868620 << (0 / var_1)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 14;i_19 += 1)
    {
        arr_72 [i_19] = var_0;
        arr_73 [i_19] |= (((arr_14 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]) / (arr_8 [i_19] [i_19] [i_19])));
    }
    var_36 -= (((-32587 + 1593588478012551969) && ((min(var_3, ((min(32, var_0))))))));
    #pragma endscop
}
