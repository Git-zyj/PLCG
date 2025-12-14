/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (65534 << 2)));
                var_18 = (min(var_18, (((((((+(((arr_4 [24]) ? -25726 : 65510)))) + 2147483647)) << (var_2 - 6248534896770531463))))));
            }
        }
    }
    var_19 = var_16;
    var_20 = (min(var_20, var_13));
    #pragma endscop
}
