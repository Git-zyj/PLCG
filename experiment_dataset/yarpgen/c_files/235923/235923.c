/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max((max(var_8, var_8)), (((-((var_2 ? var_6 : var_14))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_20 = (max((((var_18 ? var_4 : var_18))), ((min(1, var_12)))));
            arr_5 [i_1] [i_1] [0] &= (max((((((1 ? var_11 : 0))) ? ((65535 ? var_7 : var_17)) : (!-3))), (var_3 && var_17)));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 17;i_3 += 1)
                {
                    {
                        var_21 -= (max(((var_12 ? var_12 : 27)), ((max(1, -1)))));
                        var_22 = (min((((127 ? var_9 : var_6))), (((!(((var_3 ? 1 : var_10))))))));
                    }
                }
            }

            /* vectorizable */
            for (int i_4 = 4; i_4 < 17;i_4 += 1) /* same iter space */
            {
                var_23 = (max(var_23, ((((((0 ? 1 : -1))) ? (125 - var_14) : ((var_8 ? var_0 : -14)))))));

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_16 [i_0] = 8726;
                    var_24 = ((var_15 - ((var_2 ? var_10 : -20))));
                }

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_25 = (!(((1 ? var_1 : -1088598071))));
                    var_26 = (min(var_26, (((var_14 ? var_15 : var_11)))));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_27 = (min(var_27, var_18));
                    var_28 ^= (var_14 & var_3);
                    arr_22 [i_0] [i_0] [i_0] [i_7] = ((var_3 ? ((var_0 ? var_13 : var_1)) : ((var_14 ? var_0 : -112))));
                    var_29 = 1;
                }
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    arr_26 [i_0] [i_0] [i_0] = (!var_0);
                    arr_27 [i_0] = var_4;
                }
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    arr_32 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((var_9 ? ((var_10 ? var_14 : var_11)) : ((var_15 << (var_6 - 56220)))));
                    arr_33 [i_0] [1] [i_9] |= var_12;
                }
            }
            /* vectorizable */
            for (int i_10 = 4; i_10 < 17;i_10 += 1) /* same iter space */
            {
                var_30 = ((var_14 ? var_8 : -14));
                var_31 ^= ((18446744073709551605 << ((((var_16 ? var_15 : var_18)) + 57))));
                var_32 = (-1 >= var_14);
                var_33 &= (~var_14);
            }
            for (int i_11 = 4; i_11 < 17;i_11 += 1) /* same iter space */
            {
                arr_39 [i_0] [i_0] [i_1] [i_0] = ((((-((var_13 ? 24832 : var_13)))) & ((((min(var_2, 0))) ? (var_0 + var_7) : ((-1 ? var_15 : var_16))))));
                arr_40 [5] [i_1] [i_0] [i_11 + 3] = ((((max(var_4, var_13))) & ((var_12 ? var_15 : -1))));
                arr_41 [i_0] [i_11] [i_11] = (min((((((-1 ? var_1 : -4))) / (18446744073709551605 + -9129))), ((((var_16 ? var_7 : 1))))));
            }
            for (int i_12 = 2; i_12 < 19;i_12 += 1)
            {
                var_34 += (((~var_0) ? (min(var_18, var_10)) : (((var_10 ? 1 : var_13)))));

                for (int i_13 = 4; i_13 < 18;i_13 += 1)
                {
                    var_35 += ((((min((var_10 ^ var_1), 0))) && (((~((var_5 ? var_10 : var_12)))))));
                    var_36 = (((((var_5 ? ((var_2 ? var_15 : 1)) : (var_16 && var_0)))) && ((min(((var_16 ? var_2 : 63)), (min(var_0, var_3)))))));
                    var_37 = (((((var_3 + ((var_14 ? var_13 : var_17))))) ? (((min((!-1), -5)))) : (max(((max(var_6, -4))), var_12))));
                    var_38 |= (((((var_10 ? (var_3 < 28) : var_16))) ? (((min((var_10 || var_6), (var_2 && -58))))) : ((var_8 ? ((52 ? var_10 : var_16)) : (var_10 << var_16)))));

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        arr_52 [i_0] [i_0] [i_0] [i_13] [1] = 4906615416327505615;
                        arr_53 [i_13 + 2] [i_0] [i_13 + 2] [i_13] [i_13] [i_13 - 1] [i_13] = ((0 ? 127 : var_9));
                        arr_54 [i_14] [1] [i_0] = ((0 ? var_8 : 1));
                    }
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    var_39 = ((((var_7 ? var_17 : var_7)) <= ((1814167046 ? var_15 : 2))));
                    var_40 += ((var_10 ? -1 : var_6));
                }

                for (int i_16 = 0; i_16 < 0;i_16 += 1)
                {
                    arr_59 [i_12 - 2] [i_12] [i_12] [i_0] [i_12 - 1] [i_12] = 11;
                    var_41 = (((~var_10) ? 54 : ((min(-23, var_1)))));
                }
                for (int i_17 = 2; i_17 < 18;i_17 += 1)
                {
                    var_42 += var_5;
                    var_43 = ((-((var_11 ? 13540128657382045985 : var_9))));
                }
            }
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    {
                        var_44 *= (-(0 & var_5));
                        arr_69 [i_0] [i_0] = ((((0 / var_13) ? -25 : -65526)));
                    }
                }
            }
        }
        for (int i_20 = 2; i_20 < 19;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 20;i_22 += 1)
                {
                    {
                        arr_78 [i_0] = -1;
                        arr_79 [i_21] [i_0] [i_0] [i_20] = (min((((~1) ? ((var_17 ? var_4 : 26)) : (65535 >= var_2))), 4));
                        arr_80 [i_0] [i_0] [i_20 + 1] [i_21] [16] [i_0] |= ((((((((var_6 ? var_12 : var_13))) ? var_9 : ((var_4 ? 0 : var_5))))) / var_12));
                    }
                }
            }
            var_45 = var_15;
        }
        /* vectorizable */
        for (int i_23 = 1; i_23 < 1;i_23 += 1)
        {
            var_46 = 1;
            arr_84 [i_0] [i_0] = (((7 + var_10) == var_2));
        }
        /* vectorizable */
        for (int i_24 = 0; i_24 < 20;i_24 += 1)
        {
            /* LoopNest 2 */
            for (int i_25 = 3; i_25 < 17;i_25 += 1)
            {
                for (int i_26 = 3; i_26 < 19;i_26 += 1)
                {
                    {
                        var_47 = (((632141882 / var_8) | var_2));
                        var_48 = (((-1668640184 || var_9) ? ((1 ? 86 : var_16)) : -var_13));
                    }
                }
            }
            var_49 += var_2;
        }
        arr_92 [i_0] = (((var_3 ? -1789297379639360036 : var_15)));
    }
    #pragma endscop
}
