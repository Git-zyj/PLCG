/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((((((-25893 ? 2147483647 : var_7)) >= ((min(var_2, var_5))))) ? var_3 : var_8));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_6 [15] [15] [i_1] = ((var_10 ? var_10 : (arr_3 [i_1])));
                arr_7 [i_1] = arr_3 [i_1];
                arr_8 [i_0] [i_1] [i_1] [i_2] = ((var_5 ? var_7 : var_10));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_12 -= ((var_2 && (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])));
                            var_13 += (~var_2);
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] [i_3] = var_2;
                        }
                    }
                }
            }
            var_14 = ((((((arr_10 [12] [i_1] [i_1] [i_1]) + -2147483647))) ? (var_4 - var_7) : var_8));

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_18 [i_1] = (-9223372036854775807 - 1);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_24 [16] [i_1] [6] [i_1] = var_6;
                            var_15 += (((arr_13 [i_0] [i_6] [i_5] [i_1] [i_0]) ? ((((!(arr_11 [i_7] [i_6] [i_0] [i_0] [i_1] [i_0]))))) : var_3));
                            var_16 ^= (((~var_7) > (19871 - var_7)));
                        }
                    }
                }
            }
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_17 ^= var_4;
                            var_18 -= arr_21 [0] [i_0] [0] [i_8] [i_9] [i_10];
                        }
                    }
                }
                var_19 ^= var_0;
            }

            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                arr_38 [i_1] = (112 & 25873);
                var_20 = (!var_5);
            }
            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                var_21 ^= (((var_0 & var_9) ? var_10 : var_10));
                arr_41 [8] [8] [i_12] &= var_8;
                arr_42 [i_0] [i_1] [i_1] = (77 * -25885);

                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    var_22 = ((-(arr_14 [i_13] [i_0 + 1] [i_12] [i_12 + 1] [i_13])));
                    arr_45 [i_1] = var_6;
                    arr_46 [i_0] [i_1] [i_12] [i_1] [i_0] = var_5;
                    arr_47 [i_0] [i_1] = (i_1 % 2 == zero) ? (((((arr_22 [i_1] [i_1]) ? var_1 : -2147483630)) >> (((arr_9 [i_1]) + 1158308109)))) : (((((arr_22 [i_1] [i_1]) ? var_1 : -2147483630)) >> (((((arr_9 [i_1]) + 1158308109)) + 839410024))));
                    arr_48 [i_0] [i_1] [i_1] [i_1] [i_12] [0] = var_3;
                }
            }
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                arr_51 [i_1] [i_1] [i_14] = -var_2;
                arr_52 [i_1] = ((var_3 / (arr_37 [i_0 + 1])));
            }

            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    var_23 = (var_4 & var_2);
                    var_24 -= (25878 / var_4);
                }
                var_25 = (!var_0);
            }
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            var_26 = (((arr_54 [i_0 - 1]) * var_10));
            var_27 ^= (((arr_12 [i_0] [i_0 - 1] [14] [i_0] [i_0]) ? var_6 : var_9));
        }
        var_28 = ((arr_19 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1]) ? (arr_39 [6]) : var_6);
        arr_61 [i_0] [i_0 - 1] = var_3;
    }
    var_29 = (((((var_3 * (var_0 - var_7)))) ? var_6 : var_3));
    var_30 = ((((((var_3 * var_4) ? ((var_3 ? var_9 : var_8)) : var_1))) ? var_9 : var_1));
    var_31 = (~var_7);
    #pragma endscop
}
