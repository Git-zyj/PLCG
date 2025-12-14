/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~(!var_5));
    var_13 = (var_3 ? (min(var_2, ((var_11 ? var_9 : var_6)))) : ((~((max(42409, var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (arr_4 [i_0 - 1] [i_0 - 1]);
                arr_6 [8] |= (min(26, (max((arr_2 [i_0 - 2]), 18446744073709551615))));
            }
        }
    }
    var_14 = (min(var_14, (((((min(var_2, (!var_3)))) ? -49 : (max(-909866950335642688, 119)))))));
    #pragma endscop
}
