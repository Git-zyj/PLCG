/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 17302408774968667267;
    var_20 = (min((min(1144335298740884348, var_17)), (((var_17 ? 17302408774968667267 : var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_21 = ((var_17 ? (arr_4 [8]) : (((~(arr_1 [i_0 - 3]))))));
                arr_5 [15] = ((((((((arr_0 [i_0]) ? (arr_3 [i_0] [i_0] [i_0 + 3]) : var_7)) % (arr_0 [i_1])))) ? (((max(91, -91)))) : (max((var_16 ^ var_4), (max(var_15, 17302408774968667267))))));
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
