/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 20;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_8 [i_3] [i_3] = (((arr_2 [i_3] [9] [i_3]) ? (arr_2 [0] [i_1] [i_1]) : (arr_2 [11] [i_2] [i_0])));
                        var_17 = arr_3 [i_3] [i_0];
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_11 [7] [2] [i_0] [i_0] [i_0] [i_0] = ((((max((arr_0 [i_2]), (arr_1 [i_4]))))) ^ (((min(1441373044, var_0)) ^ var_14)));
                        arr_12 [i_4] [i_2] [i_1] |= ((-(arr_4 [i_0] [i_0] [10])));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_18 &= arr_10 [i_2] [i_2 + 1] [8] [i_2];
                                var_19 = 1021047519;
                                arr_21 [0] [0] [i_2] [i_5] [i_5] [11] [0] = arr_2 [i_0] [8] [i_2];
                                var_20 |= (min((((arr_0 [i_2 + 2]) ? var_11 : (arr_0 [i_2 + 1]))), ((var_7 | (arr_0 [i_2 - 2])))));
                                var_21 = ((var_13 ? ((-2360708069737268150 / (arr_17 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 3] [i_1]))) : (((((min((arr_10 [i_0] [i_1] [i_1] [5]), 20))) ? (((arr_10 [i_0] [i_1] [i_2] [i_5]) ? var_14 : (-32767 - 1))) : ((min((arr_15 [i_0] [i_1 + 3] [i_2] [i_5] [i_1 + 3]), 2065948633))))))));
                            }
                        }
                    }
                    arr_22 [i_2] [i_0] [i_0] = (((((((arr_13 [i_0] [i_1 - 3] [i_1] [9] [i_1 - 3]) - (arr_4 [0] [i_1] [i_2]))))) * (((arr_2 [i_0] [i_2 + 1] [i_1 - 1]) / var_6))));
                    var_22 |= (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) + (((((((37 ? var_13 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) || (arr_1 [i_1 + 2])))))));
                }
            }
        }
    }
    #pragma endscop
}
