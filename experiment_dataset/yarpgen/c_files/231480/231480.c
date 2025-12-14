/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!-2129428758);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 |= (min((!-110), -2129428763));
        arr_4 [i_0] = (!var_14);
        var_17 -= 2129428765;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            {
                arr_11 [i_1] [i_1] &= (~((min(305078605, 866826575))));
                var_18 = -2129428753;
            }
        }
    }
    #pragma endscop
}
