/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((-3530359943134862443 ? (((((1 ? -9635 : 1))) ? (((32767 ? 198 : -98))) : ((32767 ? -9635 : 0)))) : 17414616963544042591));
                arr_5 [i_1] = 612209472;
                var_12 *= 10611337265059658008;
                var_13 = 253;
            }
        }
    }
    #pragma endscop
}
