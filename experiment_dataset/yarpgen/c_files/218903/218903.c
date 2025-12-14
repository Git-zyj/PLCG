/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_0, var_3));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [0] = var_4;
            var_12 = (max(var_12, (((~(~var_4))))));
            var_13 = (((((65535 >> (1679846905 - 1679846884)) + ((-9223372036854775786 ? 1 : 13129))))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_14 = (max(var_14, (((-var_5 ? (((max(0, 1)))) : ((var_6 ? var_9 : var_10)))))));

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_15 = (max(var_15, var_5));
                arr_12 [i_3] = ((55285 ? 5637197304591315587 : -20754));
                arr_13 [i_3] [i_3] [i_3] = ((((max(var_2, var_1))) ? var_8 : ((var_7 ? ((max(var_8, var_0))) : (max(var_8, var_10))))));
            }

            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                arr_16 [1] [i_2] [1] [i_4] = ((var_0 ? ((var_7 ? (min(var_0, var_9)) : var_9)) : (~52406)));
                var_16 = ((-var_5 ? ((var_10 ? var_6 : var_1)) : (((var_2 == ((var_6 ? var_5 : var_4)))))));
            }
            var_17 = var_6;
        }

        /* vectorizable */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 7;i_6 += 1)
            {
                var_18 = (!var_4);
                var_19 = (max(var_19, (!var_5)));
                arr_24 [1] [i_5] [i_0] = ((var_5 ^ (1 || 13129)));
            }
            for (int i_7 = 1; i_7 < 6;i_7 += 1)
            {
                arr_27 [i_0] [2] [2] [i_5] = ((var_4 ? var_6 : var_6));
                var_20 = 20753;

                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_21 = var_2;
                    var_22 = (max(var_22, (var_6 * var_9)));
                    var_23 = var_5;
                }
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    var_24 = ((var_5 ^ (!1)));
                    arr_35 [6] [i_5 + 1] [i_7] [i_5] [i_9] = ((var_3 ? (var_2 || var_10) : var_7));
                }
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    var_25 = -194742200565586774;
                    var_26 = (min(var_26, (var_3 - var_10)));
                    var_27 = var_4;
                    arr_38 [i_0] [i_0] [i_5] [i_10] = var_7;
                }
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    var_28 = (min(var_28, var_6));
                    var_29 = var_7;
                    var_30 |= ((var_4 ? ((var_10 ? var_10 : var_3)) : -var_0));
                    arr_41 [i_5] = ((!(~var_2)));
                    arr_42 [i_0] [i_5] [i_0] = (-1050052911 % 9223372036854775807);
                }
            }
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                var_31 = ((var_7 ? var_10 : var_0));
                var_32 *= ((-6244301358165232183 ? 1 : 255));
                arr_46 [i_5] [i_5] [i_12] = (37 || 194742200565586774);
                var_33 = (((var_7 * var_6) < var_3));
            }
            for (int i_13 = 1; i_13 < 6;i_13 += 1)
            {
                arr_51 [i_0] [i_13] [i_5 + 1] [i_0] &= (~(7 | -194742200565586778));
                arr_52 [i_5] [i_5 - 1] [i_5 - 1] [i_13 + 3] = (!20746);
                var_34 = ((((var_3 ? var_6 : var_5)) < var_5));
            }
            arr_53 [i_0] [i_5] = (var_6 & -var_0);
            arr_54 [i_5] = ((var_7 ? var_2 : ((var_7 ? var_4 : var_2))));
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_35 = (1 <= 6729);

            /* vectorizable */
            for (int i_15 = 2; i_15 < 9;i_15 += 1)
            {

                for (int i_16 = 1; i_16 < 9;i_16 += 1)
                {
                    var_36 = ((-(var_5 <= var_2)));
                    arr_61 [1] [i_14] [i_14] [i_14] = var_9;
                    arr_62 [i_14] [1] [i_14] [i_14] [i_14] = ((var_4 ? var_3 : var_5));
                    var_37 = (max(var_37, -32399));
                }
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    var_38 = (min(var_38, ((((~var_8) ? var_0 : (153115423 | 1125898833100800))))));
                    var_39 = (var_3 % var_4);
                }
                arr_65 [i_0] [i_14] |= ((!(((var_1 ? var_2 : var_10)))));

                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {

                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        var_40 = (!-var_9);
                        var_41 = 4294967276;
                        arr_70 [4] [i_14] [i_14] [i_14] [2] [1] [i_14] = (((var_8 % var_0) ? var_5 : var_5));
                    }
                    var_42 = (min(var_42, -var_2));
                }
                arr_71 [i_14] [i_0] [i_14] = ((var_5 >> (var_3 + 3318)));
            }
            for (int i_20 = 0; i_20 < 10;i_20 += 1)
            {
                var_43 += (((((var_9 - var_3) ? ((var_8 ? var_4 : var_2)) : (((127 ? 1730016767891046817 : 1))))) - (((-var_9 - (var_0 / var_10))))));

                for (int i_21 = 0; i_21 < 10;i_21 += 1)
                {

                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 10;i_22 += 1)
                    {
                        var_44 = (~-var_4);
                        var_45 = -var_3;
                    }
                    for (int i_23 = 0; i_23 < 10;i_23 += 1)
                    {
                        var_46 = (max(var_46, (((((max(((max(var_10, var_5))), var_7))) ? (((((var_4 ? var_2 : var_5)) * (!var_4)))) : (min(var_3, ((var_8 ? var_4 : var_5)))))))));
                        arr_81 [i_14] [i_14] [2] = ((1737178233 ? 10 : 26442));
                    }
                    arr_82 [i_0] [i_14] [i_14] [i_21] = (min((-9223372036854775807 - 1), 10965739442648835260));
                }
                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    var_47 = ((((min(var_6, var_10))) ? (~var_5) : var_0));
                    arr_85 [i_0] [i_14] [i_14] [i_20] [i_14] = (~9223372036854775804);
                }
            }
            for (int i_25 = 1; i_25 < 7;i_25 += 1)
            {
                arr_89 [i_14] [i_14] [i_25 + 1] = (((((-var_4 ? (~var_10) : (!var_3)))) ? var_6 : ((var_3 ? var_2 : var_9))));
                var_48 = (max(var_48, (((-((((var_1 ? var_0 : var_2)) + (var_10 / var_8))))))));
                arr_90 [i_0] [i_14] [i_14] = ((!((((((min(var_0, var_0)))) / var_4)))));
                var_49 = (max(var_49, (((var_7 && var_3) * (var_10 - var_10)))));
            }
        }
        var_50 = (max(var_50, var_6));
        var_51 = ((-var_7 >> ((((var_6 ? var_3 : var_2)) + 3302))));
    }
    var_52 = var_1;
    var_53 = (min((~9223372036854775807), (((~var_4) + (max(var_9, var_4))))));
    #pragma endscop
}
