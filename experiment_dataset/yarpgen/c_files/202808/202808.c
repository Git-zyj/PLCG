/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 *= ((var_9 & (arr_0 [22] [i_0 + 3])));
        var_14 ^= (((((var_11 ? (arr_0 [1] [21]) : (arr_1 [9])))) ? (((arr_0 [20] [1]) ? var_11 : var_7)) : (arr_0 [i_0 + 1] [10])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_13 [11] [i_2] [i_2] [11] = (((((((max((arr_11 [24] [i_2] [1] [1] [0]), (arr_6 [6]))) > -var_9)))) + 7427510840333899785));
                        var_15 = (((((max(var_9, var_1)) ? (arr_11 [3] [i_2] [1] [18] [1]) : var_3))));
                        arr_14 [i_2] [20] [4] [14] = (((arr_10 [5] [3] [1] [i_2]) || (arr_4 [21])));
                    }
                    arr_15 [21] [5] [i_2] = (arr_7 [16] [13]);
                    arr_16 [i_2] [9] [18] [8] = (arr_5 [13]);
                    arr_17 [i_1] &= ((~(arr_4 [i_3 + 1])));
                }
            }
        }
        var_16 ^= (arr_10 [16] [6] [10] [i_1]);
        var_17 = (arr_10 [2] [12] [16] [i_1]);
        arr_18 [23] = (max(((((((arr_10 [18] [2] [10] [i_1]) << (var_8 - 3165315111041963365)))) ? (((arr_6 [13]) ? (arr_7 [0] [20]) : (arr_11 [1] [i_1] [4] [1] [6]))) : (max(var_8, (arr_7 [22] [21]))))), ((((min(7427510840333899790, 16368)) >> (var_0 + 13364))))));
    }
    var_18 = ((-(((var_10 | var_12) ? (min(var_2, var_2)) : (var_9 < var_6)))));
    var_19 = ((((var_1 < var_4) * (!var_5))));
    var_20 = (max(7427510840333899790, 330784963809160752));
    #pragma endscop
}
