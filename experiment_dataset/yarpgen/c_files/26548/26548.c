/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 += ((max(-19635, ((var_18 ? var_12 : 62)))) ^ (~62));

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_20 = 70;
                        var_21 = (max(var_21, ((-(((arr_7 [i_1] [i_1 - 1]) ? 71 : (-127 - 1)))))));
                        arr_11 [i_0] = ((15231328521116285192 ? -719058715 : ((-719058715 ? var_1 : (min(-719058715, 0))))));
                    }
                    arr_12 [i_0] = ((!((min((arr_5 [i_0]), 30)))));
                }
            }
        }
    }
    var_22 &= var_0;

    for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
    {
        var_23 = max((~-70), ((15231328521116285161 ? (-6598 < 128) : 1148899616)));
        arr_17 [i_4] = (max((((var_13 != (arr_8 [i_4] [i_4 + 4] [2] [3])))), ((((var_17 ? 62 : 15231328521116285173)) * (!var_3)))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_22 [i_4] = var_18;
                arr_23 [8] [i_5] [4] [i_4] = (!-719058715);
                arr_24 [i_4] [i_4] [i_6] = var_6;
                var_24 = (min(var_24, (arr_7 [i_4 - 1] [i_5])));
            }
            var_25 = 3215415552593266443;
        }
        arr_25 [i_4] = (max((~15231328521116285173), (arr_4 [i_4] [14])));
    }
    for (int i_7 = 3; i_7 < 9;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            arr_30 [i_7] [9] = (min(var_16, ((((min(0, 15231328521116285192))) ? var_12 : (max(15231328521116285173, var_11))))));
            arr_31 [i_7] [i_7 - 3] [i_8] = var_4;

            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                arr_36 [i_7 - 2] [1] [i_9] [i_7] = min((var_7 & 19), ((((arr_33 [i_8 - 1] [i_8 - 2] [i_8 - 2]) > -26942))));
                arr_37 [3] [i_8] = (((~15231328521116285173) ? ((((1846273850 / 569121947) ? 2 : (((226 == (arr_14 [i_9]))))))) : (((((~(arr_2 [i_9] [i_8] [9])))) ? ((var_5 ? (arr_16 [i_8]) : var_14)) : (((min((arr_8 [i_7] [0] [i_8 - 2] [9]), (arr_0 [2] [i_8])))))))));
                var_26 = (max(((max(-569121948, (min(var_12, 569121977))))), (min(3616317289124576946, (max((arr_21 [4] [0] [0] [8]), (arr_15 [12] [i_8])))))));
                var_27 = 10890;
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {
                arr_42 [i_10] [i_10] = -64;
                var_28 = 18446744073709551615;
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {
                arr_45 [12] [11] [i_11] = (max(((max((max(-101, (arr_8 [4] [i_7] [1] [i_11]))), -64))), ((((min((arr_7 [i_8] [i_7 - 1]), 133693440))) ? 84 : (-127 - 1)))));
                arr_46 [i_7] = (((((min((arr_26 [i_7 - 1]), var_16)))) == (max((min((arr_34 [i_7] [i_8]), 63)), (~14830426784584974669)))));
                arr_47 [2] [i_8 - 1] [i_11] = ((+(min(((-64 ? (arr_32 [i_7] [i_8] [i_11]) : -29308)), 70))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {
                            arr_53 [3] = ((255 ? -29308 : 29307));
                            arr_54 [i_13] [1] [10] = 24841;
                            arr_55 [3] [i_8] [i_8] [i_8] [i_8] [i_8] = var_8;
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
            {
                arr_58 [3] [7] = (max((((arr_2 [i_7 - 1] [i_7 - 1] [i_7 - 3]) ? -1204048304 : var_16)), ((((arr_15 [4] [4]) && 64)))));
                arr_59 [7] = 0;
                arr_60 [2] [7] [8] = (arr_5 [4]);
                arr_61 [i_7 + 2] [i_7] [i_8] [1] = (arr_50 [8] [9] [i_7] [i_8 - 1] [i_14] [9] [i_14]);
            }
        }
        arr_62 [i_7] [i_7] = (((max(15231328521116285173, var_0)) * (arr_35 [i_7 + 1] [i_7 - 1] [i_7 - 2])));
        arr_63 [2] &= (!128);
    }
    #pragma endscop
}
