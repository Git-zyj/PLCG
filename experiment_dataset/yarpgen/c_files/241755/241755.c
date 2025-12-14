/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [4] [i_2] [i_1] [i_0 - 2] = (min(-111, 10906639590692561976));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_18 *= ((max(var_4, 43243)));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4 + 2] [i_1] = (min((max((arr_14 [i_0 + 3] [i_3] [i_2] [i_3 - 4] [i_4 + 2]), var_3)), var_16));
                            }
                        }
                    }
                    var_19 = (var_4 == var_14);
                    var_20 = (max(((10532501914031854201 ? (min(var_10, (arr_11 [i_0] [i_1] [6] [i_2]))) : (((min(var_16, var_13)))))), (min((arr_7 [i_0] [i_1] [i_1 + 2]), var_8))));
                }
            }
        }
    }
    var_21 = var_16;
    var_22 = (max((((var_8 ^ var_6) >> (var_1 - 7452556474550206200))), var_15));
    #pragma endscop
}
