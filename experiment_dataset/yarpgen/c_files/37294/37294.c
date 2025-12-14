/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_10 [5] [i_1] [i_1] [3] [1] [i_0] = -var_8;
                                arr_11 [i_2] [i_2] [i_2] [i_0] [i_4 + 1] = ((min(((arr_7 [7] [i_2] [i_1] [2]), var_10))));
                                var_12 = (arr_4 [i_1] [i_0] [i_1] [i_0]);
                                var_13 = var_3;
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        var_14 = var_7;
                        var_15 = (max(((((((11696 ? 1292333641 : 15))) < (max(0, (arr_8 [i_0] [i_0] [i_0] [i_0] [6] [i_5])))))), (max(1, (arr_1 [i_0 + 1])))));
                    }
                    arr_15 [i_0] [i_1] [0] = ((-(-73 <= var_0)));
                    arr_16 [7] [i_0] [i_2] = (min(((min(1, (arr_6 [i_0] [i_0 - 1] [i_0 + 1] [12])))), (~0)));
                }
            }
        }
    }
    #pragma endscop
}
