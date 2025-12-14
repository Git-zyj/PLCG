/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 23));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = var_7;
                    arr_8 [i_0] [i_1 + 2] = (173 ? ((173 ? 8 : 0)) : (((((1 ? 0 : -2256387861041584256))))));
                    var_14 = (((((0 ? 28 : ((3558486446 ? 82 : 4294967292))))) ? (((((1 ? 88 : -24))) ? (((65534 ? 12561 : 1))) : (max(0, 1)))) : (((-163635236 ? (-29 <= -14) : var_4)))));
                }
            }
        }
    }
    #pragma endscop
}
