/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_0 ? var_13 : -var_3)));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 + 3] = (arr_1 [15] [1]);

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0 - 1] [i_1 - 2] = (arr_5 [i_0] [i_0] [i_1]);
            arr_7 [i_1] = (max(((~((0 ? 22050 : 21)))), (arr_3 [i_0 - 1])));
        }
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_0] [i_2 + 1] = (((arr_0 [i_0 + 1]) ? (arr_4 [1] [i_2] [i_2 - 1]) : (((((var_10 ? (arr_9 [1] [i_2] [i_0 + 2]) : (arr_4 [i_0] [0] [i_0 - 1])))) ? ((((!(arr_8 [i_0 - 1]))))) : (arr_8 [i_2])))));
            arr_11 [i_0] = (arr_0 [i_0]);
            arr_12 [12] [i_2] [i_0 + 3] = ((((((arr_8 [i_0 + 2]) ? (arr_9 [i_2] [i_2 + 1] [i_2 - 2]) : (((arr_5 [i_0] [i_2] [i_2 - 2]) ? (arr_5 [i_0] [1] [4]) : (arr_5 [i_0] [i_0] [i_0])))))) ? (((min((arr_3 [i_0 + 2]), (arr_0 [i_0 + 3]))))) : (((arr_8 [i_2]) + (arr_4 [i_0] [i_0] [i_2])))));
            arr_13 [i_0] [i_0] [i_2] = (arr_9 [i_0 + 1] [i_0] [6]);
        }
        arr_14 [i_0] = ((-(((arr_9 [i_0 + 1] [i_0] [i_0 + 1]) & var_7))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_18 [i_3] [i_3] [i_0] = ((((max(1, 3378612507))) ? ((max((arr_0 [i_0 - 1]), var_15))) : var_9));
            arr_19 [i_0 - 1] [i_3] [i_3] = (arr_1 [i_0 + 3] [i_0 + 3]);
            arr_20 [i_0 + 3] [i_0] [i_3] = ((((((((var_17 ? (arr_15 [i_0 + 3]) : (arr_15 [i_3])))) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_3 [i_0])))) ? (((((var_2 ? var_5 : (arr_0 [i_0 + 1])))) ? (arr_5 [i_0 + 1] [i_0 + 3] [1]) : (arr_3 [i_0 - 1]))) : (arr_8 [i_0 + 2])));
            arr_21 [i_3] [i_3] [i_0 + 1] = var_14;
        }
        arr_22 [i_0] = ((-(((arr_1 [i_0 - 1] [i_0 + 2]) ? (arr_1 [i_0 + 3] [i_0 + 2]) : (arr_1 [i_0 + 3] [i_0 - 1])))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_25 [i_4] = ((((-(((arr_9 [i_4] [i_4] [i_4]) ? (arr_3 [9]) : (arr_9 [7] [7] [i_4]))))) - (arr_15 [i_4])));
        arr_26 [i_4] [i_4] = (((max(((~(arr_16 [i_4] [i_4]))), 22))) / ((-(((arr_1 [i_4] [9]) ? (arr_8 [1]) : (arr_23 [i_4]))))));
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_29 [i_5] [8] = (arr_4 [i_5] [i_5] [i_5]);
        arr_30 [1] = (arr_24 [0] [i_5]);
    }
    var_20 = ((var_17 ? var_7 : ((min(var_6, (var_8 || var_9))))));
    #pragma endscop
}
