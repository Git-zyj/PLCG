/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((((((((max(var_1, var_15))) ? ((var_2 ? var_1 : -8500409029938022172)) : ((max(var_1, var_3)))))) ? ((var_9 ? ((var_12 ? -93 : var_10)) : (var_7 > 390073319165389580))) : -55)))));
                var_19 = 2630992120;
                var_20 = (((((-75 ? (min(1663975178, -102)) : 3873841807))) ? ((-4 ? ((1663975176 << (124 - 121))) : 1663975191)) : var_16));
            }
        }
    }
    var_21 = -102;
    #pragma endscop
}
