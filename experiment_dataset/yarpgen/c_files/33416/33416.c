/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_19));
    var_21 = ((!((min(var_19, var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_22 = (min(var_22, (((!(arr_5 [i_1 + 1]))))));
                var_23 = (!9223372036854775807);
            }
        }
    }
    var_24 |= ((var_0 ? ((((!1) ? var_1 : (!var_11)))) : (min(var_18, (var_3 | var_6)))));
    var_25 = (max(var_7, var_0));
    #pragma endscop
}
