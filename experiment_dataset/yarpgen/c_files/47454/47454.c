/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((~(arr_4 [i_0] [i_1]))) & (-53 + var_6));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, (arr_3 [7] [i_1])));

                            /* vectorizable */
                            for (int i_4 = 4; i_4 < 18;i_4 += 1)
                            {
                                arr_15 [i_0] [i_2 - 2] [i_4 - 4] = (157819300 / (arr_13 [i_1] [i_1] [i_4 - 4] [i_4] [i_4]));
                                var_12 = var_5;
                                var_13 = (((((((arr_0 [i_0]) >= 14)))) & ((var_3 ? 157819272 : 1484860257))));
                                var_14 = (min(var_14, (var_5 & 1484860248)));
                            }
                        }
                    }
                }
                arr_16 [i_0] = ((1492259889 ? 1484860253 : 8192));
                arr_17 [i_0] [i_0] [1] = 60446;
            }
        }
    }
    var_15 |= ((((min(1492259889, var_6) <= ((max(var_10, 8)))))));
    #pragma endscop
}
