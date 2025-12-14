/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] |= (min((((arr_3 [i_1 + 1]) | (arr_3 [i_1]))), 1));
                var_11 = ((((((arr_3 [i_0 - 3]) || 189))) * ((-((1 | (arr_1 [i_0 - 2])))))));
            }
        }
    }
    var_12 = ((8624 ? (((((var_6 ? var_6 : 1))) ? (56500 | var_7) : var_6)) : var_9));
    var_13 = (((((~1) | ((var_10 ? var_0 : var_6)))) | var_4));
    var_14 = ((((((var_4 | var_10) ? var_2 : (65535 + 2363440763)))) ? (((62058 ? var_0 : var_1))) : (!var_0)));
    #pragma endscop
}
