/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (+(((var_1 >> 0) - ((min((arr_0 [i_1]), var_4))))));
                arr_5 [i_0] [i_0] = var_16;
                arr_6 [i_1] = ((((var_6 ^ (arr_4 [i_0 - 1]))) << (126 - 119)));
            }
        }
    }
    var_18 = (((((min(var_16, var_1)) + 2147483647)) >> (((19575 | var_9) - 19678))));
    var_19 = -85615443583554958;
    #pragma endscop
}
