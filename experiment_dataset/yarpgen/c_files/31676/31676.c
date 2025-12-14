/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (!-var_2);
                    var_20 = (((~6287879944556397130) >= (((~(~var_13))))));
                    arr_9 [i_2] = ((((var_16 ? ((var_10 ? var_2 : var_4)) : ((min(var_9, var_4))))) >> (-var_7 + 5909921492176547091)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            {
                var_21 = (var_2 + var_5);
                var_22 = max(var_18, ((-(min(var_18, var_16)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                {
                    var_23 = -var_4;
                    var_24 = var_9;
                }
            }
        }
    }

    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {
        var_25 = ((~(((~var_2) & ((var_18 ? var_17 : var_12))))));
        var_26 = ((~(~var_7)));
        arr_26 [12] [i_8] = var_6;
        var_27 = (((((~((var_4 ? var_18 : var_7))))) % (var_15 + var_0)));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 8;i_12 += 1) /* same iter space */
                    {
                        arr_37 [i_9] [i_12] [i_12] [i_12] [i_10] [i_9] = var_15;
                        arr_38 [2] = (var_5 % -var_13);
                        arr_39 [i_9] [i_10] [7] [4] [i_12] &= (var_18 >= var_3);
                    }
                    for (int i_13 = 1; i_13 < 8;i_13 += 1) /* same iter space */
                    {
                        var_28 = ((-((-(min(var_8, var_5))))));
                        var_29 = (max((max(var_7, var_15)), (var_7 / var_6)));
                        var_30 += ((((-(~1008)))) ? (max(var_9, ((5 ? 18446744073709551611 : 11)))) : (~var_3));
                        var_31 = ((5 ? 988098134469112615 : 30822));
                    }
                    for (int i_14 = 1; i_14 < 8;i_14 += 1) /* same iter space */
                    {
                        var_32 = (max(((var_17 ? var_14 : var_15)), ((var_2 ? var_9 : var_12))));
                        var_33 = ((~(min(var_12, var_4))));
                        var_34 &= ((-(var_3 - var_6)));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 9;i_16 += 1)
                        {
                            {
                                var_35 = (var_18 > var_4);
                                arr_48 [i_9] [i_10] [i_10] [i_10] [i_11] &= (min(-26, ((((min(20314, 2060968636))) / 1463376836579436926))));
                                var_36 = (((max(var_1, var_16)) ^ (var_12 > var_8)));
                                var_37 = (max((~var_11), (var_7 & var_16)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 7;i_18 += 1)
                        {
                            {
                                var_38 = -var_18;
                                var_39 = (min((max((~var_12), -18446744073709551610)), ((max((var_16 - var_5), (((var_3 ? var_1 : var_11))))))));
                                var_40 = (((var_15 | var_8) ? (max(18446744073709551610, 3316804292)) : (~var_17)));
                            }
                        }
                    }
                    var_41 *= (((((!(((var_3 ? var_9 : var_17)))))) == ((-(~var_4)))));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 11;i_20 += 1)
                        {
                            {
                                var_42 = (min(var_42, ((((~var_2) ? var_5 : var_17)))));
                                arr_60 [i_9] [i_9] [2] [8] [i_11] = var_13;
                                var_43 = var_13;
                                var_44 |= var_4;
                            }
                        }
                    }
                }
            }
        }
        var_45 = (-var_2 & var_1);
        var_46 = (min(-var_8, (var_0 > var_12)));
    }
    #pragma endscop
}
