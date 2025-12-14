/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 |= (min(31671, ((-(~var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((!((((arr_4 [i_2] [i_3]) ? ((var_12 ? var_10 : (arr_9 [5] [i_4] [i_2] [5] [i_4] [i_1]))) : (((max(var_8, (arr_10 [i_0] [i_0] [i_0] [7] [i_0] [i_0] [i_0])))))))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_0] &= ((~(~var_9)));
                                var_22 = (max(var_9, ((min(var_6, var_8)))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_16 [i_2] [1] [i_1] [i_2] = ((+((min(((((arr_1 [i_0] [i_1]) < 0))), (arr_2 [i_0]))))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_23 = (arr_5 [i_0] [i_0]);
                            arr_21 [i_1] [i_0] [i_2] [i_5] [i_6] [i_6] = (((arr_11 [i_0] [i_2] [i_0] [i_0] [i_0]) ? var_12 : ((((arr_11 [i_6] [i_2] [i_2] [i_2] [i_0]) << (var_11 - 34))))));
                            var_24 = (max(var_24, ((((arr_15 [i_0] [i_5] [i_6]) ? (~20018) : (~var_15))))));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_2] = arr_18 [i_0] [4] [i_2] [i_2];
                            arr_25 [9] [7] [i_2] [i_1] [i_2] = ((((((arr_8 [i_5] [i_1] [i_2] [i_5] [i_7]) ? ((var_10 ? (arr_11 [i_0] [i_2] [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0]))) : (arr_8 [i_0] [i_1] [i_2] [i_1] [i_7])))) ? var_11 : (((((min(var_13, (arr_22 [i_0] [i_1] [i_2] [i_5] [i_7])))) <= ((~(-32767 - 1))))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 2; i_8 < 6;i_8 += 1)
                    {
                        var_25 = ((var_8 >> (((arr_14 [i_1] [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 2]) + 5631869463082310327))));
                        arr_29 [i_2] [i_1] = (arr_22 [i_8] [i_8] [i_8] [i_8 + 2] [i_8]);
                        var_26 = (((var_11 / 1) ? 214 : (arr_5 [i_1] [i_2])));
                        var_27 = (arr_9 [i_0] [i_1] [i_2] [i_1] [i_1] [i_1]);
                        arr_30 [i_2] = (((arr_0 [i_2]) ? var_1 : (arr_4 [i_2] [i_1])));
                    }
                }
            }
        }
    }
    var_28 &= var_7;
    #pragma endscop
}
