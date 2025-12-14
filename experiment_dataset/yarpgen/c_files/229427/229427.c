/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = var_12;
                var_15 = (max(var_15, (~-1113360272)));
                var_16 = (min(var_16, (((~((47129 ? (max(1113360272, var_6)) : -1113360272)))))));
            }
        }
    }
    #pragma endscop
}
