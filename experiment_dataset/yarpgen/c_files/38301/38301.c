/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(!-var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] = ((((var_8 + (var_6 - var_6))) + ((var_11 - ((max(var_3, var_5)))))));
                            var_17 = (min(var_17, (((!(((var_12 - (var_11 ^ var_6)))))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, (var_12 && var_14)));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_19 |= var_12;
                            var_20 = -75;
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_21 = var_15;
                            var_22 = (min(var_22, ((((var_11 - var_7) ^ (var_3 < var_0))))));
                            arr_21 [i_4] [i_4] [i_1] [i_4] = var_3;
                            arr_22 [i_0] [i_4] = (((((-75 & -70) + 2147483647)) << (!var_6)));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_25 [i_0] [i_4] [i_4] = ((!var_2) >= (var_4 <= var_15));
                            var_23 = (((var_8 / var_14) == var_2));
                            var_24 = (max(var_24, ((((var_14 == var_2) == var_9)))));
                            var_25 = (max(var_25, ((((~var_1) + (~8188))))));
                        }
                        var_26 -= 30862;
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_27 -= var_15;
                        var_28 = (((75 && -10) > (var_2 - var_3)));
                        arr_29 [i_4] = var_0;
                    }
                }
                for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    var_29 = (min(var_29, (((((max(4, -75))) * (var_12 == var_10))))));
                    var_30 -= (((min((max(75, -8188)), (var_5 || var_1))) >= (max(-8176, (((var_12 + 2147483647) << (((var_14 + 5842579666534279854) - 27))))))));
                    arr_34 [i_0] = ((~(max((~var_14), var_5))));
                }

                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_31 = var_5;

                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_32 = (((2385 | 101) / var_6));
                        var_33 = var_4;

                        for (int i_13 = 3; i_13 < 17;i_13 += 1)
                        {
                            var_34 = (max(var_34, (((((min((!171), var_8))) * (var_7 && var_12))))));
                            arr_43 [i_13] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] = ((-(-8188 ^ 96)));
                        }
                    }
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {

                        for (int i_15 = 4; i_15 < 17;i_15 += 1)
                        {
                            var_35 = ((var_13 & var_3) - (var_6 + var_3));
                            var_36 = (max(var_36, (157 & 85)));
                            arr_49 [i_0] [i_0] [13] [i_0] [i_0] [i_0] = (!var_1);
                            var_37 = ((!(-8183 || -12)));
                            var_38 = (max(var_38, (!var_7)));
                        }
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            arr_52 [i_0] [i_1] [i_11] = (var_1 && var_15);
                            var_39 ^= -var_6;
                            var_40 = (((-97 != 8182) * var_15));
                            arr_53 [i_0] [i_0] = var_7;
                        }
                        for (int i_17 = 1; i_17 < 17;i_17 += 1)
                        {
                            var_41 = 97;
                            var_42 *= (var_5 <= var_13);
                        }

                        for (int i_18 = 3; i_18 < 17;i_18 += 1) /* same iter space */
                        {
                            var_43 -= 97;
                            var_44 |= (var_5 < (var_8 || var_14));
                        }
                        for (int i_19 = 3; i_19 < 17;i_19 += 1) /* same iter space */
                        {
                            var_45 = ((var_0 >= var_12) / var_11);
                            arr_63 [18] [i_0] [i_1] [i_11] [i_11] [3] [i_19] = (var_15 || var_13);
                        }
                    }
                    for (int i_20 = 2; i_20 < 17;i_20 += 1)
                    {
                        arr_66 [5] [i_20] [14] [i_20 - 1] [i_20 + 2] = (((~var_5) << (var_7 | var_11)));
                        arr_67 [i_0] [i_1] [i_11] [i_20] [i_20 + 3] [i_11] = var_11;
                        var_46 = (((~var_4) - (((var_0 && var_8) | (var_3 == var_5)))));
                    }

                    for (int i_21 = 0; i_21 < 20;i_21 += 1)
                    {
                        var_47 *= (min((((min(1, 8182)) | (min(var_8, var_6)))), ((~(var_11 == var_6)))));

                        for (int i_22 = 0; i_22 < 20;i_22 += 1)
                        {
                            var_48 = (((!-75) + (min(var_5, (~-3)))));
                            var_49 = (~-var_3);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 20;i_23 += 1)
                    {
                        for (int i_24 = 2; i_24 < 17;i_24 += 1)
                        {
                            {
                                var_50 -= ((((10 ^ (-127 - 1))) + ((min(-87, 85)))));
                                arr_78 [i_0] [8] [16] [i_23] [i_24 - 1] = ((~((-(!var_10)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 20;i_25 += 1)
                    {
                        for (int i_26 = 1; i_26 < 19;i_26 += 1)
                        {
                            {
                                var_51 = var_11;
                                var_52 = ((((~((max(var_8, var_10))))) * ((min(var_11, (min(var_10, var_9)))))));
                                var_53 = 8198;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_27 = 2; i_27 < 19;i_27 += 1)
                {
                    var_54 = (((var_5 % var_3) / var_14));
                    var_55 = -var_3;
                }
                for (int i_28 = 0; i_28 < 20;i_28 += 1)
                {
                    var_56 -= (((max((var_11 ^ var_6), var_13)) ^ ((-((max(var_4, var_4)))))));
                    arr_88 [i_0] [i_0] = (((var_3 / (var_0 / var_10))));
                    arr_89 [i_0] [i_0] [i_0] = (max((var_13 < var_3), var_8));
                }
            }
        }
    }
    var_57 -= var_8;
    #pragma endscop
}
