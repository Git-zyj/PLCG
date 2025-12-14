/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_10));
    var_19 = var_10;
    var_20 = ((~((var_3 >> (var_2 + 1019998741866259017)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = (arr_2 [i_0]);
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (13995 != 0);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = -1224845120;
                                var_23 = (((var_16 ? (((min((arr_13 [i_2] [i_0]), 78)))) : (arr_4 [i_3 - 1]))));
                                var_24 = ((var_3 ? 1 : ((((12381868511871950752 ? 1224845119 : 0)) | (((((arr_13 [i_0] [i_0]) + 2147483647)) << 0))))));
                                var_25 ^= (max((arr_6 [i_0] [i_0] [i_1] [i_3 - 1]), var_5));
                                var_26 = (var_9 ? ((min((~var_10), var_1))) : var_14);
                            }
                        }
                    }
                    arr_14 [i_2] [i_1] &= (((var_1 >= var_4) == (((arr_0 [i_0]) / var_12))));
                }
            }
        }
    }
    var_27 = ((var_0 >> ((min(1, 1)))));
    #pragma endscop
}
