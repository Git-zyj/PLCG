/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = ((!(arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                    var_13 = (min(var_13, (arr_7 [i_0] [i_0] [i_0])));
                    arr_8 [i_0] [i_2] [i_0] [i_0] = (arr_4 [i_0] [12]);
                    var_14 = ((~((-(arr_7 [i_2 - 1] [i_2] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = ((((arr_13 [i_1] [i_2 - 1] [i_4 - 1] [5]) * (arr_13 [2] [i_2 - 1] [9] [i_2 - 1]))));
                                arr_15 [i_4] [i_1] [i_2 - 1] [5] [i_4 + 2] = ((-((((((arr_7 [i_3] [i_3] [4]) ? var_7 : var_10))) ? ((var_2 ? var_0 : (arr_6 [12] [i_1] [3]))) : ((((arr_3 [i_0] [i_2 - 1]) ? (arr_4 [1] [11]) : (arr_4 [5] [i_0]))))))));
                                var_16 = ((((max((arr_5 [i_2] [i_1] [i_3] [i_3]), (((arr_7 [i_0] [5] [9]) ? (arr_2 [i_2]) : (arr_13 [i_0] [i_1] [i_0] [4])))))) ? (((arr_14 [i_2] [i_4] [i_2 - 1] [i_2 - 1] [i_2]) ? (arr_14 [3] [i_4] [i_2 - 1] [i_2 - 1] [i_2]) : (arr_14 [i_2] [i_4] [i_2 - 1] [i_2 - 1] [11]))) : (((127 ? ((var_9 ? var_10 : (arr_6 [11] [i_2] [i_1]))) : (((var_4 ? (arr_2 [12]) : (arr_11 [9] [i_1] [i_1])))))))));
                                arr_16 [i_4] [i_4] [3] [i_4] [6] = (+((-28820 ? (arr_12 [i_4 + 2] [i_3] [i_1] [6] [i_1] [1]) : ((max(0, -8800))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (((~var_8) ? (((((var_11 ? var_7 : var_6))))) : var_3));
    #pragma endscop
}
