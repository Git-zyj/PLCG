/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(2648154708, (1900225700 + var_1)))) ? ((var_8 ? var_4 : ((268435392 & (-127 - 1))))) : ((min(1, (((-127 - 1) || var_5)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_14 = (max(var_14, (((var_6 | (arr_0 [i_0 - 2] [i_0 - 2]))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                arr_8 [i_0 - 1] = ((1527997652 >= (arr_0 [i_0] [i_0 - 2])));
                var_15 -= (32767 ? var_3 : var_5);
            }
            var_16 += (var_12 != var_4);
            var_17 = var_11;
        }
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            arr_12 [i_3] [i_3] [i_3] = (((arr_1 [i_3 + 1]) && var_10));
            var_18 = (((arr_3 [i_0 - 2] [i_0 + 2]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 2])));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_19 = var_12;
                            arr_21 [i_0] [i_3] [i_4] [i_3] [i_3] [i_6] [i_3] = (((((arr_5 [i_0] [i_0] [i_4]) && (arr_11 [i_6]))) ? (!23017) : (((arr_9 [i_0] [i_3 + 1] [i_4]) * 1563610800))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_20 = ((((var_11 ? var_2 : var_2)) / var_7));
                            arr_26 [i_3] [i_3] [i_7] = ((var_3 ? ((((arr_20 [i_0 - 1] [7] [i_4] [i_4] [i_4] [i_0 - 1] [i_8]) || (-127 - 1)))) : (arr_2 [i_0 - 1] [i_3])));
                            var_21 *= ((57 ? (-127 - 1) : 60));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                var_22 = ((var_10 ? 63581 : var_6));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_23 = var_7;
                            arr_37 [i_0] [i_3] [i_3] [i_3] [i_10 + 2] [i_11] [i_11] = var_4;
                            arr_38 [i_0] [i_3] [2] [i_10] [i_11] [1] [i_3] = ((var_9 >= var_8) ^ -4464562592600681324);
                            var_24 = var_3;
                        }
                    }
                }
                var_25 -= (((((var_0 ? var_12 : var_8))) ? var_2 : var_10));
                var_26 += (((arr_20 [i_9 + 1] [i_9] [i_9 + 1] [i_9] [i_9 + 1] [i_9] [i_9 + 1]) < var_1));
            }
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                var_27 = (max(var_27, (((!(1 + 4294967295))))));
                var_28 = ((var_9 < (-1527997652 & -1459529470)));
                arr_41 [1] [i_3 - 1] [1] [i_3] = var_8;
                var_29 = (max(var_29, var_5));
            }
            for (int i_13 = 2; i_13 < 15;i_13 += 1)
            {
                arr_44 [i_3] [i_3] = (var_7 < var_8);

                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    var_30 *= -var_7;
                    var_31 = var_7;

                    for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
                    {
                        var_32 += (-57 > -26543);
                        var_33 += (((arr_24 [i_0] [i_3 - 1] [i_15] [i_0] [i_14] [i_15]) | -1));
                    }
                    for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
                    {
                        arr_53 [i_3] [i_3 + 1] [i_16] = (((arr_50 [i_0 - 2] [i_3 + 1] [i_13] [i_13 - 1] [i_3] [i_13 - 1] [i_13]) & var_4));
                        var_34 = 1;
                        var_35 = (min(var_35, var_4));
                        var_36 += ((var_6 ? 7541 : var_5));
                    }
                }
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    var_37 += (((arr_29 [i_0] [i_0]) - var_9));
                    var_38 += (((arr_47 [1] [i_3 + 1] [i_13] [1] [i_0]) - var_8));
                    var_39 = (max(var_39, (!var_6)));
                }
                var_40 += -4104500461;
            }
            var_41 = (max(var_41, (((1546123099668270373 ? 1125540011 : var_9)))));
        }
        for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
        {
            var_42 = (1 | 114);
            var_43 = (17770 ? -525987925 : var_7);
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        var_44 = ((-((var_1 ? (arr_54 [13] [1]) : 0))));

                        for (int i_21 = 0; i_21 < 16;i_21 += 1)
                        {
                            var_45 = (((arr_6 [i_0] [1] [i_19] [1]) ? (-9223372036854775807 - 1) : 1));
                            var_46 = (max(var_46, (arr_54 [i_0 + 1] [i_21])));
                        }
                        for (int i_22 = 0; i_22 < 16;i_22 += 1)
                        {
                            arr_73 [i_0] [i_18] [i_20] [i_20] [i_20] = (var_4 == var_2);
                            var_47 = (max(var_47, var_5));
                            var_48 = (((-8 / 3455903706741988103) % (63581 - var_0)));
                            var_49 = (((238 < var_7) * (((arr_43 [i_0 - 2] [i_18] [i_19]) ? var_11 : 12660))));
                            arr_74 [i_0] [i_20] [i_0 + 2] [i_0] = var_7;
                        }
                        for (int i_23 = 2; i_23 < 15;i_23 += 1)
                        {
                            arr_77 [i_20] [i_20] [i_20] [i_19] [i_20] [i_20] [i_20] = (1 >= var_10);
                            var_50 = (var_2 - var_7);
                            var_51 = var_9;
                            var_52 = ((arr_13 [i_0 + 2] [i_0 - 2] [i_0 - 2]) ? ((((arr_69 [i_20] [i_20] [i_20] [i_20]) > var_7))) : var_1);
                        }
                        arr_78 [i_20] = (-1527997652 & var_8);

                        for (int i_24 = 0; i_24 < 16;i_24 += 1)
                        {
                            var_53 = (max(var_53, 1077004791));
                            arr_82 [i_0] [i_18] [i_20] [i_18] [i_0] = -1077004792;
                            var_54 = var_3;
                            arr_83 [i_0] [i_20] [9] [i_20] [i_24] = var_2;
                        }
                        arr_84 [i_20] [i_20] [i_20] [i_0] = 26548;
                    }
                }
            }
            var_55 = ((7 - (var_2 != var_0)));
            var_56 *= (((arr_50 [i_0] [i_0] [i_0 - 2] [14] [i_0] [i_0 - 1] [i_18]) / (var_5 & var_10)));
        }
        for (int i_25 = 0; i_25 < 16;i_25 += 1) /* same iter space */
        {
            arr_87 [i_0] = (0 ^ var_11);

            for (int i_26 = 0; i_26 < 16;i_26 += 1)
            {
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 16;i_28 += 1)
                    {
                        {
                            arr_96 [i_0 + 1] [i_25] [i_25] [i_26] [i_27] [7] = ((-1 <= (arr_9 [i_27] [i_25] [i_25])));
                            arr_97 [i_0] [1] [i_26] [1] [i_28] = var_1;
                            arr_98 [0] [i_26] [i_26] [i_25] [i_0 + 1] = (-1 + 1);
                            var_57 = var_8;
                        }
                    }
                }
                arr_99 [10] [i_25] = (var_10 < var_6);
            }
            for (int i_29 = 0; i_29 < 16;i_29 += 1)
            {
                var_58 -= ((var_8 ? ((var_6 ? var_8 : 8191)) : var_9));
                var_59 = (max(var_59, (((var_11 != (0 < -11404))))));
                var_60 = (min(var_60, ((((var_3 & var_5) < ((var_1 ? (arr_15 [i_29] [i_0]) : var_0)))))));
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 16;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 16;i_31 += 1)
                    {
                        {
                            var_61 = (((arr_57 [i_30] [i_0 + 2] [i_0] [i_30]) >> 0));
                            var_62 -= (((var_2 | var_3) ? var_4 : (65535 / 43222)));
                        }
                    }
                }
            }
        }
    }
    var_63 = var_4;
    #pragma endscop
}
