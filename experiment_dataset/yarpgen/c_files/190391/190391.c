/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = (!2619);
                                arr_16 [i_1] = (arr_14 [i_1] [i_1 + 1] [i_1]);
                                var_21 = (min(var_21, (((((((arr_11 [8] [8]) ? (arr_13 [i_0] [i_0] [i_0] [i_4]) : 760576733)) >= ((((arr_2 [20]) & (arr_6 [14] [0] [8]))))))))));
                                var_22 = (((((~(arr_4 [15] [i_1 + 2] [i_1])))) ? 104 : ((((arr_15 [i_1] [i_1] [i_2] [i_2] [i_2]) ? 6736 : 2619)))));
                            }
                        }
                    }
                    var_23 = var_10;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_22 [0] &= (arr_12 [i_0] [7] [i_2] [i_5] [7] [i_0]);
                                var_24 = (!18);
                                arr_23 [i_1] [i_1 + 2] [8] [i_5] [15] = ((62896 ? ((((((arr_17 [i_1]) ? (arr_18 [i_0] [i_1] [1] [i_1]) : (arr_12 [i_0] [7] [i_0] [i_0] [i_0] [i_0])))) ? ((0 ? (arr_3 [i_2] [i_1]) : (arr_8 [i_1] [i_1] [i_1]))) : (((arr_20 [i_0] [i_1] [5] [i_5]) ? 8192 : (arr_8 [i_1] [i_5] [i_6]))))) : (((arr_18 [i_6 + 4] [i_1] [i_2] [i_1 - 1]) ? (arr_1 [i_6 + 4] [i_6 + 3]) : 260819966061182908))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(2639, ((((min(-20827, var_13))) & (((-9223372036854775807 - 1) ? var_18 : 65535))))));
    #pragma endscop
}
