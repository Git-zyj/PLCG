/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = (min(184, (min(((1 ? 0 : 71)), 0))));
                var_16 = (arr_3 [i_0]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] = (((arr_6 [i_0] [1]) * 55));
                    var_17 = (max(var_17, var_11));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    var_18 += (arr_9 [i_3 - 1] [i_0] [i_3 - 1]);
                    var_19 = (((arr_8 [i_0]) / (arr_2 [i_1])));
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_20 = (max(var_20, (71 - 70)));
                    arr_17 [i_0] [i_1] [i_4] &= (16777216 - 1);
                    var_21 = (max(var_21, ((((((arr_4 [i_1]) ? 1829330085 : var_15)) - var_15)))));
                    var_22 &= (arr_14 [i_0] [i_1] [i_4]);
                }
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    var_23 = (min(var_23, ((min(1, ((245 ? ((7736919961317661280 / (arr_19 [i_0] [7] [i_0] [i_0]))) : (arr_10 [i_5] [i_5 + 1] [i_5]))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_1] [i_5] [i_5] [i_5] = ((((min(1, 137438953471))) ? ((((~4) - ((min(1, 1)))))) : (min((arr_9 [i_5 + 1] [i_5 + 1] [i_6 - 1]), var_12))));
                                arr_27 [i_1] [i_6] [i_5] = (arr_12 [i_0] [i_1]);
                            }
                        }
                    }
                    var_24 = (var_12 >= ((65511 ? var_9 : ((0 ? 55 : 673672002)))));
                    arr_28 [i_0] [i_1] [i_5] [i_0] = (max(((var_0 ? (arr_16 [10] [i_5] [i_5 + 1] [i_5 + 1]) : (arr_16 [1] [i_5] [i_5 + 1] [i_5 + 1]))), ((1 - (((arr_3 [i_1]) >> 4))))));
                }
                arr_29 [i_0] [i_1] [i_1] |= (4294967295 && -38);
            }
        }
    }
    var_25 = var_1;
    #pragma endscop
}
