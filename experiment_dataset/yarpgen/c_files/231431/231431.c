/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((((-124 & (arr_5 [i_0 + 2] [i_0 + 1]))) <= (((arr_5 [i_2] [14]) ? (arr_5 [i_2] [i_2]) : 61830))));
                    var_12 = ((~(arr_4 [i_0] [i_1 + 2])));
                }
            }
        }
        var_13 = (max(((8697356818132434207 ? (min(-282332679, 33554432)) : ((((arr_8 [i_0 - 2] [i_0] [i_0 - 2]) - (arr_6 [i_0 - 2] [4] [i_0])))))), ((max((arr_2 [i_0]), var_3)))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 7;i_5 += 1)
            {
                {
                    var_14 = (arr_5 [i_3] [i_3]);

                    for (int i_6 = 2; i_6 < 6;i_6 += 1)
                    {
                        var_15 = (((-(min(var_4, (arr_1 [9] [i_4]))))));
                        arr_20 [i_3] [i_3] [1] [i_5 + 3] [i_5] = ((+(((((arr_1 [i_3] [i_3]) ? var_5 : (arr_16 [i_3] [i_3] [i_3])))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        var_16 = var_8;
                        var_17 = (((((arr_22 [i_4] [i_4] [i_4] [i_7 + 1] [i_7]) == (arr_8 [i_4] [i_5] [i_7]))) && ((((arr_17 [i_3] [i_4]) * (arr_18 [i_3]))))));
                        var_18 = (min(var_18, var_3));
                    }
                    for (int i_8 = 3; i_8 < 7;i_8 += 1)
                    {
                        var_19 += (((((var_8 != (((arr_14 [1] [i_4]) << (33554433 - 33554375)))))) != (min((max(var_2, 282332678)), (((arr_13 [i_3] [i_4]) ? 1 : (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3])))))));
                        var_20 = ((((arr_23 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8 + 1] [i_8 - 3] [i_8 + 1]) << (((arr_23 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8 + 1] [i_8 - 3] [i_8 + 1]) - 103)))));
                        var_21 ^= arr_6 [i_5] [i_5] [i_5];
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_22 = var_11;
                        var_23 = (arr_26 [i_3] [5]);

                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            var_24 = ((-1 != ((((arr_0 [i_3] [i_4]) == (arr_29 [i_5] [1] [i_5] [i_5]))))));
                            var_25 = (arr_5 [i_3] [i_4]);
                        }
                        var_26 = ((((~(arr_4 [i_3] [i_4]))) ^ (arr_23 [i_4] [i_4] [i_5 + 3] [i_5 + 3] [i_5 + 2] [i_5 - 2])));
                        var_27 = (arr_19 [i_3] [i_3] [i_5] [i_9] [i_9]);
                    }
                }
            }
        }
    }
    var_28 = (max(var_28, var_3));
    #pragma endscop
}
