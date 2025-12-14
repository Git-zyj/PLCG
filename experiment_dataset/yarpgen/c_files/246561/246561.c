/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((min((min(595400887, var_7)), (0 % 1517623184))), (((var_7 ? 1 : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (min((((((5 ? 0 : 1))) ? (min(1, (arr_3 [i_0] [i_1 + 1] [i_0]))) : (arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 2]))), (((var_8 && (arr_0 [i_0 + 2]))))));
                var_20 *= 1517623182;
                var_21 -= min((min((max((arr_0 [i_0]), -1517623183)), (((arr_3 [i_0 - 2] [i_1] [i_1]) & (arr_2 [i_1]))))), (((arr_2 [i_1]) ? (((arr_2 [i_1]) ? (arr_4 [i_1] [2] [i_0 - 2]) : 28026)) : ((0 ? -10168 : var_14)))));
            }
        }
    }
    var_22 += (((((var_15 ? (!-1517623182) : var_7))) ? 3575469367 : (!var_7)));
    #pragma endscop
}
