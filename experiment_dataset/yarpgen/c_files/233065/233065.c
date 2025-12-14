/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((((((((2147483647 ? (arr_0 [i_1]) : var_2))) ? 255 : -5193))) ? (!5206) : (5193 || 473393612))))));
                var_16 *= (((arr_2 [i_0 + 1]) || (((~(arr_2 [i_0 + 1]))))));
                arr_5 [i_0] [i_1] [14] = (((((((var_5 << (var_11 - 24104))) * (((((arr_2 [18]) > var_1))))))) ? ((((max(var_2, var_10))) ? -5193 : (~var_2))) : var_13));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_17 -= (max((arr_7 [24]), ((((arr_6 [i_2] [i_2]) ? var_12 : var_7)))));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_10 [i_2] [i_3] [i_3] = ((!(((((arr_8 [i_2] [5]) ? 5206 : -117))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_18 ^= (((10373 ? -5204 : 65535)));
                            var_19 = (min(var_0, (512 || -4519278197710273388)));
                            arr_21 [i_2] [6] [i_4] [i_5] [i_6] [5] = (-10365 || 631716613);
                            var_20 = ((((arr_7 [i_6 - 2]) ? var_6 : (arr_7 [i_6 + 1]))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_21 = (arr_14 [24]);

            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_22 += ((10373 ? var_4 : var_14));
                            arr_35 [i_2] &= ((var_2 ? (arr_23 [i_10 - 1]) : -2128250095));
                        }
                    }
                }
                var_23 ^= (0 || (((var_3 ? var_7 : var_10))));
            }
            arr_36 [23] = (~(var_6 || var_12));
            arr_37 [16] &= ((11777 << (((arr_22 [i_7]) - 903903667))));
            arr_38 [i_2] [i_7] [21] = ((~((var_8 << (((arr_8 [17] [i_7]) + 3120753599290226516))))));
        }
        var_24 = (((((arr_17 [i_2] [19] [i_2] [i_2] [1]) << (((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]) - 54934)))) << (((arr_8 [i_2] [i_2]) - 15325990474419325119))));
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_50 [i_11] [i_11] [i_11] [i_11] [i_11] = ((min(var_3, (arr_2 [i_14 - 1]))));
                            arr_51 [i_11] [4] [3] [i_11] = -525;
                        }
                    }
                }
                var_25 = ((((5171 ? var_2 : (arr_48 [5] [7] [i_12] [i_12] [3] [i_11])))) ? ((((arr_48 [i_11] [i_11] [i_11] [i_11] [10] [i_11]) ? (arr_48 [i_11] [i_12] [i_12] [i_11] [9] [i_11]) : (arr_48 [i_11] [i_12] [i_11] [5] [9] [i_11])))) : ((var_4 ? (arr_48 [i_11] [12] [i_12] [i_11] [17] [i_11]) : var_0)));
            }
        }
    }
    var_26 *= var_8;
    #pragma endscop
}
