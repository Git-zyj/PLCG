/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 += ((min((var_1 | var_1), -15762598695796736)));
                var_17 += var_9;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 24;i_4 += 1)
            {
                {
                    arr_13 [i_3] [i_3] [i_3] = 126;
                    var_18 ^= ((!(~0)));
                    arr_14 [i_3] [i_3] [i_3] [i_3 + 2] = (!var_9);
                    var_19 = (max(var_19, var_13));
                    arr_15 [i_3] = (~0);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = (var_15 & var_14);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                {
                    var_20 = ((~(-14211 < var_2)));
                    var_21 += 939524096;
                    var_22 ^= ((!(var_4 ^ var_10)));

                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        var_23 = (max(var_23, var_0));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_31 [i_7] [i_6] [i_6] &= (!-116);
                            var_24 *= (+-2814);
                            arr_32 [i_9] [i_9] [i_8] [i_9] [i_9] [i_9] = var_10;
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] &= -3399418602182996319;

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_41 [i_10] = var_4;
                            var_25 = var_13;
                            arr_42 [i_10] = -5;
                        }
                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            var_26 = (min(var_26, (((!(3 & 0))))));
                            arr_46 [i_10] [i_6] [i_10] [i_7] [i_10] [i_10] [i_12] = 2814;
                            arr_47 [i_5] [i_10] [i_7] [i_10] [i_12] [i_5] = var_14;
                        }
                        for (int i_13 = 3; i_13 < 16;i_13 += 1)
                        {
                            var_27 = var_8;
                            var_28 = (min(var_28, -2159274169));
                        }
                        arr_52 [i_5] [i_6] [i_7] [i_10] = 3399418602182996338;
                    }
                }
            }
        }
        arr_53 [i_5] [i_5] = (((((!(!var_0)))) < (max(-42, (var_2 | 12870)))));
        var_29 = (max(var_29, ((max((!-9055), var_7)))));
        var_30 = 4031579494;
    }
    for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
    {
        arr_56 [i_14] = (~var_14);
        var_31 = (min(var_31, ((max((((var_15 & var_8) & var_3)), ((((!-124) - -127))))))));
    }
    var_32 &= (max(var_3, ((max((2007494207 ^ var_1), 47)))));
    /* LoopNest 3 */
    for (int i_15 = 2; i_15 < 19;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 19;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 22;i_19 += 1)
                        {
                            {
                                var_33 = var_10;
                                var_34 *= ((var_10 != (((min((!2048), 24))))));
                            }
                        }
                    }
                    var_35 -= var_0;
                    var_36 = (min(var_36, (((62711 || (!var_8))))));
                    arr_74 [i_16] [i_16] [i_16 - 1] [i_16] = -var_13;
                }
            }
        }
    }
    #pragma endscop
}
