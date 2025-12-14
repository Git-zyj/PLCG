/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -7804475649094190794;
    var_16 ^= 13686393708074635951;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (-((((min((arr_1 [8]), var_0))) ? (max((arr_1 [0]), 15)) : -3527077186184530219)));
        arr_2 [i_0] = 4249;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 = var_9;

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_8 [i_1] [i_2] [i_2] = (((arr_5 [i_1] [i_1]) ? (arr_3 [i_2]) : ((((var_3 ? 8191 : var_12)) + (((arr_5 [i_2] [i_1]) + (arr_3 [i_1])))))));
            var_19 = (arr_7 [i_1] [0] [i_2]);
        }
        var_20 = (max(var_20, ((((((((~(arr_6 [14] [i_1] [1])))) ^ -11))) ? ((((18057 ? 18057 : (arr_5 [i_1] [12]))) & ((var_11 ? (-2147483647 - 1) : -8204)))) : (~0)))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_3] [i_4] = (min(-30, (((arr_9 [i_4]) ? (arr_13 [i_3] [i_3] [i_3]) : 6))));
                var_21 = arr_13 [1] [i_3] [i_4];

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_22 = ((6478355197852761178 ? (((1770749537225728624 || var_12) ? var_10 : -6165246622972420734)) : 9223372036854775807));
                    arr_17 [i_3] [i_3] [i_4] [20] = (((((var_6 ? (var_11 * 1417) : (((arr_10 [i_4]) * 0))))) / (((arr_15 [i_3] [i_4] [i_4] [i_4]) ? (arr_15 [i_3] [i_3] [i_4] [i_5]) : (arr_15 [i_3] [i_3] [i_3] [i_3])))));
                    arr_18 [i_3] [i_5] [i_3] = arr_11 [8];
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    arr_21 [i_4] [i_3] = (arr_19 [i_3] [i_4] [i_6] [i_4]);
                    arr_22 [i_3] [i_3] [i_6] = (((arr_20 [i_4] [i_6]) ? (((var_11 > (arr_12 [i_3])))) : (((arr_19 [i_3] [i_4] [i_6] [i_6]) >> (var_1 - 17975)))));
                }

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_23 = ((!((!((max(4200139556683773415, (arr_15 [i_4] [i_4] [i_7] [i_4]))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_24 = (((min(var_11, (((arr_19 [i_3] [i_4] [i_7] [i_7]) ? 8204 : (arr_28 [i_3] [i_3] [i_3] [4] [i_3])))))) ? var_1 : (((((arr_12 [i_3]) ? 14071185901827344242 : (arr_24 [i_4] [i_4] [4]))) / (arr_12 [i_3]))));
                                var_25 = (max(((-(min(0, (arr_26 [12] [23] [i_8] [i_3]))))), (min(8204, (min((arr_19 [i_3] [i_8 - 4] [i_7] [i_8]), (arr_30 [i_3] [22] [i_7] [i_8 - 3] [i_7] [i_9] [i_3])))))));
                                var_26 = (~-8204);
                                var_27 = 45094;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                var_28 ^= (arr_15 [i_3] [i_3] [i_3] [i_7]);
                                var_29 = (min(var_29, 1));
                            }
                        }
                    }
                }
                arr_37 [i_3] = (((((arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ^ var_13)) >= (((+((((arr_20 [i_4] [i_3]) <= var_7))))))));
            }
        }
    }
    #pragma endscop
}
