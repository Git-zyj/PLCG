/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = -1;
                                arr_13 [i_0] [i_4] [i_1] [13] [i_0] = var_15;
                                arr_14 [i_0] [i_0] [i_1 - 1] [i_2 - 2] [i_3] [i_4] [i_0] = (max((max((arr_6 [3] [i_0] [i_0] [i_1 + 1]), (arr_6 [i_0] [i_0] [i_0] [i_1 - 1]))), (((!(arr_5 [i_0] [i_0] [i_0]))))));
                                arr_15 [i_2] [i_0] [i_4] [i_3] [i_4] = 2735868053266808646;
                                var_19 = (min(var_19, 1));
                            }
                        }
                    }
                }
                var_20 = (min(var_20, ((((((-4053346419198482631 ? (((arr_2 [i_0 - 1]) + 0)) : (((-13537 ? 2144372093 : 1)))))) ? ((692958489 ? -3424427608967188351 : (arr_10 [i_1] [i_1 - 1] [i_1 - 2] [i_0 - 1] [i_0] [i_1] [i_1 - 2]))) : (((0 + (arr_1 [i_1])))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_22 [i_6] [i_0] [i_0] [15] = ((((min((arr_19 [i_0 + 1] [i_0 - 1] [i_1 + 1]), var_15))) && ((((arr_21 [i_6] [i_0] [i_0] [i_0]) | 11246439679433378895)))));

                            for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_5] [i_0] [i_7] = ((1 && (((((var_7 ? 4027984032 : (arr_11 [i_0 + 1] [i_1] [i_0 + 1] [i_1]))) << (((!(arr_16 [i_0])))))))));
                                arr_27 [8] [8] [11] [i_0] [11] [i_0] [11] = var_4;
                            }
                            for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                            {
                                arr_31 [i_5] [i_1 - 1] [2] [16] [i_8] &= -3424427608967188340;
                                var_21 -= (((arr_12 [i_0 - 1] [i_1 - 2] [i_1 + 1] [i_6] [i_1 + 1]) ? ((var_0 ? (arr_12 [i_0 - 1] [i_5] [i_1] [i_1] [i_1]) : var_6)) : (arr_6 [i_0 - 1] [i_5] [i_5] [i_1 - 1])));
                            }
                            for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                            {
                                arr_35 [i_0] [i_1 - 1] [i_1] [i_1 + 1] [6] = 65512;
                                var_22 += -3424427608967188360;
                            }
                            for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                            {
                                var_23 ^= ((-(arr_30 [i_1] [i_1] [i_6] [i_6] [i_10])));
                                arr_38 [i_0] [i_0] [i_0] = -3424427608967188340;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_16;
    var_25 = (min(var_25, (((-(((32767 < 52075) | var_9)))))));
    var_26 = 5913177403608291157;
    #pragma endscop
}
