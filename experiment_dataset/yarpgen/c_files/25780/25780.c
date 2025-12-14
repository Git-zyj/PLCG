/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((53528 ? -8 : 12003));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 = (arr_1 [i_0 - 1]);
        var_20 = (((arr_1 [i_0 - 1]) ? var_13 : (((((53528 ? (arr_0 [1]) : 53533))) ? 53528 : var_0))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 *= (max(12003, (((var_5 ? 1 : 12029)))));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_22 = (max(((((max(53509, var_3)) >= ((min(var_7, 72)))))), (((arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 2]) ? var_7 : var_12))));

            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_19 [7] [i_3 + 2] [i_4] [i_3 + 2] = (((arr_9 [i_2] [10] [i_4]) <= (!1)));
                            arr_20 [i_1] [i_2 - 1] [i_3 + 1] [i_4] [i_5] &= (((var_17 ^ var_0) || ((max(((29339 ? 0 : 37046)), (!var_16))))));
                        }
                    }
                }
                var_23 = ((!(((1795726055 ? 53532 : 10313583213886526734)))));
                var_24 = (arr_6 [i_3 + 3]);
            }
            arr_21 [i_1] [i_1] = (1718456205 + -26263);
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_25 += ((-12008 ? (1 / 31107) : 15));
            var_26 = (max((arr_9 [i_6] [i_1] [i_1]), (min((arr_9 [i_1] [i_1] [i_6]), (arr_9 [10] [i_1] [i_6])))));
            arr_24 [9] [i_6] = ((((((-var_11 == ((((arr_6 [i_1]) || 0))))))) | (((min((arr_11 [i_1] [i_1]), 34425)) | var_13))));
            var_27 = ((var_3 ? 1795726055 : (((var_3 != var_12) % ((var_1 ? 53514 : (arr_8 [13] [i_6] [i_6])))))));
            var_28 = ((-18124 ? var_3 : ((var_2 ? var_8 : -74))));
        }
        for (int i_7 = 4; i_7 < 14;i_7 += 1)
        {
            var_29 = (!46411);
            arr_28 [10] = 2027399210;
        }
    }

    for (int i_8 = 2; i_8 < 11;i_8 += 1)
    {
        arr_32 [i_8 + 3] = (((arr_17 [i_8 + 3] [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_8]) > (var_8 && 1)));

        /* vectorizable */
        for (int i_9 = 4; i_9 < 14;i_9 += 1)
        {
            arr_35 [i_8] [i_9] = var_1;
            var_30 &= (((arr_11 [i_9 - 4] [i_9 - 4]) - var_10));

            for (int i_10 = 2; i_10 < 13;i_10 += 1)
            {
                arr_40 [i_9] [i_9] [i_10] [i_9] = (arr_22 [i_9] [i_9] [i_9]);
                var_31 ^= (((var_5 ? -105 : 2267568085)));
            }
            for (int i_11 = 4; i_11 < 13;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                {
                    arr_45 [i_11] [10] [i_11] [i_9] [i_11] = (arr_13 [i_8 + 4] [i_9 - 4]);

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_49 [i_11] [i_9 - 2] [i_11] [13] [12] [i_13] = ((var_10 ? (arr_15 [i_9 - 2] [i_11 + 2]) : 10545));
                        var_32 = ((-1795726055 ? ((3268673274 ? var_9 : var_2)) : (~-19386)));
                        var_33 = (((3268673274 ? var_11 : 1)));
                    }
                }
                for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                {
                    var_34 = var_6;
                    arr_53 [i_11] = (53589 || 1416171327);
                }

                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {

                    for (int i_16 = 2; i_16 < 14;i_16 += 1)
                    {
                        var_35 *= ((-74 ? 1 : -74));
                        var_36 = (~-49);
                        arr_60 [i_15] [i_9 + 1] [i_11] [i_11] [i_16] [i_16] = ((-var_8 || (~var_15)));
                    }
                    for (int i_17 = 1; i_17 < 14;i_17 += 1) /* same iter space */
                    {
                        var_37 = ((3295 ? var_14 : -43));
                        var_38 = var_9;
                        var_39 = (max(var_39, -3295));
                    }
                    for (int i_18 = 1; i_18 < 14;i_18 += 1) /* same iter space */
                    {
                        var_40 = (((arr_26 [1]) ? (252 & var_13) : var_14));
                        var_41 = (max(var_41, ((((arr_42 [i_8] [i_9] [i_11 - 4] [i_9]) <= 1)))));
                        var_42 -= (arr_25 [i_8] [i_9 - 3]);
                    }
                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        var_43 = ((var_10 ? (((var_17 ? -26263 : var_8))) : -8188543866139933623));
                        var_44 = (((348257311 & (arr_9 [i_8 + 4] [i_9 - 3] [4]))));
                    }
                    var_45 = (max(var_45, (((var_8 <= (var_9 != var_15))))));
                    var_46 = (max(var_46, (((~(arr_14 [i_9 - 3] [i_9 - 3] [i_9 - 2] [i_9 - 4] [i_9 - 2] [i_9 + 1]))))));
                    arr_68 [i_11] [i_11] [i_9 - 2] [i_11] = ((0 ? (arr_36 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]) : (arr_8 [i_9 + 1] [i_11 - 4] [i_11 - 3])));
                }
                var_47 = 3284;
                var_48 = (arr_14 [i_11 - 1] [i_11 - 2] [i_9 - 2] [i_8 + 3] [i_8] [i_8]);
            }
        }
    }
    #pragma endscop
}
