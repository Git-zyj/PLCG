/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = ((arr_3 [1]) >= ((min((((var_8 >= (arr_8 [i_0] [i_1 - 3] [i_2] [i_1 - 3])))), var_12))));
                    arr_9 [i_0] [21] = max((((13 ? (arr_5 [i_1 + 4] [i_2 + 2]) : (arr_7 [i_1 - 1] [i_2 - 1])))), -var_6);
                    var_20 = ((+((((min((arr_0 [i_2 + 3]), 65523))) ? (arr_8 [i_2] [i_2 + 2] [1] [i_1 - 1]) : (arr_8 [i_1] [i_1 - 3] [i_2] [i_2])))));
                    arr_10 [i_0] [i_0] [i_2] = ((-(arr_1 [i_0])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_21 = (((((-(arr_8 [i_5] [i_4] [7] [7])))) ? (arr_15 [i_3] [i_3]) : ((-(arr_14 [i_5])))));

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        arr_23 [i_4] [i_4] [i_4] = ((var_11 ? var_5 : ((-(arr_6 [i_6])))));
                        arr_24 [i_4] [i_4] [i_4] [i_4] = ((~(arr_22 [i_3] [i_4] [i_5])));
                        arr_25 [i_4] [i_5] [i_4] [i_4] = (((arr_13 [i_6 - 1]) - (arr_13 [i_6 + 1])));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        arr_28 [15] [15] [i_4] [i_7] [i_7] = (((arr_19 [i_7 - 2] [i_7 + 1] [3] [i_7 - 2]) > (arr_19 [i_7 - 2] [i_7 + 1] [i_7] [i_7])));
                        var_22 = (((arr_11 [i_7 + 1] [i_7]) ? ((var_13 ? 6187976641354299153 : var_2)) : ((2095104 ? (arr_4 [i_3] [i_3] [i_5]) : (arr_14 [i_3])))));
                    }
                    for (int i_8 = 2; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        arr_31 [10] [10] [i_5] [i_8 - 2] [i_8 - 1] [i_4] = ((((var_7 >= (arr_16 [i_5] [i_8 + 1])))) << (var_17 - 49));
                        var_23 = (max(var_23, (((!((((arr_3 [i_8 + 1]) + var_18))))))));
                        var_24 = (max((arr_8 [i_3] [10] [i_4] [i_8]), (arr_8 [7] [i_5] [i_8] [i_8])));
                        var_25 |= arr_30 [i_5];
                    }
                }
            }
        }
    }
    var_26 += ((~(~9223372036854775807)));
    #pragma endscop
}
