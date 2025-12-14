/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((var_3 ? var_2 : (var_0 / var_14))) >= ((((((2971354494 ? var_5 : var_7))) ? (24236 >= 2971354494) : var_11))));
    var_19 &= (((((((max(var_14, var_9))) ? (max(var_1, var_4)) : var_8))) ? -var_7 : ((((var_12 ? 16814 : var_8))))));

    for (int i_0 = 4; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (17475898832678034106 - 734848713);
        var_20 = (min(var_14, (((((min(var_2, (arr_0 [i_0]))))) & ((var_3 ? var_12 : var_1))))));
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((var_16 ? 40950450 : (((((var_4 ? (arr_0 [i_1]) : (arr_4 [i_1] [i_1]))) * ((min(-61, -51))))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                {
                    var_21 += ((((((min(-89, (arr_7 [i_1])))) ? 48 : (arr_11 [i_1 - 4] [i_3 - 2] [i_3] [i_1]))) * (!var_12)));
                    var_22 = 15911;
                }
            }
        }

        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            arr_15 [i_1] [10] = ((((min((arr_7 [i_1]), 44694730))) ? 10713 : (arr_11 [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_1])));
            arr_16 [i_1] [i_4] [i_4] = ((((min((min((arr_8 [2] [i_4 - 1] [i_1]), var_0)), 58758))) ? ((((((~(arr_14 [i_1] [i_1] [i_1 + 1])))) && ((42 >= (arr_10 [i_1 - 1] [3] [i_1] [i_1])))))) : -15922));
        }
        for (int i_5 = 4; i_5 < 9;i_5 += 1)
        {
            var_23 = ((((22425 ? (min(var_0, var_14)) : (((((arr_10 [i_1] [i_1] [i_1 + 1] [i_5]) == -18949)))))) != (((10705 ? 8 : 154)))));
            arr_19 [i_1] [i_5] [0] = ((((((var_12 / (arr_5 [i_1 - 1]))) - ((var_8 ? (arr_0 [i_1 - 1]) : var_15)))) != (((max(1087143394, 15911))))));

            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                arr_22 [i_1 - 1] [i_1] [i_1 - 1] [i_1] = ((-((-3780860581534956358 ? 192 : 9223372036854775798))));
                var_24 = (max(var_24, (((!(((-2935961135461009194 ? 17475898832678034109 : 3101470050284837885))))))));
                var_25 = ((((62 ? 10905316102154895177 : -5576708779987394317)) ^ (~10905316102154895169)));
            }
            for (int i_7 = 4; i_7 < 10;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 7;i_9 += 1)
                    {
                        {
                            arr_31 [i_1] [i_5] = (((((122 ? 116 : -12453))) ? var_3 : (arr_18 [i_5 - 1])));
                            var_26 = (min(var_26, (((-(min(3344210077653467171, (((22574 ? 4263785057 : 21036))))))))));
                            arr_32 [i_1 - 2] [0] [2] [i_1 - 2] [0] &= (min((~var_0), (((arr_0 [8]) ? var_15 : var_7))));
                            arr_33 [i_1] [i_1] [i_1] [2] = (min((arr_4 [i_1 - 4] [i_5 + 2]), ((-(arr_4 [i_9 + 2] [i_1 - 4])))));
                        }
                    }
                }
                var_27 = ((1715252252 >> (5802305770578877139 - 5802305770578877134)));
                var_28 = ((~(max((((var_3 ? (arr_1 [i_1 - 1] [i_5]) : var_9))), (~5802305770578877163)))));
                arr_34 [i_1] = ((!(((-1 ? -21735 : 38)))));
            }
            /* vectorizable */
            for (int i_10 = 4; i_10 < 10;i_10 += 1) /* same iter space */
            {
                var_29 = (min(var_29, 19838));
                var_30 = ((~(arr_14 [3] [i_1 + 1] [i_10 - 2])));
                arr_38 [i_1 - 3] [i_1] = (((((var_14 ? var_5 : var_17))) ? (arr_21 [i_5] [i_5]) : (arr_3 [i_10 - 4])));
            }
        }
    }
    #pragma endscop
}
