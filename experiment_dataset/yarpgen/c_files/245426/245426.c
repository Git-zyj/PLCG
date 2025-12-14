/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_8, ((((max(472661457289936637, 2565472403374491105))) ? var_16 : ((var_0 ? var_0 : var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = (arr_0 [i_0]);
                var_21 &= 51196;
            }
        }
    }
    #pragma endscop
}
