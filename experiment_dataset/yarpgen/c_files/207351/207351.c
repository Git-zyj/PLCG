/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_20 = ((var_16 / ((min((arr_1 [i_0]), 929061728)))));
                arr_4 [i_0] = ((!(arr_3 [i_1 + 1] [i_1 + 1] [i_1])));
            }
        }
    }
    var_21 ^= (!-3923309505352155064);
    var_22 = (((~var_5) ? var_4 : (((var_13 | 929061729) | ((var_12 ? var_17 : var_18))))));
    #pragma endscop
}
