/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (arr_1 [1]);
                var_16 = (arr_0 [5]);
            }
        }
    }
    var_17 = var_13;
    var_18 = ((((max((((-9419 ? var_10 : 2136692199))), 4218421141917473199))) ? ((min((!var_7), ((var_7 << (var_6 - 10416956673110900023)))))) : var_11));
    #pragma endscop
}
