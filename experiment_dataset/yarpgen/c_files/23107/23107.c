/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_6 ? 127 : var_13))) ? (var_5 == var_4) : var_12))) ? ((-((var_12 ? var_2 : var_3)))) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (((((-127 - 1) + 2147483647)) >> (1466353838498902181 - 1466353838498902173)));
                var_17 = var_10;
            }
        }
    }
    #pragma endscop
}
