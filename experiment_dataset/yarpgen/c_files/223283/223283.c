/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_9 [i_3] = var_3;
                        var_20 &= (((min(var_9, ((var_17 ? var_18 : var_13)))) - ((var_3 ? var_13 : (!var_13)))));
                        var_21 = ((((((min(var_16, var_11))) ? (min(var_8, var_16)) : (((var_7 ? var_15 : var_11))))) >> ((((var_16 ? var_11 : var_13)) - 38504))));
                        var_22 = ((((max(((min(var_1, var_14))), var_6))) ? var_18 : (min((min(var_14, var_9)), var_0))));
                    }
                }
            }
        }
        var_23 ^= (min(((((var_17 ? var_12 : var_4)))), (min((max(var_8, var_8)), var_19))));
        var_24 = (((((max(var_2, var_6)) + ((var_9 ? var_8 : var_5)))) - var_7));
    }

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_12 [i_4] [i_4] = (max((((max(var_3, var_4)) - var_14)), var_11));
        var_25 = ((((var_15 - var_3) ? var_2 : var_8)));

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                var_26 = (((min(var_11, var_15)) - (var_11 || var_10)));
                var_27 = ((-(var_15 * var_9)));
                arr_18 [i_6 + 2] [i_5] [i_4] |= (((min((var_18 / var_15), ((var_19 ? var_4 : var_18)))) * ((((max(var_4, var_4))) ? (var_19 | var_5) : ((var_6 ? var_4 : var_11))))));
            }
            /* vectorizable */
            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                arr_21 [i_5] [i_7 + 3] &= ((var_10 ? var_4 : var_0));
                arr_22 [i_4] [i_5] [i_5] [i_7] = var_7;
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_28 -= var_15;
                            arr_27 [i_8] [i_5] [i_7] [i_5] [i_8] = (var_18 + var_11);
                            var_29 = (min(var_29, var_6));
                        }
                    }
                }
            }
            var_30 = (min(var_30, var_0));
            var_31 = (min((var_16 & var_12), ((var_18 ? var_13 : var_11))));
        }
        for (int i_10 = 3; i_10 < 23;i_10 += 1)
        {
            arr_32 [i_4] [i_10] &= (((max(-860218402, 0))) >= (((var_12 ? (max(var_10, var_2)) : (((var_19 << (var_2 + 6889384737834460501))))))));

            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                var_32 = ((min(var_12, var_2)));
                arr_35 [i_4] [i_10] = (((var_18 & var_13) ? (min(var_16, var_8)) : (((var_2 ? var_3 : var_17)))));
                arr_36 [i_4] [i_4] [i_4] [i_4] = (max(var_5, ((-103 ? 9 : -2111491871))));
            }
            for (int i_12 = 1; i_12 < 23;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    arr_42 [i_4] [i_12 + 2] [i_12 + 2] [i_13] = (min((var_19 % var_13), (((var_2 ? var_10 : var_3)))));
                    var_33 = (min(var_33, var_10));
                }
                var_34 = ((((max(-15590, 1))) ? ((max(var_17, var_2))) : ((((max(var_5, var_19))) ? var_4 : var_6))));
            }
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {

                for (int i_15 = 4; i_15 < 22;i_15 += 1)
                {
                    arr_48 [i_15 - 2] [i_15] [i_14] [i_10] [i_10 - 1] [i_4] = (min(((max(((var_16 ? var_18 : var_7)), var_3))), ((var_15 ? var_7 : var_13))));

                    for (int i_16 = 1; i_16 < 23;i_16 += 1)
                    {
                        var_35 = ((((max(var_7, var_18))) ? var_17 : (max(((var_6 ? var_17 : var_13)), ((max(var_10, var_19)))))));
                        arr_53 [i_4] [i_10] [i_14] [i_10] [i_14] [i_4] [i_16] = var_4;
                        arr_54 [i_16 + 1] &= ((max((var_18 / var_5), (min(var_15, var_9)))));
                        var_36 = var_16;
                    }
                }
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    var_37 = ((var_7 ? (min(var_6, var_9)) : ((min(var_16, var_10)))));
                    var_38 = ((var_13 ? (var_9 && var_3) : (var_6 || var_5)));
                    arr_57 [i_4] [i_10 - 2] [i_14] [i_17] = -var_8;
                }
                var_39 &= (((-(var_19 * var_0))));
                arr_58 [i_4] [i_10] [i_14] = ((var_6 ? var_15 : (109 / 2147483647)));
                var_40 = max(((var_1 ? var_10 : var_17)), ((max(var_3, var_3))));

                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    arr_62 [i_4] [i_4] [i_10] [i_14] [i_14] [i_4] = (max((min((min(var_5, var_8)), var_14)), (((max(var_18, var_3))))));
                    var_41 = ((var_0 <= ((min(1, -40)))));
                }
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    var_42 = var_19;
                    var_43 ^= var_5;
                }
                for (int i_20 = 1; i_20 < 24;i_20 += 1)
                {
                    var_44 = ((~(var_13 - var_9)));
                    var_45 = var_5;
                }
                for (int i_21 = 0; i_21 < 25;i_21 += 1)
                {
                    var_46 &= ((max(var_17, var_8)));
                    arr_74 [i_4] [i_4] [i_10] [i_14] [i_10] = ((((min((var_9 - var_10), ((max(var_7, var_7)))))) ? ((max(var_12, var_6))) : (var_11 && var_0)));
                    var_47 = (((-28 + 2147483647) << (127 - 127)));
                }
            }
        }
    }
    var_48 = var_1;
    #pragma endscop
}
