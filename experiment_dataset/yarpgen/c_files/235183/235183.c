/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = ((~(~-28)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 *= 636464780;
                arr_5 [i_0] [i_0] = ((~((66 ? 1914011865 : (arr_1 [i_1])))));
                var_19 = 3401445709;
            }
        }
    }
    #pragma endscop
}
