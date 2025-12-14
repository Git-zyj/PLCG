/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((-var_5 ? var_6 : (var_8 + -9223372036854775785)))));
    var_17 = (!((((((-9223372036854775762 ? var_0 : var_7))) ? ((9223372036854775791 ? 9223372036854775750 : var_11)) : (((-9223372036854775762 ? var_5 : 2119201256)))))));
    var_18 = ((-(max(((-1 ? 3942 : 31)), -58592))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_1] = var_11;
                    arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] = 2115972779;
                    arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] = var_2;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                arr_16 [i_3] [i_4] = var_14;
                arr_17 [1] = (((min(2058254086, 61593))));
                arr_18 [2] = ((((((var_2 ? 9223372036854775755 : 842222970))) ? (-9223372036854775739 || 32) : var_11)));
            }
        }
    }
    #pragma endscop
}
