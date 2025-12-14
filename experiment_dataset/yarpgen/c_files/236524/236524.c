/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_15 != (((max(var_9, var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (arr_6 [i_1] [i_1] [i_1]);
                var_19 = (max(((((arr_7 [8]) <= (arr_7 [i_0])))), (arr_7 [i_0])));
                arr_8 [i_1] [i_1] [7] = (((arr_7 [i_0]) ? (arr_5 [i_0]) : (((((((arr_3 [i_1]) ^ var_5))) ? (((arr_6 [i_1] [i_1] [i_1]) / (arr_0 [0]))) : (arr_1 [i_0]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_17 [i_4] [i_4] [i_2] = (min(((((((var_11 || (arr_13 [i_2] [i_2] [i_2])))) < (arr_13 [i_4] [i_4] [i_4])))), (max(((((arr_10 [1]) <= (arr_11 [i_2])))), (((arr_12 [12] [12]) ^ (arr_14 [16] [20])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_23 [17] [17] [i_4] [i_2] [i_2] = (((arr_22 [i_2] [i_2]) << (((((var_8 << (((arr_20 [21] [21] [21] [0] [15]) - 17623)))) >= (arr_11 [i_2 - 1]))))));
                                var_20 = (max(var_20, (((((min(((max((arr_13 [9] [10] [9]), (arr_20 [i_2] [i_2] [i_2] [i_2] [i_2])))), (((arr_14 [i_4] [2]) | (arr_16 [i_3] [i_3])))))) ? ((~((var_15 ? var_8 : (arr_12 [i_2] [i_2]))))) : var_7)))));
                                arr_24 [i_4] = (((-(((arr_16 [i_4] [1]) ? (arr_19 [1] [11] [1] [11] [20] [1]) : (arr_11 [i_5]))))) | ((min((arr_13 [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_13 [i_2 - 1] [11] [i_2 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}
