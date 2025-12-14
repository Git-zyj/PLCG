/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2] [i_3] &= ((!(arr_7 [i_2 + 2] [i_2 + 3] [i_2])));
                        arr_12 [i_0] [i_1] [i_2] [2] = (((((arr_2 [0]) ? 2329981405404501180 : (arr_3 [i_0] [i_1] [i_2]))) % (arr_8 [i_0] [i_1] [i_2] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [8] [i_1] [i_2] [i_4] = (((((arr_10 [i_2 + 2]) >= (arr_10 [i_2 - 1]))) ? (min((arr_8 [i_0] [2] [13] [9]), 2329981405404501180)) : ((var_16 ? (arr_0 [i_1]) : (arr_5 [i_2] [i_1])))));
                        arr_16 [i_0] [i_0] = var_16;
                        var_20 = var_6;
                    }
                    arr_17 [i_1] = (min(((((-2329981405404501181 ? var_19 : (arr_3 [10] [i_1] [i_1]))) + (arr_14 [1] [i_1]))), (((-((2329981405404501175 ? (arr_1 [i_1]) : 96)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 = (max((((arr_9 [i_0] [i_5] [i_2 + 3] [21]) ^ (arr_9 [i_0] [i_1] [i_1] [i_1]))), var_18));
                                arr_24 [16] [i_1] [i_6] = var_16;
                                var_22 = ((~(((arr_6 [i_2 + 2] [i_2 + 2] [i_5 - 2] [i_6]) ? (arr_1 [i_6]) : (((arr_9 [i_0] [i_0] [i_2] [i_5]) & var_5))))));
                            }
                        }
                    }
                    arr_25 [i_2] [i_1] [i_0] = (((arr_23 [i_2 + 2] [i_2 + 3] [i_2 + 3]) ? (arr_23 [i_2 + 3] [i_2 + 2] [i_2 + 2]) : (((arr_23 [i_2 - 1] [i_2 - 2] [i_2 - 2]) ? (arr_23 [i_2 + 3] [i_2 + 2] [i_2 + 1]) : -2329981405404501175))));
                }
            }
        }
    }
    var_23 = ((~(max((((-2329981405404501177 + 9223372036854775807) << (((var_16 + 122) - 7)))), -2329981405404501180))));
    var_24 = (--2329981405404501184);
    #pragma endscop
}
