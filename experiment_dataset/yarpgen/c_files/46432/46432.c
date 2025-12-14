/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_21 = (((~var_10) ? (!var_19) : var_14));
            var_22 = (var_18 ? (((var_6 ? var_2 : var_8))) : ((var_15 ? var_3 : var_14)));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            arr_7 [i_2] [i_2] [i_2] = var_1;
            var_23 = ((~((-((var_1 ? var_3 : var_15))))));
            var_24 = ((var_12 ? (~var_17) : (((((~6) != ((var_11 ? var_8 : var_6))))))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_25 = (max((((~var_16) ? (((var_14 ? var_10 : var_11))) : (~var_6))), (((((var_3 ? var_3 : var_17))) ? ((var_13 ? var_5 : var_13)) : (((var_8 ? var_9 : var_13)))))));
            var_26 += var_19;
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_27 -= ((var_4 ? var_1 : var_1));
                var_28 = var_5;
                var_29 = (((-5117 ? 1264715143 : var_9)));
                var_30 = (~var_9);
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_31 |= var_19;
                var_32 = var_9;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_33 = var_8;
                var_34 = var_2;
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_35 = ((1 ? -1 : 65535));
                var_36 = (max(var_36, (((~((var_2 ? var_13 : var_1)))))));
                var_37 = (~var_6);
                var_38 ^= ((~(127 <= var_8)));
                var_39 -= var_5;
            }
            var_40 = var_0;
            var_41 = ((((var_3 ? var_18 : var_15))) ? ((var_11 ? var_18 : var_14)) : (!var_9));
            var_42 = (((((var_15 ? var_9 : var_2))) ? 32 : ((var_13 ? var_5 : var_7))));
        }
        arr_26 [i_0] = (max(((min(((var_8 ? var_0 : var_15)), (var_0 + var_18)))), ((var_13 ? var_0 : var_5))));

        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            arr_31 [i_0] [i_0] = -var_7;
            var_43 -= ((var_7 ? (((var_12 ? var_11 : var_5))) : ((((!var_14) ? (var_14 || var_2) : ((var_19 ? var_18 : var_0)))))));
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            arr_34 [i_0] = (min((((((-31120 ? 19752 : var_10))) ? ((var_15 ? var_19 : var_6)) : var_9)), (((((var_7 ? var_16 : var_12)) >= ((min(1578564403, 203))))))));
            arr_35 [4] [1] = ((5977865154241928248 ? 51066 : 4294967295));
            var_44 += -13255;
            var_45 = var_19;
            var_46 = (~var_9);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                var_47 = var_15;
                var_48 -= ((var_5 ? var_11 : var_2));
            }
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                var_49 = ((var_5 ? var_17 : var_11));
                var_50 = (min(var_50, var_5));
            }
            for (int i_14 = 4; i_14 < 23;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    var_51 = ((~((var_5 ? var_9 : var_15))));
                    var_52 = ((((var_16 ? var_10 : var_18))) ? var_2 : ((var_15 ? var_6 : var_7)));
                    var_53 = var_14;
                    var_54 = (((((var_12 ? var_19 : var_16))) ? var_7 : ((var_4 ? var_1 : var_6))));

                    for (int i_16 = 1; i_16 < 1;i_16 += 1)
                    {
                        var_55 = (((((var_11 ? var_16 : var_16))) ? (var_9 != var_9) : var_8));
                        var_56 = (max(var_56, -var_3));
                        var_57 = (var_19 + var_3);
                        var_58 = var_13;
                        var_59 = (((var_0 ^ var_18) ? ((var_11 ? var_4 : var_13)) : (((var_2 ? var_14 : var_2)))));
                    }
                }
                var_60 = ((var_1 ? var_16 : var_13));
                var_61 = ((var_18 ? var_5 : (((var_0 ? var_11 : var_0)))));
            }
            for (int i_17 = 0; i_17 < 24;i_17 += 1)
            {
                var_62 = ((var_0 ? var_4 : var_7));
                var_63 = (((~var_4) ? var_13 : ((var_16 ? var_1 : var_13))));
                var_64 = var_6;
                var_65 = (max(var_65, (((var_6 ? var_16 : ((var_14 ? var_10 : var_11)))))));

                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    var_66 = var_2;
                    var_67 = ((((var_5 ? var_5 : var_15)) >> (var_18 - 131)));
                    var_68 = (((((var_18 ? var_15 : var_14))) ? ((var_19 ? var_7 : var_11)) : -15));
                    var_69 = (~var_11);
                    var_70 = (~var_0);
                }
            }
            arr_58 [i_0] [i_0] [1] = (((((var_4 ? var_5 : var_1))) ? (~var_3) : -var_5));
            var_71 = ((var_5 ? var_17 : ((var_13 ? var_4 : var_6))));
            var_72 = ((var_0 ? (var_10 + var_12) : (~32875)));
            var_73 = var_13;
        }
    }
    /* vectorizable */
    for (int i_19 = 1; i_19 < 9;i_19 += 1) /* same iter space */
    {
        var_74 = (var_12 + var_13);

        for (int i_20 = 1; i_20 < 1;i_20 += 1)
        {
            var_75 = (min(var_75, (((var_14 ? var_1 : var_15)))));
            arr_65 [i_19 + 3] [i_20] = (((((var_11 ? var_14 : var_4))) ? ((var_17 ? var_8 : var_1)) : ((var_3 ? var_3 : var_17))));
            var_76 -= ((-var_8 ? var_0 : (var_19 + var_0)));

            for (int i_21 = 2; i_21 < 10;i_21 += 1)
            {
                var_77 = ((((var_1 ? var_0 : var_4)) + var_14));
                var_78 = (min(var_78, (((((var_18 ? var_6 : var_13))) ? var_13 : (~var_5)))));
                var_79 -= (~var_12);
            }
            for (int i_22 = 3; i_22 < 10;i_22 += 1)
            {
                var_80 = (min(var_80, (var_15 && var_15)));
                arr_72 [i_19] [i_20] = ((((1 ? 17515 : var_0))) ? 255 : 7);
            }
        }
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {

            for (int i_24 = 1; i_24 < 11;i_24 += 1)
            {
                var_81 = -25;
                var_82 = var_12;
                var_83 = (1 ^ 7790871301405164760);
            }
            for (int i_25 = 0; i_25 < 12;i_25 += 1)
            {
                var_84 = (min(var_84, (((var_5 * var_11) ? var_5 : 53669))));
                var_85 = (((~var_17) ? -11808 : ((var_16 ? var_4 : var_15))));
                arr_82 [i_19] = (((((var_2 ? var_15 : var_4))) ? ((var_7 ? var_8 : var_19)) : (((var_9 ? var_17 : var_17)))));
                var_86 = var_6;
            }
            var_87 = ((var_17 ? var_5 : var_2));

            for (int i_26 = 1; i_26 < 9;i_26 += 1)
            {
                var_88 = (min(var_88, (~var_2)));
                var_89 = (min(var_89, (((-var_12 ? ((var_14 ? var_3 : var_9)) : var_18)))));
            }
            for (int i_27 = 0; i_27 < 12;i_27 += 1)
            {
                var_90 = (min(var_90, (((!(((var_4 ? var_5 : var_11))))))));
                var_91 = (((((var_9 ? var_9 : var_18))) ? var_12 : -var_16));
                var_92 *= ((var_17 ? (var_19 < var_10) : var_1));
            }
        }

        for (int i_28 = 1; i_28 < 11;i_28 += 1)
        {
            var_93 = (max(var_93, ((((1 / 65) ? -1 : -var_15)))));
            arr_89 [i_28] = -8384512;
            arr_90 [i_28] = ((var_1 ? var_16 : var_9));
        }
    }
    for (int i_29 = 1; i_29 < 9;i_29 += 1) /* same iter space */
    {
        var_94 = (!var_3);
        var_95 ^= ((((((var_10 ? var_11 : var_12)) ? (~var_3) : ((var_3 ? var_3 : var_7))))));
        var_96 = ((var_2 ? ((~((var_18 ? var_11 : var_8)))) : var_16));
    }
    /* vectorizable */
    for (int i_30 = 0; i_30 < 12;i_30 += 1)
    {
        var_97 = var_14;
        var_98 = var_7;
        var_99 += -var_16;
        arr_96 [i_30] = (((((var_17 ? var_15 : var_17))) ? (~var_19) : var_9));
    }
    var_100 = (((((-var_18 ? (~var_8) : var_2))) ? var_12 : ((var_14 ? var_4 : 750829659))));
    #pragma endscop
}
