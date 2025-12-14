/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                var_18 = (arr_1 [i_0] [i_0]);
                arr_6 [i_0] [i_1] = (((arr_5 [i_0] [i_1 + 2]) / (arr_5 [i_0] [i_1 + 4])));

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_19 = (arr_5 [i_0] [i_1 - 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = var_6;
                                var_20 = ((108 ? (((-388686552032881540 ? 1 : 18521))) : ((max((max(var_14, var_8)), var_9)))));
                                arr_14 [0] [i_4] [i_4] = var_0;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_21 = var_5;

                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        var_22 *= (arr_12 [i_0] [i_1 + 4] [i_0] [i_5] [i_6]);

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_23 = ((-(((4631025715542887475 / var_10) ? ((max(var_12, 51))) : ((var_2 ? var_10 : 0))))));
                            var_24 = ((arr_11 [i_7] [i_6 - 2] [i_5] [i_0] [i_0]) & (min((min((arr_5 [i_1] [i_0]), var_0)), (~var_14))));
                            var_25 = ((var_12 ? var_1 : (513857898 && 1)));
                            var_26 = (~var_9);
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    var_27 ^= ((var_3 && (arr_20 [i_0] [0] [i_8 - 1] [i_1 + 2] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 6;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_30 [i_8] [i_1 - 1] [i_8 + 1] [i_8] [2] [i_8 + 1] = (arr_16 [i_0] [i_1] [i_8 - 1] [i_9]);
                                arr_31 [i_0] [i_1] [i_8] [i_0] [i_8] [i_8] [i_10] = -var_7;
                                arr_32 [i_8] [i_1] [i_8 - 1] [i_9 + 2] = (arr_12 [i_10] [i_8 + 1] [i_1 + 3] [i_9 + 2] [i_10]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    arr_35 [i_1] [i_11] [i_1] [i_1] = ((-7736770081713904963 >= (arr_33 [i_11] [i_11] [i_11] [i_11 - 2])));

                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        var_28 += ((((((arr_1 [i_12] [i_12 - 2]) < (arr_11 [i_12] [i_11] [i_0] [i_0] [i_0])))) >> (arr_8 [i_0] [i_0] [i_11] [i_11])));
                        arr_38 [i_0] [i_11] = (arr_33 [i_1 - 2] [i_11 + 1] [i_11] [i_11]);
                        arr_39 [i_0] [i_11] = (arr_5 [i_11 - 1] [i_1 + 3]);
                        var_29 -= (arr_21 [i_1] [i_1] [i_12] [9] [i_12] [i_1]);
                        var_30 += (32767 && 37132);
                    }
                    for (int i_13 = 2; i_13 < 8;i_13 += 1) /* same iter space */
                    {
                        var_31 *= 28145;
                        var_32 = ((var_10 ? var_3 : ((var_14 ? var_5 : 1))));
                        arr_44 [i_11] [i_1] [i_11 - 2] [i_11] = var_4;
                        arr_45 [i_0] [i_1 + 4] [i_11] [9] = ((var_6 ? var_10 : var_4));
                        var_33 &= ((!(arr_10 [i_0] [i_0] [i_1 + 4] [6])));
                    }
                    for (int i_14 = 2; i_14 < 8;i_14 += 1) /* same iter space */
                    {
                        var_34 -= var_4;
                        var_35 = (~var_13);
                    }
                }

                for (int i_15 = 1; i_15 < 9;i_15 += 1)
                {

                    for (int i_16 = 1; i_16 < 9;i_16 += 1)
                    {
                        var_36 = (arr_49 [i_15 + 1] [i_1 + 1]);

                        for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
                        {
                            var_37 = (57 % 3738187163);
                            arr_56 [i_0] [i_0] [i_0] [i_15 + 1] [i_0] [i_16] [i_17] = ((((((-42 <= 237) ? ((((!(arr_46 [i_17] [i_1 - 2] [i_1 - 2] [i_1 - 2]))))) : (min(var_9, (arr_49 [i_1] [i_17])))))) ? (((var_14 <= (((!(-127 - 1))))))) : (-1287138274 <= var_6)));
                            arr_57 [i_0] [i_0] [i_15 + 1] [i_16] [i_17] |= var_11;
                            var_38 = ((((!(arr_54 [5] [i_1])))) - ((524287 ? var_8 : var_13)));
                        }
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 10;i_18 += 1) /* same iter space */
                        {
                            var_39 ^= (arr_18 [i_0] [i_1] [i_15] [i_18]);
                            var_40 *= (((arr_46 [i_0] [i_15 + 1] [i_16 - 1] [i_18]) ? (((!(arr_3 [2] [i_1 + 1] [i_16])))) : (arr_27 [i_1] [i_15 - 1])));
                        }
                        for (int i_19 = 0; i_19 < 10;i_19 += 1) /* same iter space */
                        {
                            var_41 += (arr_48 [i_0]);
                            var_42 = (max((arr_18 [i_1] [i_1] [i_16] [i_19]), 20340));
                            var_43 = (((arr_40 [i_15 + 1] [i_1 + 3]) ? ((var_9 + (max(-851346978, var_13)))) : ((((arr_59 [i_0] [i_1] [i_15] [i_16] [i_19] [i_16]) >= ((var_10 ? 149 : var_3)))))));
                            arr_65 [i_16 + 1] = ((-(1161693028622663512 / 1068178699)));
                            var_44 += 108;
                        }
                        arr_66 [1] [3] [i_15 + 1] [i_16] = (arr_15 [i_0]);
                        var_45 *= (!-285046549);
                    }
                    arr_67 [i_15] [4] [i_0] = (arr_26 [i_15 + 1] [i_0] [i_0]);
                    var_46 = ((((max(var_1, (((arr_12 [i_0] [i_0] [i_1] [i_1] [i_0]) ? var_9 : var_15))))) || ((-836018917531844535 && ((min(var_0, var_8)))))));
                    arr_68 [i_1] [i_1] [i_1] = ((((!(arr_50 [i_1 + 2] [i_1] [i_1 - 1] [i_15 + 1]))) ? (((4159141927064390630 && ((min(var_1, var_12)))))) : ((((arr_63 [i_1 + 1] [i_15 - 1]) || var_1)))));
                }
            }
        }
    }
    var_47 = (max(((var_3 + (min(var_5, var_17)))), (max(var_4, var_14))));
    var_48 |= (((!var_9) / (((-775271973 || (var_3 > var_3))))));
    #pragma endscop
}
