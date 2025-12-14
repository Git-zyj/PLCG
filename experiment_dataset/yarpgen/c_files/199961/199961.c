/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 = (min((max(var_2, (min(var_6, var_7)))), (arr_5 [i_2] [i_3 - 1] [i_2])));
                            arr_11 [i_2] [i_1] [i_1] [i_2] [i_3] [i_2] = max((max(((((arr_9 [i_0] [i_1]) ? var_9 : var_12))), (arr_5 [i_2] [i_3] [i_3 + 1]))), (min((arr_10 [i_2] [i_3 + 1] [i_3 - 1] [i_3 + 1]), ((var_16 ? (arr_6 [i_0] [12] [i_2] [i_3 + 1]) : var_6)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_0] = (((((var_3 & (~var_17)))) ? ((((max(var_18, (arr_0 [i_4])))) ? (arr_6 [i_0] [i_0] [i_0] [0]) : ((~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : ((~((min((arr_1 [i_1]), var_4)))))));
                            arr_18 [i_5 + 1] [i_0] [i_4] [i_1] [i_0] [i_0] = (((max((arr_8 [i_4 + 3] [i_4] [i_4 + 4] [i_0]), var_1)) - (max((arr_8 [i_4 + 1] [i_0] [i_0] [7]), (arr_16 [i_4] [i_1] [i_1])))));
                            arr_19 [i_0] [i_4 + 2] [i_5] = ((!(((((max(var_15, var_14))) ? ((((arr_5 [i_0] [2] [i_5]) ? (arr_10 [i_0] [i_1] [i_4 + 4] [i_5]) : (arr_13 [i_0] [i_0] [i_0] [i_0])))) : var_6)))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((arr_4 [i_5 - 1] [i_5 - 2]) ? (arr_4 [i_5 + 1] [i_5 - 1]) : (arr_4 [i_5 + 1] [i_5 - 1])))) ? (!var_17) : (11118 >= 11118));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_26 [i_0] [i_0] [i_6] [8] = ((~((((arr_22 [i_0] [i_1] [i_6] [i_7]) != (arr_22 [i_6] [i_6] [i_6] [i_6]))))));
                            arr_27 [i_6] [i_7] = (arr_13 [i_0] [i_1] [i_6] [i_7]);
                            arr_28 [i_6] [i_7] = var_14;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
