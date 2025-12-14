/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_3] [0] [i_4] [i_1] = 47464;
                                arr_15 [i_4] = ((!(arr_1 [i_1] [i_3])));
                                arr_16 [1] [1] [i_4] [13] [i_4] = 879965627601987589;
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_26 [i_5] [13] [i_5] [11] [i_5] = ((((((arr_9 [i_0] [i_5 - 1] [4]) ? (arr_20 [i_7] [i_7] [i_7] [i_7]) : (arr_20 [i_0] [i_0] [i_6] [i_7])))) ? (((arr_5 [i_1] [i_0]) & (arr_25 [i_0] [5] [i_5] [i_5 + 1] [i_6] [i_7] [i_7]))) : (arr_5 [i_5 + 1] [i_1])));
                                arr_27 [i_0] [i_1] [i_5] [i_6] [i_5] = var_3;
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_10 = 5641770375346733053;
                        arr_30 [12] [i_1] [i_5] = (max((((arr_29 [i_0] [i_1] [i_5] [i_5] [i_8]) ? (arr_22 [i_5] [i_1] [i_5] [i_5 + 2] [i_1]) : (arr_29 [14] [i_1] [i_5] [i_5] [i_8]))), (((((47486 ? (arr_8 [4] [i_1] [i_1] [i_5] [1]) : -879965627601987585))) ? var_2 : (1 < var_3)))));
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_11 = 16128;
                        arr_35 [i_0] [i_5] [3] [i_9] [i_0] = ((((1 / 7) << (-879965627601987607 + 879965627601987628))));
                    }
                    var_12 *= var_7;
                }
            }
        }
    }
    var_13 = 9223372036854775794;
    var_14 ^= ((((var_2 ? -879965627601987576 : var_2)) | (((var_0 << (var_8 >= var_7))))));
    #pragma endscop
}
