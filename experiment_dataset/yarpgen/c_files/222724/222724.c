/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((~var_9) >= (((((var_5 << (var_12 - 146)))) ? var_7 : var_1)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((~((var_4 ? ((var_9 ? var_9 : var_3)) : (var_10 - var_0)))));
                var_16 = ((var_2 + (max((~var_12), (max(var_11, var_3))))));
            }
        }
    }
    #pragma endscop
}
