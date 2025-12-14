/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_10 = ((38 ? -23161 : 23161));
                            var_11 *= ((+((-4064 ? (-23154 == var_5) : var_3))));
                            arr_12 [i_0 + 2] [i_1] [i_0] [i_2] [i_3] [i_4] |= (((min((~-23161), var_9)) <= var_0));
                        }
                    }
                }
            }
            arr_13 [4] [i_0] = (((-12 < var_9) ? var_8 : (min((min((arr_8 [0] [i_1 - 1] [i_1] [1] [i_1]), var_6)), var_0))));
            var_12 += (!var_1);
        }
        for (int i_5 = 4; i_5 < 10;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                var_13 += 8128;

                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_22 [i_7] [13] [i_6] [i_5] [i_5] [i_0] = (((arr_2 [i_0 + 1]) ? (((-(arr_15 [i_7])))) : (min(var_1, var_8))));
                    arr_23 [i_0 + 2] [i_6] [i_6] = var_3;
                    var_14 = ((!((((arr_6 [i_5 - 4]) - (arr_7 [i_0 - 2]))))));
                    arr_24 [i_5 - 3] [i_7] &= (((max(((1 ? -1 : 96)), 1)) >> (var_8 - 3633216892)));
                    var_15 = (var_8 << var_9);
                }
            }
            var_16 = ((var_8 ? var_4 : (var_0 < var_9)));
            var_17 = (min(var_17, 7864320));
        }
        for (int i_8 = 4; i_8 < 10;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                var_18 = (arr_28 [i_0] [i_8 - 4] [0] [i_9 + 2]);
                var_19 = (min(var_19, -23162));

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_20 = var_6;
                    var_21 = (arr_1 [i_0]);
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_22 = var_5;
                            var_23 = var_4;
                        }
                    }
                }
                var_24 = -28;
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                arr_39 [i_0 + 1] [i_8] [i_13] [i_8] = (!var_9);
                var_25 = (max(var_25, -23161));
            }
            var_26 = (min(var_26, ((max((((((var_5 ? 28 : 18446744073709551615))) ? (arr_17 [i_8 + 1] [i_0 + 1] [i_0 - 2] [i_8 - 3]) : (((var_2 <= (arr_15 [i_8])))))), (((~var_3) % ((-24984 ? 127 : -23164)))))))));

            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        {
                            var_27 = var_3;
                            var_28 -= ((((((((23148 * (arr_27 [i_0])))) ? (((arr_38 [4] [i_8] [i_14]) | (arr_47 [i_0 + 2] [i_8] [i_14] [i_15] [i_16]))) : (~var_6)))) ? (min((arr_14 [i_0] [5] [5]), (var_0 <= var_2))) : (arr_33 [i_0])));
                            var_29 = -3350048920103922976;
                        }
                    }
                }
                var_30 = (arr_20 [i_0 + 1] [i_0 - 2]);
                var_31 ^= (arr_35 [11] [i_14] [i_14]);
            }
            for (int i_17 = 3; i_17 < 13;i_17 += 1)
            {
                var_32 = (((~var_3) ? (max((arr_44 [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17 + 1] [i_17 - 1] [i_17 + 1]), 1)) : (arr_32 [i_17 - 2] [i_8] [i_17] [i_17 - 1] [i_17] [i_17 - 3])));
                var_33 ^= ((((min((~var_8), var_2))) - (arr_38 [i_0] [i_0] [i_0])));
                arr_54 [i_0] [i_8] [i_17] [i_0 - 2] = (min((((var_8 ? (((arr_2 [i_8]) ? (arr_46 [i_0] [i_8 + 4] [i_17] [i_8] [i_8] [i_0 + 2]) : (arr_8 [i_17 - 1] [0] [i_17 - 1] [i_8 - 2] [12]))) : var_9))), (~var_2)));
                var_34 = (((((-((1 ? 8388607 : 48))))) ? ((((((arr_40 [i_0] [i_8] [i_17 - 2]) == (arr_51 [i_0] [i_8] [i_17]))) ? var_9 : (arr_50 [i_0 - 1] [i_8 - 1] [i_17])))) : ((((((arr_49 [i_0 - 1] [i_0] [i_0 - 1] [i_8] [i_8] [i_17 + 1]) ? var_2 : var_7))) - (max(var_6, var_5))))));
            }
            for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
            {
                var_35 = (arr_1 [i_8]);
                arr_57 [i_0] = 53924;
                arr_58 [i_0] [i_8 + 2] [13] [i_18] = var_4;
                var_36 = ((-(((arr_40 [i_0] [i_8 + 2] [i_0 + 1]) ? var_3 : (arr_10 [i_0] [i_8] [i_18] [i_8] [i_0 + 1] [i_18])))));
            }
            for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
            {
                arr_61 [7] [i_8] = (arr_2 [i_8]);
                var_37 = (min((!16), (((255 % 1) ? 23161 : (((arr_21 [i_19] [i_8] [i_8 - 3] [i_0 - 1]) ? var_2 : (arr_30 [i_0] [i_8] [i_8 - 2] [i_0])))))));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 14;i_21 += 1)
                    {
                        {
                            arr_66 [i_0 - 1] [1] [i_20] [i_0 - 1] = ((53 >> (((arr_30 [i_0] [i_19] [i_8] [i_0]) + 922697966))));
                            arr_67 [i_21] [5] [i_0] = ((~(((arr_45 [i_20] [i_21]) / (arr_52 [i_8 + 2])))));
                            var_38 ^= ((var_6 ? 1 : 20));
                        }
                    }
                }
            }
        }

        for (int i_22 = 0; i_22 < 14;i_22 += 1)
        {

            for (int i_23 = 0; i_23 < 14;i_23 += 1)
            {
                arr_73 [i_0 + 1] [i_22] = ((-(min((arr_50 [i_0] [i_22] [i_23]), (((arr_55 [i_0 - 1] [i_22] [i_23]) / 8651580925068623028))))));
                var_39 = ((!(((var_5 >> (var_1 - 132))))));
            }
            var_40 = ((((((((~(arr_45 [i_0] [i_22])))) ? (-1 + 248) : var_6))) ? (arr_49 [i_22] [i_22] [i_22] [i_22] [i_22] [9]) : (((((282137141291249875 ? var_4 : 8589934591))) ? (max(var_7, (arr_52 [i_0]))) : 384))));
        }
        var_41 ^= (arr_18 [i_0] [i_0 + 1] [i_0 + 1]);

        for (int i_24 = 1; i_24 < 12;i_24 += 1)
        {
            var_42 -= (((((1 ? 1 : -26416))) ? ((((min(var_7, -23140))) ? (1 < var_7) : var_2)) : var_0));
            var_43 = (!var_4);
            arr_76 [i_24 - 1] = ((16 ? 150140641 : ((max((arr_48 [i_0 - 1] [i_24 - 1] [i_24] [i_24 - 1] [i_24 - 1]), var_0)))));
        }
    }
    for (int i_25 = 2; i_25 < 12;i_25 += 1) /* same iter space */
    {
        var_44 += ((((!(arr_4 [i_25 + 2]))) ? ((min(var_9, (arr_4 [i_25 - 1])))) : -var_5));
        arr_81 [3] [i_25] = (((max((arr_69 [i_25 + 2]), (arr_69 [i_25 - 1])))) - 1);
        arr_82 [i_25] = (min(-393277721, (!3819053338)));
    }
    var_45 = (min(var_45, var_3));
    var_46 += var_5;
    #pragma endscop
}
