/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = ((((min(var_6, (arr_1 [i_0])))) ? (arr_0 [i_0]) : (((-32767 - 1) ? var_0 : (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] [i_0] |= (min((min(393216, 268435456)), (arr_4 [i_1] [i_0])));
            var_11 = (min((arr_0 [i_0]), (((((((arr_1 [i_0]) ? (arr_1 [i_0]) : 0))) || ((((arr_3 [i_0] [i_0]) ? var_3 : 512))))))));
            arr_6 [i_1] = ((!((((var_6 >> (var_9 + 118))) < (arr_1 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_9 [i_0] = ((65535 & (((65535 - 118) / (max((arr_3 [i_0] [i_0]), (arr_2 [i_0] [i_2])))))));
            var_12 = var_2;
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_13 = ((min((65535 << 0), (((arr_13 [i_3] [i_3]) ? var_7 : (arr_0 [i_3]))))));
        var_14 = ((-(((((max((arr_10 [i_3] [i_3]), var_2))) || (arr_3 [i_3] [i_3]))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_15 |= (arr_10 [i_3] [i_3]);
            var_16 = 3724417150;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 10;i_6 += 1)
                {
                    {
                        var_17 = (min(var_17, (((var_4 ? (!1) : var_2)))));
                        var_18 *= ((1713559238 ? (arr_20 [i_3] [i_3] [i_3] [i_3]) : (((1 ? (arr_13 [i_6] [i_6]) : var_6)))));
                    }
                }
            }
            var_19 *= (((arr_4 [i_3] [i_4]) ? (arr_4 [i_3] [i_3]) : (arr_4 [i_3] [i_3])));
        }
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_20 = -118;
                                var_21 = (min(var_3, (((((max((arr_26 [i_10] [i_10] [i_7] [i_10]), var_4))) - ((var_0 ? (arr_26 [i_9] [i_9] [i_7] [i_9]) : (arr_30 [i_7] [i_8] [i_7]))))))));
                                var_22 -= (arr_28 [i_7] [i_7]);
                            }
                        }
                    }
                    var_23 = (((max((arr_23 [i_7]), (((arr_26 [i_9] [i_9] [i_7] [i_9]) + var_6)))) != (min((arr_32 [i_7] [i_7] [i_7] [i_7]), (arr_22 [i_7] [i_8])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                var_24 = (min(var_24, (((((min(4, 65531))) >> (((arr_29 [i_15]) & ((min((arr_30 [i_15] [i_12] [i_12]), var_6))))))))));
                                arr_42 [i_13] [i_12] [i_15] [i_14] [i_15] [i_7] = min(17945305274517563407, 199);
                            }
                        }
                    }
                    var_25 = 0;
                }
            }
        }

        for (int i_16 = 1; i_16 < 21;i_16 += 1)
        {
            arr_45 [i_7] [i_16 + 3] = (((arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_36 [i_7]) : 252));
            arr_46 [i_7] = (min((arr_28 [i_16 + 2] [i_16 + 2]), (max(65535, 6127))));
            var_26 = (max((arr_32 [i_16 - 1] [i_16 - 1] [i_16] [i_7]), (((arr_30 [i_7] [i_16 + 3] [i_16 + 2]) + 4))));
        }
        var_27 = (min(((59427 ? (arr_36 [i_7]) : var_2)), 931552523));
    }
    var_28 |= ((var_6 >= ((var_9 ? ((524256 ? 252 : var_9)) : var_7))));
    #pragma endscop
}
