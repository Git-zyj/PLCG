/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((~(((min(-96, -795549016080415392))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((min(-795549016080415379, (min(1, (max(-6184887294929389666, var_3)))))))));
                var_17 = (!-299560);
            }
        }
    }
    #pragma endscop
}
