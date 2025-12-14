/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232288
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
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = (min(((((arr_6 [i_4 - 1] [i_0] [i_0]) != 1))), var_17));
                                arr_15 [i_3] = ((!((1 != (arr_9 [i_4 + 1] [i_4 + 1])))));
                            }
                        }
                    }
                    var_18 = min(1, ((~(~16))));
                }
            }
        }
    }
    var_19 = var_17;
    var_20 += ((1 ? var_2 : var_4));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_21 = -29416;
                                var_22 = ((((arr_26 [i_9] [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9] [i_9]) > (arr_26 [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9 + 2] [i_9] [i_9] [i_9]))));
                                var_23 ^= (((!(((-(arr_4 [i_9] [i_8])))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_24 = (1 ^ 12010296882853200135);
                            var_25 = ((-(arr_26 [i_7] [i_7 - 1] [i_7 + 3] [i_7] [i_10] [i_10] [i_10 - 1])));
                            var_26 = (((arr_1 [i_7 + 1]) >= var_0));
                            arr_35 [i_10] [i_10] [i_7] [i_6] [i_10] = (((1 & 1) | 6));
                        }
                        arr_36 [i_10] [i_6] [i_7] = (((arr_26 [i_7] [i_7] [i_7 + 1] [15] [i_7 + 1] [i_10 + 2] [i_10]) ? (arr_22 [i_7] [i_7 + 2] [i_5]) : var_6));
                    }
                }
            }
        }
    }
    #pragma endscop
}
