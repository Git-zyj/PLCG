/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 ^= (min(22293, ((549755813887 ? ((-15008 ? -111 : 15)) : ((3506 ? 62029 : -3398))))));

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_10 [i_3 + 1] [i_3 - 1] [i_3] [i_1] [i_3 - 1] [i_3 + 1] = ((14986 ? 15 : ((((14979 ? 10723 : 3499))))));
                        arr_11 [i_0] [16] [i_2] [i_2] [i_3 + 1] &= ((((-(-32767 - 1)))));
                        var_20 = (max(var_20, 1754124481));
                        var_21 = (min(13690110768621668454, ((max(-14987, 14986)))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_22 ^= (max((max(-15008, 1)), (((3499 ? 1 : 62368)))));
                                arr_19 [i_1] [i_4 - 1] [i_2] [i_1] [14] [i_1] = 3506;
                                var_23 += (max(((40145 ? -15008 : 3482)), (((-127 - 1) ? 3168 : -28348))));
                                var_24 = (min(var_24, (((~((3470 ? ((max(37640, 7559))) : 1)))))));
                                var_25 = (max(var_25, 7573));
                            }
                        }
                    }
                }
            }
        }
        var_26 *= ((max(268435455, -2448)));
        var_27 = (min((((max(-14, 56856)))), ((((max(-268435456, 18446744073709551615))) ? 7721467228258772480 : -16383))));
        var_28 -= (((min((max(49159, -100), 3168)))));
    }
    var_29 += ((var_10 ? -4448189563225034558 : 16369));
    var_30 ^= -49609672035210445;
    var_31 = 1;
    #pragma endscop
}
