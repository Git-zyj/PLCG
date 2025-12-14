/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        arr_2 [6] &= (((arr_0 [i_0 + 2]) ? 2705683776 : (arr_0 [i_0 - 3])));
        var_19 = (((((575001614 ? (arr_1 [1] [7]) : var_3))) || ((((arr_1 [0] [i_0]) ? (-2147483647 - 1) : 9898989738169147339)))));
        arr_3 [i_0 - 3] |= (arr_1 [i_0 + 1] [i_0 - 3]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (max(var_20, (arr_4 [4] [i_1])));
        arr_8 [6] [i_1] = (((!-575001624) ? (var_13 == -1438004353) : ((-575001599 ? (arr_5 [i_1]) : 511))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_21 += ((~(((arr_9 [i_2 + 1] [i_2 + 2]) & (arr_9 [i_2 + 4] [i_2 + 2])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_4] [13] = ((((((arr_13 [i_2 + 3] [i_2 - 1]) ? (arr_13 [i_2 + 4] [i_2 - 1]) : (arr_9 [i_2 - 1] [i_2 + 2])))) ? (max((arr_13 [i_2 - 1] [i_2 + 1]), (-2147483647 - 1))) : ((((var_11 < (arr_13 [i_2 + 1] [i_2 + 4])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_22 = (max(var_22, -var_12));
                                var_23 += ((((min((arr_17 [1] [i_2 + 1] [i_2 + 1] [16] [i_3] [i_3]), (arr_11 [i_2 + 4] [i_3])))) ? ((-(arr_11 [i_2 - 1] [9]))) : ((max((arr_17 [i_2 + 1] [i_2 + 3] [i_2 + 4] [6] [i_3] [i_3]), (arr_17 [i_2] [i_2 + 1] [i_2 + 2] [i_5] [i_5] [i_6]))))));
                                var_24 = (min((min((arr_11 [11] [i_2 + 3]), (arr_11 [i_2] [i_2 + 2]))), (((!((max(44122, 512))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((506 ? var_10 : (min(-18, (min(238, -512))))));
    #pragma endscop
}
