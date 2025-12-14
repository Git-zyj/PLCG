/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [16] [16] [i_2] = (((((var_3 ? var_6 : 0))) ? (252 && var_11) : (-19198 - -19198)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (((((5 ? var_12 : var_12))) - (2072684625469560013 - 1)));
                                var_16 = 1;
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        var_17 = -var_8;

                        for (int i_6 = 3; i_6 < 23;i_6 += 1)
                        {
                            var_18 = (!18446744073709551611);
                            arr_18 [i_5] [i_5] = (4 ? (~19185) : (~var_3));
                        }
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            var_19 = (((((9899 ? -1 : 30892))) ^ (((var_0 % 1) ? (18446744073709551611 - var_9) : ((((-631864129 + 2147483647) >> 1)))))));
                            var_20 = (var_9 == 19195);
                            var_21 *= ((-((2 ? var_12 : 1))));
                        }
                        var_22 *= ((255 ? (-9899 - var_9) : -0));

                        for (int i_8 = 3; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, (((((((14 > 2969130448) ? var_4 : (4294967295 + var_0)))) ? var_8 : var_8)))));
                            var_24 = -19198;
                            var_25 = (((((var_2 ? (28672 - var_14) : -645244194543040937))) && ((((((-29726 + 2147483647) >> (var_4 + 563790861))) ^ var_1)))));
                        }
                        for (int i_9 = 3; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_26 *= var_11;
                            arr_28 [i_0] [11] [i_0] [11] [i_0] [i_5] = ((((((var_4 ? var_12 : (-2147483647 - 1))) ^ (-29726 >= var_3))) >= 30));
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            var_27 = (0 < var_6);
                            var_28 = ((-16962 ? 4294967295 : 62));
                            var_29 = ((var_1 ? -9223372036854775793 : 5));
                        }
                        for (int i_11 = 1; i_11 < 24;i_11 += 1)
                        {
                            var_30 = (max(var_30, (((5 || var_10) ? (!var_1) : ((var_8 ? -122 : 107))))));
                            var_31 += (~6398768046067729419);
                            var_32 *= (-var_11 + 6718);
                            arr_36 [i_5] [i_1] [3] [i_1] [i_5] = ((((var_0 ? (var_14 > 250) : ((var_10 ? 1 : var_7)))) >= ((var_8 ? var_8 : 216))));
                        }
                        var_33 = ((((((var_9 & var_0) ? 0 : (~6398768046067729405)))) & 4164264790443568172));
                    }
                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 22;i_12 += 1)
                    {
                        var_34 = 6398768046067729406;
                        var_35 -= -0;
                        var_36 = (((-13 ? var_9 : var_3)));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_37 = var_11;
                        var_38 += ((-(var_12 % -1)));
                        var_39 += (~13);
                        var_40 = var_5;
                    }
                    var_41 &= ((76 ? 0 : 4164264790443568176));
                    var_42 = -26926;
                }
            }
        }
    }
    var_43 = var_2;
    var_44 = var_2;
    #pragma endscop
}
