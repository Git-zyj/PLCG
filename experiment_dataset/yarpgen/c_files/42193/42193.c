/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_8 ? var_7 : (((((var_7 ? var_18 : var_0))) ? 12023 : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (((((arr_0 [i_0]) ? ((var_12 ? (arr_0 [i_1]) : var_16)) : (max(var_15, 28)))) < (((((arr_4 [i_0] [i_0] [i_0]) && (41 & var_6)))))));
                arr_6 [i_0] [i_1] = (((~var_13) || (arr_2 [1])));
            }
        }
    }
    var_21 = (max((~var_0), ((((!var_6) & (!var_0))))));
    #pragma endscop
}
