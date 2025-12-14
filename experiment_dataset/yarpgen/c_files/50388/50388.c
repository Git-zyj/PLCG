/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 ^= (((-(arr_0 [i_0 - 1] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 ^= ((-(arr_2 [i_0] [i_0])));
                            var_17 &= 169;
                            arr_9 [i_0] [i_0 - 1] [15] [i_2] [i_3] [14] = (!0);

                            for (int i_4 = 4; i_4 < 18;i_4 += 1)
                            {
                                var_18 ^= (min(65535, (min(((((arr_8 [i_0] [i_1 - 2] [7] [i_4]) % (arr_7 [i_0] [i_2] [i_1 - 1] [i_0])))), (((arr_8 [i_0] [i_0 - 1] [i_0] [i_0]) ? var_3 : 32746))))));
                                arr_12 [i_3] [i_3] = (arr_5 [i_2] [i_3] [i_4 - 4]);
                                var_19 |= (max((var_14 || 42875), (!-20045)));
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                arr_15 [i_3] = 4294967272;
                                arr_16 [i_3] = ((((!52220) ? var_0 : ((2147483647 ? (arr_13 [i_5] [i_3] [i_2] [i_1] [i_1] [i_0] [i_0 - 1]) : (arr_7 [i_0] [i_1] [i_2] [i_3]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_20 *= ((((((-32767 - 1) - (arr_14 [i_7] [2] [i_6] [i_0] [i_7])))) && (max((arr_21 [i_0] [i_1 + 2] [i_6] [1] [i_7] [i_7]), (arr_13 [i_0 + 1] [i_0 + 1] [i_6] [i_7] [i_1 - 1] [i_1] [i_7])))));

                            for (int i_8 = 1; i_8 < 18;i_8 += 1)
                            {
                                arr_25 [1] [3] [i_6] [i_7] [i_8] = var_5;
                                arr_26 [i_0] [i_1] [i_6] [i_7] [i_8] = (max((((arr_13 [i_1] [i_1] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8]) ? -18389 : (arr_11 [i_6] [i_0] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8] [i_8]))), (arr_11 [i_8] [i_0] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8] [i_8])));
                            }
                        }
                    }
                }
                arr_27 [17] [1] [i_1] &= ((((((arr_19 [i_0 - 2]) / (arr_19 [i_1 + 2])))) ? (((arr_19 [i_0 + 1]) ? 21833 : (arr_19 [i_0]))) : ((max((arr_19 [i_1 - 1]), (arr_19 [i_0 - 2]))))));
                var_21 += (max(-var_13, (min((arr_7 [i_0 - 1] [12] [i_1 - 1] [i_0]), (arr_7 [i_0 + 1] [16] [i_1 + 1] [i_0])))));
            }
        }
    }
    var_22 -= var_14;
    var_23 = (max((min((max(var_1, var_14)), 6)), (var_8 / var_13)));
    #pragma endscop
}
