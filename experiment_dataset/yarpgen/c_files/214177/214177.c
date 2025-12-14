/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = ((((((((var_2 ? (arr_3 [i_0]) : (arr_3 [0])))) ? (arr_3 [5]) : (arr_4 [i_1] [5])))) ? (((arr_1 [13] [3]) ? 1 : (arr_1 [i_0] [i_2]))) : ((((arr_1 [i_1] [i_2]) ? ((((arr_1 [i_1] [i_0]) < var_5))) : var_3)))));
                    arr_9 [i_2] [i_1] [2] = (arr_8 [i_2] [i_1] [i_2] [i_1]);
                    var_16 = (arr_0 [i_0] [i_0]);
                    var_17 = ((((((((arr_1 [i_0] [i_1]) ? (arr_3 [0]) : var_7))) ? (((arr_1 [i_0] [1]) * (arr_5 [i_0] [i_0] [i_2]))) : (arr_8 [i_2] [i_2] [i_1] [i_2]))) <= (((((((arr_3 [i_0]) <= (arr_0 [i_0] [i_0]))) || (((var_8 ? (arr_6 [i_0]) : (arr_6 [0]))))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_18 |= ((((((arr_14 [i_3] [i_4]) ? 1161000455 : -1))) ? (arr_15 [i_3] [16]) : (((((arr_12 [1]) ? (arr_10 [i_3] [i_4]) : var_4)) & var_4))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_21 [i_3] = (arr_18 [i_3] [i_3]);
                            var_19 = ((((((256673926 ? 1 : 0)))) ? ((((((arr_17 [i_4] [i_5 - 1] [i_6]) / (arr_14 [7] [i_4])))) ? (((arr_18 [i_3] [i_5]) ? (arr_15 [9] [i_3]) : (arr_12 [i_3]))) : ((max(var_11, var_3))))) : ((0 ? 1 : 0))));
                        }
                    }
                }
                arr_22 [i_3] [i_3] = (((((((var_1 ? (arr_16 [i_3] [i_3]) : (arr_20 [i_3] [i_3] [i_4] [i_4])))) ? (min(var_1, (arr_18 [i_3] [i_3]))) : (((arr_10 [i_3] [i_4]) ? (arr_11 [i_3 - 2]) : (arr_10 [i_3] [i_3 + 1])))))) ? (((((min(0, 1))) != 256673926))) : (((-256673928 <= ((1 & (arr_11 [i_3])))))));
            }
        }
    }
    var_20 = (((((((var_11 ? var_2 : var_4))) ? ((var_14 ? var_7 : var_9)) : var_0)) < ((max((var_2 * var_2), ((var_2 ? var_8 : var_13)))))));
    #pragma endscop
}
