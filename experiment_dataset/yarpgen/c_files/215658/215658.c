/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1 + 1] [i_1] [i_0] = (min(28594, (max((max(var_11, var_6)), (arr_3 [i_1 - 1] [i_0])))));
                var_14 = var_12;
            }
        }
    }
    var_15 = ((((((!(!var_6))))) <= (max((((99 ? 28592 : 28594))), (min(-28566, var_13))))));
    var_16 = (max((((~(var_0 && var_11)))), var_12));
    #pragma endscop
}
