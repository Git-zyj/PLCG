/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((!(((55 ? var_12 : (-127 - 1))))))) & var_17));
    var_21 = 228;
    var_22 = (min(var_22, (!var_2)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (((~-37) * (!var_13)));
                var_23 = (((((max(-1, (-9223372036854775807 - 1))) + 9223372036854775807)) << (((arr_1 [1] [i_0]) - 2641878744844225075))));
            }
        }
    }
    var_24 = 36028797018963967;
    #pragma endscop
}
