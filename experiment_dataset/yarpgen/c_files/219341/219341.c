/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = min((((((1 ? (arr_0 [5]) : var_2))) ? ((78 ? 1073741824 : 2147483647)) : (arr_4 [i_0] [i_1 - 1] [i_2]))), ((((arr_7 [i_1 - 2] [i_1] [i_2] [14]) * (min((-2147483647 - 1), 63488))))));
                    arr_10 [i_2] [i_1 - 2] = (arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = (((arr_4 [i_4] [i_2] [0]) ? (arr_12 [i_0] [i_1 - 2]) : ((var_16 ? (((arr_6 [i_2] [i_2] [i_4] [i_2]) ? (arr_8 [i_0]) : (arr_3 [i_0]))) : (((arr_6 [i_1] [i_1] [i_1 + 1] [14]) ? 2053 : (arr_5 [i_0] [i_0])))))));
                                arr_16 [i_3] = ((((((((arr_4 [i_0] [i_0] [i_0]) ? 676269876 : var_8))))) ^ (min(11019, (arr_12 [i_3] [i_3])))));
                                arr_17 [i_1] [i_1] [i_0] = ((~(arr_7 [2] [i_2] [i_2] [i_2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_22 [13] [7] [13] [i_5] [13] [i_5] = (arr_1 [i_1 - 2] [i_0]);
                                arr_23 [i_6 - 1] [5] [i_6 - 1] [i_6 - 1] [i_6] = arr_6 [i_0] [i_1 + 1] [i_0] [i_1];
                                arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [i_1 - 2] &= (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_25 [i_0] [i_0] [15] [i_2] [i_2] [15] [i_6] = max((((((arr_11 [i_0] [i_0] [i_0] [1] [i_5]) ? 7 : (arr_14 [i_0] [16] [1] [i_2] [i_5] [i_6] [i_6 - 1]))) - (arr_19 [i_0] [i_0] [i_0] [i_1 - 2]))), ((((arr_19 [i_1] [i_6 - 1] [i_6] [i_1 + 2]) + (arr_19 [i_2] [i_6 - 1] [i_0] [i_1 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                arr_32 [i_7] = (((((((-25688 ? -748747177731642235 : (arr_31 [5] [i_8])))) ? ((3480535766 * (arr_28 [i_8] [i_7]))) : (((min(182, 6299)))))) | (arr_5 [i_7] [i_8])));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 7;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_37 [i_7] [i_10] [i_9] [i_9] [i_10] = ((~((~((var_10 & (arr_33 [i_10] [4] [i_7])))))));
                            arr_38 [i_9] [i_8] [i_9] [i_8] [i_8] &= (arr_13 [i_9 + 2] [i_9 - 1] [i_9 + 3] [i_9] [i_9 + 1]);
                            arr_39 [i_9] [i_8] [4] [i_10] = 3480535753;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
