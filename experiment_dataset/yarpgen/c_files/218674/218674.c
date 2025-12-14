/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_15 += ((((var_12 + 2147483647) << var_5)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_16 = (min(var_16, (((((((arr_5 [i_1 - 2] [i_3 - 1] [i_3 + 1]) ? -1 : (max((arr_5 [i_0] [i_2] [3]), (arr_12 [i_4] [i_0] [i_2] [i_0] [5] [i_0])))))) ? ((+(((arr_1 [9] [i_1]) + 134217696)))) : ((min((~-15), ((max(4, var_9)))))))))));
                                var_17 |= ((((((((var_12 + 2147483647) >> (((arr_1 [i_1] [i_1]) - 22774))))) ? (min(var_2, var_12)) : (((((arr_11 [i_0] [i_1] [4] [2] [i_4] [i_3]) <= 1)))))) | (arr_1 [i_0] [i_0])));
                                var_18 = (((arr_0 [i_2]) ? (arr_9 [i_2]) : (~28)));
                                var_19 ^= ((((min(((var_8 ? (arr_11 [i_0] [i_4] [i_1] [i_3] [i_1] [i_1]) : -23)), ((((arr_5 [i_0] [i_3] [i_0]) <= 846282683)))))) || ((max((arr_2 [i_3 + 1] [i_1 - 2]), (arr_0 [i_1 + 2]))))));
                            }
                            arr_14 [i_2] [i_2] [i_2] = ((((((arr_6 [i_0] [i_2] [i_2]) + (arr_6 [i_0] [i_2] [i_2])))) ? (min((((arr_3 [i_0] [2] [2]) ? var_12 : var_0)), (arr_4 [i_1 + 2] [i_3 + 2]))) : (6144 / var_3)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 7;i_7 += 1)
                        {
                            {
                                arr_23 [i_6] [i_7] [i_1] [i_5 - 1] [i_5] [i_1] [i_6] = (arr_17 [i_0] [i_0] [i_6] [i_7]);
                                arr_24 [i_6] [i_1] [i_5] [i_6] [i_7 - 3] = var_14;
                                var_20 = (min(var_20, (arr_10 [i_0] [i_0] [i_1] [0])));
                                var_21 = (arr_8 [i_1 - 1] [i_7 + 2] [i_0] [i_7 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            {
                arr_31 [4] [i_8] [i_9] = ((arr_28 [i_9] [i_8]) / ((-((var_4 ? var_13 : (arr_26 [i_8] [i_9]))))));
                var_22 = max(var_12, (arr_29 [i_8]));
                arr_32 [i_9] = (max((max((arr_28 [i_8] [i_9]), var_7)), (arr_30 [i_8] [2] [i_9])));
                arr_33 [i_8] = (((arr_28 [1] [i_9 + 3]) << (arr_28 [i_9 - 1] [i_9 + 3])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 22;i_11 += 1)
        {
            {
                var_23 ^= var_13;
                var_24 = (min(var_24, ((((((var_12 ? ((0 ? (arr_40 [i_11 - 1] [i_11 + 1] [6]) : 0)) : (arr_38 [i_10])))) ? (~var_13) : (((~((max(var_12, var_6)))))))))));
                arr_41 [i_10] = var_13;
            }
        }
    }
    var_25 = (((65528 ? 65529 : 20969)));
    #pragma endscop
}
