/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((min(((((arr_0 [i_0] [i_0]) > var_7))), (arr_3 [i_0] [i_2]))))));
                    var_19 = max(var_11, (max((arr_3 [i_2] [i_0]), (~var_5))));
                }
            }
        }
    }
    var_20 = (!-43746492731066979);
    var_21 = var_4;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_8 [i_3] = (arr_0 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_22 -= var_6;
                    arr_15 [i_3] = ((arr_2 [i_4 - 2] [i_4] [i_3]) ? ((0 ? -1840260272 : var_6)) : var_8);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_23 = 3421154788;
                                var_24 = 559257774;
                                var_25 += ((559257791 >> (var_7 + 475445254)));
                                var_26 *= (arr_16 [i_4 - 2] [i_7 + 1] [15]);
                            }
                        }
                    }

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_27 *= 1840260271;
                        arr_23 [i_3] [i_4 - 1] [i_5] [i_3] [i_8 - 1] = (!1578700126);
                    }
                    var_28 = (((arr_14 [i_4 - 1] [i_4] [i_3]) == var_4));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        arr_27 [i_9] = -1840260295;
        var_29 += (-(arr_25 [i_9]));
        var_30 = (min(var_30, (((1578700127 ? -1068393211 : ((max(-6792, 241))))))));

        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            arr_31 [i_9] = (((((((max(134217728, (arr_11 [i_9] [18] [18]))) > -134217717)))) ^ (max((arr_17 [i_9]), (max(2716267198, 117))))));
            var_31 *= (var_4 - var_16);
            var_32 &= ((var_7 ? 559257797 : (((max(var_15, var_14)) + (max(2716267181, -1840260260))))));
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                var_33 = (arr_28 [i_9] [4] [4]);
                var_34 = (arr_20 [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_11 - 1]);
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        {
                            var_35 = -559257763;
                            var_36 = ((!(((var_17 ? var_1 : -1331539146)))));
                        }
                    }
                }
                var_37 *= ((((((arr_5 [i_9] [i_9] [i_9] [i_9]) << (((-31524 + 31564) - 40))))) ? var_16 : (arr_19 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1] [i_12] [i_12])));
            }
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                var_38 ^= ((((arr_35 [i_9] [i_11 + 1] [i_15]) + 9223372036854775807)) << (((-3208 + 3253) - 45)));
                /* LoopNest 2 */
                for (int i_16 = 3; i_16 < 17;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        {
                            var_39 = (((var_7 + 2147483647) >> (31524 - 31512)));
                            var_40 |= (-(arr_36 [5] [i_16 - 3] [i_16 - 1] [i_11 - 1] [i_9]));
                        }
                    }
                }
                arr_48 [i_9] [i_11 - 1] [i_15] [i_9] = var_13;
                var_41 &= (-(arr_28 [i_9] [i_9] [i_15]));
                var_42 = (max(var_42, (((-(arr_42 [i_9] [i_9] [i_9] [i_9]))))));
            }
            for (int i_18 = 2; i_18 < 18;i_18 += 1)
            {

                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    var_43 *= 2716267174;
                    arr_54 [i_9] [i_9] [i_11 - 1] [i_11] [i_9] = (~var_17);
                    var_44 -= (31524 - 3728752062);
                    arr_55 [i_9] [i_11] [i_18] [i_9] [i_9] [i_19] = ((arr_9 [i_18 - 2]) >> (((arr_36 [i_9] [i_9] [i_11] [i_11] [i_19]) - 108277124)));
                }
                var_45 = (min(var_45, var_5));
                var_46 |= (~1);
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 19;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 19;i_21 += 1)
                    {
                        {
                            var_47 += var_1;
                            arr_62 [i_21] [i_21] [i_20] [i_9] [i_18 + 1] [i_9] [i_9] = 559257763;
                            var_48 = (max(var_48, (((-((1082481701213278265 ? 1 : -1840260271)))))));
                            var_49 = 0;
                        }
                    }
                }
                arr_63 [i_9] [i_11 - 1] [i_9] = (((-1840260276 == var_7) <= (var_16 / var_14)));
            }
            /* LoopNest 2 */
            for (int i_22 = 1; i_22 < 17;i_22 += 1)
            {
                for (int i_23 = 4; i_23 < 18;i_23 += 1)
                {
                    {
                        var_50 ^= -119;
                        arr_69 [i_11] [i_9] [i_11] = var_7;
                        var_51 &= ((~var_0) & (arr_12 [i_23] [i_22 - 1] [i_23 + 1] [i_23]));
                    }
                }
            }
        }
        for (int i_24 = 2; i_24 < 15;i_24 += 1)
        {
            var_52 = (max(var_52, (~15)));
            var_53 = (((arr_42 [i_9] [i_9] [i_24 + 2] [i_24 + 4]) & (min((!3), ((654792756 ? (arr_9 [i_9]) : var_12))))));
            var_54 = ((0 ? (1099494850560 + 1840260299) : (((-(arr_40 [i_24 + 3] [i_9]))))));
        }
    }
    #pragma endscop
}
