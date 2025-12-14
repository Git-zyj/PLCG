/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (~9223372036854775807);
                    var_14 = 6624;
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_15 = ((-var_0 << (((min(-122, 7020706525295739514)) + 139))));
                        arr_23 [i_4] [i_5] [i_4] [i_4] = ((+((7020706525295739504 ? (arr_9 [i_3] [i_3 + 2]) : var_4))));
                        var_16 *= (max((((!(arr_17 [i_6])))), var_11));
                        var_17 = var_3;
                    }
                    var_18 -= (arr_15 [i_4] [i_5]);
                }
            }
        }
        var_19 *= (min((arr_20 [i_3 - 2] [i_3] [i_3] [i_3]), ((var_9 / (arr_15 [i_3] [i_3 + 1])))));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_20 = var_12;
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_21 |= 32751;
                            arr_37 [i_3] [i_7] [5] = (-11545 - -var_6);
                            arr_38 [i_3 - 2] [i_7] [i_8] [i_9] [i_7] [i_8] [i_3 + 1] = var_10;
                            var_22 = (max(var_22, ((min(var_11, ((((max(var_4, (arr_28 [i_10] [3] [1] [i_3])))) ? (((arr_16 [i_10]) ? (arr_31 [0] [i_10] [i_8]) : 162)) : (~-23535))))))));
                        }
                    }
                }
            }
            var_23 *= (max(((((1 ? 224 : 0)) | (arr_18 [i_3] [i_3] [i_3]))), (((!((max((arr_36 [i_7] [i_3] [i_7] [i_7] [i_3] [i_3]), 0))))))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
        {
            arr_43 [i_11] = 6632;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 22;i_13 += 1)
                {
                    {

                        for (int i_14 = 3; i_14 < 22;i_14 += 1)
                        {
                            arr_52 [i_3 + 2] [i_11] [13] [i_13] [i_14] = -var_0;
                            var_24 |= (!var_4);
                            arr_53 [i_3] [i_3] [i_3 + 2] = 23545;
                        }
                        var_25 |= 1;
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
        {
            var_26 *= ((!((!(arr_34 [i_15] [i_15] [i_15] [i_3])))));
            var_27 *= ((-var_10 / (arr_12 [i_15] [i_15])));
            var_28 = -7;
        }
        arr_57 [i_3] |= 19;
        var_29 = (~1);
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 21;i_16 += 1) /* same iter space */
    {
        arr_62 [i_16] = (!var_0);
        arr_63 [i_16] [i_16] = (((arr_47 [i_16 + 2]) ? 12 : 45349));
        var_30 = 21291;

        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            var_31 = ((arr_18 [i_16 + 1] [i_16] [i_16 + 2]) ? -6153483662877145370 : 63);
            var_32 = (var_7 ? var_10 : var_0);
        }
        for (int i_18 = 0; i_18 < 23;i_18 += 1)
        {
            arr_69 [i_16] = var_11;
            /* LoopNest 2 */
            for (int i_19 = 3; i_19 < 21;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 22;i_20 += 1)
                {
                    {
                        var_33 = (1 / -83);
                        var_34 = (((~var_0) || -9223372036854775803));
                        var_35 = (!-6153483662877145373);
                        arr_75 [i_20] [i_20] [i_19] [i_20] [i_20] = -17179869183;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_21 = 1; i_21 < 22;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 20;i_22 += 1)
                {
                    {
                        var_36 *= var_10;
                        arr_81 [i_21] [i_21 + 1] [i_21] [i_21] [i_22] = 58;
                        arr_82 [0] [i_21] = ((-(arr_78 [i_22] [i_18] [i_16])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
