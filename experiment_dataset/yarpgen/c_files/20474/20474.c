/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [i_1 + 1] [i_0] [i_0] = (-(((arr_1 [i_1 + 1] [i_1 + 1]) ? (arr_1 [i_1 + 1] [i_1 + 1]) : (arr_1 [i_1 + 1] [i_1 + 1]))));
                arr_7 [i_0] [i_0] = var_12;
                arr_8 [i_0] = ((1 ? (((arr_2 [i_0] [i_0]) * (1 / 1))) : (((((1 ? 0 : 0))) ? (((arr_5 [i_0] [i_0] [i_1]) ? var_6 : (arr_2 [i_0] [i_0]))) : (!1)))));
                arr_9 [i_0] = (12343813409325165527 ? ((var_7 ? var_2 : (0 - 0))) : (((-((0 ? var_14 : var_6))))));
            }
        }
    }
    var_16 = 1;
    var_17 = var_8;
    #pragma endscop
}
