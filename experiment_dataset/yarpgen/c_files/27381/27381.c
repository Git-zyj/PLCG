/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = ((+(((((~1) + 2147483647)) << 0))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [12] [i_0] [i_0] [1] [i_0] [i_3] = (max(var_6, 1));
                                var_12 = (max(var_12, (max((((1 * var_0) - var_7)), ((((((arr_5 [i_0] [12] [1]) && var_2))) >> (arr_2 [i_4 + 1])))))));
                                var_13 = ((~(((min(1, (-32767 - 1)))))));
                            }
                        }
                    }
                    var_14 = (((max((arr_12 [i_0] [i_1] [i_2] [i_1] [i_2]), 119))));
                    var_15 &= (1 - -26612);
                    arr_14 [i_0] [i_2] = var_6;
                }
            }
        }
        var_16 &= arr_12 [1] [1] [i_0] [i_0] [i_0];
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 21;i_6 += 1)
        {
            {
                var_17 |= ((min((arr_17 [i_5 - 1]), (arr_17 [i_5 + 2]))));
                var_18 = (((((arr_18 [i_6 - 3] [i_6 + 1] [i_6 - 3]) + 2234895755489305276)) & ((max((arr_19 [i_5 + 2] [i_5 + 1]), (max(-1634717573, var_5)))))));
                var_19 |= (255 ? (arr_18 [i_5] [i_5] [i_5 + 3]) : (~var_3));
                var_20 |= ((((max(0, 1))) - ((max((arr_17 [i_6]), (max(242, 1)))))));
                var_21 = ((((max((((1128618768 || (arr_19 [i_5 - 1] [i_6])))), (min(2234895755489305276, 1))))) ? ((((var_5 ? (arr_18 [i_5] [i_6 - 2] [i_5]) : var_3)) & 1)) : (((min(1, 1))))));
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_22 |= (((!(arr_11 [i_7] [i_7] [i_7] [i_7] [i_7]))));
        var_23 = ((~((1 ? 18446744073709551609 : 1))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_24 = (1 | var_6);
        var_25 = (6857 <= var_8);
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                {
                    arr_30 [i_8] [i_8] [13] [i_8] = arr_27 [i_9 - 4] [i_8];
                    var_26 = (max(var_26, var_1));
                }
            }
        }
        arr_31 [i_8] = ((((var_9 ? (arr_17 [i_8]) : 1)) << (((arr_19 [i_8] [i_8]) << 1))));
        var_27 = var_7;
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 8;i_13 += 1)
            {
                {
                    arr_38 [i_11] [i_12] [i_12] = arr_26 [i_12];
                    var_28 = (min(var_28, (((!((min(1, var_7))))))));
                    var_29 &= (max((max(0, ((0 ? var_8 : 3)))), 57092));
                    arr_39 [i_11] [i_12] [i_12] [i_13 + 1] = 0;
                }
            }
        }
        var_30 = 108;
        var_31 &= ((max(var_1, (min((arr_16 [i_11]), var_2)))));
    }
    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        var_32 = -2147483643;
        var_33 = (!((min((arr_16 [i_14]), (arr_17 [i_14])))));
        arr_42 [i_14] [i_14] = (var_10 ^ -1639080153);

        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            arr_46 [i_15] [1] [i_15] = (((!53) && -1109773157));
            var_34 = ((min(var_5, ((-(arr_16 [16]))))));
        }
    }
    #pragma endscop
}
