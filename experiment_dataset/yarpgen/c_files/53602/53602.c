/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!16447123246615965667);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = ((((arr_5 [i_0] [i_1] [i_2] [i_2]) ? 1999620827093585953 : ((1999620827093585951 ? -17918 : 16447123246615965646)))));
                    arr_8 [5] = ((1999620827093585951 ? (min(-13, 16447123246615965667)) : 12));
                    var_15 = (max(var_15, ((0 ? (((((((arr_4 [i_2] [i_1]) ? 10 : 0)) > 1492716304)))) : (((arr_3 [i_2] [i_1] [i_0]) ? (arr_3 [i_0] [i_1] [i_2]) : 42609))))));
                }
            }
        }
    }
    var_16 = var_5;
    var_17 = var_1;
    var_18 = -81;
    #pragma endscop
}
