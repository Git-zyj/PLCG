/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((min((arr_2 [i_0] [i_0] [i_1 - 1]), (arr_2 [i_0] [i_0] [i_1 + 2]))) < (arr_0 [i_0])));
                var_15 = (max(var_15, (var_4 - -1834)));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    var_16 |= (arr_0 [i_1 + 1]);
                    var_17 -= var_9;
                    var_18 *= 181;
                }
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_19 = ((-(arr_6 [i_0] [i_1] [i_3 + 2])));
                                var_20 ^= (((9951 != -9951) - ((((arr_9 [i_3] [i_3]) && (arr_11 [i_4] [i_1 + 2] [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        }
                    }
                    var_21 = ((((max(67, -9928))) | ((min((arr_10 [i_0] [i_1 - 1] [i_3 + 1] [i_1 - 1]), (arr_10 [i_0] [i_1 - 1] [i_3 + 1] [i_3]))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_22 = (max(var_22, 30));
                    var_23 = (max(var_23, (((127 || (var_9 || var_7))))));
                    var_24 = (max(var_24, (arr_10 [i_0] [i_0] [i_0] [i_1])));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_18 [i_7] [i_7] = (10754273694449967025 + 22641);
        var_25 = (max(var_25, ((((arr_10 [i_7] [i_7] [i_7] [i_7]) / (max((arr_17 [i_7]), (arr_1 [i_7]))))))));
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_26 = (arr_10 [i_11] [i_11] [i_11 - 1] [i_11 - 1]);
                            var_27 = -23235;
                            var_28 = 9951;
                            var_29 = (max((arr_12 [i_8] [i_9]), var_7));
                        }
                    }
                }
                arr_29 [i_9] [i_9] = ((((min(1399749762628254617, 7692470379259584591)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                {
                    var_30 = max((-1 - var_2), var_11);
                    var_31 = (max(var_31, (11452277203781512986 - 22637)));
                    arr_39 [i_13] = (max((arr_16 [i_14]), (((max((arr_11 [i_12] [i_13] [i_13] [i_12] [i_13] [9]), 168)) - (((((arr_38 [i_12] [i_12] [i_12] [i_12]) >= 63))))))));
                    var_32 = ((((max(2989861075945784648, -60))) ? -26371 : (-48 && 106)));
                }
            }
        }
    }
    #pragma endscop
}
