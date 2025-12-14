/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = ((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [24] [24]));
        arr_2 [i_0] = 18446744073709551615;
        var_17 *= ((!(arr_1 [22] [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 = var_4;

        /* vectorizable */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_16 [i_2] [i_2] [9] [i_2] [i_4] [i_2] [i_2] = ((((arr_11 [i_1]) ? var_1 : var_8)));
                            arr_17 [3] [i_4] [i_3 + 4] [3] [3] = (~var_0);
                            arr_18 [i_1] [i_1] [i_4] [i_4] [i_3] [i_4] [i_4] = ((arr_14 [i_1] [i_1] [i_3 + 3] [i_5] [i_2 - 1]) || (arr_14 [1] [i_2] [i_2] [i_4 - 3] [i_5]));
                        }
                    }
                }
            }
            arr_19 [i_1] [i_1] [i_1] = (arr_0 [i_2 + 1] [i_2 + 3]);
            arr_20 [i_1] [1] [i_1] = -var_13;
            arr_21 [i_1] [i_2] = (11737 && var_10);
        }
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            var_19 = (((var_13 || 6765) ? (max(var_8, var_15)) : ((min(var_3, (var_6 + var_4))))));
            arr_24 [6] [i_1] [i_6] = (1590930399942076188 ? -1 : -11738);
        }
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        var_20 = (arr_31 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [11] [i_7]);
                        var_21 = ((~(min((min(32736, 140737488355327)), (-1431385139389967898 / var_0)))));
                    }
                }
            }
            var_22 -= (~((var_5 & (((-140737488355319 + 9223372036854775807) >> (var_0 - 22874))))));
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            var_23 = (((!var_13) ? ((min(var_0, (arr_1 [i_1] [9])))) : var_12));
            var_24 ^= ((max((arr_30 [2] [i_1] [i_10] [i_1]), -209677421)));

            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                var_25 = var_5;
                arr_40 [i_1] = (arr_25 [i_10] [i_10] [i_10]);
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                var_26 = (max(var_26, (arr_33 [11] [11] [11])));
                arr_43 [i_1] = (!var_9);

                for (int i_13 = 4; i_13 < 15;i_13 += 1)
                {
                    arr_48 [15] [i_10] [i_10] [i_13 + 1] &= (~var_6);
                    arr_49 [i_13] [i_12] [i_10] [i_1] = arr_35 [i_13 - 3] [i_13 - 3] [i_13 - 4];
                    arr_50 [i_1] [i_12] [i_13] = ((var_7 - (arr_30 [i_12] [i_12] [12] [i_1])));
                }
                for (int i_14 = 1; i_14 < 13;i_14 += 1)
                {
                    var_27 |= (((arr_30 [i_1] [i_14 + 2] [i_14] [i_10]) + 3997265095849958851));
                    var_28 = 18847;
                    var_29 = var_9;
                    var_30 = (47815 && var_7);
                }
                arr_55 [i_1] [i_10] [i_1] = (((15460629444055074640 || var_12) && var_15));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                var_31 = (((arr_39 [i_1] [i_1] [8]) - var_0));
                var_32 = 1918872036;
            }
            var_33 = var_15;
            var_34 = (((var_11 && ((max(12575, var_13))))) ? (24814 > 210) : (min((~var_0), (~var_13))));
        }
        arr_58 [6] = (((min(159, 8192))));
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
    {

        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            arr_64 [i_16] [i_16] = (arr_59 [i_16]);
            var_35 = (2147483630 != 9223372036854775807);
        }
        /* LoopNest 3 */
        for (int i_18 = 3; i_18 < 22;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 23;i_20 += 1)
                {
                    {

                        for (int i_21 = 0; i_21 < 23;i_21 += 1)
                        {
                            var_36 = (((arr_70 [i_16] [i_21] [i_18 + 1] [4] [i_16]) ^ ((var_0 ? ((var_13 ? var_8 : (arr_63 [i_21] [i_19] [6]))) : ((var_0 ? 1 : var_12))))));
                            var_37 = (var_11 != var_13);
                            var_38 = (11737 | (~var_1));
                            var_39 = (((var_7 == (arr_74 [i_18] [14] [i_21] [i_18 - 3]))) ? (((((min(var_10, var_13))) > (arr_60 [i_18 - 3] [i_18 - 3])))) : var_11);
                        }
                        for (int i_22 = 0; i_22 < 23;i_22 += 1)
                        {
                            var_40 = (min(var_40, ((max(((((min(45, 139))) << (((arr_72 [i_20] [i_20] [i_18 - 3] [i_18]) - 14430)))), (~var_9))))));
                            arr_77 [i_16] [9] [i_19] [9] [i_19] [i_19] = (arr_60 [21] [7]);
                        }
                        arr_78 [i_16] [i_20] [i_16] [i_16] |= (arr_59 [i_18 - 2]);
                        arr_79 [14] [14] [14] [i_19] [i_19] [10] = (((24 >> 1) ? (min((arr_66 [i_18 - 2] [i_18 + 1]), ((var_15 ? var_14 : (arr_65 [i_16] [i_16]))))) : ((min(var_7, 111)))));
                    }
                }
            }
        }
        arr_80 [i_16] [i_16] = (((((min(158, var_5))) ? var_9 : (var_10 - var_8))));
        arr_81 [i_16] [17] = max((-11737 & -37), ((min(var_11, (arr_73 [2] [i_16] [i_16] [i_16])))));
        arr_82 [i_16] [13] = (min((((arr_66 [i_16] [i_16]) ? (min(-140737488355339, 19)) : (arr_62 [i_16] [i_16] [i_16]))), (241 >= 3920972076618208903)));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
    {
        var_41 = (arr_71 [i_23] [i_23] [i_23] [16]);
        var_42 = (-(arr_68 [4] [i_23] [i_23]));
    }
    var_43 = -15;
    var_44 = 1805620146;
    var_45 = (min((((!19617) ? (min(var_11, 9223372036854775807)) : -3920972076618208910)), 1));
    #pragma endscop
}
