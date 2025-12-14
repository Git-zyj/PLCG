/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = ((0 ? var_2 : ((110 ? 35 : 18446744073709551615))));
                    var_17 = var_10;
                    var_18 = var_1;
                }
            }
        }
        var_19 = ((var_0 ? (arr_3 [i_0] [i_0] [i_0]) : var_2));
        var_20 = (max(var_20, 0));
        var_21 -= ((-7704526015510110735 < (((125 ? var_7 : var_15)))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_10 [i_3] = (arr_5 [i_3]);
        var_22 = (min(var_22, ((min(((((~var_1) <= (max(var_10, 4294967270))))), (((min(var_8, var_12)) ? ((var_9 ? var_1 : var_1)) : -var_10)))))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    arr_18 [i_4] [i_3] [i_3] = (--18247632473964669002);
                    var_23 = (max(var_23, (((((min(-var_6, ((-11774 ? (arr_12 [i_5] [i_5]) : var_0))))) ? (((var_11 * var_4) ? -13850030066736353077 : ((max(145, var_3))))) : ((((arr_9 [i_5] [i_5]) ? ((((-9223372036854775807 - 1) ? 658675222 : 110))) : (max((arr_5 [i_5]), 110))))))))));
                    arr_19 [i_3] [i_3] [i_3] [i_3] = (arr_7 [i_3] [i_3] [i_3]);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] = (min(((~(arr_1 [i_3] [i_3]))), ((((min(var_14, (arr_20 [i_3] [i_3] [i_3] [i_3])))) ? var_6 : var_14))));
                                var_24 = ((~((max(30, 31)))));
                                arr_26 [i_3] [i_3] [i_5] [i_3] [i_5] [i_3] [i_3] &= (min(var_6, ((1284066269261218182 ? 110 : 131))));
                                arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] = ((((((min(105, 133))) ? (max(var_8, var_2)) : var_10)) < ((var_13 ? 896 : 133))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_25 = 28;
                    var_26 = (max(var_26, (((~(~var_0))))));
                }
            }
        }

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_27 = ((var_14 ? ((((max(var_9, var_10)) / (arr_30 [i_11])))) : (((arr_12 [i_11] [i_11]) ? var_13 : (arr_11 [i_8] [i_8])))));
            var_28 = (!-94);
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 11;i_12 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 11;i_14 += 1)
                {
                    {
                        arr_50 [i_8] [i_8] [i_8] [i_8] [i_8] = ((var_11 ? (((var_5 ? var_2 : var_12))) : var_3));
                        arr_51 [i_12] = (((~var_0) * ((6414 ? 0 : 0))));
                        arr_52 [i_8] = var_15;
                    }
                }
            }
            var_29 = (max(var_29, (arr_37 [i_8] [i_8] [i_8])));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        {
                            var_30 ^= (arr_45 [i_8] [i_12 + 2]);
                            arr_60 [i_16] [i_16] [i_15] [i_16] [i_16] = ((var_4 ? (var_15 ^ var_11) : (arr_44 [i_12 - 2] [i_12 - 1] [i_12 + 2] [i_12 - 2])));
                        }
                    }
                }
            }
        }
        for (int i_18 = 2; i_18 < 11;i_18 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                var_31 = ((var_4 ? (arr_59 [i_18 + 2] [i_18] [i_18 + 2] [i_18 + 2] [i_18] [i_18]) : var_13));
                var_32 = var_7;
            }
            var_33 = var_6;
            arr_67 [i_18] = var_12;
        }
    }

    for (int i_20 = 4; i_20 < 19;i_20 += 1)
    {
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    {
                        var_34 = (min(var_34, (((1 ? (((var_0 || (((-(arr_71 [i_20]))))))) : ((var_11 ? var_1 : 3)))))));
                        var_35 += ((((((arr_80 [i_22] [i_22]) ? (min(0, var_13)) : ((min((arr_1 [i_20] [i_20]), (arr_4 [i_22]))))))) ? ((((max(var_9, var_7))) ? (arr_7 [i_22] [i_22] [i_22]) : 1497415516)) : (arr_76 [i_20] [i_20] [i_20])));
                        var_36 = (min((((((-32750 ? -112 : 1536))) ? var_4 : (((arr_74 [i_20] [i_20]) ? (arr_1 [i_23] [i_23]) : var_12)))), 49));
                        arr_81 [i_20] [i_20] [i_20] [i_20] [i_20] = (min(var_2, ((var_6 ? (arr_77 [i_20 - 3]) : var_4))));
                    }
                }
            }
        }
        var_37 = ((((!((max(var_7, var_14))))) ? (max(12477988480733250183, 1147584675)) : (-25 | 4294967266)));
    }
    #pragma endscop
}
