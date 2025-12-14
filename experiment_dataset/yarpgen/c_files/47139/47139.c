/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_9 ? (max((~var_0), var_7)) : (max((max(var_6, var_10)), (min(var_8, var_2)))));
    var_14 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_2;
                var_15 += var_1;
                arr_7 [i_0] [i_1] = (min(var_7, ((min(((var_0 ? var_9 : var_3)), var_1)))));
            }
        }
    }
    var_16 = (min(var_16, ((((((!var_7) ? var_11 : var_8))) ? ((var_4 ? (max(var_4, var_6)) : (min(1, 4294967295)))) : var_3))));
    var_17 = var_6;
    #pragma endscop
}
