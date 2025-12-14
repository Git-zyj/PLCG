/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = ((~(-130993208 <= 1)));
                var_19 = ((~(((~0) ? (arr_5 [i_1 + 2] [i_0]) : (~var_14)))));
            }
        }
    }
    var_20 = (max(((17592186044415 ? -130993224 : 8392389610334780994)), ((var_18 ? 18446726481523507200 : var_18))));
    var_21 = var_3;
    #pragma endscop
}
