/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (200 * 14745)));
    var_21 = ((-958536596 ? ((var_2 ? (var_8 * var_6) : ((var_15 ? var_1 : var_0)))) : ((min(-8585956875665456870, var_11)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_22 = (((-8585956875665456868 + 9223372036854775807) >> (-8585956875665456873 + 8585956875665456929)));
                        var_23 ^= (arr_10 [i_3] [i_3] [i_3 + 1] [10]);
                        arr_12 [i_3] [i_2] = ((var_10 ? var_16 : (arr_10 [i_3 - 1] [i_3 + 4] [i_3 - 2] [i_3 + 4])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_20 [i_5] [i_4] [i_0] = -8585956875665456876;
                    var_24 = (((((arr_17 [i_0] [i_4] [i_5]) == (arr_14 [17] [i_0]))) ? ((58 ? var_14 : var_12)) : var_9));
                }
            }
        }
        var_25 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_1));
        var_26 = var_17;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_27 = 1501847230;
        var_28 &= (((arr_16 [i_6]) ? var_10 : (arr_16 [i_6])));
        var_29 &= ((-8585956875665456869 ? var_0 : var_4));
        arr_23 [5] = (arr_15 [i_6]);
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_30 = (arr_0 [i_7] [i_7]);
        var_31 = (arr_18 [i_7] [i_7] [i_7] [i_7]);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 9;i_9 += 1)
            {
                {
                    var_32 = (min(var_32, 268015359));
                    var_33 -= ((8585956875665456891 ? -20 : 6705208281446711547));
                }
            }
        }
    }
    var_34 -= var_19;
    var_35 = (max(var_12, var_17));
    #pragma endscop
}
