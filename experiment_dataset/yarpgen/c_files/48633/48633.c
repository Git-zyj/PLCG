/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = (((((min(65535, 9223372036854775807)) ? (min(6888424781912558108, 4294967285)) : (((min(149, 36))))))));
    var_19 = var_13;
    var_20 = ((((64230 || 11) ? ((147 ? 11 : 25041)) : (((162 ? 24681 : -1305227291))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = (max(var_21, 1534889669));
                var_22 = (max(var_22, (~1751271033)));
            }
        }
    }
    #pragma endscop
}
