/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~-42) ? (max(67108863, 33)) : ((((((var_8 ? var_3 : var_6))) ? var_8 : (var_2 / var_6))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (((((~(arr_3 [i_0] [i_0])))) ? var_3 : var_1));
        arr_5 [i_0] [i_0] = var_10;
        arr_6 [1] [i_0] = (!(~var_9));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_13 = (((-((max(-42, 6))))));
                arr_15 [i_3] [i_1] [i_3] = ((((((!var_10) ? (arr_10 [i_1] [11]) : ((((arr_14 [i_1] [i_1] [i_2 - 1] [i_3]) << (((arr_9 [i_2 + 1] [i_2 + 1]) - 21424)))))))) ? ((((((var_2 ? var_5 : var_3))) ? (((arr_7 [i_1] [i_1]) ? var_3 : var_10)) : ((max(var_0, var_1)))))) : ((2147483648 << (-7 + 22)))));
            }
            var_14 = (0 - -1);
            var_15 = (((((-(-77 % 131)))) ? ((var_8 << (((max((arr_7 [3] [i_1]), var_2)) - 2455341200)))) : var_7));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_16 = ((((!(arr_7 [i_1] [i_1])))) < (arr_20 [i_1] [i_4] [i_1]));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_25 [i_1] [i_4] [i_1] [i_6] [i_6] [i_7] = ((6 ? -119 : 29));
                            var_17 = -0;
                            var_18 = var_9;
                        }
                    }
                }
                arr_26 [i_1] [i_4] [i_1] = (~var_4);
                var_19 ^= (arr_24 [i_1] [i_4] [i_1] [i_1] [i_1] [i_5]);
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_20 = (((!184) >= -var_9));
                var_21 ^= var_0;
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_31 [i_1] [i_1] = (((arr_7 [i_1] [i_1]) ? var_4 : var_1));
                arr_32 [i_1] = ((-var_4 & ((~(arr_30 [i_1])))));
            }
            for (int i_10 = 3; i_10 < 21;i_10 += 1)
            {
                arr_35 [i_1] [i_1] [i_1] = var_1;

                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 21;i_12 += 1)
                    {
                        var_22 = (max(var_22, -var_7));
                        var_23 = ((((-(arr_14 [i_1] [i_4] [i_10] [i_10])))) ? (((var_1 ? var_6 : var_11))) : (arr_21 [i_10 - 1] [i_10] [i_10 - 2] [i_12 - 1] [i_12 - 1] [i_12]));
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        var_24 = -var_8;
                        arr_43 [i_1] [i_1] [i_1] [i_11] [i_1] = ((!(((var_10 ? var_7 : var_9)))));
                        arr_44 [2] [i_1] = (((arr_18 [i_1]) ? (!var_0) : (((arr_30 [i_1]) | var_8))));
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        var_25 = (~-2082653159188756589);
                        var_26 = (var_9 / var_0);
                    }

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_27 = ((!var_6) ? -var_6 : ((var_4 ? var_7 : var_5)));
                        arr_51 [i_1] [i_4] [i_10 - 3] [i_1] [i_11] [i_11] = (((var_2 ? var_9 : var_4)));
                    }

                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        var_28 = -var_9;
                        arr_54 [i_1] [i_4] [i_10] [i_10] [i_11] [i_1] [i_16] = ((-119 ? -11698 : 215));
                        arr_55 [i_1] [i_4] [i_4] [i_1] = (((arr_37 [i_1] [i_1]) ? ((var_6 ? var_0 : var_7)) : (var_7 & var_7)));
                    }
                }
                for (int i_17 = 2; i_17 < 20;i_17 += 1)
                {
                    var_29 = (((((arr_22 [i_1] [i_17 + 1] [i_10] [i_17] [i_10]) && var_1)) ? (~256) : var_9));
                    var_30 -= ((-(((var_0 + 2147483647) << (var_5 - 1)))));
                }
            }
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    {
                        arr_63 [i_1] [i_18] = (var_4 ^ var_6);
                        arr_64 [i_1] [i_18] [i_1] [i_1] [i_1] |= ((-((var_10 ? (arr_14 [i_1] [i_1] [i_18] [i_19]) : var_11))));
                        arr_65 [i_1] [i_1] [i_1] = (((((var_5 ? var_8 : (arr_12 [i_18] [i_19])))) ? (~15) : var_5));
                    }
                }
            }
            arr_66 [i_1] = (var_7 + -var_1);
        }
        for (int i_20 = 0; i_20 < 22;i_20 += 1)
        {

            for (int i_21 = 0; i_21 < 22;i_21 += 1)
            {
                arr_71 [i_1] [i_21] [i_21] [i_1] = (max(((var_2 >> ((((var_3 ? var_8 : var_9)) - 228)))), (!var_10)));
                var_31 = var_2;
                var_32 = (i_1 % 2 == 0) ? ((max((((~var_11) ? var_9 : var_7)), (((var_2 < var_9) << (((arr_22 [i_1] [i_20] [i_20] [i_21] [i_21]) - 17224060590600798761))))))) : ((max((((~var_11) ? var_9 : var_7)), (((var_2 < var_9) << (((((arr_22 [i_1] [i_20] [i_20] [i_21] [i_21]) - 17224060590600798761)) - 3050706851405516197)))))));
            }
            arr_72 [i_1] [i_1] [i_1] = ((((~(arr_10 [i_1] [i_20]))) == ((max(var_10, (max((arr_18 [i_1]), var_11)))))));
            var_33 |= (max(var_2, (max((~var_2), var_6))));
            arr_73 [i_1] [i_1] [i_1] = (max((max(((var_7 / (arr_22 [i_1] [i_20] [i_1] [i_1] [i_20]))), ((max(var_8, var_0))))), ((((arr_19 [i_1] [i_1] [i_20] [i_1]) >> var_5)))));
        }

        for (int i_22 = 0; i_22 < 22;i_22 += 1)
        {
            arr_76 [i_1] [i_1] [i_22] = (max(((var_7 + (arr_34 [i_1] [i_22] [i_1] [i_1]))), ((~(var_10 >> var_4)))));
            arr_77 [i_1] [i_1] = (7 >= 6029353805547427759);
            arr_78 [i_1] = var_3;
        }
        for (int i_23 = 0; i_23 < 22;i_23 += 1)
        {
            arr_82 [i_1] [i_1] [i_23] = ((~((var_2 % (((var_8 ? var_6 : var_3)))))));
            var_34 -= var_0;
        }
        arr_83 [i_1] [16] |= (((((var_9 + ((3876001540 ? 34 : 1))))) ? ((var_3 ? (~var_9) : ((var_4 ? var_7 : var_1)))) : var_6));
        var_35 ^= var_1;
        var_36 = (((((((arr_61 [i_1] [i_1] [i_1] [i_1]) ? var_5 : var_1)))) ? (max((((arr_70 [i_1] [i_1] [i_1]) ? var_8 : var_1)), ((var_3 ? var_7 : var_9)))) : (((((var_0 ? (arr_62 [i_1] [i_1] [i_1] [i_1]) : var_7))) ? ((var_11 ? var_10 : var_9)) : ((max(var_5, (arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
    }
    var_37 *= ((var_10 ? var_2 : ((((~2147483647) + ((var_9 ? var_4 : var_4)))))));
    #pragma endscop
}
