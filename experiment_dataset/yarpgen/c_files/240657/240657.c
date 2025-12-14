/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = ((max((min((arr_13 [i_0] [i_1] [i_1] [i_3] [i_4]), var_13)), var_14)));
                                var_16 -= ((var_8 ^ (arr_13 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4 - 2])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_17 = (((arr_6 [i_0] [i_0]) ^ var_11));
                        arr_18 [i_1] [i_5] [i_5] = 169;

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_18 ^= var_3;
                            var_19 = (((((arr_14 [i_0] [i_6] [i_2] [i_5] [i_6]) ? 2537510952 : var_4)) > (arr_3 [i_0])));
                            arr_21 [i_0] [i_1] [i_5] = 41510;
                        }
                    }
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        var_20 = var_1;
                        var_21 += (max(((((arr_2 [i_0]) | ((max(32738, (arr_17 [i_1] [i_1] [i_2] [i_1]))))))), (((((21 ? (arr_3 [i_0]) : var_9))) ? (arr_9 [i_7] [i_2] [i_1]) : (min(9223372036854775792, var_3))))));
                        arr_24 [i_7] [i_7] [i_2] [i_7] = (max((min(-237562826, 237562806)), (!var_8)));
                        arr_25 [i_7] [i_7] [i_2] [i_7] [i_0] = (((((((arr_9 [i_0] [i_0] [i_0]) ? 1697432811 : 1)))) ? ((((((arr_17 [10] [i_2] [10] [10]) ? var_1 : 1))))) : ((-(1 / var_2)))));
                        var_22 = -29878;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_29 [i_8] [i_1] [i_0] &= ((8122399010559523849 >> ((((-(arr_16 [i_0] [i_0] [i_1] [i_8] [i_0] [i_1]))) + 8129554591953351688))));
                        var_23 ^= (arr_7 [i_0]);
                        arr_30 [i_0] [9] [i_0] = (var_8 < var_11);
                    }
                    var_24 = (var_10 << (1408174717 - 2669));
                }
            }
        }
    }
    var_25 |= (min(var_13, var_10));
    var_26 = (((32577 ? 642833473 : ((-321070657 ? 1247274806 : 80107790)))));
    #pragma endscop
}
