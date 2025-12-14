/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += -28;
    var_15 = (((~var_10) ? (min(-47, var_9)) : var_8));
    var_16 = ((((min(55303, (var_8 | 18446744073709551615)))) ? 88 : ((var_12 ? var_3 : (max(var_7, var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = ((--39) ? 1 : -32764);
                    arr_8 [i_1] [1] [i_0] [i_1] = 18446744073709551613;
                }
            }
        }
    }
    var_18 = ((-var_2 ? (min(var_8, (1273315788 ^ var_1))) : var_1));
    #pragma endscop
}
