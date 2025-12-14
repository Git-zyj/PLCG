/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max((((var_6 - var_12) - (min(var_11, var_7)))), (((min(var_1, var_3)) - (var_2 * var_4))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_14 *= (arr_1 [i_0] [20]);
        var_15 *= ((((min((arr_0 [6]), (min((arr_0 [i_0]), (arr_0 [i_0])))))) <= (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_15 [i_2] [i_4] [i_3] [i_4] [i_1] [2] = (max(((max((((arr_1 [i_1] [i_4]) & (arr_9 [i_1] [2] [i_1] [i_4]))), (arr_13 [4] [4] [i_3] [i_4])))), (arr_7 [i_1] [5] [i_1])));
                        arr_16 [1] [i_4] [1] [i_4] |= (((((((max((arr_13 [i_1] [15] [i_3] [i_1]), (arr_5 [9])))) / (((arr_1 [4] [i_2]) * (arr_12 [i_3])))))) / (max(((((arr_11 [i_1] [i_1] [i_3]) && (arr_12 [i_1])))), (arr_11 [i_2] [i_3] [i_4])))));
                    }
                }
            }
        }
        arr_17 [i_1] = (((max(((max((arr_12 [i_1]), (arr_8 [6] [i_1] [i_1])))), (min((arr_11 [i_1] [i_1] [i_1]), (arr_4 [i_1]))))) & (max(((min((arr_1 [i_1] [i_1]), (arr_8 [i_1] [i_1] [i_1])))), (max((arr_8 [i_1] [0] [i_1]), (arr_11 [i_1] [i_1] [i_1])))))));
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        var_16 ^= (max(((max((((arr_18 [i_5]) && (arr_1 [i_5] [12]))), (((arr_0 [i_5]) && (arr_18 [i_5])))))), (max((arr_19 [2]), (arr_19 [14])))));
        var_17 = (((((((arr_18 [7]) * (arr_0 [i_5]))) * (arr_18 [0]))) >= (min((arr_18 [i_5]), (arr_1 [7] [i_5])))));
    }
    var_18 |= ((var_7 * ((((max(var_3, var_4))) & (min(var_9, var_10))))));
    #pragma endscop
}
