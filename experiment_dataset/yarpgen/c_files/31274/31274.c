/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (min(var_17, 131064));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_18 = ((!(((((min(1, var_16))) ? 18446744073709420538 : (var_12 | 20105))))));

                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        var_19 *= (((arr_8 [i_3] [i_3 + 2] [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_2]) ? (max((arr_8 [i_3] [i_3 - 2] [i_3] [i_3 + 2] [i_3 - 1] [i_2]), (arr_8 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 3] [i_2]))) : (arr_8 [i_3] [i_3 - 2] [i_3 - 2] [i_3 + 2] [i_3 + 1] [i_2])));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_20 = 4096;
                            var_21 = (max(var_21, (((var_9 ^ ((var_1 & (arr_2 [i_4]))))))));
                        }
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            var_22 = 241;
                            var_23 = (((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) - 18446744073709420538)))) ? ((((arr_11 [i_1] [i_1] [i_2] [i_2] [i_5]) ? (arr_7 [i_1] [i_1] [i_1] [i_1]) : (!-20103)))) : (arr_7 [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_24 |= (min((min(131078, (max(131064, (arr_0 [i_2] [i_2]))))), (arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] [i_2])));
                    }
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        var_25 = ((162 >= (arr_15 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0])));
                        arr_16 [i_0] [i_0] [i_0] [i_1] = ((var_15 > (((arr_6 [i_6] [i_2] [i_1] [i_0]) ^ (((arr_0 [i_2] [i_1]) ^ var_2))))));
                        var_26 = 65534;
                        var_27 = (min(var_27, ((((((~(arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (arr_2 [i_2]) : ((((max(var_5, var_1)) != 5804))))))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_28 &= (((arr_1 [i_6 + 1]) < (arr_1 [i_6 + 1])));
                            var_29 = 96;
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_30 = ((((min((arr_15 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_8] [i_6 - 1]), 10438521287636178944))) ? var_10 : ((((min(var_9, var_14))) ? (arr_11 [i_8] [i_6] [i_2] [i_0] [i_0]) : (min(var_9, (arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                            var_31 = ((((var_13 && (arr_14 [i_6 - 1] [i_0] [i_1] [i_0] [i_2]))) ? ((((13365 ? var_10 : 12453)) + var_6)) : ((((min(0, var_3))) * (arr_2 [i_1])))));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            var_32 = 244;
                            var_33 = (((((~(arr_7 [i_0] [i_1] [i_2] [i_6 - 1]))) | var_12)));
                            var_34 *= ((((~(arr_3 [i_6 + 1] [i_6 - 1] [i_2]))) * (((arr_3 [i_6 - 1] [i_6 + 1] [i_2]) ? (arr_3 [i_6 - 1] [i_6 + 1] [i_2]) : var_9))));
                            var_35 = (min(var_35, (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_36 = (min(var_36, (((!((max(var_0, (arr_1 [i_6 + 1])))))))));
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            var_37 = (max(192, (~var_14)));
                            arr_27 [i_10] [i_6 + 1] [i_1] [i_1] [i_0] [i_0] = (arr_13 [i_0] [i_1] [i_2]);
                            var_38 &= (((~var_4) ? -82 : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_39 += 14336;
                    var_40 = (((arr_9 [i_0] [i_0] [i_0] [i_0]) + 129));

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_41 = (((arr_1 [i_0]) && (((max(var_8, (arr_25 [i_1])))))));
                        var_42 ^= (((arr_9 [i_0] [i_1] [i_0] [i_0]) / -9759));
                        var_43 += ((min(((((arr_12 [i_11] [i_11] [i_11] [i_11] [1]) != var_6))), -var_10)));
                        var_44 = var_15;
                        var_45 = (((20110 | (arr_14 [i_0] [i_0] [i_1] [i_0] [i_0]))));
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        arr_36 [i_0] [i_0] [i_1] [i_0] = (max((arr_9 [i_0] [i_0] [i_11] [i_13]), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])));
                        arr_37 [i_1] [i_1] [i_13] [i_13] [i_1] = 16384;
                        var_46 = (((((var_2 << var_13) * (-7199501300402784870 < 250))) + var_4));
                        arr_38 [i_0] [i_1] [i_1] = ((var_3 ? (arr_21 [i_0] [i_0] [i_0] [i_13] [i_1]) : ((~(((10231 >= (arr_28 [i_11] [i_11] [i_1] [i_0]))))))));
                        var_47 = (((((((0 - (arr_13 [i_0] [i_0] [i_0])))) ? (((arr_8 [i_1] [i_0] [i_0] [i_0] [i_0] [i_1]) ? var_11 : var_7)) : (arr_20 [i_1] [i_13] [i_1] [i_1] [i_0]))) != 248));
                    }
                    arr_39 [i_1] = 45710;

                    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                    {
                        arr_42 [i_1] [i_1] [i_1] [i_1] [i_0] = ((var_16 ? (max(1081, 3603816252935969352)) : ((((arr_20 [i_0] [i_1] [i_1] [i_0] [i_0]) + var_1)))));
                        var_48 = 1;
                        var_49 |= (~16);
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                    {
                        var_50 = ((-(arr_31 [i_0] [i_0] [i_15] [i_15] [i_15] [i_15])));

                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_51 = (0 < (8796093022176 * var_14));
                            var_52 *= -3603816252935969352;
                            var_53 = 77;
                            var_54 = (((((var_13 >> (247 - 239)))) + ((var_2 ^ (arr_8 [i_0] [i_1] [i_11] [i_0] [i_1] [i_1])))));
                            var_55 = (((arr_1 [i_0]) ? (arr_2 [i_1]) : var_15));
                        }
                        var_56 = 1984;
                        var_57 = (((!(arr_13 [i_1] [i_1] [i_15]))));
                    }
                }
            }
        }
    }
    var_58 = var_5;
    var_59 = var_8;
    var_60 = 1;
    #pragma endscop
}
