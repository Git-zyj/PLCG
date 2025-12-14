/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((((min(var_11, var_16))) ? ((9223372036854775807 ? 226 : -9223372036854775805)) : var_15));
                var_19 = max((!var_3), (min(var_8, var_9)));
            }
        }
    }
    var_20 = var_7;
    var_21 -= var_9;
    #pragma endscop
}
