/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 -= (min((((arr_2 [i_0] [i_0] [i_0 - 1]) && (arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 1]))), (((((arr_0 [i_1]) || var_14)) && ((min(var_3, 4294967266)))))));
                var_16 = ((arr_3 [i_1]) ? (arr_3 [i_0 + 3]) : var_9);
                var_17 -= 522240;
            }
        }
    }
    var_18 *= (((min(((1097234404 ? 1097234404 : var_6)), var_13))) ? ((1097234395 ^ ((2970146712 ? var_6 : 1097234404)))) : (((var_3 ? 1324820560 : var_8))));
    var_19 = var_6;
    var_20 &= max(var_14, 87259263485102039);
    #pragma endscop
}
