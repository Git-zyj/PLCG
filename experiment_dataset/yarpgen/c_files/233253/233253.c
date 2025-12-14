/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (min(var_20, (((!(arr_0 [i_0]))))));
        var_21 = (((var_15 > var_7) ? ((1 ? (1 % 220) : 54)) : 3136239190194152797));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_0] = (((((arr_7 [i_0] [i_0] [i_1] [i_2] [5]) / (arr_0 [i_2]))) >= 1));
                        arr_10 [i_0] [i_1] [13] [i_3] = var_16;
                        var_22 = (min(var_22, (arr_4 [i_0] [i_1] [i_2])));
                        var_23 = ((-19235 ? 10437 : ((var_6 ? (arr_8 [i_0] [i_0]) : (arr_8 [i_2] [i_1])))));
                    }
                }
            }
        }
    }
    var_24 = (var_12 | ((-((var_2 ? var_3 : var_16)))));
    #pragma endscop
}
