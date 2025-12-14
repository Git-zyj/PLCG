/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min((max((arr_2 [i_1] [i_1] [i_0]), 10304013786435921913)), ((max((((arr_4 [i_1]) ? (arr_3 [i_0]) : var_16)), 8878934276692022878)))));
                var_21 += (arr_1 [11] [11]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_22 = ((1 && (((((min((arr_10 [i_2]), -2091972203))) ? (~var_1) : (var_5 % var_2))))));

                            for (int i_6 = 0; i_6 < 16;i_6 += 1)
                            {
                                var_23 = (37101 && -6393501893800000109);
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] = ((((1 ? ((8 ? var_1 : var_19)) : var_14)) % (((-1992699603 ? -14 : (((arr_14 [i_2] [i_2] [0] [i_2] [i_2]) - var_12)))))));
                            }
                        }
                    }
                }
                var_24 = (min(((-(arr_11 [i_3] [i_3] [i_3] [i_3 - 3]))), (~var_1)));
            }
        }
    }
    #pragma endscop
}
