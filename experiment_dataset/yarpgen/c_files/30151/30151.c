/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_0 ? var_17 : (-32767 - 1)));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_20 = ((arr_4 [i_1] [i_1 - 1] [i_1 - 1]) ? (arr_5 [i_1] [i_1 - 1]) : (arr_5 [i_0] [i_1 - 1]));
            arr_6 [i_0] = (i_0 % 2 == zero) ? (((-var_5 << (((((arr_2 [i_0 - 3] [i_0]) + 662737538116886317)) - 34))))) : (((-var_5 << (((((((arr_2 [i_0 - 3] [i_0]) + 662737538116886317)) - 34)) - 7821067061112916105)))));
            var_21 = (((arr_4 [i_0 + 1] [i_1 - 1] [i_1 - 1]) ? ((((47870 > (arr_4 [i_0] [i_0] [i_0]))))) : (((arr_2 [i_0] [i_0]) ? 8265290592231968700 : 1))));
            var_22 = ((var_2 + (((211 >> (4257778267309234821 - 4257778267309234802))))));
        }
        var_23 = (max(((((var_1 ? (arr_5 [i_0] [1]) : 247)))), var_6));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] = var_8;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_4] [i_4] [i_4] = (arr_14 [i_2] [i_3]);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_24 = ((0 ? (arr_4 [i_3] [i_5 + 2] [i_6]) : (arr_13 [i_6])));
                                var_25 = (((arr_15 [i_2] [i_3] [i_5 - 2]) ? 1354243793 : var_7));
                                var_26 = (min(var_26, var_3));
                                var_27 = var_18;
                            }
                        }
                    }
                    var_28 = (((arr_8 [i_2]) ? (arr_8 [i_4]) : var_17));
                }
            }
        }

        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            var_29 -= (((arr_18 [i_7 - 1] [11] [i_2] [i_2] [i_2] [i_2]) >> (27135 - 27108)));

            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_30 = (min(var_30, var_12));
                            var_31 = (arr_2 [i_2] [i_10]);
                            var_32 = (arr_24 [i_7 - 1] [i_7 - 1]);
                            arr_32 [i_2] [i_7] [i_7] [i_10] [i_9] [i_10] [i_10] = (((arr_2 [i_8 - 1] [i_10]) ? (((1354243778 ? 17 : 0))) : ((var_1 ? 4294967295 : var_6))));
                        }
                    }
                }
                arr_33 [i_8 - 2] = (!219);
                var_33 = ((var_18 > ((1 ? var_15 : var_12))));
                var_34 |= (((arr_12 [i_7 + 2] [i_7 - 1] [i_8 - 1]) ? (arr_22 [i_7 + 1] [i_7 - 1]) : (arr_28 [i_7] [i_7] [i_2] [i_7 + 2] [i_8] [i_7])));
                var_35 = (min(var_35, (((var_2 && (((~(arr_22 [i_2] [1])))))))));
            }
            /* LoopNest 2 */
            for (int i_11 = 4; i_11 < 8;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 10;i_12 += 1)
                {
                    {
                        var_36 |= ((var_5 | (arr_13 [i_11 - 1])));
                        var_37 = (arr_10 [i_7 - 1] [i_12 + 2]);
                        var_38 = (arr_28 [i_11] [i_11 + 1] [i_12] [i_12] [i_12] [i_11 + 1]);
                        var_39 = (((arr_1 [i_11]) ? 1 : (arr_2 [i_2] [i_11])));
                        arr_39 [i_11] = (arr_0 [i_11]);
                    }
                }
            }
        }
        arr_40 [i_2] |= (arr_3 [i_2]);
    }
    var_40 = (~1);
    var_41 = (((((max(var_15, var_9))) ? (var_17 - var_10) : var_11)));
    #pragma endscop
}
