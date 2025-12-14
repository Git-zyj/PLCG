/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = 3660062178;
                    var_13 = (~(~147));
                }
            }
        }
    }
    var_14 = (min((((((var_7 ? 5613166347468007665 : var_9))) ? (((40 ? 634905118 : -7))) : (max(11458968552540904839, 0)))), ((((((var_6 ? var_0 : 60674))) ? ((0 ? var_6 : var_3)) : (((-13147 ? var_3 : var_1))))))));
    var_15 = var_5;
    var_16 = var_1;
    var_17 = (max(var_17, var_8));
    #pragma endscop
}
