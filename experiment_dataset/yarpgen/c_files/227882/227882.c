/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = var_1;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_15 *= ((~(arr_0 [8])));
        var_16 = (max(var_16, ((min(((var_8 ? ((1 ? -6799943963690691631 : 1)) : (arr_0 [0]))), ((((arr_0 [10]) ? var_9 : (arr_0 [16])))))))));
        var_17 = (((((((min((arr_1 [i_0]), 9))) - ((max((arr_1 [i_0]), 58)))))) ? (min((max(var_8, (arr_0 [i_0]))), (max((arr_0 [i_0]), var_9)))) : (((arr_1 [i_0 - 1]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_18 *= (arr_3 [i_1] [i_1]);
        var_19 = (var_12 != 175);
        var_20 = var_8;
        arr_5 [4] [4] = (arr_1 [9]);
        var_21 = (min(var_21, 184));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_22 *= ((!(((var_1 ? (max((-9223372036854775807 - 1), var_7)) : (((~(arr_6 [i_2])))))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                {
                    var_23 = (min(var_23, (!var_3)));
                    arr_13 [i_2] [i_2] [i_3 - 1] [i_4] = (max(var_12, ((min((arr_1 [i_3 + 1]), (arr_12 [i_3 + 1] [i_3 + 1]))))));
                    var_24 = min(((((arr_3 [i_3 + 1] [i_4]) ? (arr_4 [i_3 + 1] [i_4 - 1]) : (arr_4 [i_3 - 1] [i_4 + 1])))), (arr_7 [i_2] [i_3]));
                    var_25 ^= (max((arr_10 [9]), (arr_9 [i_2] [i_2] [i_4 - 1])));
                }
            }
        }
        arr_14 [i_2] = (arr_0 [6]);
        var_26 = ((~((var_3 | (arr_3 [i_2] [i_2])))));
    }
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        var_27 = ((arr_10 [i_5 - 3]) ? (((((arr_10 [i_5 - 1]) != var_10)))) : (max(var_4, (arr_10 [i_5 - 1]))));
        var_28 = ((((min((max(8192, (arr_8 [i_5] [10]))), ((min((arr_4 [i_5] [i_5]), 6)))))) > var_10));
        var_29 += ((min((arr_8 [i_5 - 3] [i_5 - 1]), (arr_2 [i_5 - 3]))));
    }

    /* vectorizable */
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 9;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_30 *= (((arr_8 [i_7] [i_7 - 1]) ? (arr_8 [i_6] [i_7 - 2]) : (arr_8 [i_7] [i_7 + 1])));
                            var_31 = (max(var_31, 175));
                        }
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            arr_31 [i_7] [i_7] [i_7] [i_7] [i_7] = (~var_6);
                            var_32 = (max(var_32, (arr_19 [i_6 + 1])));
                            var_33 = (arr_3 [12] [i_6 + 1]);
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_34 = (max(var_34, (((((var_1 ? var_10 : (arr_3 [i_7] [10]))) > (((200 / (arr_33 [i_6] [0] [i_8 + 2] [i_9])))))))));
                            arr_34 [i_7] [i_7] [i_8 + 3] [i_9 - 2] [i_12] = ((-(((arr_9 [i_6] [i_6] [i_8]) ? var_9 : var_4))));
                            arr_35 [i_7] = ((var_8 ? var_12 : ((184 ? (arr_20 [9]) : var_6))));
                            var_35 = (arr_28 [i_12] [0] [i_12] [i_7 + 2] [i_7 - 3] [i_7] [i_7 + 2]);
                        }
                        var_36 = (((arr_32 [i_6 - 1] [i_7 + 2] [i_9 + 2] [i_6 - 1] [i_9 - 1]) ? (arr_32 [i_6 + 2] [i_7 - 1] [i_9 - 1] [1] [i_9 + 1]) : (arr_32 [i_6 + 2] [i_7 - 2] [i_9 + 2] [7] [6])));
                    }
                }
            }
        }
        var_37 = (arr_12 [i_6] [i_6]);
        var_38 = (max(var_38, var_0));
    }
    #pragma endscop
}
