/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [4] = ((!((min((((1 ? 0 : 3796))), 18446744073709551603)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (arr_4 [i_2] [i_3] [10])));
                                arr_17 [i_0] [i_2] = (!2914582815);
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_21 [i_0] [11] [14] [i_0] = (arr_0 [i_0] [i_5]);
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_28 [i_6] [i_6] [i_5] [i_1] [i_0] [i_6] = (!var_3);
                                arr_29 [i_0] [i_0] [i_5] [i_6] [i_7] = 3811;
                                var_21 ^= ((~(arr_11 [i_1] [i_6 + 3] [i_5] [i_1 - 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                arr_34 [9] [i_9] = (((4002240212971297406 > -8737070855954063626) >> (var_15 - 2489427375)));
                                arr_35 [i_9] [i_8] [i_8] [16] [i_5] [i_0] [i_0] = arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_8] [i_9];
                                var_22 = (((!0) ? (arr_18 [i_0] [i_8] [8]) : ((-8737070855954063618 | (arr_32 [17] [i_1] [i_5] [i_1] [i_9])))));
                                var_23 = (arr_22 [i_0] [i_1] [i_0] [i_1] [i_9]);
                            }
                        }
                    }
                }
                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    var_24 = (!369707739);
                    arr_39 [i_0] [i_0] [1] = var_11;
                }
                arr_40 [i_0] [i_0] [i_0] = -1596412332912661720;
            }
        }
    }
    var_25 = (!-19);
    var_26 = (((min((369707739 || 101), (min(-12, var_10)))) & ((((!(-8737070855954063619 / -8737070855954063615)))))));
    var_27 |= (min((min(var_15, ((var_13 ? 8 : 3780555605)))), var_6));
    var_28 = ((((var_8 ? var_16 : 1))) ^ (~1));
    #pragma endscop
}
