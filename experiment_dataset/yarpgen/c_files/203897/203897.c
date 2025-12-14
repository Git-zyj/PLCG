/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 6;
    var_15 = var_0;
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 = ((6 ? 6 : 12));
                var_18 -= (arr_0 [i_0 + 1]);
            }
        }
    }
    #pragma endscop
}
