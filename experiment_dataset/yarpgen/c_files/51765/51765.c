/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max(var_5, (var_4 < var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_1] = var_8;
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] = (max((max((((arr_0 [i_0] [i_1]) ? var_1 : (arr_8 [i_4] [i_3 + 1] [6]))), ((var_6 ? (arr_14 [i_0] [i_1] [i_0] [i_0] [4] [i_4]) : var_3)))), (arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4])));
                            }
                        }
                    }
                    arr_17 [i_0] = ((var_1 + 9223372036854775807) << (((max(var_4, (arr_7 [i_1] [i_1 - 1] [i_1 + 3] [i_1]))) - 3334106265)));
                }
            }
        }
    }
    #pragma endscop
}
