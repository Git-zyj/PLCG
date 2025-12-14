/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_2 ? var_5 : (min(var_8, var_11))))) ? var_3 : var_4));
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = ((155047688 ? var_8 : (arr_1 [i_0])));
        var_15 = ((var_5 % (min(1, (max(0, var_7))))));
        var_16 = (((arr_1 [i_0]) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (((2241607988 ? var_0 : 25187)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_17 = ((arr_2 [i_1 + 1]) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 + 1]));
        var_18 = var_8;

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_19 = (((9325793891099660726 ? 1 : (arr_0 [i_1]))));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_20 |= (((var_0 == (arr_6 [14]))) ? 192 : -1);

                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    var_21 = (((arr_10 [i_1] [i_4 - 2] [i_1 + 2]) ? (arr_4 [i_1]) : (arr_2 [i_1 + 1])));
                    var_22 = 0;
                    var_23 = (((arr_11 [i_3] [i_1] [i_1] [6]) ? (((-6 + 9223372036854775807) << (59484 - 59484))) : -32767));
                    var_24 = (max(var_24, 1));
                }
            }
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                var_25 = (((arr_8 [i_1 - 1]) ? (arr_6 [i_1]) : 2926556929433011346));
                var_26 = (arr_9 [i_1 + 3] [i_1 + 3]);
                var_27 = (arr_2 [i_5 + 1]);
                var_28 = -8616222393087383802;
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_29 = (arr_10 [i_1] [7] [3]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_30 = ((189 ? -4 : ((-(arr_0 [i_8])))));
                            var_31 = (arr_3 [i_1]);
                            var_32 = (arr_22 [i_1] [1] [i_1] [i_1 - 2] [i_1] [11]);
                        }
                    }
                }
            }
        }
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            var_33 -= 2;
            var_34 = ((var_4 ? 4294967277 : -3318679800045530912));
        }
        for (int i_10 = 2; i_10 < 13;i_10 += 1)
        {
            var_35 = (arr_10 [i_10 - 1] [3] [i_10]);

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_36 = (((arr_19 [i_1] [i_10 - 2] [i_10 + 2] [i_10] [i_10]) & (arr_9 [i_10 - 1] [i_10 - 1])));
                var_37 |= (((arr_22 [8] [i_10 - 1] [10] [i_11] [10] [6]) && 2139767645));
            }
            var_38 = (arr_27 [i_1]);
            var_39 = ((!(arr_16 [i_1])));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_40 = ((-30847 ? (arr_23 [i_1 + 3]) : 0));
                            var_41 = ((!(9325793891099660726 - 939660455)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
