/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (min((((var_3 ? var_0 : ((var_0 ? var_2 : var_6))))), 2241555064));
    var_11 = var_4;
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (((!3935179034) <= (max(-2079247218, -21))));
                var_14 = var_3;
                var_15 = (arr_4 [i_0 + 1] [6] [i_0]);
            }
        }
    }
    #pragma endscop
}
