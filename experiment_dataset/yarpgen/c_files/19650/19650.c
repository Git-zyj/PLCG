/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((((((((var_8 ? 415916225 : (arr_3 [i_0] [i_1]))) / var_2))) ? (arr_3 [i_1] [i_0]) : (arr_3 [i_0] [i_1]))))));
                arr_4 [i_0] [19] [i_1] = ((~(((arr_3 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_3 [i_0] [i_1])))));
                var_13 = (arr_0 [i_0]);
                arr_5 [i_1] [i_1] = (-64860164318503172 | 118);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_14 = (arr_9 [i_2]);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_15 = 6072915209085717175;
                                var_16 *= var_5;
                                arr_21 [i_2] [i_2] [16] [i_4] [i_4] [i_4] [i_6 - 1] |= (min((((arr_17 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6] [i_6 + 3] [i_6]) ? (arr_17 [i_3] [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 2] [i_6 + 3]) : (arr_17 [i_2] [i_6 - 1] [i_6 + 1] [14] [i_6] [21]))), var_3));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [22] |= (max((min(var_5, var_6)), ((219 ? (arr_9 [i_9 + 2]) : (arr_9 [i_9 - 2])))));
                                var_17 *= (((((1 ? (((min(var_10, (arr_26 [i_2] [i_3] [i_7] [23] [i_9 - 2]))))) : (((arr_27 [6] [i_3] [3] [3] [17]) ? var_0 : var_11))))) ? (arr_28 [i_2] [i_3] [i_3] [i_8] [i_3]) : (arr_23 [1] [i_8] [i_7])));
                                arr_30 [i_2] [i_3] [18] [i_8] [8] = ((var_0 ? 35180 : (((((max((arr_23 [i_9 + 1] [i_7] [12]), var_9))) || (arr_10 [i_9 - 1] [7]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
