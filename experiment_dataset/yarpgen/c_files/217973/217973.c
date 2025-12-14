/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 ^= ((-((var_2 / (arr_8 [i_1 + 1] [i_1 - 1])))));

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        var_20 = (min(var_20, (arr_4 [i_1] [i_2] [i_3])));
                        var_21 = ((+(((arr_0 [i_1 - 2]) - (arr_0 [i_1 - 1])))));
                        var_22 += (((arr_4 [i_3 + 2] [i_3 - 1] [6]) && (arr_4 [i_3 - 1] [i_3 - 1] [i_3])));
                        var_23 = var_17;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_24 = (((arr_14 [i_0] [i_0] [i_1] [i_2] [i_4 + 1] [i_4] [i_0]) ? (((arr_14 [i_0] [i_1 + 1] [i_2] [i_4] [i_2] [i_2] [18]) * var_14)) : ((~(arr_14 [i_1 + 1] [i_1 + 1] [i_2] [i_4 - 1] [i_5] [19] [i_0])))));
                                arr_15 [12] [i_4] [i_2] [i_4] [14] = var_12;
                                var_25 = var_8;
                                var_26 = (max(var_26, var_9));
                            }
                        }
                    }
                    arr_16 [5] [i_1] [i_2] = -var_11;
                }
            }
        }
    }
    var_27 *= (((var_17 ? var_14 : (~var_2))));
    var_28 += var_16;
    #pragma endscop
}
