/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (max((arr_5 [i_0 + 2]), (((var_9 ? (arr_3 [i_0 - 1] [i_1] [i_2]) : (arr_5 [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_3] [i_4] &= (min(((~(arr_5 [i_0 + 1]))), ((((arr_5 [i_0 + 1]) == (arr_5 [i_0 - 1]))))));
                                var_13 *= ((((max((arr_12 [i_0] [i_0] [i_0 - 1] [i_0 - 1]), (arr_12 [i_0] [i_0 - 1] [i_0 + 2] [i_4])))) + (arr_12 [i_0] [i_0] [i_0 - 1] [i_1])));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [9] = (((arr_13 [i_0 + 2] [i_0 + 2] [i_2] [i_2]) ? ((((!(var_0 >= 1303291973))))) : (((arr_3 [i_0] [i_0] [i_0]) ^ 21699))));
                    var_14 = ((max((arr_6 [i_0] [i_1 + 2] [i_2] [i_2]), (arr_6 [i_0 - 1] [14] [14] [i_2]))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                {
                    var_15 = (min(var_15, (arr_3 [i_0] [i_5 + 1] [i_6])));
                    arr_22 [13] [i_5] [i_6] [8] = (arr_5 [i_6 - 1]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_16 &= (((min(-59, 7737538216569810188))) & 12929486523646380483);
                                var_17 = (max(var_17, ((((-(arr_15 [i_8 + 1] [i_5] [i_0 - 1] [i_5]))) * (arr_5 [i_0 - 1])))));
                                arr_28 [i_0] [i_5] [11] [i_7] [i_5] [i_8] [i_8] = (((((((0 ? var_5 : (arr_24 [i_0 + 2] [7] [i_0 + 2] [i_0 + 2]))) <= 9473609946855144688)))) / (max(4134184292988696071, 18446744073709551615)));
                            }
                        }
                    }
                }
            }
        }
        var_18 = (max(var_18, (((-(arr_3 [i_0 + 1] [i_0 + 2] [i_0 + 1]))))));
        arr_29 [i_0] = ((+(((arr_0 [i_0 - 1]) ? (arr_8 [i_0] [i_0] [i_0 + 2]) : ((-(arr_3 [i_0] [7] [i_0])))))));
    }
    var_19 = var_3;
    #pragma endscop
}
