/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((~var_10) ? (((!var_13) ? var_6 : var_8)) : -32)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_2] = (var_7 < ((((var_3 ? 48 : -50)))));
                    var_17 = (min(var_17, ((min(var_12, var_12)))));
                    var_18 = var_15;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_19 = var_6;
        arr_13 [i_3] = (-39 / -73749358);
        arr_14 [i_3] [9] = ((var_9 ? -39 : (arr_6 [i_3])));
    }
    var_20 = (min(var_20, var_10));
    #pragma endscop
}
