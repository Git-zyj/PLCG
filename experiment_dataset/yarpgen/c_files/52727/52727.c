/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((48670 ? (var_2 | var_1) : var_3))), ((var_10 ? ((var_5 ? var_18 : var_2)) : (~var_18)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = 200;
                var_21 = (max((~var_10), -2933));
            }
        }
    }
    var_22 -= var_5;
    var_23 = (max(((((min(var_13, var_17)) < var_15))), 9020078327067571446));
    var_24 = (var_12 || (((-(max(var_7, var_17))))));
    #pragma endscop
}
