/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [9] [2] [i_1] [i_2] [i_2] [i_3] [i_4] = (((((arr_6 [i_2]) || (arr_3 [12] [i_2]))) && (arr_10 [i_4 + 3])));
                                arr_15 [i_2] [12] [9] [22] [i_4] = (arr_12 [i_4 + 3] [i_4 + 3] [i_4 + 4] [i_4 + 3] [i_4 + 3]);
                                arr_16 [7] [7] [i_2] [i_3] [i_3] [i_3] = (24 >= 8513591771937888868);
                                var_16 = (max(var_16, (arr_8 [i_3] [10] [10] [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_17 |= (((arr_17 [i_5] [0] [6] [0] [18]) | (arr_17 [6] [i_2] [16] [12] [i_5])));
                                arr_21 [i_6] [i_5 + 2] [i_2] [i_1] [i_0] = (arr_3 [i_0] [i_6]);
                                var_18 = (max(var_18, (arr_3 [i_5 - 2] [i_6])));
                                var_19 = (var_14 | (arr_8 [i_0] [i_5 + 1] [i_2] [i_6]));
                            }
                        }
                    }
                    var_20 = ((!((((((arr_13 [i_2] [i_2] [i_2] [i_0] [i_2]) + 9223372036854775807)) << (((arr_5 [i_0] [i_0]) - 13370626788978294040)))))));

                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_7] [i_2] [i_2] [1] [i_2] [i_0] = (((arr_11 [i_2]) * (arr_22 [i_0] [i_0] [i_1] [i_2] [i_7])));
                        var_21 = (arr_8 [i_0] [i_1] [i_2] [5]);
                        arr_26 [i_0] [i_2] [i_0] [3] = arr_10 [i_0];
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        var_22 = (min(var_22, var_2));
                        arr_29 [i_2] = (((((var_4 - (arr_7 [i_2] [i_1] [i_8])))) || (arr_1 [i_8])));
                        var_23 = (max(var_23, (((~(arr_23 [8] [i_2] [i_0] [8]))))));
                        arr_30 [i_8] [i_2] [i_2] [i_0] [i_2] [i_0] = (((arr_27 [i_0] [22] [i_0] [i_0] [i_0]) ? 9933152301771662749 : (arr_27 [i_0] [i_1] [21] [i_2] [i_8])));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        var_24 = ((arr_24 [i_0]) / (arr_23 [i_0] [i_0] [19] [i_2]));
                        arr_33 [i_2] [10] [i_2] [i_9] [i_9] [i_9] = (((arr_5 [i_0] [i_1]) ? 1511199840696875783 : (arr_4 [20] [10] [i_9])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        var_25 *= (!-1);
                        var_26 = (((((var_1 > (arr_8 [i_12] [i_11] [i_11] [i_0])))) << ((((var_13 << (((arr_2 [17] [i_11]) - 17706714469587046004)))) - 1513209474796486646))));
                    }
                }
            }
        }
    }
    var_27 = (max(var_27, var_14));
    var_28 = (((((min(var_14, var_1)))) && var_5));
    #pragma endscop
}
