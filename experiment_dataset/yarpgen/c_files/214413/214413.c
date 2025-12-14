/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 -= (max((min((arr_3 [i_0] [i_1]), (((arr_2 [i_1] [11]) ? (arr_1 [i_1]) : (arr_0 [i_0]))))), (arr_1 [i_0])));
                var_20 -= ((((-126 ? (((-127 - 1) ? 126 : 108)) : 1)) + (max(-var_4, -118))));
            }
        }
    }
    var_21 = var_16;
    var_22 = (min(var_22, (((((var_5 ? var_2 : (var_13 + 33)))) ? var_8 : (((var_5 ? var_15 : (3898700613 < var_12))))))));
    var_23 = var_10;
    #pragma endscop
}
