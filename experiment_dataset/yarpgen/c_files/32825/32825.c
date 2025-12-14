/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [14] [12] [i_0] = (((arr_4 [1] [14] [i_1]) ? ((((((arr_4 [i_1] [i_0] [i_0]) - (arr_2 [i_0] [i_0])))) ? (((arr_3 [i_0] [i_1]) << (var_6 - 1768819035))) : var_6)) : ((5104592825200288455 ? 2953297494124105616 : -5104592825200288456))));
                var_12 = -5104592825200288456;
                var_13 = max((-5104592825200288455 != 52), (max((((var_10 ? 55 : var_0))), ((var_9 ? var_6 : var_7)))));
                var_14 ^= ((((31494 * ((var_10 ? (arr_2 [i_0 - 1] [i_1]) : (arr_2 [i_1] [i_0]))))) | (((min((arr_5 [i_0] [i_1]), -5104592825200288482))))));
            }
        }
    }
    #pragma endscop
}
