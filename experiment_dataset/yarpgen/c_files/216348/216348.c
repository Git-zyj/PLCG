/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min(((max((arr_0 [i_0]), var_13))), ((-(arr_5 [i_0] [i_0] [i_0 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_1] [i_0] [i_0] = ((((max((min(var_2, var_13)), (-1762293779 && -15)))) ? (((var_16 ? (arr_0 [i_0]) : (arr_0 [i_0])))) : ((var_1 ^ (min(var_6, (arr_2 [i_0])))))));
                            arr_12 [i_0] [i_0] [1] [i_3] = (min(((((arr_4 [i_0]) <= (~var_8)))), var_8));
                            arr_13 [i_3] [i_3] [i_3] [i_0] |= (arr_9 [i_0] [i_1] [i_2] [i_2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_0] [i_4] [i_4] = (max(((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))), (((arr_14 [i_0 - 3] [i_0 - 1] [i_0] [i_0]) ? var_15 : (arr_14 [i_0 + 1] [i_0 + 1] [i_0] [i_0])))));
                            arr_20 [i_0] [i_1] [i_0] [i_0] = (max(((max(-15, 0))), (max(((max(var_7, (arr_18 [i_5] [i_0] [i_4] [4])))), var_10))));
                            arr_21 [1] [1] &= ((!(arr_8 [i_0] [i_0 - 1] [6] [i_0])));

                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 11;i_6 += 1)
                            {
                                arr_24 [i_0] [i_1] [i_1] [i_0] = var_10;
                                arr_25 [i_0] [i_1] [i_1] [i_5] [2] [4] &= 14;
                                arr_26 [i_0] [i_0] [0] = (arr_14 [i_5] [i_0] [i_0] [i_0]);
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 12;i_7 += 1)
                            {
                                arr_31 [i_0] [i_1] [i_1] [i_4] [i_0] [i_0] [i_7] = var_11;
                                arr_32 [i_0 - 3] [10] [i_7] [i_0 - 3] [i_7] [i_0] = var_0;
                            }
                        }
                    }
                }
                arr_33 [i_0 - 2] [i_0] [i_0] = min(var_14, var_10);
            }
        }
    }
    var_17 = (min(-114, -114));
    #pragma endscop
}
