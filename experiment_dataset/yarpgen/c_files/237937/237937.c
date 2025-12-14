/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(127, 192));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = 1666717739;
                    var_17 = (((((arr_9 [i_1 + 1] [i_1 + 2] [i_1 - 2] [i_1 - 2]) ? (arr_7 [i_1 + 1] [i_1 + 2]) : var_9)) <= ((((arr_9 [i_1 - 2] [i_1 - 2] [i_1 + 2] [i_1 + 1]) ? 2 : 192)))));
                }
            }
        }
    }
    var_18 = (1908502304 || ((((127 - 1371834634) * var_12))));
    #pragma endscop
}
