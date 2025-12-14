/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = (~var_8);
                    arr_8 [i_0] [i_2] [i_2] = (((((-2133862226 - ((-71 ? -2133862226 : var_1))))) ? (arr_4 [i_0]) : var_4));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_4 - 1] [i_3] [i_5] = var_1;
                    arr_17 [i_3] [i_3] [i_3] = ((min((arr_14 [i_4 - 3] [i_4] [i_5 - 1] [i_4 - 3]), -2133862203)));
                }
            }
        }
    }
    var_11 = ((((max(((max(var_6, 2084422445))), ((2133862226 ? var_1 : var_1))))) ? (((-2133862210 | (var_9 != var_2)))) : 2133862225));
    #pragma endscop
}
