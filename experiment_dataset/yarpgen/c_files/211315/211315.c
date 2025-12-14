/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(4294967295, (max(17, var_1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 |= (3666054874 ? (arr_0 [14]) : var_3);
        arr_3 [i_0] = ((var_5 ? 4294967295 : 1017805580));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] = max(var_7, (max(var_0, (min(var_4, var_0)))));
        var_12 = min(var_1, 1);
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_13 += min(1401505413, ((((max(var_0, var_8)) < ((var_1 ? var_8 : var_4))))));
                    arr_16 [i_2] [i_3] = ((min(var_1, var_1)) & var_7);
                }
            }
        }
        arr_17 [8] = max(((var_1 ? 383996838 : (1212200597 && 3572221145))), (arr_15 [i_2] [i_2] [i_2]));
        arr_18 [i_2] [i_2] = var_4;
    }
    var_14 = 2485538284;
    #pragma endscop
}
