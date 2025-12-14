/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = ((((((arr_1 [i_0] [i_1]) - var_0))) ? 109 : ((max((max((arr_0 [i_0]), -16)), ((((arr_3 [i_1]) || var_6))))))));
                var_18 ^= (min(((max(((((-127 - 1) ? 0 : 45))), var_8))), (((var_14 - 1) ^ var_2))));
                var_19 = ((~(((109 ? var_8 : var_3)))));
            }
        }
    }
    var_20 = (min(var_20, (((((min(var_7, (max(-22153, 1))))) * (min(((18446744073709551615 ? var_11 : var_7)), 32767)))))));
    #pragma endscop
}
