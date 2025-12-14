/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [6] [i_1] [0] [i_0] = (((((46 ? 136 : 0))) ? (((((var_11 ? var_1 : 0))) ? ((var_1 ? 0 : 3487030586326051723)) : var_5)) : 65526));
                    arr_8 [3] [i_0] = ((((251 ? 0 : (-127 - 1)))) ? 255 : var_7);
                }
            }
        }
        arr_9 [i_0] [i_0] = -67;
    }
    var_20 = 80;
    var_21 = (((((~((var_12 ? 240 : -81))))) ? ((var_19 ? 2110279978 : ((31803 ? 8417602650272588531 : var_18)))) : var_10));
    #pragma endscop
}
