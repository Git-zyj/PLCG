/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                arr_7 [7] [i_0] [i_0] [i_0] = 121;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [7] [i_0] [i_0 + 3] [i_0 + 2] [i_0] = ((var_2 ? var_2 : var_14));
                            var_20 &= (((var_1 && var_2) - var_19));
                        }
                    }
                }
                var_21 = ((var_6 ? ((var_14 ? var_8 : 3081)) : (!var_2)));
            }
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                var_22 = (arr_11 [i_0] [i_0 + 1]);
                arr_16 [i_0] [9] [i_0] [i_5] = var_3;
            }
            var_23 ^= var_7;
        }
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                arr_25 [8] [i_6] [i_0] = ((((-122 ? (arr_23 [i_0] [i_6] [i_0] [i_7]) : var_5)) | 1));
                var_24 = var_16;
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_25 ^= (((arr_11 [i_10] [i_6 - 1]) ? 22064 : -22074));
                            var_26 = (((!var_2) ? (arr_22 [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_6 - 1]) : 220));
                        }
                    }
                }
                var_27 = ((var_5 ? var_1 : var_11));
                var_28 *= ((!(var_9 || var_8)));

                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    arr_37 [i_0] [i_0] [i_0] [2] [i_8] = ((-22037 ? -1415205671 : -89));
                    var_29 = (max(var_29, 15362));
                }
            }
            var_30 &= ((!var_13) ? (27083 != var_15) : var_0);
            arr_38 [i_0] [0] [i_6 - 1] = (!var_8);
            arr_39 [i_0] = (!-122);
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            var_31 = (((-(arr_27 [i_0] [i_0] [i_0] [i_12]))));
            var_32 = ((var_9 ? var_17 : var_16));
            arr_43 [i_0] [i_0] [i_12] = ((1860576163477054759 ? ((var_3 ? 4184230597 : -5244)) : var_15));
            arr_44 [i_0 - 1] [i_0] = var_7;

            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                var_33 = var_1;
                arr_47 [i_0] [i_0] [i_0] = (((((32767 ? 13315718968791585855 : -43))) ? (121 - -3078) : 1));
                var_34 = (5389362683115794873 - 127);
                var_35 = (((var_11 ? -89 : var_13)));
            }
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                var_36 = (min(var_36, (((!(!var_6))))));
                arr_51 [i_0] = ((!(arr_46 [i_0 - 1] [i_0 + 3])));
                arr_52 [i_0 + 1] [i_0] = (((4294967284 + 2) / var_0));
                var_37 = (min(var_37, (((var_10 ? (arr_3 [i_0 + 3] [i_14]) : var_15)))));
            }
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            var_38 = ((104600046 ? 6 : -16051));
            arr_55 [i_0] = (var_18 / 1);
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    {
                        arr_61 [i_0] [i_16] [i_15] [i_0] = var_6;
                        var_39 = 99;
                        var_40 = ((var_10 ? (arr_31 [i_0]) : (var_9 * 3021682951)));
                        var_41 = ((48685 ? 18446744073709551605 : 1));
                    }
                }
            }
        }
        arr_62 [i_0] [i_0] = (arr_22 [i_0] [i_0] [i_0 - 1] [9]);
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        var_42 &= ((!(!255)));
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 21;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 19;i_20 += 1)
            {
                {
                    var_43 = (((((min(199, 0)))) ? (-31873 && 0) : (arr_66 [i_20 + 2] [i_20 - 1] [i_20 - 1])));
                    var_44 = (((((!(arr_70 [i_18] [i_20 - 1] [i_20 + 2] [i_20 + 1])))) | 581514672));
                }
            }
        }

        for (int i_21 = 1; i_21 < 19;i_21 += 1)
        {
            var_45 = -var_3;

            for (int i_22 = 0; i_22 < 21;i_22 += 1)
            {
                var_46 = ((((min(1, 1851180728))) ? (((((-26957 & 2) && var_13)))) : var_2));
                arr_78 [i_21] = ((-4294967295 ? (!var_5) : (((!((min(822473616, 4294967293))))))));
                var_47 -= (arr_67 [i_18] [i_21] [i_21] [i_22]);
                var_48 = (((((2461248477 ? ((((1711773152 != (arr_77 [i_18] [i_18]))))) : (arr_75 [i_21] [i_21 + 1] [i_22])))) ? ((((!var_6) && (((-1711773153 ? 6181627850360260447 : 34)))))) : ((min(var_14, (arr_68 [i_21 - 1]))))));
                var_49 &= (!var_7);
            }
            arr_79 [i_21] = (!43);
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            var_50 = (arr_65 [i_18]);
            var_51 = (max(var_51, (!15432)));
            var_52 = (!1);
        }
        for (int i_24 = 1; i_24 < 19;i_24 += 1)
        {
            var_53 ^= ((var_10 && (arr_72 [i_18])));
            arr_85 [i_18] [i_24 + 2] = (min(24707, -1));
            var_54 = (max(var_54, (((((((arr_64 [i_24 - 1] [15]) * -104))) ? (((!(arr_64 [i_24 - 1] [1])))) : ((min(16, -1))))))));
        }
        var_55 = (max(var_55, ((min((min((~var_2), 220)), (min((~var_2), var_18)))))));
    }
    var_56 = (min(var_17, var_6));
    #pragma endscop
}
