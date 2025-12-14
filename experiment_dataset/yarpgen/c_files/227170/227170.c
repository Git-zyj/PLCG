/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((~((((var_6 ? var_3 : var_11)) * (arr_1 [2] [i_1 - 1])))));
                var_18 = (((arr_0 [7]) ? ((var_8 ? var_3 : (~0))) : (((var_12 * var_15) ? ((var_7 ? var_1 : var_11)) : (var_15 != var_10)))));
            }
        }
    }
    var_19 &= ((!(((((max(-1, 0))) ? 0 : var_15)))));
    var_20 = min(-var_14, (min((1688439140 * var_12), (min(var_13, var_3)))));
    #pragma endscop
}
