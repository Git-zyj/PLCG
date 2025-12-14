/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-1763795057 ? var_5 : (((var_5 < var_8) ? var_10 : 13856))));
    var_18 = ((((var_6 ? 1317030526588805544 : var_6)) >> (var_0 - 11251695114708541103)));
    var_19 = (var_14 + var_11);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [7] [7] [10] [i_4] [7] [i_3] [i_2] = ((max((arr_4 [i_2]), (arr_3 [i_0]))));
                                arr_12 [i_4] [i_2] [i_0] [i_2] [i_1] [i_2] [i_0] = (max((arr_1 [i_1]), var_5));
                            }
                        }
                    }
                }
            }
        }
        arr_13 [2] = var_3;
        arr_14 [i_0] = (arr_2 [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
