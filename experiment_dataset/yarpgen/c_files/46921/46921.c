/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_8;
    var_14 = ((!(((var_7 ? var_12 : (!var_4))))));
    var_15 = ((((var_0 ? var_9 : var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_16 *= ((var_2 ? (arr_6 [i_1 + 3]) : (arr_2 [i_0] [i_0])));
                var_17 = ((((((var_0 != -124) << (((max(var_12, -124)) - 18446744073709551462))))) ? 35 : 60151));
                var_18 = var_7;
            }
        }
    }
    #pragma endscop
}
