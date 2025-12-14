/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max((var_15 << var_19), var_6))) ? (0 | -32487) : (((((32500 ? 124 : 32483))) ? (max(13611008832029828195, var_1)) : (!var_18)))));
    var_21 = var_9;
    var_22 = ((-32487 ? ((((min(32767, var_3))) ? var_17 : var_8)) : ((((!(((140 ? 15 : 1325824790)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_23 = (max((((32513 <= ((max(-19887, 22587)))))), -0));
                var_24 = (((6144 ? 18446744073709551615 : 1325824790)));
            }
        }
    }
    #pragma endscop
}
