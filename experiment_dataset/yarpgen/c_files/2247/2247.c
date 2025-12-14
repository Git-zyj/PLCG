/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((-28536508 ? -4684122852770435315 : 21553))) ? (min(var_5, 4684122852770435314)) : var_11)) & (-2147483647 - 1)));
    var_18 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((min((arr_2 [i_1 + 2]), 2147483634)) | (min(5906, (-91 <= 91)))));
                arr_6 [i_0] = (max(var_12, var_6));
            }
        }
    }
    #pragma endscop
}
