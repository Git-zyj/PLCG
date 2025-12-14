/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_3 < 192);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [19] [i_2] [i_0] [i_3] [i_2] = ((((min((min(0, 23)), 10))) && (((127 ? ((max(224, 133))) : ((46003 ? 23 : (-127 - 1))))))));
                            var_15 = (((((var_1 ? (max(var_5, var_8)) : 536870911))) & 2289412714));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_1] [i_1] [i_1] = (((4294967295 & 11865) < 7048807356997582524));
                                var_16 = (131 == 1);
                                var_17 = (7287167517516489215 + 2147483584);
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_18 = -var_8;
                        var_19 = (var_8 ? -var_2 : (1 < 206));

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_20 -= ((-((var_5 ? 96 : var_8))));
                            var_21 = 3738053781;
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_22 |= ((var_7 << (var_9 - 2677596272)));
                            var_23 = 0;
                            var_24 = ((var_1 == (~var_12)));
                            var_25 = (((~245) + ((22 ? var_8 : 108))));
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_10] = 16383;
                            var_26 = (((var_9 ? 1 : var_3)));
                            var_27 = ((0 << (((var_0 & var_3) + 5239841732859627321))));
                        }
                        var_28 = 65535;
                    }
                    for (int i_11 = 4; i_11 < 19;i_11 += 1)
                    {
                        var_29 = ((var_10 == (2147483628 | 232)));
                        var_30 = var_5;
                        arr_37 [i_0] [i_1] = (((-7369886648646895486 - 127) + (18 / var_13)));
                        var_31 = (199 ? 2147483711 : 10);

                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            var_32 = (((((9057396903263636022 ? 192 : 1))) ? var_9 : 9223372036854775807));
                            var_33 = -9223372036854775798;
                            var_34 -= 65546;
                        }
                    }
                }
            }
        }
    }
    var_35 = ((var_11 ? ((min(var_7, var_8))) : (((var_0 % var_6) + ((min(var_4, -25019)))))));
    var_36 = (((((9223372036854775800 << (((2147483643 >= 249) - 1))))) != var_13));
    #pragma endscop
}
