/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2 + 2] [i_1] [i_0] = var_9;

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            var_16 -= ((((~var_14) ? var_2 : (216976420 / var_11))));
                            arr_14 [i_0] [i_0] [i_0] = 11040;
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] [i_1] = (((max((max(var_7, var_6)), (var_3 / var_6))) / 65));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_19 [i_1] [i_1] [i_2] [i_0] = (min(82, 1));
                            arr_20 [i_0] [i_0] [i_1] [i_2 + 1] [i_3] [i_5] [i_0] = (max((min(4003668423691367318, (((-65 ? var_5 : 1))))), -70));
                        }
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            arr_25 [i_6] [i_0] [i_0] [i_0] [i_0] = var_5;
                            var_17 = (var_0 < 127);
                        }
                        arr_26 [i_1] [i_0] [i_0] [i_1] = var_14;
                        arr_27 [i_0] [i_0] [i_0] = ((((~60) - (max(78, var_2)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        arr_31 [i_0] [15] [i_2 - 1] [i_1] [i_0] = ((-77 ? 36 : 58955));
                        var_18 ^= ((((var_13 >> (65 - 26))) * (569729980 > 3394952919)));
                        arr_32 [i_0] [i_1] [i_1] [i_7 - 1] = (((((var_10 ? 113 : 54754))) ? (((38733 ? var_12 : -1))) : ((7172 ? var_13 : var_9))));
                    }
                    arr_33 [i_0] [i_1] [i_1] [i_2] = -242320683;
                    var_19 *= (max((min((63 | var_15), var_13)), (!1721968241)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                arr_38 [i_8] = var_0;
                arr_39 [i_8] [i_8] &= (((((-(7172 / var_3)))) / (((65522 * var_8) ? 33364 : 75))));
                arr_40 [i_9] [i_8] = 5705509521280991294;
                var_20 &= max((((max(2, 65535)) - 100)), (!0));
            }
        }
    }
    var_21 *= ((((((1 > 12604736625258849861) == ((-78 ? 25378 : 18446744073709551615))))) >> (6580 - 6570)));
    #pragma endscop
}
