/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_8 / 197864820) | ((18446744073709551615 ? var_6 : (var_3 && 37577)))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        arr_2 [i_0] [i_0] = (((65519 ? (max(18446744073709551613, 2240859772630060927) : (min(16205884301079490688, (arr_1 [i_0])))))));
        var_15 = (arr_1 [i_0]);
        arr_3 [i_0] = (((arr_0 [i_0 + 1]) == ((302600053 ? (arr_0 [i_0 - 1]) : var_0))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = (arr_6 [i_1]);
        var_16 = var_10;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                {
                    arr_18 [i_3] [i_3] = -302600068;
                    arr_19 [i_2] [i_3] = (arr_11 [i_3] [i_4 + 2]);
                }
            }
        }
        var_17 = 71;
        arr_20 [14] = ((var_9 ? var_8 : ((1125899906809856 ? -302600030 : -6))));
        arr_21 [i_2] [i_2] = -15902;
        var_18 = (min(var_18, (arr_16 [i_2] [i_2] [i_2] [18])));
    }
    var_19 = var_12;
    #pragma endscop
}
