/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(44577, (max(0, 25))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (max(-1, -17));
                    var_21 -= ((max((arr_2 [i_0 + 1]), (arr_5 [4] [2] [i_0 + 1]))));
                    var_22 = var_9;
                }
            }
        }
    }
    var_23 = 22;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_24 = (arr_14 [i_6] [i_4] [i_4] [i_3]);
                            arr_19 [i_3] [i_4] [i_4] [i_4] = ((arr_15 [i_4 - 1]) ? ((-1 ? var_1 : var_3)) : (arr_10 [i_6]));
                            arr_20 [i_4] [i_4] = ((var_12 ? ((-65 ? var_2 : (((~(arr_14 [i_6] [i_4] [i_4] [i_3])))))) : ((max(-21, -6117747539547411571)))));
                            arr_21 [i_4] = (min((((~21) ? (arr_14 [i_3] [i_4] [i_5] [i_3]) : ((max((arr_8 [i_4] [i_3]), 254))))), ((max(3, (arr_17 [i_3] [i_3] [i_5] [i_4]))))));
                            var_25 = (((!((!(arr_9 [1] [i_3]))))));
                        }
                    }
                }
                arr_22 [i_3] [i_4] [i_4 - 1] = 1;
            }
        }
    }
    var_26 = (max(var_26, ((min(((max(-64, 0))), 4096239037)))));
    #pragma endscop
}
