/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] = (arr_3 [i_0]);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (!var_0);
                                var_17 = ((!(arr_5 [i_0])));
                                var_18 = (max(var_18, (((((22962 - (arr_6 [i_2] [i_1]))) ^ 127)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] = (max(((var_6 ? (max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_8 [9]))) : var_7)), ((min((max(var_16, (arr_2 [i_5]))), var_4)))));
                                var_19 = (+-127);
                                arr_23 [i_1] [i_5] [8] [i_1] &= ((((-(arr_15 [i_0] [i_7] [i_1])))));
                                var_20 = (((var_12 ? (arr_21 [i_7] [i_6] [i_5] [i_0] [i_0]) : (arr_21 [i_0] [1] [i_0] [1] [i_0]))));
                                var_21 = ((((var_4 ? (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_15)) << (((!(((~(arr_3 [i_0])))))))));
                            }
                        }
                    }
                }
                arr_24 [i_0] = ((var_4 ? (arr_7 [i_1] [i_0] [i_0] [i_0]) : ((((((arr_3 [i_0]) ? (arr_6 [i_0] [i_0]) : (arr_11 [i_0])))) ? (20108 * var_9) : (arr_21 [i_0] [i_0] [i_0] [i_1] [i_0])))));
                arr_25 [i_0] = (((max(((var_16 ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : var_16)), (arr_21 [i_0] [1] [i_0] [i_0] [i_0]))) | (((max((arr_3 [i_0]), 178))))));
            }
        }
    }
    var_22 &= var_11;
    #pragma endscop
}
