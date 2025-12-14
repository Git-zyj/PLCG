/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 ^= 0;
                    var_14 = (~(1 | 4515));
                    var_15 = max(var_1, ((-((var_6 ? 3217829114 : (-9223372036854775807 - 1))))));
                    arr_10 [i_0] [i_0] = ((+-827975408) << (288230376151711712 - 288230376151711686));
                }
            }
        }
    }
    var_16 = var_5;
    #pragma endscop
}
