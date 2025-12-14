/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_10 ^= ((!((max((var_2 - var_2), var_4)))));
                                arr_14 [i_1] [22] [7] [i_1] [i_1] = var_3;
                                arr_15 [i_1] [i_0] [i_1] [i_1] [i_3] [i_3] [i_1] = ((-(!var_7)));
                                arr_16 [i_0] [i_0] [i_1] [i_3] [i_4] [i_3] = ((((((-96 ? 4294967295 : 1)) ? (~var_4) : (~var_7)))));
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] = (((((var_6 / var_6) ? ((var_4 ? var_8 : var_1)) : ((var_3 ? var_1 : var_2)))) + (min((~var_1), ((max(var_9, var_4)))))));
                }
            }
        }
    }

    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_29 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 - 3] = (min((min(((188 ? var_7 : 127)), 1)), var_6));
                            arr_30 [i_5] [i_6] [i_5] [i_8] [i_9] = (((max((max(var_8, var_1)), -var_5)) * (min((min(var_0, var_2)), (min(var_5, var_2))))));
                            arr_31 [i_5] [2] [i_7] [2] [i_9] = (((min((var_9 <= var_5), (!var_0))) ? (((var_2 ? var_2 : var_4))) : (1 && 133)));
                            var_11 = ((~((~(~var_4)))));
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            arr_35 [i_8] [i_5] [i_6] [i_6] [i_10] [i_6] [i_7] = (min((((var_3 ? var_8 : var_3))), (((((var_5 ? var_0 : var_5)) / ((min(-15, 64))))))));
                            var_12 = ((min(-2047, (!var_8))));
                        }

                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_13 = (max(var_9, (((!(var_8 | var_8))))));
                            var_14 = (max(var_14, ((((((var_5 * var_2) - ((var_1 ? var_2 : var_4)))) << (var_1 - 4394292715795016123))))));
                            arr_38 [i_11] [i_11] [i_11] [i_5] [i_11] [i_11] [i_11] = (((((var_3 ? var_1 : var_3))) * (((-((127 ? 227 : var_6)))))));
                        }
                        arr_39 [i_5] [i_5] [i_5 - 1] [i_8] [5] [i_5] = (min((((~var_1) ? var_3 : -var_3)), (((~((var_5 ? var_4 : var_6)))))));
                    }
                }
            }
        }

        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            var_15 = (min(var_15, ((-(~var_7)))));

            /* vectorizable */
            for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_16 = ((((var_2 ? var_4 : var_0))) - (~var_2));
                            arr_52 [i_5] [i_5] [i_13] [i_14] [i_15] [i_15] = var_9;
                        }
                    }
                }
                arr_53 [6] [6] [6] [i_13] &= ((~((var_8 ? var_3 : var_0))));
            }
            for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        {
                            var_17 = (((max((var_3 + var_1), ((var_8 ? var_3 : var_5)))) > var_8));
                            var_18 = (~((var_3 ? (var_6 ^ var_1) : (max(var_5, var_3)))));
                        }
                    }
                }
                var_19 += (min(((-(max(var_1, var_5)))), -var_9));
            }
            for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
            {

                for (int i_20 = 0; i_20 < 16;i_20 += 1)
                {
                    var_20 = (max(var_20, var_8));

                    for (int i_21 = 0; i_21 < 16;i_21 += 1)
                    {
                        arr_69 [15] [i_5] [i_19] [i_5] [i_5] = (~-524160);
                        arr_70 [i_19] [i_19] [i_19] [i_5] [i_5] [i_19] = ((~(min((min(var_5, var_3)), (!2047)))));
                        var_21 = (((((var_4 - (~var_2)))) ? (var_6 - var_2) : (var_7 * var_7)));
                    }
                    for (int i_22 = 0; i_22 < 16;i_22 += 1)
                    {
                        arr_73 [i_5] [i_20] [i_19] [i_12] [i_5] = var_9;
                        var_22 = (((-var_0 && ((max(var_3, var_2))))) ? ((((max(var_6, var_6))) ? (var_0 - var_7) : (min(var_3, var_7)))) : (((((max(var_2, var_0))) ? ((var_3 ? var_9 : var_5)) : (~var_0)))));
                    }
                    for (int i_23 = 0; i_23 < 16;i_23 += 1)
                    {
                        var_23 += (~var_6);
                        var_24 = ((var_3 << (((!(((var_9 >> (var_4 - 196)))))))));
                    }
                    for (int i_24 = 0; i_24 < 16;i_24 += 1)
                    {
                        var_25 = (((((((var_0 ? var_5 : var_0))) ? -var_6 : (var_0 ^ var_7)))) == ((var_1 ? var_0 : ((var_1 ? var_9 : var_0)))));
                        arr_81 [i_5] [i_12] [i_5] [i_20] [i_24] = ((~((((var_9 < var_3) || -var_4)))));
                        var_26 = (max(var_26, 4294967296));
                        var_27 = (max((((max(var_0, var_6)) | (!var_8))), (((var_9 * var_0) ? var_5 : (var_4 * var_6)))));
                        var_28 = var_2;
                    }
                }

                for (int i_25 = 2; i_25 < 15;i_25 += 1)
                {
                    arr_85 [i_12] [i_5] [i_25 - 2] = (!var_8);
                    var_29 = (((((var_7 ? var_3 : ((var_1 ? var_9 : var_2))))) ? ((~((var_0 ? var_3 : var_8)))) : (((!var_7) ^ (var_6 | var_2)))));
                    arr_86 [i_5] [i_12] [i_5] = (((((-(~var_7)))) ? ((max(-127, 4210464712))) : (((var_2 ? var_3 : var_7)))));
                }
                var_30 = (((-1926860990 < 3135986571) == ((((var_1 ? var_3 : var_2)) >> (((~var_3) - 4753377454567032255))))));

                for (int i_26 = 0; i_26 < 16;i_26 += 1)
                {
                    var_31 = ((((-var_4 ? ((var_6 << (var_7 + 111))) : ((min(var_7, var_8))))) + (max((min(var_7, var_0)), ((var_8 ? var_4 : var_7))))));
                    var_32 = ((((((-2147483647 - 1) ? 40 : 2))) ? var_8 : ((113 ? 4 : 122))));

                    for (int i_27 = 2; i_27 < 13;i_27 += 1) /* same iter space */
                    {
                        var_33 = ((1 ? -var_6 : ((((max(var_8, var_5))) ? -var_1 : ((((var_7 + 2147483647) << (var_4 - 205))))))));
                        var_34 = (min(var_34, ((((((((var_0 ? var_7 : var_2))) ? var_6 : ((var_4 ? var_2 : var_4)))) << ((((~((var_2 ? var_0 : var_5)))) - 806655604)))))));
                    }
                    for (int i_28 = 2; i_28 < 13;i_28 += 1) /* same iter space */
                    {
                        var_35 = (min(var_35, (6141 * 158)));
                        arr_95 [i_28 + 2] [i_28] [i_5] [i_28] [i_28 + 2] [i_28] [i_28 + 3] = (((~(var_3 ^ var_1))));
                        arr_96 [i_5] [i_5] [i_12] [i_5] [i_26] [i_28] [i_28] = ((((!((min(var_7, var_7))))) ? (var_8 + var_7) : (((((var_5 ? var_3 : var_5))) ? (min(var_1, var_0)) : (var_5 + var_4)))));
                    }
                    for (int i_29 = 2; i_29 < 13;i_29 += 1) /* same iter space */
                    {
                        arr_99 [i_5] [i_12] [i_19] [i_26] [i_5] = (min((((-((max(var_8, var_4)))))), var_2));
                        var_36 = (((((var_8 ? var_5 : var_2))) > ((((var_7 == var_1) ? (!var_2) : var_9)))));
                        var_37 = var_9;
                    }
                }
                for (int i_30 = 1; i_30 < 15;i_30 += 1)
                {
                    var_38 = ((~((var_6 << (var_7 + 126)))));
                    var_39 = (((((!var_0) ? (~var_0) : (~var_9))) | var_5));
                }
                var_40 = var_7;
            }
            arr_102 [i_12] [i_5] = ((((-((var_8 ? var_4 : var_2)))) - (((((8064 ? 24 : 133))) ? -var_1 : (((2047 ? 1 : 196)))))));
        }
        for (int i_31 = 1; i_31 < 13;i_31 += 1)
        {
            arr_106 [i_5] [i_5] [i_31] = var_9;
            arr_107 [i_5] [i_5] = (((((var_8 >> (var_0 + 806655679)))) + var_6));
        }
    }
    #pragma endscop
}
