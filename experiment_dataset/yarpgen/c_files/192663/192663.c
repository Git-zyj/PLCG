/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~2900789724);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = ((var_0 ? (arr_4 [i_0 - 1] [i_0] [i_1 + 2]) : (arr_3 [i_0] [10])));
                var_20 = (((max((arr_2 [10]), (min(var_9, var_5)))) / ((((((arr_2 [i_1 - 1]) - var_7))) ? (~var_2) : var_6))));
            }
        }
    }
    var_21 = ((-((((max(var_3, var_7))) ? ((var_5 ? var_16 : var_13)) : (var_1 || var_16)))));
    #pragma endscop
}
