/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((-1 - var_1) + 0)), 11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = var_4;
                var_16 ^= ((~(0 <= -11)));
            }
        }
    }
    var_17 = ((((((min(160, var_0))))) ? ((var_3 ? 6 : ((min(var_10, var_10))))) : var_6));
    var_18 += var_11;
    #pragma endscop
}
