/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 -= var_1;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, var_16));
                    arr_8 [6] = (1047552 + 3764686996);
                }
            }
        }
        var_23 = (min(var_23, var_5));
        var_24 = var_15;
        var_25 ^= ((var_10 || (-32767 - 1)));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_11 [i_3] = (1023 & var_10);
        arr_12 [i_3] [i_3] = (((var_11 % var_4) != (var_5 && var_9)));
    }
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        arr_17 [0] [0] = 1;
        var_26 = (min(var_26, var_9));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                {
                    arr_24 [i_6] [i_5] = ((7529010016545898220 || (2424368883 & -7)));
                    var_27 = (max(var_27, ((((1 != 53170) & var_10)))));
                }
            }
        }
        arr_25 [i_4] = (max((58659 > 2147483647), ((4294967295 ? 2424368883 : 1))));
        arr_26 [i_4] = ((((var_13 ? 1 : var_6)) & var_14));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        arr_30 [i_7] = ((((max(var_10, (7545081070514147017 || -1052324655)))) * var_6));
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    arr_36 [i_7] [i_8] [i_9] = (((~var_13) < (min(var_11, var_9))));
                    var_28 -= var_7;
                }
            }
        }
    }
    #pragma endscop
}
