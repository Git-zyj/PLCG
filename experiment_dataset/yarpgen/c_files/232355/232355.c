/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [3] [i_1] [3] [i_0] [i_2] = (+(((arr_1 [i_0] [i_3]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))));
                            var_11 = arr_9 [i_2] [i_1] [i_2] [i_2];
                            var_12 = (((-(arr_3 [i_0] [i_1] [i_0]))) ^ var_7);
                            arr_11 [i_3] [i_1] [i_3] [i_2] [i_3] |= arr_8 [i_0] [i_0] [i_0] [i_3];
                            var_13 = 20819;
                        }
                    }
                }
                var_14 = ((((((arr_8 [i_0] [i_1] [14] [i_0]) ? (arr_8 [i_0] [i_1] [i_1] [i_1]) : (arr_8 [i_0] [i_1] [i_0] [i_1])))) & (max(2357804578, 3735985132694128086))));
                var_15 = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_16 = (max(var_16, (arr_8 [9] [i_1] [i_5] [i_4])));
                            arr_17 [i_0] [i_1] [i_1] [i_1] = min((((~((-(arr_12 [i_0] [i_1] [i_4] [i_5])))))), (min((arr_6 [i_1] [i_1] [i_4]), (arr_8 [6] [6] [i_4] [i_1]))));
                            arr_18 [i_0] [i_1] [10] = (arr_13 [i_0] [i_1]);
                            var_17 = arr_1 [i_0] [i_0];
                            arr_19 [i_1] = (((var_5 ? (max((arr_2 [i_1]), (arr_9 [i_0] [i_1] [5] [i_5]))) : ((((arr_8 [i_0] [i_0] [i_0] [6]) ? var_4 : var_5))))) * (max((arr_7 [i_0] [i_0] [i_4]), (!0))));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_1;
    #pragma endscop
}
