/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 + 1] [i_1] = ((((((var_11 / 165) ? var_2 : var_16))) ? -181 : (arr_2 [i_1 + 1] [i_1])));
                arr_8 [i_0] = ((max((arr_6 [i_1 - 1] [i_1 + 1]), 100)));
                arr_9 [i_0] [i_0] = max((max(3643208959800579196, (90 | var_1))), ((max(((9223372036854775807 ? var_11 : (-127 - 1))), 221))));
            }
        }
    }
    var_17 = (max(var_6, var_7));
    var_18 = (max(((14803535113908972423 & ((max(3, var_15))))), ((var_14 ? (max(18446744073709551615, var_0)) : (var_11 > -9223372036854775807)))));
    var_19 = var_2;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                var_20 = (((((~(arr_1 [i_3])))) & (max(-8490366904345418953, (max(14803535113908972420, -31))))));
                arr_15 [12] [i_3] [18] = max((((max(8506305348033059823, 41)) >> ((((var_5 ? var_10 : var_12)) - 7839992437005173765)))), 205);
                var_21 -= ((~((max(-31, (var_10 || 221))))));
            }
        }
    }
    #pragma endscop
}
