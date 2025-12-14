/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_12 = (min((((((59 ? (arr_5 [i_3] [i_0] [i_0]) : (arr_1 [i_0 + 1] [i_1])))) ? 1921665470 : (((~(arr_11 [10] [10] [i_1] [i_1] [1] [8])))))), ((max((arr_1 [i_3 - 1] [i_1]), (arr_1 [i_0] [i_1 + 2]))))));
                        arr_12 [i_0] [i_1 - 1] [i_1] [i_1] [i_2] [i_3 + 1] = (((arr_6 [i_1 + 1] [i_1 + 3] [i_1]) ? (arr_3 [i_0 - 1] [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1] [1])));
                        var_13 = (max(var_13, (((-(arr_5 [i_0 - 1] [i_3 - 2] [i_2]))))));
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = (((arr_9 [i_0 - 1] [i_0 - 1] [0] [1]) ? (arr_6 [8] [i_0 - 1] [8]) : (((arr_6 [2] [i_0 - 1] [10]) ? (arr_6 [i_0] [i_0] [4]) : 3156))));
        var_14 = (min(var_14, (((((((min((arr_2 [i_0]), 19))) ? ((-(arr_3 [i_0 - 1] [i_0 - 1] [6]))) : (arr_8 [i_0] [14] [6] [i_0]))) / (arr_2 [i_0]))))));
        arr_14 [i_0 - 1] [i_0] = (((((arr_1 [i_0 + 1] [i_0 + 1]) ? ((min((arr_2 [9]), var_6))) : var_7)) <= (arr_3 [i_0 + 1] [8] [8])));
    }
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 17;i_6 += 1)
            {
                {
                    var_15 &= (min((min((arr_18 [i_4 - 3] [i_5 - 1] [i_5]), (arr_18 [i_4 - 3] [i_5 - 3] [i_5]))), (((arr_18 [i_4 - 3] [i_5 - 2] [i_5]) ? (arr_18 [i_4 - 1] [i_5 + 2] [i_5]) : (arr_18 [i_4 - 2] [i_5 - 1] [i_5])))));
                    arr_22 [8] [i_4] = ((((((max((arr_15 [i_5 - 3]), (arr_19 [i_4] [10] [i_5 - 1] [i_6]))) ? (min(var_3, 0)) : var_8))) & (min((((arr_17 [15] [i_5] [i_4]) ? -15 : (arr_16 [i_5] [i_6]))), ((((arr_18 [6] [i_4] [i_4]) & (arr_17 [i_4] [i_5 - 3] [i_4 + 1]))))))));
                    var_16 = (min(var_16, (((min((((arr_19 [i_4] [i_6] [i_6] [i_6]) ^ (arr_20 [i_4 + 2] [i_5] [20] [20]))), (((arr_15 [i_5]) ? var_3 : (arr_15 [i_5])))))))));
                    var_17 = (min(var_17, -1495696587701869516));
                }
            }
        }
        var_18 = var_1;
        var_19 ^= ((max((min((arr_18 [i_4 + 1] [i_4] [4]), (arr_21 [0] [i_4 - 3] [4] [i_4 - 1]))), (arr_19 [1] [i_4] [i_4 + 1] [4]))));
    }
    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 19;i_9 += 1)
            {
                {
                    arr_29 [i_7 - 2] [1] [10] = ((-((~(min(-3157, -1094958070078364898))))));
                    arr_30 [i_7] = (min(((~(arr_19 [i_8] [12] [i_8 - 1] [i_7 + 2]))), ((~(arr_17 [i_9] [i_9 + 1] [i_9 + 1])))));
                }
            }
        }
        arr_31 [i_7] [18] = var_8;
        var_20 = (max((((((arr_20 [i_7] [i_7] [i_7 - 2] [i_7]) ? var_7 : (arr_26 [i_7] [i_7] [i_7]))) & (arr_23 [i_7]))), (arr_15 [i_7 + 2])));
    }
    #pragma endscop
}
