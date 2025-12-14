/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_10));
    var_15 = (max(var_15, ((var_12 ? ((-(var_8 / var_3))) : (1644215385 / 1)))));
    var_16 = ((var_6 ? (var_0 + 52452) : (((((var_10 ? 33919 : var_12))) ? ((81 ? var_5 : 54639)) : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (min(var_17, -1));
                var_18 &= ((((((max(-5, var_9))) + 2147483647)) << (((-24 + 34) - 10))));
            }
        }
    }
    var_19 = var_5;
    #pragma endscop
}
