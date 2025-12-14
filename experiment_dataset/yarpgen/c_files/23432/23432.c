/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((!(((1 ? var_11 : var_12))))) ? ((var_12 ? var_2 : var_4)) : var_8));
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (max((min(163, var_4)), (1 + -1)));
                var_19 = -1;
            }
        }
    }
    #pragma endscop
}
