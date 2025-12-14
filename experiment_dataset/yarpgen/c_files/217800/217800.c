/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = ((-(arr_2 [18])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1 - 2] [i_2] [i_4] [i_1 - 2] [i_3] [i_1 - 2] = ((~(min((arr_4 [9] [i_3] [i_3]), (((arr_0 [i_0] [i_0]) >> (var_14 - 8380)))))));
                                var_16 = (!((max((arr_5 [i_1 - 1] [i_4 + 1]), ((((arr_13 [6] [i_3] [i_3] [i_0] [i_3] [i_1] [i_0]) || 0)))))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_17 = ((((255 & (arr_18 [2])))) ? var_12 : 0);
                            var_18 = (arr_20 [i_1 - 2] [i_6] [i_1 - 2] [i_6] [i_1 - 1]);
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_19 = (max((--21872), ((18 - (((max(14, 6259))))))));
                            arr_23 [i_6] [i_6] = ((-(arr_19 [i_0] [19] [i_1] [i_5] [i_6] [i_8])));
                            var_20 = (min((1008203564 | 16777216), (arr_11 [7] [i_1 + 1] [i_1] [i_6] [i_1] [i_1 - 2])));
                            var_21 ^= (((~6097605181978277265) & (~107)));
                        }

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_26 [i_1 - 2] [i_1 - 2] [i_6] [6] = (arr_4 [17] [i_5] [1]);
                            arr_27 [i_6] [11] = 16777216;
                        }
                        var_22 = (min(-10804, (arr_3 [i_1 + 1] [i_1] [i_1 + 1])));
                    }
                    var_23 = (max((((arr_17 [i_0] [i_1] [i_0] [i_1 - 1]) | -147546335535393520)), ((max((~var_2), (~16777237))))));
                }
                var_24 ^= ((~(min(4161533721455653311, (((0 >> (var_14 - 8371))))))));
            }
        }
    }
    var_25 = ((var_14 ? var_8 : var_8));
    #pragma endscop
}
