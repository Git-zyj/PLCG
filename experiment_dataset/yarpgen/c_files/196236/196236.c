/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (arr_3 [i_0 - 2] [i_0 - 2])));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_19 += (((arr_10 [i_0] [i_1] [i_2 + 2] [i_3]) ? (((arr_5 [i_2] [i_1]) * var_14)) : var_6));
                        arr_11 [i_3] [i_1] [i_1] [i_0] = (arr_10 [i_0] [i_1] [i_2] [i_2 + 1]);
                    }
                    var_20 = var_16;
                }
            }
        }
        arr_12 [i_0] = ((((min((arr_8 [i_0] [i_0] [i_0 - 1]), var_14))) ? (min((arr_9 [i_0 + 2] [i_0 - 2]), (arr_7 [i_0] [i_0 - 2] [i_0]))) : var_9));
        var_21 = (max(var_21, ((((((((arr_7 [i_0] [i_0 - 1] [i_0 - 1]) ? var_1 : var_14)))) + (arr_7 [i_0 + 1] [i_0] [i_0]))))));
    }
    var_22 = (max((11135 && var_4), var_17));
    #pragma endscop
}
