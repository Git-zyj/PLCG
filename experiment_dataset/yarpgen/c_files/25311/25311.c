/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_12 = 1536;
                    arr_7 [14] [i_1] = ((((((var_3 ? var_7 : var_6)))) ? var_8 : ((((((arr_4 [i_0] [1] [23]) < (arr_0 [i_0] [i_1]))))))));
                }
            }
        }
    }
    var_13 = ((1537 >= (127 <= -1552)));
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] [i_3] [i_7] = (((((var_10 + (arr_15 [i_3] [i_6] [i_5] [i_3])))) ? ((-(arr_6 [i_4] [i_4] [i_4] [i_6 - 2]))) : -var_4));
                                var_14 = -4194288;
                                var_15 = (min(var_15, var_7));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_16 = ((!(((-((((arr_24 [3]) != var_4))))))));
                                var_17 -= ((((var_5 ? 1536 : (arr_19 [21] [i_4] [i_4]))) / ((((((arr_17 [i_8] [i_5] [i_5] [14]) ? (arr_17 [i_9] [i_9] [i_9] [12]) : var_8)))))));
                            }
                        }
                    }
                    var_18 = (max((max((((var_1 ? (arr_19 [20] [i_4] [i_3]) : var_5))), ((var_1 ? var_9 : var_10)))), (((~((var_0 >> (((arr_1 [i_3] [i_4]) - 18212)))))))));
                }
            }
        }
    }
    #pragma endscop
}
