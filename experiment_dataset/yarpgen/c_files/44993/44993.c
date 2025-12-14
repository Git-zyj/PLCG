/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = ((var_9 ? ((~((var_4 ? var_5 : 39)))) : 210));
                var_11 = max(((min((arr_3 [i_1] [i_0]), 25))), ((200 ? (min(-9223372036854775786, 12011)) : var_7)));
                var_12 = ((arr_1 [i_0] [i_0]) ? (max(((-9223372036854775799 ? var_8 : -3614360512912189925)), (((5842247353493093515 ? 2744728588 : var_3))))) : -9223372036854775782);
            }
        }
    }
    var_13 = var_5;
    #pragma endscop
}
