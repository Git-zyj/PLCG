/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((var_7 ? ((+(min((arr_5 [7] [i_1 - 1] [i_1 - 2]), var_13)))) : var_12));
                var_18 = (max(var_18, var_11));
                var_19 = var_6;
                var_20 = (max(var_20, (((-((var_12 / (arr_4 [i_0] [i_0] [i_1 + 1]))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_10 [8] = 0;
        var_21 = (max(var_21, (arr_5 [i_2] [i_2] [i_2])));
        var_22 += ((-(min((max((arr_8 [i_2] [i_2]), var_5)), var_12))));
        arr_11 [i_2] = (((min((arr_5 [i_2] [i_2] [i_2]), var_4)) >> (((max((arr_5 [i_2] [i_2] [i_2]), (arr_2 [i_2]))) - 12875107050880777370))));
    }
    #pragma endscop
}
