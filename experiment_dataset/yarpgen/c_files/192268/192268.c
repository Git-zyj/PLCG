/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_13 = ((((((((var_0 ? var_1 : var_2))) ? var_11 : var_11))) ? (~var_4) : (((!(((-81 ? 2 : 18446744073709551614))))))));
                            arr_8 [i_0] [i_0] [i_0] [i_0] = var_2;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_14 = (((var_12 ? var_7 : var_8)));
                            var_15 = (((var_1 ? var_12 : var_3)));
                            var_16 = var_1;
                            var_17 ^= ((~(((var_0 + 9223372036854775807) << var_5))));
                            var_18 = (((18446744073709551613 ? 18446744073709551606 : 18446744073709551606)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_19 = (((((var_1 ? var_11 : var_7))) ? ((var_3 << ((((var_6 ? var_3 : var_2)) - 60)))) : var_3));
                            var_20 -= (((var_0 > var_5) ? ((var_11 ? var_8 : var_12)) : ((((((15991 ? 16004 : 12047085054434023062))) ? 1 : ((-10822 ? 3865574237 : -15993)))))));
                            var_21 = ((var_5 && var_10) - ((var_4 ? var_2 : var_11)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_22 = ((-((var_8 ? var_10 : var_3))));
                            var_23 = (((var_1 + var_5) ? (((26594 + 15991) ? var_6 : ((var_0 ? var_12 : var_0)))) : (((var_0 ? var_1 : var_4)))));
                            var_24 = (((((var_1 ? var_9 : var_0))) ? ((26594 ? 18446744073709551609 : 17861)) : (~var_8)));
                            var_25 = ((((var_10 ? var_5 : var_11)) <= ((((((~38941) + 2147483647)) >> (((var_4 + var_8) - 10078526677018719911)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 9;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_26 = var_1;
                            var_27 = (((((var_5 ? -var_3 : var_11))) ? (((var_12 & var_4) ? var_8 : (var_10 + var_0))) : (var_7 + var_6)));
                            var_28 += (((((var_7 ? var_12 : var_3))) & ((var_2 ? var_11 : var_1))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 11;i_16 += 1)
                        {
                            {
                                var_29 = ((~((~((var_1 ? var_2 : var_8))))));
                                var_30 = var_7;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_17 = 1; i_17 < 9;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 9;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 12;i_19 += 1)
                        {
                            {
                                arr_51 [i_17] [i_17] = ((-((var_8 ? var_5 : var_8))));
                                var_31 = (((var_10 == var_12) % var_1));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 9;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 12;i_21 += 1)
                    {
                        {
                            arr_59 [i_8] [i_20] [i_20 - 1] [i_20] = ((var_7 ? ((var_6 ? (((var_7 ? var_6 : var_4))) : ((var_6 ? var_8 : var_4)))) : (((var_1 ? var_12 : var_12)))));
                            var_32 = ((18922 ? 14368 : 26580));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_22 = 0; i_22 < 17;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 17;i_24 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 17;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 17;i_26 += 1)
                        {
                            {
                                var_33 = (((((26595 ? 38921 : -17862))) ? (((((var_11 ? var_7 : var_6)) == var_5))) : ((var_2 ? var_3 : var_2))));
                                var_34 = (-(((!(var_8 > var_1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_27 = 2; i_27 < 16;i_27 += 1)
                    {
                        for (int i_28 = 4; i_28 < 15;i_28 += 1)
                        {
                            {
                                var_35 = var_6;
                                var_36 = (((((var_2 ? var_0 : var_8))) ? (var_10 + var_7) : (~var_4)));
                                var_37 = ((((((((var_4 ? var_12 : var_6))) ? var_0 : (!var_6)))) ? (~var_3) : var_1));
                                arr_79 [i_27 - 1] [i_24] [i_24] [i_27] [i_28 + 2] = ((((15991 ? 15991 : -2819799213197192562)) == (1072693248 - 38130)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_29 = 2; i_29 < 16;i_29 += 1)
                    {
                        for (int i_30 = 2; i_30 < 15;i_30 += 1)
                        {
                            {
                                arr_85 [i_24] [i_23] [i_23] [i_23] [i_23] [i_22] = ((((var_0 ? var_1 : var_9))) ? (var_7 + var_0) : (~var_8));
                                var_38 = ((var_3 + var_12) ? (var_4 <= var_7) : ((var_10 ? var_0 : var_2)));
                                var_39 = (((((((var_8 ? var_0 : var_7))) ? var_9 : var_11)) >> var_9));
                                var_40 = ((18922 ? ((18446744073709551613 ? (~17853) : 0)) : (!0)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_31 = 3; i_31 < 14;i_31 += 1)
                    {
                        for (int i_32 = 0; i_32 < 17;i_32 += 1)
                        {
                            {
                                var_41 = ((~((var_10 ? var_2 : var_7))));
                                var_42 = ((((var_2 ? var_5 : var_8)) <= (((var_7 ? var_12 : var_1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
