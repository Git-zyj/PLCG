/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((min(var_0, ((min(var_7, var_6))))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (max((arr_0 [i_0 + 1] [i_0]), (arr_1 [i_0 - 1])));
                var_22 &= (arr_3 [i_0 + 1]);
            }
        }
    }
    var_23 = (min((min(var_8, var_8)), (max((min(var_7, var_19)), (max(var_17, var_19))))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((max((((arr_15 [i_5] [i_5 - 1] [i_6] [i_6] [i_6 + 1] [i_6 + 1]) ? (arr_12 [i_2 - 1] [6] [i_6 - 2] [i_6 + 1] [i_6 + 1]) : (arr_12 [i_2 + 2] [22] [i_6 - 1] [i_6 - 1] [i_6 + 1]))), ((max((arr_9 [16]), (arr_15 [i_3] [i_5 - 1] [i_5 - 1] [i_6] [i_6 - 1] [20])))))))));
                                var_25 &= ((max((((arr_13 [i_3] [i_5] [i_3] [i_2 + 1]) ? (arr_15 [i_6 + 1] [i_5] [i_4] [i_3] [i_3] [i_2]) : (arr_9 [22]))), ((min((arr_9 [1]), (arr_5 [1])))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_26 *= (arr_13 [i_8] [i_7] [16] [i_2 - 1]);
                            arr_20 [i_2 - 1] [i_3] [i_7] [10] &= (min((((arr_5 [i_2 - 1]) ? (arr_9 [4]) : (arr_5 [i_2 - 1]))), (arr_5 [i_7 + 2])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
