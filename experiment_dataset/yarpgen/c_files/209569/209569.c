/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 + 1] [i_3] |= ((-(((!((min(var_5, var_1))))))));
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_1] = 80;

                            for (int i_4 = 2; i_4 < 20;i_4 += 1)
                            {
                                arr_14 [i_3] [i_1] [i_1] [i_1] [i_1] |= (var_9 >> (((((min(var_6, var_5)) | 4273808866)) - 4278042064)));
                                var_11 *= var_6;
                                var_12 = ((((var_9 << (21158429 - 21158420))) >> (var_10 - 83)));
                                arr_15 [i_0] [i_0] [i_2 + 1] [i_3] [i_1] = (max((!var_0), (((var_2 > var_4) < -3666179388))));
                            }
                            for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                            {
                                var_13 = var_4;
                                var_14 = var_4;
                                var_15 = ((-(((!((min(var_5, var_1))))))));
                                arr_18 [20] [i_1] [i_1] [i_1] [20] = (-80249152 ? (-21158414 / -var_1) : (((~var_2) & var_3)));
                            }
                            for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
                            {
                                var_16 = var_9;
                                var_17 &= ((((((!(!var_5))))) | ((-(var_4 / var_6)))));
                            }
                            for (int i_7 = 1; i_7 < 18;i_7 += 1)
                            {
                                var_18 = (!-511);
                                var_19 = var_0;
                                var_20 = (1073741823 << (!var_0));
                            }
                        }
                    }
                }
                arr_25 [i_1] [i_1] = ((!(var_1 || var_1)));
                var_21 = -1509667347;
                var_22 = (max(var_22, ((((1073725440 << (var_8 - 2838942342)))))));
            }
        }
    }
    var_23 = (min(var_8, var_8));

    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_24 = (~(4294966784 < var_4));
                        arr_37 [i_8] [i_8] |= (803763012 != var_9);
                        var_25 = 4294966767;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        arr_40 [i_8] [i_12] [i_12] = 1;
                        var_26 |= -var_1;
                    }
                    for (int i_13 = 1; i_13 < 7;i_13 += 1)
                    {
                        arr_43 [i_8] [1] [i_9] [i_8] = ((~(4294966784 > var_4)));
                        var_27 = (min(var_27, ((2147483640 ? -2147483640 : var_6))));

                        for (int i_14 = 1; i_14 < 8;i_14 += 1) /* same iter space */
                        {
                            var_28 |= var_4;
                            arr_46 [i_8] [i_8] [i_8] [i_8] [i_8] = ((-2147483647 - 1) ? -var_10 : -1509667347);
                        }
                        for (int i_15 = 1; i_15 < 8;i_15 += 1) /* same iter space */
                        {
                            var_29 = (max(var_29, var_2));
                            var_30 = (var_9 >= var_5);
                            arr_49 [i_8] [i_9] [i_10] [i_13] [7] &= (3221241855 >> (1073725441 - 1073725410));
                            arr_50 [i_9] [i_10] [i_13] [i_13] = -var_0;
                        }
                        for (int i_16 = 2; i_16 < 9;i_16 += 1)
                        {
                            var_31 *= (var_9 < -28);
                            var_32 = (max(var_32, 2147483640));
                        }
                    }
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        arr_57 [i_8] [i_8] [i_10] [i_17] [i_8] [i_9] = (((~-2125265788) << (var_2 - 3)));
                        var_33 |= 1;
                    }
                    var_34 = (min(var_34, (((-var_3 ? var_6 : 80249144)))));
                    var_35 = (~var_1);
                    var_36 |= var_4;
                    /* LoopNest 2 */
                    for (int i_18 = 2; i_18 < 8;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 9;i_19 += 1)
                        {
                            {
                                var_37 = (max(var_37, (~511)));
                                var_38 = (((var_1 + 2147483647) >> (var_5 - 1758567577)));
                                var_39 = (min(var_39, (var_4 >= -1509667347)));
                                arr_62 [i_19] = var_3;
                            }
                        }
                    }
                }
            }
        }
        arr_63 [i_8] [i_8] = 7;
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 25;i_20 += 1)
    {
        arr_66 [i_20] [9] |= 3221241866;
        var_40 = ((var_2 & ((var_7 >> (21158429 - 21158412)))));
    }
    for (int i_21 = 2; i_21 < 14;i_21 += 1)
    {
        var_41 = (~var_6);
        var_42 = (max(-var_5, (var_10 > var_4)));
    }
    var_43 = var_4;
    #pragma endscop
}
