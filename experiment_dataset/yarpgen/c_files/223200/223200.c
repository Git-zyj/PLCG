/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [13] = 24008;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [5] [i_1] = (((2147483632 ^ 0) ? (arr_5 [i_1] [i_1] [i_0]) : (98 || 0)));
            arr_7 [i_0] [i_0] [i_1] = (((arr_0 [i_0]) / 8594052579495100779));
            arr_8 [2] = (~20413);
            arr_9 [6] [i_1] [i_1] = (!2147483647);
        }
    }
    var_10 = (min((var_6 / var_8), 20413));
    #pragma endscop
}
