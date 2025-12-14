/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 / (((var_12 & var_0) ? var_2 : (!65528)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_2] = ((+((var_9 ? (arr_0 [i_0 + 3]) : (arr_0 [i_0 + 3])))));
                    arr_9 [i_2] [i_0 + 4] = var_14;
                    arr_10 [i_2] [i_1] = (max((((arr_1 [i_1] [i_2]) & (arr_1 [10] [i_2]))), (((arr_4 [i_0 - 1]) ? (64271 + 226) : (arr_2 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_2] [i_2] [i_2] = arr_4 [i_0 - 1];
                                arr_17 [i_0 + 2] [i_2] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 + 4] [i_0 + 2] = (((((((max(var_7, var_2))) ? var_12 : var_7))) ? var_8 : (-32767 - 1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_16 = (((arr_20 [i_5] [i_1 - 1] [i_2] [i_5 + 1]) / ((var_7 ? (arr_20 [i_0 + 2] [i_6 - 1] [i_2] [i_5 + 1]) : var_12))));
                                arr_24 [i_0 + 1] [i_2] [i_2] [i_0 + 1] [3] = ((((max((arr_14 [i_0 + 2] [i_1 - 1] [i_1 - 1] [i_5 + 1] [i_5 - 2] [i_6 - 1] [i_6 + 1]), (arr_11 [i_0 + 2] [i_2] [i_1 + 2])))) ? ((~(arr_21 [i_5 - 2]))) : ((((arr_15 [i_5] [i_2] [i_2]) ? var_7 : (arr_7 [11] [8] [i_2] [i_6 + 2]))))));
                                arr_25 [i_2] [i_2] [i_5] [i_6 + 1] = var_11;
                                arr_26 [i_2] [i_1 + 2] [i_2] [i_1 + 2] [i_6] = ((((arr_18 [i_2] [i_0 + 4] [i_0 + 2]) || (arr_18 [i_2] [i_0 + 2] [i_0 + 4]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (!var_10);
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            {
                arr_32 [i_7] = var_0;
                var_18 = (((((arr_1 [i_7 + 2] [i_7 + 2]) << (((~0) - 18446744073709551611)))) & (arr_21 [i_7])));
            }
        }
    }
    #pragma endscop
}
