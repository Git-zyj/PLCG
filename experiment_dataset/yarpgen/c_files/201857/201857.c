/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_4;
    var_13 = ((((min((max(var_8, 60324)), 5215))) ? ((-(~var_5))) : (((!((min(232, var_7))))))));
    var_14 = ((max((max(25890, var_0)), (min(var_10, var_2)))));
    var_15 = 12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = -206564183;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 -= (max(((((min(62100, 1805766488))) ? ((min(60324, var_5))) : (min(var_0, var_6)))), (min((max((arr_6 [i_0] [i_1] [i_1]), 3)), (var_0 | 18)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_17 = (((((min(571957152676052992, var_9)))) != (arr_3 [i_0] [i_1])));
                            arr_17 [i_1] [i_2] [i_3] [i_4] = (((((arr_10 [i_4 - 1]) | var_3)) >= ((14 ? -13 : -13))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_18 = ((-(max(190, (2451 + 514136659198015211)))));
            var_19 = (min(var_19, -13));
            arr_20 [i_0] [i_5] = (max((((-(arr_6 [i_5] [i_5] [i_5])))), 1434676729));
            arr_21 [i_0] [i_5] = 90592188;
        }
        var_20 = max(((max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), var_10))), ((-2452 ? var_7 : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            arr_27 [i_6] [i_7] [i_7] = (arr_2 [i_6]);

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_32 [i_6] [i_7] [i_8] [i_8] = ((!(90592188 || -2439)));
                    var_21 = ((-26498 ? (!-4937059892510615941) : ((var_11 ? 23 : var_1))));
                }
                var_22 = (((arr_5 [i_6]) ? (8 || 60337) : -24));
            }
            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                var_23 = (5231 ^ 536870784);
                arr_36 [i_6] [i_6] [i_7] [i_10 + 1] &= (((arr_9 [i_6] [i_7] [i_10 + 1]) ? (arr_13 [i_6] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_7]) : (arr_13 [i_6] [i_10 - 1] [i_10 - 2] [i_6] [0])));
            }
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            arr_41 [i_6] = (arr_0 [i_6]);
            var_24 ^= (!-48);
            var_25 += 202;
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_26 = ((!(arr_14 [i_6] [i_12] [5] [i_6] [i_12] [i_12])));
            arr_46 [i_6] &= ((arr_26 [i_6] [i_6] [i_12]) / ((-(arr_12 [i_6]))));
            var_27 *= (((arr_14 [i_6] [i_12] [i_6] [5] [i_12] [i_12]) > 62112));
        }
        for (int i_13 = 1; i_13 < 1;i_13 += 1)
        {
            var_28 *= (~4294967295);
            arr_50 [i_6] [i_6] [11] = ((var_10 * (((arr_25 [1]) ? 1006997581 : (arr_49 [i_13 - 1] [i_13 - 1])))));
        }

        for (int i_14 = 1; i_14 < 15;i_14 += 1)
        {
            var_29 = var_9;
            var_30 = 9223372036854775781;
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 15;i_16 += 1)
                {
                    {
                        var_31 = ((60324 || (arr_35 [i_14] [i_14 + 1] [i_6])));
                        var_32 = 8;
                        arr_60 [i_6] [i_14] [i_15] [i_15] = (((arr_26 [i_16] [i_15 + 2] [i_14 + 1]) ? var_11 : -1));
                    }
                }
            }
        }
    }
    #pragma endscop
}
