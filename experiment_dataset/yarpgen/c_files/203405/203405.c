/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_9 && var_7);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 &= (((((var_1 / ((var_1 ? var_10 : var_8))))) ? 1779274921 : (arr_2 [i_1])));
                var_19 = (arr_3 [i_1]);
                var_20 *= (arr_1 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
