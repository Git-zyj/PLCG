/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = var_9;
                var_18 = (min((var_1 - var_13), (arr_6 [i_0] [i_0])));
                var_19 = (arr_5 [i_0]);
            }
        }
    }
    var_20 = (min((var_12 | 65535), (var_7 | var_9)));
    var_21 = (((!(((var_11 ? var_12 : var_14))))));
    var_22 = var_13;
    #pragma endscop
}
