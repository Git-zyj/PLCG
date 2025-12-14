/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = (((((((max(var_5, var_7))) * (var_5 * var_4)))) && ((min((((-1 ? var_0 : var_8))), var_10)))));
                    var_15 = ((((!(-2147483647 - 1))) ? (min(220, 16383)) : (((((var_13 && var_5) && (!var_1)))))));
                    var_16 = (((((var_12 - var_9) < 132)) ? var_8 : (((!var_6) ? var_5 : ((16776192 ? 132 : -16757))))));
                }
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
