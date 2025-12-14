/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_10 = (arr_10 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_0 - 1]);
                                var_11 ^= (min((arr_7 [i_0 + 1] [i_0 + 1] [i_2] [i_1 - 2] [9] [i_2 - 2]), (((((var_7 ? (arr_8 [i_0 - 1] [i_1 - 4] [i_2 + 1] [i_3] [10]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [12])))) ? (arr_6 [i_0] [i_0] [i_2 - 2] [i_0 - 1] [8] [i_1 - 4]) : ((min((arr_2 [1] [1]), var_5)))))));
                                var_12 -= ((((min((arr_6 [i_0 - 1] [i_2 - 2] [8] [8] [2] [i_0]), (arr_6 [i_0 + 1] [i_2 - 1] [i_2] [i_2] [4] [0])))) ? (arr_4 [i_2 - 1] [i_2] [i_2]) : ((min(12480, 1)))));
                                arr_11 [i_0] [i_3] [i_2] [i_3] [i_3] [i_3] = (~((((((arr_7 [i_0] [i_0] [i_1] [8] [i_0] [i_4]) - var_0))) ? (arr_9 [i_0 + 1] [i_2 + 1] [5] [5] [i_4] [i_2]) : ((((arr_2 [i_2] [i_2]) ? (arr_2 [2] [2]) : var_1))))));
                            }
                        }
                    }
                    arr_12 [3] [i_1] [3] = (min((((arr_9 [i_0] [i_0 + 1] [i_0] [i_1 - 1] [i_0] [i_2 - 2]) ? (arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_1 - 1] [i_1] [i_2 + 1]) : (arr_9 [i_0] [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_1] [i_2 + 1]))), ((max((arr_7 [i_0 - 1] [i_0 - 1] [i_2] [i_0 + 1] [i_2] [i_1 - 2]), (arr_7 [i_0 - 1] [i_1] [i_2 - 1] [i_2 - 2] [i_2] [i_1 - 3]))))));
                }
            }
        }
    }
    var_13 = ((!((max((~var_6), ((((var_4 + 2147483647) << (var_4 + 101)))))))));
    var_14 = ((var_8 ? ((-((var_9 ? var_1 : var_2)))) : (((min(var_9, var_9))))));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_15 ^= ((((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_7 [i_5] [i_5] [12] [i_5] [i_5] [i_5]) : (arr_6 [i_5] [i_5] [12] [i_5] [0] [i_5]))));
        var_16 = (arr_0 [i_5]);
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_17 = (max((arr_3 [i_6] [i_6] [i_6]), (min(-16645, 1))));
        var_18 &= (arr_4 [4] [1] [i_6]);
    }
    #pragma endscop
}
