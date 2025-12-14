/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(((max(4069446610, (var_4 == var_11)))), (max((1 != 1), (var_5 / var_0)))));
                var_14 *= ((((max(-4890, 57344))) << (((max(((max(var_7, var_3))), (max(var_4, var_13)))) - 18446744073044709450))));
                var_15 *= ((min(4889, -1351702843)));
            }
        }
    }
    var_16 = 4885;

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    var_17 -= (((var_9 + 9223372036854775807) << (((var_2 + -var_6) - 3432416564))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_18 = ((1 | ((max(196, var_2)))));
                                arr_23 [i_3] [i_3] [7] [i_6 - 1] = ((((2665529174 / (max(8, var_5)))) >> (5011582423987652288 - 2153776790)));
                                var_19 = (max(var_19, 2473930221994840801));
                                var_20 = var_5;
                            }
                        }
                    }

                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        var_21 = (max(var_21, (67 & var_9)));

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_22 = (max(var_8, (var_8 / 65)));
                            var_23 = (min(var_23, ((min((((!((max(1, var_13)))))), var_7)))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_24 = 3;
                            var_25 = var_9;
                            arr_32 [i_3] = 1;
                            arr_33 [i_3] [i_7] [i_7] [i_7] [i_4] = (var_5 % var_12);
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            arr_37 [5] [i_3] [i_2] = 4294967292;
                            arr_38 [i_2] [i_3] [i_4] [i_4] [i_4] = (max((~var_10), (max(var_9, var_5))));
                            var_26 = (!var_0);
                            var_27 = ((2625171522 && (~var_10)));
                            var_28 = (min(var_28, ((min(((((1893419197 / 1) / var_12))), var_1)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_29 += (((var_8 + 2147483647) >> (var_5 - 1918281980234716641)));

                        for (int i_12 = 1; i_12 < 21;i_12 += 1)
                        {
                            var_30 = (min(var_30, (-1 != 7020919559195954159)));
                            var_31 &= (var_9 + 200);
                        }
                        var_32 = (max(var_32, (((var_7 + (var_1 - 1))))));
                    }
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        var_33 -= (((((min((-5032486180405811777 >= var_9), (!-13270))))) % ((var_13 << (var_10 + 1682816035)))));
                        arr_49 [i_2] [2] [i_4 - 1] [i_3] = (~var_0);
                        var_34 ^= (6 != var_9);
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        var_35 = (min(4878, 14));
                        var_36 += (!var_12);
                    }
                    arr_53 [i_3] [i_3] [i_2] [i_3] = -14;
                }
            }
        }
        arr_54 [i_2] = (((12596942001361847963 >= -15494) % var_0));
    }
    #pragma endscop
}
