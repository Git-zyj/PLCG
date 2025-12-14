/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((((((!var_14) ? (((var_10 ? var_12 : var_2))) : ((var_16 ? var_15 : var_1))))) ? ((((var_10 < var_13) ? ((var_9 ? var_4 : var_10)) : (var_4 > var_9)))) : (((((var_8 ? var_0 : var_15))) ? var_5 : (var_12 / var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [i_2] = (var_8 || var_14);

                    for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_3 + 2] [i_3] = (!var_14);
                        var_18 = ((~(var_9 + -var_1)));
                        arr_12 [i_0] [i_2] [i_2] [15] [16] [i_2] = ((-((var_7 ? ((var_3 ? var_10 : var_10)) : var_4))));
                        arr_13 [i_2] [i_2] = ((~(((((var_16 ? var_12 : var_8))) ? (var_12 * var_2) : ((var_15 ? var_15 : var_7))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_19 = var_1;
                        var_20 = var_4;
                        var_21 = (max(var_21, ((~(~var_13)))));

                        for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_2] = (((((2541003453155482231 ? -23557 : 889748486))) ? 1 : 3242221955));
                            var_22 = ((-var_6 * ((var_0 ? var_11 : var_1))));
                        }
                        for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_23 = (((var_11 ? var_7 : var_10)) + -var_10);
                            var_24 = ((~((var_5 ? var_5 : var_14))));
                        }
                        for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_2] [i_4] [i_2] [i_1] [i_2] = ((((var_3 ? var_7 : var_12))) ? (var_8 == var_0) : ((var_8 ? var_15 : var_14)));
                            arr_28 [i_2] [i_4 + 2] [i_2] [i_0] [i_2] = (((((var_14 ? var_16 : var_7))) ? ((var_5 ? var_10 : var_6)) : ((var_7 ? var_11 : var_3))));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] = var_11;
                            var_25 = ((var_3 & (var_9 != var_13)));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_26 = var_2;
                        arr_33 [i_2] = (((var_9 > var_16) == (var_7 > var_11)));
                        arr_34 [8] [i_2] [i_2] [16] = ((((3242221981 ? 4737182226868798656 : 0)) + (((var_7 ? var_1 : var_6)))));
                        arr_35 [i_2] = var_10;
                        var_27 = ((var_13 < ((var_0 >> (var_2 - 74350943)))));
                    }
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        var_28 = ((((((~var_14) ? var_8 : (~var_3)))) ? (((((var_11 / var_16) && (var_0 == var_16))))) : ((-((var_8 ? var_7 : var_15))))));
                        arr_39 [i_2] = ((var_16 ? ((var_9 ? (~var_14) : var_11)) : (((((var_1 ? var_4 : var_14))) ? (var_9 > var_16) : ((var_6 ? var_2 : var_3))))));
                        arr_40 [i_0] [i_1] [i_2] [i_9 - 2] [i_9] [i_0] = (((((~var_5) || (((var_8 ? var_12 : var_10))))) ? var_11 : var_11));
                        arr_41 [i_2] = (((((var_3 > var_3) && (((var_7 ? var_7 : var_13))))) ? ((((var_16 && (((var_5 ? var_16 : var_15))))))) : ((((37 ? 1052745328 : 3380674265011578743)) / var_3))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                arr_48 [i_2] [i_1] [i_2] [i_2] [i_11] = var_3;
                                arr_49 [i_0] [i_2] [i_2] [i_10] [19] = (((((var_14 ? ((var_12 ? var_7 : var_15)) : (((var_5 ? var_12 : var_7)))))) || ((((((var_6 ? var_4 : var_9))) ? -var_12 : var_5)))));
                                arr_50 [i_0] [i_0] [i_0] [9] [i_2] = ((var_7 ? (var_0 && var_2) : (((!(((var_4 ? var_12 : var_6))))))));
                                var_29 = -var_8;
                                var_30 = ((-(((((var_4 << (var_14 - 57553)))) ? (var_14 * var_8) : (var_3 >= var_14)))));
                            }
                        }
                    }
                    var_31 *= (-8800 > 179);
                    arr_51 [i_0] [i_1] [i_2] [i_2] = ((((((var_0 == var_2) != ((var_15 ? var_9 : var_8))))) >> ((((((var_16 ? var_2 : var_1)) ^ var_14)) - 74342794))));
                }
            }
        }
    }
    #pragma endscop
}
