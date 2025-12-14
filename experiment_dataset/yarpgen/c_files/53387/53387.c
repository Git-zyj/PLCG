/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = max((((+((min((arr_2 [i_0]), var_6)))))), ((16123 * (((arr_3 [i_0]) ? var_6 : var_15)))));
                var_19 = (max(8191, (max((~var_3), (~220)))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_20 = (arr_6 [i_2]);
        var_21 = ((((((arr_7 [i_2]) ? (arr_6 [i_2]) : (~206)))) & (max((~29), (~var_8)))));
        arr_8 [i_2] [i_2] = var_11;
    }
    #pragma endscop
}
