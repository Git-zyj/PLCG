/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = ((-(var_7 / var_2)));
    var_12 = var_5;
    var_13 = (~1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = var_1;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = (arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]);
                                var_16 = (min(var_16, (((~(arr_2 [i_2] [i_0]))))));
                                var_17 = -1;
                            }
                        }
                    }
                    var_18 *= (((arr_1 [i_1 - 2] [i_1 - 2]) & var_4));
                    arr_11 [i_1] [7] [i_1] = var_1;
                    var_19 = (arr_0 [i_0]);
                    var_20 = (max(var_20, (arr_6 [i_1 - 1] [i_1] [2] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
