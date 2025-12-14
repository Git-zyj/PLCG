/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (((((-16 + 24260) ? var_8 : 0))) <= (((((-3003985498905031180 ? -13 : -117))) ? var_8 : (var_7 / var_8))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = ((((((((var_14 ? 0 : var_14))) ? 0 : var_8))) ? var_4 : 13436693816068487678));
                    var_17 -= (((((((var_0 ? var_7 : 104)) ^ (0 <= -7459)))) <= ((-((8141 ? var_0 : 22421))))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_18 = var_10;
                        var_19 = var_11;
                        var_20 = (((var_2 <= -690349400) < ((var_9 / (0 - var_13)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_21 = var_4;
                        var_22 = (((-1096712183 >= 990361486) ? (1 || var_9) : 12597766704591368852));

                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            var_23 = 4338;
                            var_24 = (max(var_24, -8157));
                            var_25 = -var_9;
                            var_26 = (18446744073709551615 <= var_8);
                            var_27 = (var_0 > 1423589653);
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_15 [i_1 - 1] [i_1 + 1] [1] [i_1 - 1] [i_1] = (~var_6);
                            var_28 = 8141;
                            var_29 = var_5;
                            var_30 = (((var_1 * var_14) * ((0 ? var_13 : 15148341515714108426))));
                        }
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_31 = ((var_5 ^ ((((!(((-1 ? -3 : -5483236048059297781)))))))));
                            var_32 = (max(var_32, (((((var_8 ? var_1 : var_7)) > var_4)))));
                        }
                        var_33 = ((((((1 ? 15148341515714108426 : 24064)) > 12)) ? ((((1 + -9) || (1 % -4848452613683537531)))) : var_6));
                    }
                    arr_21 [i_1] [i_1] [i_0] [i_1] = ((3298402557995443189 >= (((((var_4 ? 268435455 : -4507989388991510482)) - (var_8 >= 13825))))));
                    arr_22 [i_1] [i_1] [i_2] = (((~var_12) ? 19 : -1));
                }
            }
        }
    }
    #pragma endscop
}
