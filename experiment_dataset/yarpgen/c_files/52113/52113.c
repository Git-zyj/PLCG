/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_0, ((((max(var_5, var_1))) ? var_7 : ((3437312750 ? 3437312750 : 857654553))))));
    var_15 = ((((((857654543 / var_7) ? 14046090143340231008 : var_2))) ? var_5 : (min(var_4, (max(3437312753, var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_16 += (-(((!(arr_2 [i_1 - 3] [i_0 + 3])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = 202;
                                var_18 += 3437312750;
                                arr_12 [i_4] [i_2] [1] [0] [i_1] [i_2] [i_0] = var_1;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_19 = ((var_12 ? ((var_6 ? ((255 ? 18446744073709551615 : 17602476923969724042)) : (min(var_11, -5)))) : (((((max(-25271, 33216)))) | (max(9223372036854775806, 1))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((min(((~((7535 ? 1 : 1364050641)))), (~3437312758))))));
                                arr_22 [i_5] [2] [i_5] = ((10419439425529680824 * ((1 ? 231 : 17602476923969724074))));
                            }
                        }
                    }
                    var_21 = ((min((3868840772610067451 * 844267149739827591), (max(var_1, 0)))) * (min(-var_0, (min(844267149739827578, 1)))));
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_22 = (max(var_22, ((((((857654543 ? var_6 : var_3))) ? (arr_19 [i_0 - 2] [i_0 + 3] [i_1 - 4] [i_1 - 4] [i_8]) : 14577903301099484164)))));
                    var_23 += var_9;
                    var_24 = (((~190) ? var_12 : (arr_16 [i_1] [i_8] [14] [i_1])));
                }
                var_25 *= ((min(var_0, 1)));
                arr_27 [i_0] = (((min(0, ((var_8 ? 1 : 6254112484037472296))))) ? (((min((var_11 == 14577903301099484165), (max(15, 29678)))))) : 14577903301099484140);
            }
        }
    }
    #pragma endscop
}
