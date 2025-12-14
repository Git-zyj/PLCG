/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_14));
    var_18 = (min(var_18, 62));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_10;

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_19 = (min(((((33 ? (arr_4 [i_0] [11] [i_0]) : 6657)))), (min(9223372036854775807, (max((arr_1 [i_1 + 1]), (arr_4 [6] [i_1] [6])))))));
            arr_7 [2] [i_1] [2] = max((arr_5 [i_0] [i_0] [i_1]), (arr_5 [i_1 + 4] [i_1 - 1] [i_1 + 1]));
            arr_8 [i_0] = (max(((max(1, -30))), (max((arr_1 [i_1 + 2]), 33))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_20 = 43;
            var_21 = (max(var_21, (arr_4 [i_2] [9] [i_0])));
            arr_12 [i_2] = (((0 - (arr_4 [4] [i_0] [i_2]))));
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_15 [i_3] = (min((((arr_13 [i_3]) ? (~33) : (arr_13 [i_3]))), ((max((arr_14 [i_3]), (arr_14 [i_3]))))));
        arr_16 [i_3] = ((!(((-33 ? ((~(arr_14 [0]))) : ((128 ? (arr_13 [i_3]) : var_5)))))));
        arr_17 [i_3] [i_3] = ((~(((arr_14 [i_3]) ? (arr_14 [i_3]) : (arr_14 [i_3])))));
    }
    #pragma endscop
}
