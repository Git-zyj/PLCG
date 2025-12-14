/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (17085943677924868329 + 62904);
                arr_5 [i_0] [i_1 - 1] = (2632 - 16574953147356109141);
                arr_6 [9] [0] [11] = (max(var_9, ((max(var_1, (-10 + 24223))))));
            }
        }
    }
    var_18 *= var_9;
    #pragma endscop
}
