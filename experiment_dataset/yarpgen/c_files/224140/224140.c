/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = ((-(max(-45, -39972))));
                var_21 |= (min(((2120 ? 1 : ((0 ? (arr_1 [i_1]) : var_13)))), (arr_4 [i_1])));
                var_22 = (((((0 && (arr_0 [i_0])))) >> ((((((!(arr_0 [i_1])))) >= -var_19)))));
            }
        }
    }
    var_23 *= min((max(((max(var_15, var_17))), ((var_1 ? var_16 : var_14)))), (-12 + -1846992671));
    #pragma endscop
}
