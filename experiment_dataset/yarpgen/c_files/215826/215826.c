/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (min(var_3, var_11));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = (((~var_0) ? (((max(65522, 30707)))) : ((43264 ? 21 : var_8))));
                    arr_9 [i_0] [i_0] [i_0] = 65533;

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_14 [i_0] [i_2 - 2] = (((4294967295 & ((1 ? 1 : 54346)))));
                        arr_15 [6] [6] [10] = 0;
                        var_15 = (0 + 65522);
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_18 [i_4] = 1;

        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            arr_21 [i_4] [i_5 + 1] = (((1 % var_2) >> ((((16250679178794613079 ? 1142 : 4294967295)) - 1130))));
            var_16 = 16250679178794613079;
            arr_22 [11] [i_5] [i_5 - 1] &= 0;
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_28 [6] [0] [6] [i_7 + 2] [i_4] [i_5] = (255 | 115);
                        var_17 = var_4;
                    }
                }
            }
            var_18 = 1;
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_19 |= ((var_2 ? 240 : 0));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_39 [10] [i_8] [10] [1] [i_11] [i_8] [i_8] = (~1);
                            var_20 = (min(var_20, var_9));
                        }
                    }
                }
                var_21 = (max(var_21, 1838026109));
            }
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                arr_43 [i_4] [i_8] [i_12 - 1] [i_8] = (((var_10 & var_4) ? ((var_4 << (3840668836 - 3840668821))) : 21981));
                var_22 = -7089;
            }
            var_23 *= (var_2 + 3327103690);
            var_24 = var_8;
            var_25 *= ((~var_11) ? (1075843489 <= 58309) : (var_6 % 1));
        }
        arr_44 [i_4] &= var_2;
    }
    for (int i_13 = 0; i_13 < 11;i_13 += 1)
    {
        var_26 *= min(var_2, ((var_4 * (((0 ? 39549 : 65535))))));
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 3; i_15 < 10;i_15 += 1)
            {
                {
                    arr_53 [i_13] [i_13] = ((0 << (min(var_4, (565791601 <= 65535)))));
                    var_27 -= ((max(56, 240)));
                    var_28 = 1450093826;
                    var_29 ^= ((min((min(48984, 39536)), ((min(1, 255))))));
                    var_30 = ((max(-7089, 3)));
                }
            }
        }
    }
    #pragma endscop
}
