/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((!((((((var_0 ? var_2 : var_3))) ? (((var_14 ? 29115 : var_10))) : (min(var_15, var_17)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 += var_0;
                var_21 = (min(var_21, ((max((((((var_1 ? (-2147483647 - 1) : var_7))) ? (arr_4 [i_0 + 1] [i_0] [i_0 - 1]) : ((3445199236 ? 2147483647 : var_1)))), (((arr_2 [16] [16]) ? (arr_2 [0] [0]) : (arr_2 [0] [0]))))))));
            }
        }
    }
    var_22 -= (((((-2147483647 - 1) ? 4128146229 : (~-118)))) ? ((118 ? 2147483647 : var_14)) : ((var_3 >> (var_6 - 2716544712))));
    #pragma endscop
}
