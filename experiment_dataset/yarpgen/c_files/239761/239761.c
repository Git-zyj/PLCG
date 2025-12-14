/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                arr_17 [i_2] [6] [16] [3] [i_4] [9] = 10;
                                arr_18 [i_0] [i_3] [i_2] [i_1] [i_0] = ((((1 << (-1 + 18)))));
                                var_16 ^= -541783425306289681;
                            }

                            /* vectorizable */
                            for (int i_5 = 4; i_5 < 20;i_5 += 1)
                            {
                                var_17 ^= 1;
                                arr_22 [i_2] = (204 != 34);
                            }
                            for (int i_6 = 3; i_6 < 20;i_6 += 1)
                            {
                                arr_25 [i_6] [i_6 - 2] [i_2] [i_3] [2] [i_6] [1] = ((1 * ((35 - (max(var_12, (arr_7 [12] [6] [i_2])))))));
                                arr_26 [i_2] = ((5363 ? 1 : 127));
                                var_18 = (max(var_18, 3092165590));
                            }
                            var_19 = (arr_19 [i_1] [i_1] [i_3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_32 [i_7] [i_1 + 1] = (arr_6 [i_7] [i_8]);
                            var_20 = (((255 >> 1) & (((0 || (arr_13 [i_7] [i_1]))))));
                            var_21 = (arr_20 [i_1 + 1] [i_1 + 1] [13] [i_7] [i_1] [i_1]);
                            var_22 = (max(var_22, (((-((min((arr_14 [i_0] [1]), (arr_14 [18] [10])))))))));
                        }
                    }
                }
                var_23 = (min((((!(arr_20 [20] [i_1] [i_0] [14] [i_1 - 1] [i_0])))), (max((((arr_19 [i_0] [i_1] [i_0]) * var_1)), 1))));
            }
        }
    }
    var_24 += 3072;
    var_25 *= ((var_14 << (((((var_13 << 1) ? var_4 : (118 & 8564486698594176651))) - 181))));
    #pragma endscop
}
