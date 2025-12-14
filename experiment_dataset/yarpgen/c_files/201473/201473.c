/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_1] [i_0 - 1]);
                var_19 = (0 ^ 1);
                var_20 -= arr_4 [9] [i_1 - 1] [i_0 + 2];
            }
        }
    }
    var_21 = var_15;
    var_22 = (min(var_22, ((var_14 && ((var_1 < (242 << 12)))))));
    var_23 = (~var_14);
    #pragma endscop
}
