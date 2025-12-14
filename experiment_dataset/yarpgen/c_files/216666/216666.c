/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((~((var_0 ? var_4 : var_5))));
                    arr_9 [i_0] [i_1] [18] = (((((var_15 ? var_7 : var_14))) + ((var_4 ? var_3 : var_6))));
                }

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_18 = (max(var_18, (((-((var_14 ? var_15 : var_10)))))));
                    var_19 = (min(var_19, ((((var_1 < ((var_3 ? var_5 : var_13)))) ? var_13 : (var_13 - var_1)))));

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_15 [i_0] [2] [i_0] [i_4] = (((~var_0) ? ((var_10 ? var_11 : var_6)) : (((var_13 ? var_0 : var_8)))));
                        arr_16 [0] [0] [i_0] [i_4] = (min(((((max(var_8, var_9)) < (var_11 >= var_17)))), ((var_5 ? var_2 : var_14))));
                        var_20 = (min((((var_15 ? var_14 : var_6))), ((var_6 ? var_5 : var_11))));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_21 = (max(((~((var_7 ? var_11 : var_6)))), var_9));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                        }

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_22 *= (var_16 ? var_4 : ((var_15 ? var_10 : var_17)));
                            arr_28 [i_0] [i_5] [i_3] [i_0] [i_0] = ((-(var_12 * var_10)));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            var_23 = var_14;
                            var_24 = (((((var_0 ? var_5 : var_13))) ? (var_3 && var_8) : ((var_17 ? var_1 : var_11))));
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            var_25 = ((((min(var_17, var_9))) ? ((var_9 ? var_4 : var_15)) : ((max(var_15, var_17)))));
                            var_26 = (((((max(var_0, var_11)))) ? (((var_10 ? var_15 : (var_4 || var_17)))) : (max(var_11, -var_9))));
                            var_27 = ((~(((((var_3 ? var_16 : var_6))) ? var_10 : ((var_14 ? var_4 : var_9))))));
                            arr_34 [i_0] [i_0] [i_3] [i_5] [i_3] = ((~(((var_8 + 9223372036854775807) >> (var_12 - 1823592049)))));
                            var_28 = (((max(var_5, -var_13)) + var_5));
                        }
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_37 [i_0] = var_3;
                        arr_38 [6] [i_1] [6] [i_10] |= (min((((((var_8 ? var_10 : var_17))) ? var_17 : ((var_13 ? var_1 : var_15)))), (((var_0 || var_8) ? var_15 : ((var_1 ? var_7 : var_17))))));

                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            var_29 = -var_13;
                            var_30 = (min(var_30, (((var_4 ? var_4 : var_1)))));
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            arr_44 [i_0] [i_1] [i_0] [21] [21] = (max(((var_17 ? var_13 : ((var_6 ? var_9 : var_6)))), ((var_6 ? var_17 : ((var_2 ? var_5 : var_12))))));
                            var_31 -= ((((min(var_0, var_13))) ? ((((var_2 >= (var_11 * var_10))))) : ((-((var_16 ? var_3 : var_7))))));
                        }
                        for (int i_13 = 1; i_13 < 21;i_13 += 1)
                        {
                            var_32 = (((((((var_5 ? var_3 : var_14)) + (var_4 * var_11)))) ? (((((var_4 ? var_15 : var_2))) ? var_10 : var_7)) : ((var_14 ? ((var_12 ? var_9 : var_13)) : var_12))));
                            arr_47 [i_1 - 2] [i_13 + 1] [i_1 - 2] [i_0] [i_1 - 2] [i_0] [i_0 - 1] = (((((~(var_6 / var_1)))) ? (((-(var_8 + var_12)))) : ((var_12 ? (((var_10 ? var_17 : var_17))) : ((var_1 ? var_13 : var_8))))));
                        }
                        var_33 = (max((var_6 ^ var_6), var_12));

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            arr_51 [i_1] [i_0] [i_3] [i_1] [i_1] [i_0] [i_0] = ((((var_6 ? var_13 : var_11)) != ((var_5 ? var_1 : var_10))));
                            var_34 = ((var_12 ? ((var_9 ? var_1 : var_6)) : var_7));
                            var_35 = ((var_11 ? var_8 : var_11));
                            var_36 = (var_0 % var_15);
                        }
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            arr_56 [i_0] [i_0] [i_3] [i_10] [i_3] = (((((var_16 ? var_16 : var_6))) ? -var_15 : (((var_5 != var_0) ? var_14 : ((var_10 ? var_5 : var_16))))));
                            var_37 = ((-(((((var_0 ? var_5 : var_13))) ? ((var_3 ? var_8 : var_7)) : -var_0))));
                            arr_57 [i_0 + 3] [i_0 + 3] [i_0] = var_0;
                        }
                    }
                }
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    arr_61 [8] [i_0] [i_0] [i_16] &= (((var_0 ? var_7 : var_9)));
                    var_38 = (max(var_38, (((((((((var_13 ? var_6 : var_11))) ? (((var_14 ? var_16 : var_2))) : var_12))) ? ((~((var_15 ? var_14 : var_2)))) : ((var_6 ? var_17 : var_15)))))));
                    var_39 = ((-var_6 ? (~var_2) : ((var_8 ? var_17 : var_17))));

                    for (int i_17 = 1; i_17 < 21;i_17 += 1)
                    {
                        arr_65 [i_0] [18] [i_0] [i_17] = (((((var_13 ? var_16 : var_4))) ? ((var_6 ? var_8 : var_9)) : (((~(var_6 % var_17))))));
                        arr_66 [i_0] [i_0] [i_1] [i_16] [i_16] [i_17] = (max(((((max(var_10, var_0))) ? var_7 : var_10)), (!var_11)));
                    }
                }
                for (int i_18 = 4; i_18 < 19;i_18 += 1)
                {
                    var_40 = (((((~(!var_14)))) ? (((~var_8) ? (~var_12) : ((var_5 ? var_5 : var_1)))) : (((var_9 - var_7) ? var_7 : ((var_6 ? var_14 : var_10))))));
                    var_41 = (((var_5 + var_2) ? (((((var_1 ? var_1 : var_7))) ? ((var_1 ? var_3 : var_10)) : ((var_17 ? var_5 : var_7)))) : (((((var_16 ? var_12 : var_15)) - var_15)))));
                    var_42 *= ((((max(var_7, var_12))) ? ((min(var_8, var_6))) : ((var_1 ? var_16 : var_10))));
                }
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    var_43 *= ((((var_12 ? (var_1 != var_17) : ((var_2 ? var_14 : var_16))))) ? ((((var_10 ? var_12 : var_11)) % var_17)) : var_11);
                    var_44 = (((((var_13 ? ((var_2 ? var_11 : var_8)) : ((var_2 ? var_3 : var_11))))) ? (!var_2) : ((((((var_12 ? var_17 : var_1))) >= ((var_1 ? var_0 : var_12)))))));
                    /* LoopNest 2 */
                    for (int i_20 = 1; i_20 < 20;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 22;i_21 += 1)
                        {
                            {
                                var_45 = ((((((((var_16 ? var_6 : var_4))) ? (min(var_15, var_12)) : (~var_7)))) ? var_16 : (((var_10 ^ var_17) ? var_9 : (((var_11 ? var_14 : var_16)))))));
                                var_46 = (max((var_6 || var_13), var_16));
                            }
                        }
                    }
                }

                for (int i_22 = 0; i_22 < 22;i_22 += 1)
                {
                    var_47 = var_5;

                    for (int i_23 = 0; i_23 < 22;i_23 += 1)
                    {
                        var_48 = (max(var_48, (((((((((var_16 ? var_14 : var_3))) ? ((var_2 ? var_11 : var_11)) : var_13))) ? ((var_9 ? (((var_2 ? var_16 : var_6))) : ((var_12 ? var_1 : var_10)))) : (min(var_16, ((var_8 ? var_3 : var_9)))))))));
                        arr_85 [i_0] [i_1] [i_1] [i_0] = (((((var_12 ? var_9 : var_9) + var_2))));
                    }
                    /* vectorizable */
                    for (int i_24 = 0; i_24 < 22;i_24 += 1)
                    {
                        var_49 |= (!var_10);
                        arr_89 [i_0 - 1] [i_1 - 2] [i_1] [i_0] [i_24] [i_24] = ((var_12 ? var_16 : var_17));
                    }
                }
                /* vectorizable */
                for (int i_25 = 3; i_25 < 21;i_25 += 1)
                {
                    arr_92 [i_0] [i_0] [i_0] [i_0] = (var_1 ? var_15 : var_5);
                    var_50 = (((((var_1 ? var_4 : var_12))) ? var_1 : (~var_12)));
                }
                arr_93 [i_0] = (((((var_3 ? var_5 : var_14))) ? ((max(var_4, var_8))) : ((var_13 + (((var_11 ? var_0 : var_7)))))));
            }
        }
    }
    var_51 += (max(((var_15 ? var_12 : var_5)), ((((~var_4) ^ var_14)))));
    #pragma endscop
}
