/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 65535;
    var_20 &= (min(var_5, (max(32757, (max(var_8, 65526))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = (max(var_6, var_2));
                var_22 = (((var_3 ? ((16 ? var_11 : var_4) : (-2147483647 - 1)))));
                var_23 = (max(32749, 1008));
            }
        }
    }
    var_24 = 63;
    #pragma endscop
}
