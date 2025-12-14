/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += 28642;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (((7943954899903385330 * var_4) % (~1)));
        var_21 = (max(var_21, (((((1 * 1) * 46955)) < ((((~-17) > 230)))))));
        arr_3 [i_0] = (!32764);
    }
    var_22 = var_2;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_23 ^= (var_15 % var_15);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_20 [i_1] [i_2] [i_3] [i_4] [i_5] = -9;
                                var_24 = (((16384 * 160) ? (var_6 > var_13) : var_10));
                                var_25 ^= var_17;
                                var_26 = (min(var_26, -126));
                                var_27 = (~1);
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_28 = (max(var_28, (var_6 / var_0)));
                        var_29 = var_12;
                        arr_25 [i_3] = ((var_14 ? (0 < 147) : -1));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_30 = (min(var_30, (var_3 < var_13)));
                            arr_30 [i_1] [i_2] [i_1] [i_3] [i_3] [i_8] [i_2] = var_1;
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_31 ^= var_12;
                            var_32 |= ((var_17 << (var_13 - 3949972166532707620)));
                            var_33 = (min(var_33, 204));
                            arr_33 [i_9] [6] [i_2] &= var_1;
                        }

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            arr_38 [i_1] [i_2] [i_3 + 1] [i_3] [i_10] = var_16;
                            arr_39 [i_1] [i_2] [i_3] [i_7] [i_10] = var_3;
                            arr_40 [i_3] [i_7] [i_3] [i_3] = ((52 ? var_17 : 15));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_34 += var_11;
                            arr_44 [i_11] [i_3] [i_3 + 1] [i_3] [i_1] = var_2;
                        }
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_52 [i_3] [i_12] [i_3] [i_3] [i_2] [i_3] = ((((-89 + 2147483647) << (3642496740 - 3642496740))) / var_10);
                            arr_53 [i_1] [i_2] [i_3 - 2] [i_1] [i_13] [8] |= (var_18 * var_0);
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_35 = var_8;
                            var_36 = var_9;
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_37 = (var_9 * var_8);
                            var_38 = (min(var_38, (((var_4 | (-135474744 == var_16))))));
                            arr_61 [i_3] [i_3] [i_3] [i_12] [i_15] [i_1] [i_3] = ((var_3 ? var_3 : 48));
                            var_39 ^= var_13;
                        }
                        var_40 = ((var_0 >> (var_15 - 31661)));
                        var_41 *= ((-(var_17 % var_3)));
                    }
                }
            }
        }
        arr_62 [i_1] |= ((var_4 < (var_0 - 54)));
    }
    #pragma endscop
}
