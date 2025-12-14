/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((var_5 ? var_12 : (((((0 ? var_7 : var_14)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = ((!(arr_0 [i_0])));
                arr_6 [i_0] = var_1;
                arr_7 [i_0] [i_1] = (max((max((arr_2 [i_0]), 17537174437782329566)), 15));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_3] = ((-(var_3 != 0)));
                    var_17 |= ((-((-7 ? (arr_11 [i_2] [i_3]) : (-9223372036854775807 - 1)))));

                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        var_18 = -var_6;

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_22 [i_2] [i_3] [i_4] [i_5 + 3] [i_6] [i_6] = (((arr_21 [i_2] [i_3] [i_4] [i_5] [i_3] [i_5 - 1] [i_3]) << (((((min((arr_3 [i_2] [i_3]), (arr_20 [i_5] [i_6] [i_2]))) * (arr_21 [i_5 + 2] [i_5] [i_4] [i_5 + 3] [i_4] [i_4] [i_4]))) - 3061890314))));
                            arr_23 [i_6] [10] [i_4] [i_4] [i_4] [1] [i_2] = 16166026706102160042;
                            var_19 = ((((max(127, (((arr_5 [i_2] [i_5]) ? (arr_9 [i_2]) : (arr_14 [i_3] [i_4] [i_5])))))) ? ((((var_9 && var_13) ? (((((arr_5 [i_2] [i_6]) || (arr_12 [i_4]))))) : (arr_20 [i_6] [i_4] [i_2])))) : (max((((!(arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))), (arr_16 [i_4] [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_5 + 2])))));
                            var_20 = (min(var_20, 2280717367607391557));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_28 [i_2] [i_3] [i_4] [i_5] [i_7] = (((arr_25 [i_7] [i_7] [i_7] [i_5 + 2] [i_5 + 3] [i_5 + 3] [i_4]) >= 0));
                            arr_29 [i_2] [i_3] [i_4] [i_2] [i_7] [i_3] [i_4] = (arr_25 [i_2] [i_2] [i_2] [i_4] [i_5] [i_7] [i_7]);
                        }
                        for (int i_8 = 3; i_8 < 15;i_8 += 1)
                        {
                            var_21 ^= (max((!var_9), (arr_16 [i_8 - 2] [i_3] [0] [i_5 + 1] [i_3] [i_2])));
                            var_22 = ((((((arr_27 [i_5] [i_3] [i_8 + 1] [1] [i_8 + 1] [i_4]) ? (arr_27 [i_2] [i_2] [i_8 - 3] [i_2] [i_8 - 1] [i_5 + 2]) : (arr_27 [i_3] [i_4] [i_8 - 1] [i_8 - 1] [i_3] [i_2])))) || ((max((arr_13 [i_2]), (((arr_20 [i_3] [i_5] [i_8 - 2]) ? (arr_10 [i_2]) : (arr_4 [i_2] [i_8]))))))));
                            var_23 *= (((((max((arr_0 [i_2]), var_0))) || (((var_11 ? var_9 : var_13))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
