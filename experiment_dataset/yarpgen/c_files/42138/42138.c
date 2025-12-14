/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((12654801525728458856 ? 1 : (((1 ? 12654801525728458856 : 48)))));
                arr_5 [i_1] = (~-12654801525728458858);
                var_21 = (((-65535 == 1) ? 62521 : -0));
            }
        }
    }
    #pragma endscop
}
