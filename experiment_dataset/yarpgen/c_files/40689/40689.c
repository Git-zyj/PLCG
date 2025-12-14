/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!-15914);
    var_13 = (~-var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = ((-(arr_1 [i_0] [i_0])));
                arr_6 [0] [5] = (min((((~(arr_3 [i_0] [i_1])))), ((~(arr_4 [i_0] [12] [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_23 [i_2] [i_3] [i_4] [12] [i_4] [i_4] = (((arr_11 [i_5 + 1] [i_2 - 1]) + ((~(arr_11 [i_5 - 1] [i_2 + 1])))));
                                var_15 = (max(var_15, (((var_3 ? (((arr_15 [i_2] [i_2 + 1] [i_2 + 1]) ? 32767 : (arr_19 [i_2 + 1]))) : ((((max(65532, 10))) ? ((114 ? (arr_14 [i_2] [i_2]) : (-32767 - 1))) : (arr_9 [i_2]))))))));
                                arr_24 [i_6] [i_5] [i_5 + 1] [i_4] [i_3] [i_2 + 1] [i_2] = (((arr_20 [12] [12] [i_2 + 1] [i_4] [i_5 - 1]) * (min((min(3670124884857292967, (arr_19 [i_2]))), (min(3253845256298153677, var_0))))));
                            }
                        }
                    }
                    arr_25 [i_2] [i_2] [0] = (((arr_8 [8]) ? (((arr_12 [13] [13] [i_4]) - (124 - -33))) : (max(-var_2, ((min(-18, 34741)))))));
                }
            }
        }
    }
    var_16 = ((((var_7 ? ((28101 ? var_0 : var_10)) : (((1 ? var_11 : 58)))))) ? var_3 : var_7);
    #pragma endscop
}
