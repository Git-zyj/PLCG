/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [5] [5] [i_2] [i_2] [i_4] [17] = var_8;
                                arr_15 [i_0] [i_1 - 2] [i_2] [i_4] = ((234 < (((arr_10 [21] [i_1 - 3] [i_4] [21] [i_4]) % var_5))));
                            }
                        }
                    }
                    var_17 = (((((arr_10 [i_0] [i_0] [i_0] [i_0] [14]) ? (arr_0 [i_0]) : (arr_6 [i_0] [i_1 - 2] [i_0] [i_2]))) << ((((~(arr_6 [i_0] [i_1 - 2] [8] [i_0]))) + 133))));
                }
            }
        }
        arr_16 [i_0] [i_0] = var_3;
    }
    var_18 |= var_4;
    #pragma endscop
}
