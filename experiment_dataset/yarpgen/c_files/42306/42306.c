/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = ((~(arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_1] = (((arr_2 [i_0] [i_2]) * (arr_2 [i_1] [i_2])));
                    var_18 = ((+(((arr_0 [i_1]) ? (arr_6 [i_0] [0] [i_1] [i_2]) : (arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_0] [i_0] = ((-(arr_7 [i_4] [i_3] [i_1])));
                                var_19 = arr_2 [i_0] [i_1];
                                var_20 = (max(var_20, (((((((var_16 > (arr_6 [i_0] [i_1] [i_2] [i_2]))))) | (((arr_2 [21] [i_0]) ? (arr_12 [i_4] [i_3] [i_1] [i_1]) : (arr_12 [i_0] [i_0] [i_0] [i_0]))))))));
                                var_21 += ((!(((~(arr_2 [i_3] [i_3]))))));
                            }
                        }
                    }
                    var_22 += (((arr_4 [i_2]) ? ((((!(arr_12 [i_2] [i_0] [i_0] [i_0]))))) : (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_6 : (arr_9 [i_0] [12] [i_2] [i_0] [i_2] [1])))));
                    arr_15 [i_2] [i_1] [i_1] [i_1] = ((!(arr_1 [i_0])));
                }
            }
        }
    }
    var_23 *= (((~(var_6 / var_4))));
    var_24 = var_12;
    #pragma endscop
}
