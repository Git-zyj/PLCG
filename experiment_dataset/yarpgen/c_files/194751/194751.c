/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 -= ((-(var_1 | var_11)));

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    var_15 = (((((-(1288933911 | 43195)))) && ((((((((arr_7 [i_0]) + 9223372036854775807)) << (22357 - 22357))) ^ (arr_1 [i_1]))))));
                    arr_8 [i_1] [i_1] [i_2] = ((((var_10 / (arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 2]))) % (arr_2 [3] [4])));
                    arr_9 [i_0] [10] [i_2] = -var_9;
                    arr_10 [i_0] [i_0] [i_2] [6] = (((43172 - 43189) | (((arr_3 [i_2] [i_2 - 1] [i_2]) & var_12))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_13 [i_0] [i_1] [i_0] [i_0] = (((~((var_11 % (arr_7 [i_3]))))));
                    var_16 = (max(var_16, ((((((!((var_0 < (arr_2 [i_0] [i_0])))))) ^ (~var_3))))));
                    var_17 = ((((((43189 | (arr_11 [14] [14] [14]))))) ^ ((((arr_0 [i_3]) && (arr_0 [i_0]))))));
                    arr_14 [i_0] [i_0] [i_0] = (~43201);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_18 = (((((((arr_15 [i_0] [i_1] [i_3] [i_3] [i_5]) << (var_2 - 1078092527))) ^ ((~(arr_15 [i_0] [i_1] [i_1] [i_3] [i_5]))))) | ((((((arr_16 [8] [i_4] [i_1] [i_1] [i_0] [i_0]) < var_11))) >> (!var_7)))));
                                var_19 ^= -var_9;
                            }
                        }
                    }
                }
                var_20 -= (((43201 != 43174) < (((-43195 && (((arr_7 [i_0]) > 43164)))))));
                var_21 = -var_9;
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = (((arr_21 [i_6]) > 22364));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    var_22 = ((arr_29 [i_8]) <= var_12);
                    arr_30 [i_8] [i_6] = 22337;
                    var_23 *= ((((!(arr_26 [i_7] [i_8])))));
                }
            }
        }
        var_24 = (max(var_24, (22345 - var_4)));
        var_25 = (arr_21 [i_6]);
        var_26 = (max(var_26, 22357));
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        var_27 = (min(var_27, (arr_15 [i_9] [i_9] [8] [8] [i_9])));
        arr_33 [i_9] &= (~-var_10);
        var_28 &= ((22369 << (((((arr_4 [i_9] [i_9] [i_9]) - (arr_3 [5] [i_9] [i_9]))) + 218))));
    }
    var_29 += var_11;
    #pragma endscop
}
