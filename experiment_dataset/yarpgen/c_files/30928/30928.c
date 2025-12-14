/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] = arr_10 [9] [9] [3];
                                arr_18 [i_0] [i_0 + 1] [0] [i_0] [i_2 - 1] [6] [i_4 + 1] = arr_7 [5] [i_1 + 2] [10] [8];
                                var_19 = (arr_5 [i_0 + 1] [2]);
                            }
                        }
                    }
                    var_20 ^= (min((min(var_2, 6212115594823809494)), ((min((arr_9 [i_0 - 1] [i_1 - 1] [1]), (arr_12 [i_0] [1] [0] [i_2 + 1] [i_2 + 1]))))));
                }
            }
        }
        arr_19 [i_0] = (((var_1 || var_0) || ((min((arr_10 [9] [9] [9]), (arr_16 [i_0 - 2] [i_0 - 1] [i_0] [i_0] [i_0]))))));
        arr_20 [12] = (max((min(var_1, (arr_14 [i_0] [i_0] [i_0] [3] [i_0 - 2] [i_0 - 2] [i_0]))), 1431261249));
    }
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        arr_23 [i_5] [i_5] = arr_22 [i_5 - 2];
        var_21 = var_0;
        arr_24 [i_5] = (arr_22 [i_5 - 1]);
    }
    var_22 = 102;
    var_23 &= ((var_16 != (((~-13709) + var_1))));
    #pragma endscop
}
