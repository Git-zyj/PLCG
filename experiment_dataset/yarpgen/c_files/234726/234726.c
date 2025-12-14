/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_11 ? (~var_6) : var_5)));
    var_15 = (((var_7 ? var_8 : var_3)));
    var_16 = ((((-313673955 ? -12905060430719132 : -1073741824))) ? var_3 : (((((1610612736 ? 33554432 : 2034211495))) ? var_10 : (!var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = (((~var_6) ? (~var_4) : (((~var_7) ? ((var_4 ? var_2 : var_10)) : var_7))));
                arr_4 [i_0] = (-245724904 ? -1087995827 : 0);
                arr_5 [i_0] [2] |= (!var_2);
                arr_6 [i_0] = 0;
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
