/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = ((+(((((((arr_4 [i_0] [i_1] [i_1]) != (arr_2 [i_0] [i_1 + 3]))))) - ((78611000 ? 961191391 : (-9223372036854775807 - 1)))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_8 [i_3] [i_0] [i_2] [i_3] [i_0 - 2] = var_10;
                        arr_9 [i_0] [0] [i_1] [i_0] = 78611012;
                    }
                    var_19 = (max((((arr_3 [i_1 - 1] [i_2]) ^ 4216356292)), ((((arr_3 [i_0] [i_2]) ? (arr_3 [i_2] [i_1 + 2]) : (arr_3 [i_0 - 2] [i_0 - 1]))))));
                    var_20 = var_6;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            {
                var_21 -= ((-((max((var_6 < -4897), var_11)))));
                arr_17 [i_4] [i_4] = (arr_2 [i_4] [i_5]);
            }
        }
    }
    var_22 = var_3;
    var_23 = (((var_0 ? var_2 : var_3)));
    #pragma endscop
}
