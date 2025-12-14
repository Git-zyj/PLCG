/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_8));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (-2147483638 - 4);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = ((((max((arr_7 [21]), 32752))) % (~var_2)));
                                arr_11 [18] [i_1] [i_1] [i_3] [18] = (((((~((max((arr_4 [i_1] [i_1]), var_4)))))) / (((var_5 + 2147483647) ? (((arr_9 [i_4] [i_3] [i_1] [i_1] [4] [i_0]) - (arr_4 [i_1] [i_1]))) : (arr_9 [5] [5] [i_1] [i_0 + 1] [i_4] [i_1])))));
                                var_15 = (min(var_15, (((((arr_5 [i_4] [i_3]) ? (((arr_6 [16] [i_3] [i_0]) ? var_6 : var_4)) : (!65531)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
