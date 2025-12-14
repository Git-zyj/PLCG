/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min(var_5, ((max(var_0, var_3))))), var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = arr_5 [i_1] [i_0];
                var_21 -= (max(74, -2500377768275278877));
                var_22 = (((max((arr_0 [i_0]), 4877622646566926787)) >= ((((arr_0 [i_0]) | (arr_0 [i_0]))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    var_23 ^= (((arr_4 [i_2 - 1] [i_2 - 1]) + (arr_7 [i_2 + 2] [i_2 - 2] [i_2 + 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_0] [i_3] = (((arr_13 [i_2 + 1] [i_3 + 1] [i_3]) << (((((arr_17 [i_0] [i_2 - 2] [i_2 + 2] [i_3] [i_4]) + 1191520448713290378)) - 14))));
                                var_24 |= ((((arr_16 [i_0]) + (arr_9 [i_4] [i_4]))) + (((((arr_8 [i_2] [i_0] [i_0]) > (arr_2 [i_0]))))));
                                arr_19 [i_0] [i_0] [i_1] [i_2 + 2] [i_3] [i_4] [i_4] = arr_17 [5] [5] [i_2] [5] [i_2];
                                arr_20 [i_1] [i_1] [i_1] [i_4] = (arr_9 [i_0] [i_4]);
                                arr_21 [i_0] = (arr_3 [i_2 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        var_25 = (((arr_23 [i_5 + 2] [i_5 - 2]) * ((min((arr_23 [i_5 - 2] [i_5 - 2]), ((min((arr_24 [i_5]), (arr_24 [i_5 + 3])))))))));
        var_26 = (max(var_26, (arr_22 [i_5])));
    }
    var_27 = var_3;
    var_28 = min(((((var_10 ^ var_11) > (min(var_4, var_9))))), (((var_4 | var_10) / (max(var_5, var_13)))));
    #pragma endscop
}
