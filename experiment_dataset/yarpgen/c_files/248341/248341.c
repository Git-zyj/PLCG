/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = (((arr_6 [i_0] [i_2] [i_2]) ? (((((max((arr_6 [1] [i_1 - 3] [1]), 0))) && (!var_17)))) : ((0 ? (arr_3 [i_1 - 2] [14] [i_1 + 1]) : (!var_11)))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = var_18;
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((arr_10 [i_0] [i_0] [1] [i_0] [i_0]), (((((1 & (arr_7 [i_1 + 1] [i_0] [i_3 + 1] [i_4])))) ? (arr_5 [i_1] [i_1 - 1] [i_1]) : (var_9 ^ 40)))));
                                arr_14 [i_0] [i_4] [2] [1] [14] |= ((var_12 ? (min(-2118061602, (max((arr_9 [i_0] [i_1 - 2] [i_4] [i_4]), (arr_5 [5] [i_3] [i_4]))))) : -30246));
                            }
                        }
                    }
                    var_22 = (max(var_22, ((min(var_13, ((1098877291 ? 1 : (!1))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_23 += (arr_5 [6] [i_1] [16]);
                                arr_19 [i_0] [i_1] [10] [13] [i_6] = arr_9 [i_1 - 2] [i_1 - 2] [i_0] [i_6];
                                arr_20 [12] [i_5] [i_0] [16] [5] [i_2] = 1;
                                var_24 += (arr_7 [i_0] [i_5] [i_2] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
