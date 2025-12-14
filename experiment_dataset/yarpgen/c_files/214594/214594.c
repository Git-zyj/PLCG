/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((((1051866760 ? -107 : -104)) / -654830268)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = max((max((max(var_1, 10088323021181267202)), 8985984975886725513)), (1058288337 != 10605801094956074532));
                    var_13 += 524287;
                }
            }
        }
    }
    #pragma endscop
}
