/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = (((arr_0 [i_0] [i_1]) ? var_10 : ((~(min(var_10, 1))))));
                            var_18 = (max(var_18, ((min(var_15, ((((max((arr_7 [i_2] [i_1 - 1] [i_2] [i_3]), var_7))) ? (arr_8 [i_0 - 4] [i_0 - 1] [i_0 + 1] [i_0 + 3]) : ((var_14 ? var_1 : -139516968)))))))));
                            var_19 = (!139516969);
                            arr_11 [i_0] [i_0] [i_3] [i_0 - 4] [i_3] = ((~((139516978 / (arr_9 [i_1 + 1] [i_1 - 1] [i_2] [i_3])))));
                        }
                    }
                }
                var_20 = (arr_2 [i_0 + 3]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_21 = 2147483647;
                            var_22 = var_12;
                            var_23 = ((!((((((var_4 ? var_16 : var_15))) ? ((var_7 ? (arr_13 [i_7]) : var_12)) : (max(var_10, 1)))))));
                            arr_25 [i_4] [i_7] [i_6] = arr_15 [20];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_24 ^= (((!12152) / (((-(arr_23 [i_4] [i_9 + 3] [i_9] [i_9 - 1] [i_9] [i_9]))))));
                            arr_32 [10] [i_5] = ((((1 <= (arr_17 [i_4]))) ? (((arr_24 [i_9] [i_9 + 3] [i_9 + 2] [i_9 + 2]) ? (arr_24 [i_5] [i_9] [i_9] [i_9]) : var_3)) : ((((((((arr_30 [i_8] [i_8]) || var_0)))) | (arr_27 [i_8] [18] [i_8]))))));
                            var_25 = (min(var_25, var_12));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
