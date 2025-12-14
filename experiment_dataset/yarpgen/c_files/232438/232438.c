/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = ((-(arr_1 [i_0] [i_1])));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_1] = ((arr_1 [i_0] [i_2]) ? (arr_0 [1] [i_2 + 1]) : (arr_2 [i_0] [i_1] [i_2]));
                    var_18 = var_1;
                }
                var_19 = (+(min((arr_2 [i_0] [i_1] [i_0]), (arr_2 [i_1] [i_0] [i_0]))));
                var_20 = (min((arr_6 [1] [i_1]), (max((arr_0 [i_0] [i_1]), var_2))));
            }
        }
    }

    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_21 += (((((arr_8 [14]) + 2147483647)) >> (((((arr_8 [8]) ? (((arr_11 [1]) ? (arr_9 [i_3]) : (arr_10 [i_3]))) : (((~(arr_11 [4])))))) - 100))));
        arr_12 [i_3] [i_3] = (((((arr_10 [i_3 - 1]) && (arr_11 [i_3]))) ? (((((~(arr_11 [i_3])))) ? (arr_10 [i_3]) : (arr_8 [i_3]))) : (min(((max((arr_11 [i_3]), var_0))), (((arr_9 [i_3]) ? (arr_10 [4]) : (arr_10 [i_3])))))));
        var_22 = (min(var_22, ((min((((((var_10 ? (arr_9 [18]) : (arr_9 [i_3]))) > ((min((arr_8 [1]), (arr_8 [20]))))))), (((~(arr_11 [22])))))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_15 [i_4] [i_4] &= ((+((((((arr_11 [18]) ? (arr_10 [i_4]) : (arr_11 [2])))) ? ((((arr_8 [18]) ? (arr_13 [i_4] [1]) : (arr_8 [1])))) : (arr_10 [i_4])))));
        var_23 = (min((((((-(arr_8 [14])))) ? (arr_9 [20]) : (arr_11 [18]))), (arr_14 [i_4])));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_24 = (arr_14 [i_5]);
        arr_19 [i_5] [i_5] = (arr_14 [i_5]);
    }
    #pragma endscop
}
