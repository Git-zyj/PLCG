/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_5 - var_4) && -var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_6 [i_2] [i_2] [i_2] = ((((var_10 ? (arr_0 [i_2]) : var_8)) - var_1));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_0] = (-13070 + -13070);
                        var_14 = (max(var_14, -13316));
                    }
                }
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    var_15 = (max(var_15, (min(var_7, -22123))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_16 *= var_0;
                                var_17 |= ((var_8 ? (((arr_10 [i_5 - 1] [i_1 - 3] [i_1] [i_5]) ? (arr_1 [i_0]) : (var_1 && var_10))) : ((((((arr_3 [i_0]) - (arr_10 [i_0] [i_1] [i_4 - 2] [i_5]))) > var_12)))));
                                var_18 &= ((((var_4 ? (var_1 == -13309) : -13316)) / -12419));
                            }
                        }
                    }
                    var_19 &= min(var_5, ((((arr_8 [0] [11] [12]) | var_12))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_24 [i_7] [i_7] [6] [i_7] [i_7] &= (~-20426);
                                var_20 &= (arr_10 [i_8 + 2] [i_8 - 3] [i_8 - 1] [i_8 - 1]);
                            }
                        }
                    }
                }
                var_21 ^= (((!var_0) * (((13050 || -31614) | ((var_12 ? 96 : 17856))))));
            }
        }
    }
    var_22 = var_12;

    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
    {
        var_23 &= (var_0 && var_4);
        var_24 = (min(var_24, var_10));
        var_25 = (min(var_25, (2064 ^ -16214)));
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
        {
            var_26 += (((arr_26 [i_10]) - (((arr_25 [i_10] [i_10]) ^ -32756))));
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 21;i_13 += 1)
                {
                    {
                        var_27 = (max(var_27, (arr_29 [i_11] [i_11])));
                        var_28 = (((arr_33 [i_12]) ? -var_5 : -3306));
                        var_29 = ((var_5 / (arr_27 [i_10] [i_10])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    {
                        var_30 -= (arr_38 [i_14 - 2] [i_14 + 1] [i_14 + 1]);
                        arr_44 [i_10] [i_10] [i_10] [i_10] &= ((var_10 ? ((var_3 >> (var_12 + 17888))) : var_4));
                        var_31 *= var_11;
                        var_32 -= arr_33 [i_15];
                    }
                }
            }
            var_33 |= (((arr_25 [i_11] [i_11]) > var_6));
            var_34 = (max(var_34, (((((~(arr_37 [i_10] [i_10] [4]))) == (var_0 ^ var_2))))));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 22;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    {
                        var_35 = (((~var_11) ? ((~(arr_48 [i_10] [19] [i_10]))) : ((var_4 ? var_10 : var_1))));
                        var_36 = (((arr_28 [i_16] [i_16]) ^ var_3));

                        for (int i_19 = 2; i_19 < 21;i_19 += 1)
                        {
                            var_37 += ((-((~(arr_25 [10] [i_16])))));
                            arr_55 [i_10] [i_10] [i_10] [i_17] [i_10] [i_10] = (((((var_2 != (arr_39 [i_18] [21] [i_18] [i_18])))) | 32761));
                        }
                        for (int i_20 = 0; i_20 < 23;i_20 += 1)
                        {
                            arr_59 [i_10] [i_17] [i_10] [i_10] [i_10] = ((var_12 ? (arr_32 [i_10] [i_10] [i_17] [i_18]) : (arr_32 [i_16] [i_16] [i_17] [i_16])));
                            var_38 = (var_7 ^ var_0);
                        }
                    }
                }
            }
            arr_60 [i_10] [i_10] &= ((var_2 ? (arr_52 [i_10] [i_16] [i_10] [i_10]) : (96 != var_7)));
        }
        var_39 = ((-(((((var_5 > (arr_52 [i_10] [i_10] [i_10] [i_10])))) ^ var_8))));
        var_40 -= (((((var_0 ? (arr_34 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) : (arr_34 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])))) || ((((var_4 + var_9) ? var_2 : (((!(arr_56 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [18])))))))));
    }
    for (int i_21 = 0; i_21 < 23;i_21 += 1) /* same iter space */
    {
        var_41 &= ((var_8 & (arr_47 [i_21] [i_21] [i_21])));

        /* vectorizable */
        for (int i_22 = 2; i_22 < 22;i_22 += 1)
        {
            /* LoopNest 2 */
            for (int i_23 = 2; i_23 < 22;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 23;i_24 += 1)
                {
                    {
                        var_42 = (((arr_66 [i_22 + 1] [i_22 + 1]) >= (arr_50 [i_22 + 1] [i_21] [i_22 + 1] [i_22 - 2] [i_22 - 1])));
                        var_43 = -15187;
                    }
                }
            }

            for (int i_25 = 4; i_25 < 21;i_25 += 1)
            {
                var_44 *= ((~(arr_67 [i_25 + 1] [i_22 + 1])));
                arr_72 [i_21] = (((arr_66 [i_22] [i_22 - 1]) >= var_3));
                arr_73 [i_21] [i_21] [i_21] = (var_10 && var_8);
            }
            for (int i_26 = 0; i_26 < 23;i_26 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 23;i_27 += 1)
                {
                    for (int i_28 = 1; i_28 < 22;i_28 += 1)
                    {
                        {
                            arr_82 [14] [i_22 - 1] [i_21] [i_21] [i_28] &= arr_67 [i_22 - 2] [i_22 - 2];
                            var_45 = (((arr_39 [i_28 + 1] [i_27] [i_26] [i_22 - 1]) ? ((13070 ? 32759 : 3977)) : ((22497 ? 13311 : 30197))));
                            var_46 = var_7;
                            arr_83 [i_28] [i_26] [i_26] [i_28] = ((((((arr_26 [i_21]) + var_7))) && (((var_1 ? var_2 : var_8)))));
                            var_47 = (~96);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_29 = 2; i_29 < 19;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 23;i_30 += 1)
                    {
                        {
                            var_48 = arr_36 [i_29];
                            var_49 |= ((!(((arr_47 [i_21] [i_21] [i_21]) || var_7))));
                            var_50 = (max(var_50, (arr_75 [i_21])));
                        }
                    }
                }
                var_51 &= ((((((arr_28 [i_26] [20]) / var_4))) && (arr_58 [i_22 + 1])));
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 23;i_31 += 1)
                {
                    for (int i_32 = 1; i_32 < 21;i_32 += 1)
                    {
                        {
                            var_52 = (max(var_52, ((((arr_84 [i_21] [i_21] [i_22] [i_22 - 2]) != (arr_84 [i_21] [i_22 + 1] [i_22] [i_22 + 1]))))));
                            var_53 ^= ((var_7 ? (arr_86 [i_22 - 2] [i_22] [i_22 - 2] [i_22 + 1]) : var_12));
                            var_54 = ((!(arr_79 [i_22] [i_22 - 2] [i_22 - 1] [i_22] [21] [i_22])));
                            var_55 -= ((var_4 / (arr_92 [i_32] [i_32 - 1] [i_32 + 1] [4] [i_32 - 1])));
                        }
                    }
                }
            }
            for (int i_33 = 0; i_33 < 23;i_33 += 1) /* same iter space */
            {
                arr_96 [i_33] [i_22 - 1] [i_33] = ((-(arr_66 [i_33] [i_33])));
                var_56 = (((((-30198 + 2147483647) >> (13069 - 13066))) > 3306));

                for (int i_34 = 0; i_34 < 23;i_34 += 1)
                {
                    var_57 = arr_51 [i_21] [i_21] [i_21];
                    var_58 *= (((var_12 > var_3) != 103));
                }
            }
        }
        for (int i_35 = 4; i_35 < 19;i_35 += 1)
        {

            /* vectorizable */
            for (int i_36 = 0; i_36 < 23;i_36 += 1)
            {
                var_59 = (~13065);
                var_60 = (max(var_60, ((((arr_40 [i_35 - 1] [i_35] [i_35 - 4] [i_35 + 1] [i_35 + 1] [i_35 + 1]) > (arr_50 [i_35] [i_21] [i_35 + 2] [i_21] [i_35 - 2]))))));
                var_61 = (min(var_61, (((+((((arr_26 [i_21]) != var_11))))))));
                arr_103 [i_21] [i_21] [i_36] = (((arr_45 [i_36]) == (arr_45 [i_21])));
            }
            arr_104 [i_21] [i_21] = -1251;
            arr_105 [i_21] [i_21] [i_21] |= (((arr_98 [i_35] [i_35 - 1] [i_35 - 4] [i_35 + 4]) ? (arr_56 [i_35] [i_21] [i_21] [i_35] [i_35 - 4] [i_35 - 4] [i_35]) : (arr_98 [i_35] [i_35 - 1] [i_35] [i_35 + 2])));
            var_62 = (max(var_62, (((var_1 | (-21609 + -2064))))));
        }
    }
    #pragma endscop
}
