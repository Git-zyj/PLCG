/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_10 = ((((~(arr_0 [i_0] [i_0 - 1])))) ? (arr_2 [i_0]) : 112);
        var_11 = (((+((var_4 ? (arr_1 [i_0] [i_0]) : var_5)))));
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    {
                        var_12 = var_2;
                        var_13 = (arr_12 [i_1]);
                    }
                }
            }
            var_14 = var_6;
            var_15 = (max(var_15, (35182224605184 | 24148)));
            var_16 = var_4;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_17 = ((var_7 > (arr_13 [i_1] [i_1] [i_1] [i_5])));
            var_18 *= ((!(arr_0 [4] [i_5])));
            var_19 ^= (-1272416779 + 1388108993);
            var_20 = var_1;
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            var_21 = (((var_8 & (arr_1 [i_1] [i_1]))) * (((((1388109003 ? 1819364537 : -1388108993))))));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_22 += var_7;
                var_23 = (-1388108993 - 1);
            }

            /* vectorizable */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {

                for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
                {
                    var_24 = (max(var_24, var_1));
                    var_25 |= var_1;
                }
                for (int i_10 = 3; i_10 < 9;i_10 += 1) /* same iter space */
                {
                    var_26 = var_6;

                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_27 = (min(var_27, (arr_4 [i_10 + 3] [i_6 + 1])));
                        var_28 = (arr_31 [i_10 - 1] [i_10] [i_10 + 1] [i_10]);
                    }
                }
                for (int i_12 = 3; i_12 < 9;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_29 = (max(var_29, var_1));
                        var_30 &= -1;
                    }
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        var_31 = ((arr_23 [i_6 + 1] [i_12 - 2] [i_12 - 2]) - var_5);
                        var_32 |= (arr_34 [i_1] [i_8] [8]);
                        var_33 = (max(var_33, (((var_3 ? var_6 : var_1)))));
                    }
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        var_34 = (((arr_42 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_12 - 1] [i_12 - 3]) >> (arr_17 [i_12 - 1] [i_6] [i_8])));
                        var_35 = 2072866977;
                    }
                    var_36 = (max(var_36, var_3));
                    var_37 = var_3;
                    var_38 = (max(var_38, var_6));
                }
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    var_39 = (min(var_39, (1423291188050219590 | var_4)));
                    var_40 = var_8;
                }
                var_41 = (~155);
                var_42 = (-1240055788 != -1101174911);
                var_43 |= (((arr_35 [i_8] [i_8] [i_8] [i_6 - 1] [i_8]) / (arr_35 [i_8] [i_8] [i_8] [i_6 + 1] [i_8])));
                var_44 = (max(var_44, -22432));
            }
            for (int i_17 = 3; i_17 < 10;i_17 += 1)
            {
                var_45 -= (max(((!(arr_5 [10] [10]))), (-1388108985 || 1)));
                var_46 = var_5;
                var_47 = (arr_6 [i_1]);
                var_48 = var_1;
            }
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_49 &= (((arr_9 [i_1] [i_18] [i_1] [i_18]) ^ var_7));
            var_50 = (((((var_3 - (arr_43 [i_18] [i_18] [i_1] [i_18] [i_18])))) ? (arr_4 [i_18] [i_1]) : (arr_20 [i_18])));

            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                var_51 = (((var_3 <= var_1) - var_5));
                var_52 = (~var_5);
                var_53 &= ((var_1 >> (((var_4 - var_6) - 2026722409959898432))));
            }
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                var_54 = var_1;
                var_55 = -var_6;
                var_56 = (var_9 & var_2);
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 12;i_22 += 1)
                    {
                        {
                            var_57 = (((arr_27 [i_1] [i_1] [i_1]) - var_6));
                            var_58 = (198 | -1423291188050219590);
                            var_59 &= (arr_15 [i_22] [i_18] [i_22]);
                        }
                    }
                }
                var_60 = var_3;
            }
        }
        var_61 = ((1388108984 ? var_8 : ((((((arr_57 [0] [i_1] [i_1] [i_1] [i_1]) + (arr_24 [i_1] [i_1])))) ? (arr_57 [i_1] [3] [i_1] [i_1] [11]) : var_6))));
        var_62 = 1;
    }
    for (int i_23 = 0; i_23 < 16;i_23 += 1)
    {
        var_63 = (max(var_63, (max((((!((max(var_9, var_6)))))), ((((min(var_5, var_0))) ? (var_3 / var_2) : var_2))))));
        var_64 = var_6;
        var_65 = ((1240055788 ? var_8 : var_0));
        var_66 = var_0;
    }
    for (int i_24 = 0; i_24 < 12;i_24 += 1)
    {
        var_67 = (max(var_67, var_2));
        var_68 ^= ((-(1 + 1)));
        var_69 = ((min(var_4, var_1)));
        var_70 = ((((~(arr_19 [i_24]))) & var_0));
    }

    for (int i_25 = 0; i_25 < 25;i_25 += 1)
    {
        var_71 = var_3;

        for (int i_26 = 1; i_26 < 22;i_26 += 1)
        {
            var_72 = var_7;
            var_73 = (((((var_9 >> (var_0 - 18238)))) ? (((var_3 ^ var_7) / var_1)) : (arr_68 [21])));
            var_74 &= ((var_8 ? (!var_4) : ((((!-1) || var_7)))));
        }
    }
    var_75 = (max(var_75, ((((-(var_4 != var_2)))))));
    #pragma endscop
}
