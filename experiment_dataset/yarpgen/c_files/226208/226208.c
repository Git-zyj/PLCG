/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (17467406890111220716 ? ((((9564003708833905109 || (57683 < 17467406890111220716))))) : (((((var_12 ? var_4 : var_4))) ? var_12 : ((var_3 ? var_5 : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_14 += var_5;
                var_15 = ((~((((max(17467406890111220716, 9223372036854775807)) == (!var_7))))));
                var_16 = ((!(((((max(176, var_11))) ? 23835 : (((arr_2 [i_0] [i_1 + 2] [i_1]) ? 5230 : 60312)))))));
            }
        }
    }
    var_17 = (max((!var_3), 35918));
    #pragma endscop
}
