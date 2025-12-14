/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_13 = (min((min((~9612551806839373459), (min(0, (arr_2 [i_1]))))), ((min(28810, -1)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_14 = (((arr_4 [i_1] [i_1]) ^ (arr_4 [i_3] [i_1])));
                        arr_12 [5] [1] [i_1] = (((arr_2 [i_2]) > (arr_5 [i_0] [i_1] [i_3])));
                        var_15 = -var_0;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_16 *= (min((2147483647 / var_2), ((((arr_10 [i_0] [i_0] [i_0] [10] [i_0] [4]) << (var_2 + 2940685441719698272))))));
                            var_17 = (((((~(var_5 & var_7)))) ? 18446744073709551589 : (((((min((arr_5 [i_0] [i_0] [i_2]), var_9))) ? (max(var_11, (arr_8 [i_0] [i_0] [i_5]))) : (~var_0))))));
                            var_18 = ((-(((!(1 >= 9223372036854775807))))));
                            var_19 = (~var_9);
                            var_20 = var_0;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_21 [i_6] [i_4] [i_2] [i_1] [0] = 2916;
                            arr_22 [i_6] = 8834192266870178174;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_4] [i_4] = 701169155077112534;
                            arr_26 [i_4] [i_0] [i_2] = var_12;
                        }
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= (arr_17 [i_0] [i_1] [i_2] [i_4]);
                        var_21 = (max(var_21, (((min((((var_10 < (arr_4 [i_0] [i_4])))), -1184541664))))));
                    }
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    arr_30 [5] [i_0] [i_0] = (var_4 - -2672150130987568265);
                    var_22 = ((-7092 > (arr_23 [21] [i_1] [i_0] [i_8] [i_1])));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    arr_34 [i_0] &= (min((((min(6778800967524744174, -1)))), (var_9 | var_12)));
                    arr_35 [i_0] [i_1] [i_1] [i_1] = (min(1048575, ((13269771055983858373 ? 11445217139777969711 : (min(13269771055983858363, var_3))))));
                }

                /* vectorizable */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    arr_39 [i_0] [i_0] [i_0] = (--1730635035);
                    arr_40 [i_10] [i_10] [i_1] [11] = (arr_18 [i_1] [i_1] [i_10] [i_1]);
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    var_23 = -7001526933931581905;
                    var_24 = (((arr_42 [i_11] [i_1] [9] [i_0]) & var_11));
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    arr_48 [i_0] = (min(-2934, 2));
                    var_25 ^= (((4194304 ? var_3 : (-2147483647 - 1))));
                    arr_49 [i_1] [i_1] [i_1] [i_0] &= (arr_13 [i_0] [i_0] [i_1] [i_12]);
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    arr_54 [i_0] [13] = var_0;
                    arr_55 [i_0] [i_0] [i_0] = ((-356225469 ? 45290 : 0));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                arr_62 [i_14] [i_14] [3] [i_1] [23] &= (57727 ? -31744 : 5779903962926144115);
                                var_26 = 122128159818771577;
                                arr_63 [12] [12] [i_14] [8] = (((7 ? -1 : var_11)) + 251);
                                var_27 = (((var_8 ? 7001526933931581922 : (arr_24 [i_0] [i_0] [i_13] [i_14] [i_14]))));
                            }
                        }
                    }
                    var_28 = var_5;

                    for (int i_16 = 2; i_16 < 23;i_16 += 1)
                    {
                        arr_67 [i_0] = 4316067763227509713;
                        arr_68 [i_0] [i_1] [i_1] [i_16] = -356225464;
                        var_29 = (((~14088766685477759895) % (~14867100918134319063)));
                        var_30 = ((-(arr_43 [i_1] [i_1])));
                    }
                }
                arr_69 [i_0] = (arr_66 [i_0] [8] [i_1]);
            }
        }
    }
    var_31 = ((var_2 ? var_12 : var_8));
    #pragma endscop
}
