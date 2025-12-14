/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_21 ^= 13852;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] = (~var_17);

                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            arr_14 [i_4] [i_4] [i_0] = 2069336757;
                            var_22 = (58302 - -643867608);
                            arr_15 [i_0] [i_1] [i_4] [i_3] [i_4] [i_1] = (!53);
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_23 = (7261 % 7209);
                            var_24 = (14392 % var_7);
                            arr_18 [i_5] [i_5] [8] [i_3] [i_5] [i_5] [i_5] = (((var_13 - var_10) ? var_10 : 288230376151711743));
                            var_25 = (max(var_25, var_6));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_26 -= (10334519460457412971 != 14392);
                            arr_21 [i_6] = var_16;
                            var_27 = (((~14392) - (var_8 <= 14644)));
                        }
                        arr_22 [i_0] = (((((var_8 + 2147483647) << (54992 - 54992))) & var_5));
                    }
                }
                var_28 = (max(var_28, ((min(18158513697557839873, 7138605427533841142)))));
            }
        }
    }

    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        arr_25 [0] = (((((9531185223129988545 ? 14392 : (~-13300)))) == (+-288230376151711743)));
        var_29 += (((var_10 <= 13299) % ((((~2147483647) || 72057576858058752)))));
        arr_26 [i_7] [i_7] = (!((min(288230376151711742, var_13))));
        var_30 ^= (min((((1 != ((var_3 ? var_13 : 0))))), ((((-6472 ? 18158513697557839876 : 54557)) << (((~2239506875765861881) - 16207237197943689690))))));
        var_31 = (((-33 | (16207237197943689738 ^ 2872))));
    }

    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_32 ^= (((var_4 - 127) + ((max(0, var_10)))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_33 = (!var_5);
                    var_34 ^= (min((max(-199257074, 288230376151711731)), var_19));
                    var_35 = var_3;
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_36 = (min(var_36, ((min((((min(18158513697557839876, 117440512)))), ((min(4294967295, var_0))))))));
                                var_37 = -65535;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
