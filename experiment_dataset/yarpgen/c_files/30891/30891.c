/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_2] [i_2] = var_9;
                            arr_14 [i_2] [5] = ((var_7 ? (((arr_2 [i_0] [i_1]) ? var_11 : 4294967284)) : -9));

                            for (int i_4 = 2; i_4 < 16;i_4 += 1)
                            {
                                arr_18 [i_2] = (var_0 * var_4);
                                arr_19 [16] [i_2] [i_2] [i_0] = (min(-var_0, (arr_5 [i_4 + 1] [i_4 - 1] [i_4 + 1])));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                arr_23 [i_2] [i_1] [i_1] [i_1] [i_1] [i_2] = var_6;
                                arr_24 [i_2] [i_2] = var_5;
                                arr_25 [i_0] [13] [8] [8] [i_3] [i_2] = (arr_11 [14] [i_2] [i_3]);
                                arr_26 [i_2] [i_2] [i_2] [i_2] [i_5] [i_3] [9] = ((12 == (arr_3 [i_0])));
                            }
                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                arr_29 [i_0] [i_3] [i_0] [i_3] = (min(((-(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((~(arr_28 [i_0] [i_0] [i_0] [i_2] [i_2] [10] [i_6]))))));
                                arr_30 [i_2] = -var_5;
                            }
                            arr_31 [i_0] [i_1] [i_1] [4] = ((~(((var_8 < (arr_5 [1] [1] [1]))))));
                        }
                    }
                }
                arr_32 [i_0] [i_0] [i_0] = var_11;
            }
        }
    }
    var_14 = 8;
    var_15 = 1;
    #pragma endscop
}
