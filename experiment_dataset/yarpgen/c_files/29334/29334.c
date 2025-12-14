/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_3));
    var_15 = var_3;
    var_16 = (((var_5 >= var_6) ? var_12 : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [2] [2] [i_0] = ((((min((arr_12 [i_1 - 2] [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]), (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1] [8])))) + var_2));
                                arr_14 [i_0 + 1] [i_1] [i_1] [12] [i_3] [i_4] = (min((((((32274 ? 0 : 4204818324443932206))) ? ((-(arr_10 [i_2] [i_1] [i_2 - 2]))) : var_1)), ((((arr_7 [i_1] [i_0 + 1] [i_2] [i_3] [4] [i_0 + 1]) ? (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) : (arr_7 [9] [i_4] [i_4] [9] [9] [i_4]))))));
                            }
                        }
                    }
                }
                arr_15 [5] = (((((arr_0 [i_0 + 1]) ? (arr_10 [i_1] [i_1] [i_1 - 2]) : (arr_0 [i_0 + 1]))) >> (3868078001358186907 - 3868078001358186852)));
                arr_16 [i_0] [i_0] [i_0 + 1] = (min(((((arr_6 [i_0 + 1] [2] [i_0]) / var_1))), ((1097364144128 ? (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_6 [i_0 + 1] [i_0] [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_17 = arr_20 [i_5] [i_5] [i_6];
                arr_24 [i_5] = (arr_18 [i_5]);
            }
        }
    }
    #pragma endscop
}
