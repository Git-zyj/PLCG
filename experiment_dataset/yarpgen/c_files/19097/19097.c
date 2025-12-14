/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_10 -= (min(8105962407362988191, 6));
        var_11 = (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 2]) : (((!(arr_0 [i_0 - 2]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_12 [i_1] [i_1] = ((~(((arr_9 [i_1] [i_2] [i_2 - 1] [i_2]) ? (arr_1 [i_1] [i_2]) : var_1))));
                                arr_13 [i_1] [i_1] [i_3 - 2] [i_4] [i_1] [i_5] = (arr_1 [i_1] [i_1]);
                            }
                        }
                    }
                    var_12 = (max(var_12, (arr_8 [i_2 + 1] [i_2] [i_2] [i_2 + 1])));

                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        arr_17 [i_6] [i_3 - 2] [i_1] [i_6] = -var_7;
                        arr_18 [i_6 + 1] [i_6] [i_3] [i_1] = ((arr_15 [i_2 - 2] [i_3 + 1]) || (arr_15 [i_2 - 1] [i_3 - 2]));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_13 = var_2;
                        var_14 += (((((arr_15 [i_1 - 1] [i_7]) >= var_8)) ? -4 : (arr_3 [i_7])));
                        var_15 = (max(var_15, (((26601 ? 5127657628108897382 : 13319086445600654259)))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_16 = (min(var_16, ((((arr_6 [i_1 + 1]) || var_6)))));
                        var_17 = ((18446744073709551601 ? 13319086445600654209 : 246));
                        arr_23 [i_1] = (10 || (-2023 || -31));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_18 ^= arr_25 [i_1 + 1] [i_1 - 1];
                    arr_29 [i_1] [i_9] [i_1] [i_1] = (arr_15 [i_1 - 1] [i_1 + 1]);
                }
            }
        }
        arr_30 [i_1] [i_1] = 123;
    }
    var_19 = ((min(var_3, ((var_4 ? var_7 : 240)))) ^ var_7);
    var_20 = var_3;
    #pragma endscop
}
