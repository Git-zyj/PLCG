/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((62 ? ((67 * (~-1))) : (((66 != (~250))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((65472 >= (!2460254007)));
                var_17 = -98;
            }
        }
    }
    var_18 = (~(((((0 ? 24090 : -65493))) ? -1 : (((-21 ? -68 : 37))))));
    var_19 = 59747;
    #pragma endscop
}
