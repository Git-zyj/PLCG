/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        arr_10 [23] [23] [i_0] [0] [1] = (arr_5 [24] [1] [19]);
                        var_17 = arr_9 [20] [23] [i_0];
                        arr_11 [23] [21] [i_0] [1] [9] [17] = (arr_1 [7] [1]);
                        var_18 = (!var_6);
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            var_19 = (((arr_5 [i_0 - 3] [23] [i_2]) ^ (arr_1 [22] [i_1])));
                            arr_18 [i_0] = ((36 != (arr_4 [i_5 + 2])));
                        }
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            arr_21 [17] [12] [14] [1] [23] [i_0] [4] = (!((((arr_14 [10] [13] [3] [16] [13]) << (((arr_13 [22] [9] [15]) + 820491543))))));
                            arr_22 [3] [8] [1] [1] [i_0] = (!-1);
                        }
                        var_20 |= ((-(arr_0 [i_0 - 2])));
                        var_21 = (((arr_12 [19] [i_0 + 2] [1] [i_0 - 1]) ? (arr_12 [8] [i_0 + 4] [12] [i_0 - 3]) : (arr_12 [12] [i_0 + 2] [9] [i_0 + 2])));

                        for (int i_7 = 2; i_7 < 23;i_7 += 1)
                        {
                            var_22 -= (((arr_16 [i_7 + 1] [15] [10] [11] [3]) ? 206 : (((arr_6 [11] [15] [1]) ? (arr_2 [16] [0] [1]) : 3084544857))));
                            var_23 = (max(var_23, 125));
                            var_24 = (arr_25 [0] [i_0] [19] [9] [1] [7] [23]);
                            var_25 = (arr_17 [i_0] [22] [23] [16] [1] [1]);
                        }
                    }
                    var_26 = (((arr_1 [i_0 - 2] [23]) + (arr_25 [0] [i_0] [i_2] [1] [i_1] [i_0] [i_0 + 2])));
                    var_27 &= 105;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 24;i_9 += 1)
                        {
                            {
                                arr_32 [1] [6] [12] [18] [i_1] [22] [10] &= 2824312212234282819;
                                var_28 = (arr_23 [15]);
                                var_29 *= ((arr_7 [6] [i_2] [i_0 + 2] [18]) >> (((arr_15 [20] [i_9 + 1] [8] [i_9 - 2] [3] [i_9 + 1]) - 2000449201)));
                                arr_33 [i_0] = (((-127 - 1) <= var_11));
                            }
                        }
                    }
                    arr_34 [0] [i_0] [13] = (arr_15 [1] [i_0 + 4] [0] [i_0 + 1] [1] [i_0 + 3]);
                }
            }
        }
        var_30 = (((arr_28 [16] [i_0 + 1]) > (~var_1)));
    }
    #pragma endscop
}
