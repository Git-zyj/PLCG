/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 *= var_6;
                    var_17 = 9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = var_6;
                                var_18 ^= ((((min((arr_7 [i_0] [i_0 - 2] [i_0 + 2]), (arr_7 [i_0] [i_0 - 3] [i_0 - 2])))) << (((max((arr_7 [i_0] [i_0 - 1] [i_0 - 3]), var_11)) - 2065766198))));
                                var_19 = (arr_5 [i_3] [i_3] [i_0 - 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_20 = -32755;
                            var_21 *= var_11;
                            var_22 = (min(var_22, var_6));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            arr_31 [i_6] [5] [i_9 - 1] = (max((arr_25 [i_5 + 3] [i_5 + 1]), ((+(((arr_6 [0] [0] [i_9] [i_9]) ? 4227858432 : 4227858432))))));
                            arr_32 [i_9 - 1] [i_6] [i_5] [i_9 + 1] = (arr_27 [8] [i_6] [i_6] [i_5]);
                            var_23 -= (((min(((max((arr_20 [0] [0] [i_5] [i_5]), (arr_30 [i_5 - 3] [3] [i_9] [11])))), (((arr_10 [i_5] [11] [i_5]) ? 10733371004399900211 : -8)))) << (67108871 - 67108822)));
                            arr_33 [3] [i_6] [i_6] [i_6] = (((min((arr_15 [i_9 + 1] [i_5 - 1]), var_1)) == (253 + -27235)));
                        }
                    }
                }
                var_24 = (arr_15 [i_5] [i_5]);
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        {
                            arr_39 [i_11] [i_6] |= (arr_30 [i_5] [i_6] [i_5] [1]);
                            var_25 = (max(var_25, var_5));
                            arr_40 [i_6] [i_6] [i_6] [3] [i_6] [i_6] = (((((arr_26 [7] [i_6] [i_11]) + 2147483647)) << (((min(431802931, 1)) - 1))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
