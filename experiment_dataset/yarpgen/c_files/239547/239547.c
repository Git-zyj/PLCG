/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (arr_1 [i_0])));
                var_14 -= (arr_1 [i_1]);
                var_15 |= (arr_2 [6] [i_1]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_16 = (((arr_8 [i_2] [i_2]) != (arr_4 [i_2])));
            var_17 = (arr_8 [18] [18]);
        }
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            arr_13 [i_2] [i_4 + 1] [i_4] = (arr_8 [i_2] [i_2]);
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_18 = (arr_4 [i_6]);
                        var_19 = (i_2 % 2 == 0) ? (((arr_7 [i_2]) / (arr_7 [i_2]))) : (((arr_7 [i_2]) * (arr_7 [i_2])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_20 = ((((((arr_21 [i_8]) == (arr_4 [i_4])))) % (arr_10 [i_2] [10])));
                        var_21 = (((arr_9 [i_4 + 1]) ? (((arr_6 [i_2]) & (arr_19 [i_2] [i_2] [i_7] [i_2]))) : (arr_10 [i_2] [i_7])));
                        var_22 = (arr_16 [7] [i_4] [i_4] [3]);
                        var_23 = (max(var_23, (((((arr_7 [1]) ? (arr_19 [i_4] [i_7] [i_7] [14]) : (arr_12 [i_2] [i_2])))))));
                    }
                }
            }
        }
        arr_24 [i_2] = (arr_4 [i_2]);
        var_24 = (max(var_24, (((((arr_12 [i_2] [i_2]) ? (arr_16 [i_2] [5] [8] [i_2]) : (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
    }
    for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
    {
        arr_28 [1] = (((arr_15 [i_9] [i_9] [i_9] [i_9]) > (((arr_26 [i_9 + 1]) / (arr_16 [16] [16] [i_9] [i_9])))));
        var_25 = (((arr_6 [i_9 + 2]) ? (arr_12 [i_9 + 1] [i_9]) : (((((arr_20 [i_9] [i_9]) | (arr_15 [6] [13] [13] [i_9 + 1]))) ^ ((((arr_23 [i_9] [i_9 + 2] [4] [i_9] [i_9] [i_9]) ? (arr_12 [i_9 + 2] [i_9 + 2]) : (arr_10 [1] [i_9]))))))));
        var_26 = (arr_22 [i_9 + 2] [i_9 + 2] [i_9 + 2]);
        var_27 = (((((arr_20 [i_9] [i_9]) ? (arr_16 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 + 1]) : ((((arr_18 [i_9] [14]) ? (arr_7 [0]) : (arr_6 [i_9])))))) > ((((arr_23 [i_9 - 1] [8] [10] [10] [i_9 - 1] [i_9 + 2]) ? ((((arr_12 [i_9] [6]) == (arr_19 [i_9 + 2] [i_9 - 1] [i_9 + 1] [1])))) : (((arr_4 [i_9]) ? (arr_26 [i_9]) : (arr_19 [i_9] [i_9 - 1] [i_9 - 1] [0]))))))));
        arr_29 [i_9 + 2] = (arr_10 [16] [i_9 + 1]);
    }
    for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
    {
        var_28 = ((((((((arr_8 [i_10 - 1] [i_10]) ? (arr_30 [i_10]) : (arr_23 [i_10 + 2] [i_10 - 1] [i_10] [i_10] [i_10 + 1] [i_10 + 2])))) ? (arr_9 [i_10]) : (arr_10 [i_10] [i_10 - 1]))) * (arr_30 [i_10])));
        var_29 = (arr_31 [i_10 - 1] [i_10]);
        var_30 = (((arr_4 [i_10]) ? (arr_18 [16] [i_10]) : (arr_14 [i_10] [i_10] [i_10] [i_10 - 1])));
        arr_33 [i_10] = ((((((arr_10 [i_10] [i_10]) * (arr_26 [i_10]))) * (((arr_9 [i_10]) ? (arr_11 [i_10 - 1] [i_10 - 1]) : (arr_6 [i_10 + 2]))))));
    }
    #pragma endscop
}
