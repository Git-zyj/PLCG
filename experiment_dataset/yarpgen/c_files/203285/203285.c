/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((((((min(2920241556434153291, var_0)) ^ var_14)) ^ ((min(((var_5 ^ (arr_2 [i_1] [1]))), ((max(var_5, var_1)))))))))));
                var_16 = (arr_2 [i_0] [i_0]);
                var_17 *= (arr_1 [i_0] [i_0]);
            }
        }
    }
    var_18 = (max(-1, ((((((var_7 ? var_14 : -22))) > (min(var_13, var_0)))))));
    var_19 -= (max(668460601626483123, var_7));
    #pragma endscop
}
