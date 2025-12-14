/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min((((arr_5 [i_0] [i_1 - 2]) + var_11)), var_12));
                var_17 = (((!var_11) ? (((!var_1) ? ((min(244, 2111691209))) : ((var_7 ? var_4 : var_9)))) : (arr_3 [i_0] [i_0])));
                var_18 = ((242453313 ? 0 : 26862));
            }
        }
    }
    var_19 = ((~(min(3362170938, (~var_6)))));
    var_20 = (!1243201401);
    #pragma endscop
}
