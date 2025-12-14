/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (((((((var_5 ? var_2 : var_3))) ? (var_6 <= var_2) : (var_9 / var_9))) & var_6));
    var_12 = ((var_4 != (max((((var_4 ? var_5 : var_6))), (min(var_10, var_2))))));
    var_13 -= (max(((((var_8 <= var_2) + (var_1 < var_4)))), var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 &= (((((arr_0 [i_0]) * (arr_0 [i_0]))) * (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((((((arr_7 [i_0] [i_2]) != (arr_7 [5] [i_2])))) <= (arr_4 [i_0] [i_0])));
                    var_15 &= (arr_4 [i_0] [i_1]);
                    arr_10 [i_2] [i_1] [i_0] = ((((((arr_8 [i_0] [i_0]) <= (arr_0 [i_0])))) + ((((arr_5 [i_0] [i_1] [i_1]) != (arr_6 [i_2] [i_1] [i_0] [i_0]))))));
                    arr_11 [i_0] [i_1] [i_2] = arr_7 [i_1] [i_1];
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {

        for (int i_4 = 4; i_4 < 11;i_4 += 1)
        {
            arr_17 [i_4] [i_4] [i_4] = ((((((arr_14 [i_3] [i_4 - 2]) >= ((min((arr_5 [i_3] [i_3] [i_3]), (arr_16 [i_4]))))))) % ((((((((arr_8 [i_3] [i_4]) > (arr_3 [i_4 - 1]))))) <= (((arr_7 [1] [i_4]) ? (arr_0 [3]) : (arr_13 [i_3]))))))));
            arr_18 [i_3] [i_3] [4] = (min(((((((arr_7 [i_3] [i_4]) ? (arr_5 [i_3] [11] [4]) : (arr_15 [4] [i_3]))) != ((max((arr_16 [i_3]), (arr_1 [i_3] [i_3]))))))), (max((max((arr_15 [6] [i_4 - 2]), (arr_13 [i_3]))), (((arr_0 [i_3]) ? (arr_6 [i_3] [i_3] [i_3] [i_4]) : (arr_0 [i_3])))))));
        }
        arr_19 [i_3] = (arr_13 [i_3]);
        arr_20 [i_3] = (((31 ? 224 : 22)) >= (((((arr_13 [i_3]) || (arr_4 [23] [6]))) ? (((arr_16 [i_3]) ? (arr_12 [i_3] [i_3]) : (arr_4 [i_3] [i_3]))) : (((arr_4 [i_3] [i_3]) ? (arr_4 [i_3] [21]) : (arr_4 [i_3] [i_3]))))));
    }
    #pragma endscop
}
