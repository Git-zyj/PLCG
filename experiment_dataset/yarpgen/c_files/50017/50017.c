/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_8 [i_1] = (max(var_13, (arr_2 [6])));
                var_16 = ((((((arr_5 [i_1]) ? (max(var_2, var_14)) : (~-1086597166)))) ? var_14 : ((((arr_7 [10] [i_1]) ? 0 : 0)))));
                var_17 -= arr_1 [2];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_14 [i_1] = (arr_2 [i_0]);
                            arr_15 [i_0] [i_0] [i_0] [i_1] = (max((arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 2]), ((~(arr_2 [i_0])))));
                        }
                    }
                }
                arr_16 [i_0] [i_1] = max((arr_1 [i_1 - 2]), 65535);
            }
        }
    }
    #pragma endscop
}
