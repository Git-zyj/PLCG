/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 |= (((((((!(arr_7 [6] [i_1] [i_1]))))) <= var_1)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] = ((-(((arr_8 [i_3 - 1] [i_3] [i_3 - 3] [i_3]) ? (arr_8 [i_3 + 1] [i_3] [i_3 - 1] [i_3]) : (arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3])))));
                                var_11 -= (min((((~0) | -11213401)), (arr_2 [i_0])));
                                var_12 = (max(((var_9 ? (2253372098 - var_9) : (((max(1, 1)))))), (arr_4 [5] [i_2] [9])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_20 [1] [i_5] [i_2] [i_1] [i_0] = ((((-2 ? (arr_3 [0] [6]) : 106)) ^ (min((arr_18 [i_1] [i_2] [i_2] [i_5] [i_5] [i_6 - 2]), (arr_0 [i_0] [i_0])))));
                                var_13 = (max(var_13, (((((min((arr_16 [i_6 + 1] [i_1 + 1] [i_6 + 1] [i_1 + 1]), (arr_16 [i_6 + 1] [i_2] [i_2] [i_1 + 1])))) == (min((arr_10 [i_6]), (var_0 || 1))))))));
                                arr_21 [i_5] = ((arr_5 [i_2] [i_2] [i_2]) ? (~1) : 1);
                                arr_22 [i_0] [i_1] [9] [i_5] [i_6] &= ((18446744073709551600 && (arr_11 [i_0] [i_1] [i_0] [i_1] [i_1])));
                            }
                        }
                    }
                    var_14 -= (min(((var_2 != (arr_1 [i_0] [i_1 - 1]))), ((max(var_9, var_6)))));
                    arr_23 [9] [i_1 + 1] [i_1 + 1] [i_1 + 1] = ((arr_6 [i_0] [i_0]) << ((min((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_1 - 1])))));
                }
            }
        }
    }
    var_15 = var_0;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                arr_30 [i_8] = (arr_26 [i_7] [12] [i_8]);
                var_16 = (~var_0);
                var_17 = (((max(-964289875, var_8)) == (arr_27 [i_7] [i_8] [i_7])));
                arr_31 [i_8] = (((arr_24 [14] [i_8]) | (arr_27 [i_7] [i_7] [i_7])));
            }
        }
    }
    var_18 = (~var_9);
    #pragma endscop
}
