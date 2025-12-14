/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!-var_10);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = ((((~((((arr_5 [i_0] [i_0 - 1] [i_0]) > (arr_5 [i_1] [i_1] [i_1])))))) <= ((-(var_8 == var_12)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = (((arr_0 [i_4 + 1] [i_4]) ? ((((arr_2 [i_0 - 1]) ? (arr_9 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1]) : ((((arr_12 [i_0] [i_0] [i_0 - 1] [16]) ? var_15 : var_10)))))) : var_14));
                                arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_4] = (((var_14 ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                                arr_16 [24] [24] [i_2] [i_4] [i_2] = ((((((arr_8 [i_0] [i_4 + 1]) * (var_4 > var_0)))) ? (arr_11 [i_0]) : ((min(var_12, (arr_13 [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4]))))));
                            }
                        }
                    }
                }
                arr_17 [i_0 - 1] [i_0 - 1] [i_0] = ((((~(arr_9 [11] [20] [i_0 - 1] [i_0 - 1]))) >> (((arr_9 [i_1] [1] [i_0] [i_0]) - 1225456347))));
            }
        }
    }
    #pragma endscop
}
