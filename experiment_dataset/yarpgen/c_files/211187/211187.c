/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (6329953565459392008 || 24);
    var_18 = (var_8 ? var_16 : var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 = ((((min((min(var_3, var_10)), (max(var_4, var_6))))) ? (((min(var_14, 105)))) : -219668372));
                            arr_14 [i_0] [i_1] [i_1] [i_3] = (((((var_13 ? var_2 : ((60 ? 24 : 18446744073709551615))))) ? (min(-7175261009143888850, 15392381394757750372)) : var_15));
                            arr_15 [i_0] [i_1 + 1] [i_2] [i_2] [i_1] &= (((((-100 <= var_7) ^ ((var_9 ? var_9 : var_0)))) >> ((((-123 ? 2097151 : var_16)) - 2097148))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_20 = (~var_4);
                                arr_18 [i_0] [4] [i_1] [i_0] [i_0] = var_13;
                                var_21 = ((~(((((var_13 ? var_10 : 4067627929))) ? var_5 : (var_13 ^ var_10)))));
                                var_22 = (((((((18446744073709551609 == 85) - (var_1 >= var_14))) + 2147483647)) >> (((((var_5 == var_3) ? (((8814686836244108739 ? -123 : 2523400605))) : (var_4 >> var_0))) - 16482380711786049630))));
                            }
                            for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                            {
                                var_23 = (((((((-7500 ? var_10 : var_1))) ? (max(var_8, -28562)) : ((var_0 ? 29 : var_4))))) ? ((var_7 ? (var_3 <= var_15) : ((var_5 ? -123 : var_9)))) : (((min(var_14, (99 && var_7))))));
                                arr_21 [i_1] [i_1] [i_2 - 1] = ((170 >= 8922657598190940996) > (-32767 - 1));
                                arr_22 [i_1] = (~19);
                            }
                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                            {
                                arr_26 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3] [i_6] = ((((-100 ? var_8 : var_8)) | var_4));
                                var_24 = 0;
                                var_25 = (max(var_25, var_16));
                                var_26 = (!-123);
                                arr_27 [i_0] [i_1] [i_1] [i_3] = ((var_4 ? 122 : var_11));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_27 = (min(var_27, var_0));

                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        arr_32 [i_1] [i_1] [i_1] [i_1] = ((var_15 >> (var_12 - 14913964860331654272)));

                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_28 = (max(var_28, var_9));
                            arr_35 [i_0] [i_1] [i_7] [i_1] [i_8] [i_1] [i_9] = (9223372036854775807 && 34839);
                            arr_36 [i_1] [i_1] [i_7] [i_8] [i_9] = ((((var_0 ? var_2 : var_3)) >= ((-123 ? var_4 : var_2))));
                        }
                        var_29 = (~var_8);
                    }
                    arr_37 [i_1] = -var_8;
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_30 = (max(var_30, (255 | 26809)));
                    arr_41 [i_1] [i_1] [i_1] = 19736;
                    var_31 += ((((min(var_14, var_16))) ^ (var_9 && 130023424)));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            {
                                arr_47 [i_0] [i_1] [i_10] [i_1] [i_12] [i_10] [i_10] = ((((var_6 ? 30696 : 30697)) - ((max(var_11, 21)))));
                                var_32 = (min(var_32, (((-3283 ? 109 : 32751)))));
                                var_33 = ((((max(var_3, 2261184385139800564))) ? (min(var_13, var_8)) : ((((((-32767 - 1) + 2147483647)) >> (var_8 - 5893375372334578564))))));
                                var_34 &= ((((var_13 ? var_5 : var_6)) ^ 32753));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
