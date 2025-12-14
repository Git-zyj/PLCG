/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_9);
    var_18 = (max(var_18, (-59 - var_5)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] = (((!-92) ? (arr_0 [i_0]) : ((var_0 ? (((arr_1 [i_1 - 2]) ? var_16 : (arr_1 [i_0]))) : var_8))));
                var_19 &= var_7;
            }
        }
    }
    var_20 = (max((min((21 - -94713141), 191)), ((var_7 ? (((var_8 ? 1783687976 : -1))) : var_12))));
    var_21 = (min(var_21, -48));
    #pragma endscop
}
