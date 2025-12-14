/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (min(var_15, 3612342179));
                arr_4 [i_0] [i_0] [i_0] = 9223372036854775807;
            }
        }
    }
    var_16 = var_14;
    #pragma endscop
}
