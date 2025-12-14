/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_13, (!1243479701)));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_19 ^= ((((((-(arr_2 [i_0 - 1] [i_0 - 1]))) + 2147483647)) >> (((arr_2 [i_0 - 1] [i_0 - 1]) - 27776))));
        var_20 += ((arr_2 [i_0 - 1] [i_0 - 1]) ? (max((arr_0 [i_0 + 1]), 1065151889408)) : (min(((min(var_9, (arr_0 [9])))), (max(var_7, var_15)))));
        arr_3 [i_0] = ((max((arr_1 [i_0 - 1]), (((arr_0 [i_0 - 1]) && 1065151889408)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                var_21 = arr_2 [i_2] [9];

                /* vectorizable */
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    var_22 = (max(var_22, ((!(arr_8 [i_3 - 1])))));
                    var_23 = arr_7 [i_1] [i_3];
                    var_24 = (max(var_24, (((((((arr_2 [i_1] [i_1]) ? 0 : (arr_7 [i_1] [i_1])))) && (((arr_10 [i_1] [0] [i_1] [i_1]) || var_9)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] = ((var_2 ? (arr_16 [i_1] [i_2] [i_3 - 1] [i_4] [i_2] [i_1] [i_4]) : (arr_16 [i_4] [i_2] [i_3 + 1] [i_4] [2] [i_5] [i_4])));
                                var_25 &= ((((arr_9 [i_3]) && (arr_1 [1]))));
                                var_26 *= ((~((1065151889408 | (arr_11 [6])))));
                            }
                        }
                    }
                    var_27 = (arr_0 [i_2]);
                }
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    var_28 -= (arr_5 [i_1]);
                    var_29 *= (((((arr_11 [i_6]) | (arr_1 [i_1]))) | ((max(((~(arr_10 [i_1] [0] [i_2] [i_6 - 1]))), (arr_14 [i_1] [i_1] [i_2] [i_6]))))));
                    var_30 = min(-5, (arr_16 [2] [i_1] [i_2] [i_2] [i_2] [i_6] [i_6]));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 3; i_7 < 17;i_7 += 1)
    {
        var_31 -= (((arr_21 [i_7] [i_7 + 1]) ? -1065151889409 : 65531));
        var_32 = (((arr_20 [i_7 + 1] [i_7 - 1]) && (arr_20 [i_7] [i_7 + 1])));
        var_33 = var_10;
    }
    var_34 = ((((var_16 | var_8) << ((((12885267598809760746 ? var_4 : 118)) - 11976158966720902974)))));
    #pragma endscop
}
