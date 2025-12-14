/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((((var_3 ? var_0 : 3674364154792782955))) ? 511 : (min(14771, var_1)))), ((((~var_8) ? ((-10362 ? 121 : 983986050)) : var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [1] [i_1] [i_1 - 2] [1] = (((arr_2 [i_0]) ? var_4 : ((1359860586 ? (1 > 2744767226627674931) : (483 ^ var_2)))));
                    arr_7 [i_0] = (min((((805306368 ? 63 : 14))), (!511)));
                }
            }
        }
    }
    #pragma endscop
}
