/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 &= 1073741568;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        var_13 = ((((arr_7 [i_1] [i_1] [i_2] [i_3] [1] [i_1]) ? (arr_3 [i_1] [i_3]) : (arr_7 [1] [i_2] [3] [i_2] [1] [i_0]))));
                        arr_10 [i_0] [i_1] &= ((arr_5 [i_0] [i_1] [i_2 + 1] [1]) ? ((var_3 ? (arr_0 [i_0]) : (arr_0 [i_2]))) : (((arr_9 [i_0] [i_1]) ? (arr_2 [i_0] [i_1 - 1]) : (arr_9 [i_0] [i_1]))));
                        var_14 = (max(var_14, (((32622 + (arr_0 [i_3]))))));
                        arr_11 [i_3] [i_1] [3] [i_2] [i_1] [i_0] = ((((((arr_8 [i_0] [0] [i_1] [0]) == (arr_7 [i_0] [i_1 + 3] [1] [i_3] [i_2 - 3] [i_2 - 2])))) % (((arr_7 [i_3 + 1] [i_2 - 1] [i_2] [i_1 + 2] [i_0] [i_0]) ? (arr_8 [i_0] [i_1] [i_1] [i_3]) : (arr_8 [i_0] [i_0] [i_1] [i_1])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_4] = ((((!(arr_14 [i_4] [4] [i_4] [i_4]))) ? ((32914 ? var_4 : var_9)) : ((~(arr_18 [i_0] [i_0] [i_0] [i_0])))));
                        arr_20 [i_0] [i_0] [i_0] [i_4] = (((((32652 ? (arr_17 [i_0] [i_4] [i_0] [i_6]) : -1073741568))) ? (arr_7 [i_0] [i_0] [i_0] [i_4] [i_5] [6]) : var_2));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 7;i_8 += 1)
            {
                {
                    arr_26 [i_7] [i_8] [i_7] = (((((arr_6 [i_0] [i_0] [i_8] [i_8]) ? (arr_17 [i_0] [i_7] [i_8] [i_0]) : var_5)) | (((((arr_6 [1] [i_7] [i_8] [i_8]) && (arr_23 [i_8] [i_0] [i_0])))))));
                    arr_27 [i_0] [i_8] [i_8 - 1] = ((-(((arr_9 [i_8] [i_0]) ? 32914 : (arr_12 [i_0])))));
                    arr_28 [i_8] = ((((((arr_12 [i_0]) * (arr_23 [i_0] [i_0] [i_0])))) * (((arr_17 [i_0] [i_0] [i_7] [i_8 + 1]) ? (arr_4 [i_8 + 4] [i_7] [i_0]) : (arr_21 [i_0])))));
                }
            }
        }
        var_15 = (((((arr_3 [i_0] [i_0]) + (arr_18 [i_0] [i_0] [1] [i_0]))) | (arr_23 [i_0] [0] [i_0])));
    }
    var_16 = (min(var_16, (((((((var_9 ? var_11 : var_2) != 32913))))))));
    #pragma endscop
}
