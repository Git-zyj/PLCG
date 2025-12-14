/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_3;
    var_17 = (min(var_17, (((((((((var_0 ? 76 : 3587427147))) ? 41416 : ((0 ? var_0 : 43066))))) ? var_6 : (((((var_11 ? var_15 : var_0))) ? ((var_14 ? var_8 : var_15)) : var_1)))))));
    var_18 = var_4;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [10] &= (var_1 && var_12);

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_19 = (var_6 ^ var_7);
                var_20 ^= ((var_14 <= (((var_14 ? var_13 : var_3)))));
                var_21 = (max(var_21, ((((((var_13 >> (var_5 - 4200962935)))) ? var_12 : (((var_13 >> (var_10 - 49)))))))));
                var_22 = (((var_5 && var_14) ? ((53808 ? 76 : 52636)) : (var_15 > var_14)));
                var_23 = (((var_0 ? var_14 : var_12)));
            }
            var_24 += (var_3 | var_9);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [10] &= var_3;
            var_25 = (max(var_25, (!var_13)));

            for (int i_4 = 4; i_4 < 21;i_4 += 1)
            {
                var_26 -= ((((((var_11 >> var_3) ^ (var_7 & var_15)))) ? var_7 : (max(var_4, var_6))));
                var_27 = (min(var_27, ((((var_15 - var_8) << (((max(var_1, var_13)) - 2346627928)))))));

                for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_28 += var_13;
                    var_29 |= (min(var_12, var_10));
                    var_30 = (min(var_30, var_12));
                    arr_19 [i_0] [i_0] [i_0] [i_0] [i_5] = (((var_15 ? var_12 : var_1)));
                    var_31 ^= (((((var_4 ? var_12 : var_15))) ? var_11 : 16200282555337657814));
                }
                for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_3] [16] [1] [i_3] [i_6] |= (((var_9 ^ var_0) || ((var_13 >= (var_2 | var_13)))));
                    arr_24 [0] [i_4] [0] |= ((var_10 ? ((var_4 ? var_10 : ((var_0 ? var_10 : var_7)))) : (((((var_4 ? var_12 : var_7))) ? ((3587427147 ? 1 : 240)) : (var_11 || var_6)))));
                    var_32 |= -var_6;
                    var_33 -= var_6;
                }
            }

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                arr_27 [i_0] [i_0] [i_0] = var_1;
                var_34 = ((var_14 ? ((var_9 ? var_6 : var_7)) : (((!(((var_12 ? var_4 : var_9))))))));
            }
        }
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            var_35 = (min(var_35, var_11));
            arr_30 [i_0] [i_0] [i_0] = (max(((var_4 ? var_4 : (var_12 - var_11))), ((((6133586149648853821 != 1128673032) ? (!var_6) : var_3)))));
            arr_31 [10] [i_0] [i_0] = (((180 ^ 53808) ? (255 <= 53808) : (((var_5 > (var_12 / var_15))))));

            /* vectorizable */
            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
            {
                var_36 = (max(var_36, (var_8 + var_11)));
                var_37 = (max(var_37, (((((61 << (6133586149648853829 - 6133586149648853814))) >= (var_9 && var_14))))));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
            {
                arr_36 [i_0] [i_0] [i_10] = (((var_11 ^ var_13) ? (!var_3) : var_0));
                var_38 = (max(var_38, ((((var_13 - var_2) == var_10)))));
            }
            for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
            {
                arr_39 [i_0] [8] = (min(var_1, var_2));

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_42 [i_0] [i_0] [i_0] [i_0] = ((var_1 - var_8) ? var_9 : (((((var_5 >= var_9) > -var_3)))));
                    var_39 = (max(var_39, ((((90 > 0) ? (min(var_8, (var_10 + var_10))) : var_8)))));
                    var_40 = (max(var_40, (var_4 < var_9)));
                    var_41 = (min(var_41, ((min((((~var_1) + (((var_14 ? var_10 : var_10))))), var_10)))));
                }
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((var_0 ? (var_10 && var_11) : var_13))) && (var_15 >= var_7)));

                    /* vectorizable */
                    for (int i_14 = 3; i_14 < 22;i_14 += 1) /* same iter space */
                    {
                        var_42 = (var_7 <= var_11);
                        arr_51 [i_8] [12] [0] [i_14] &= (var_13 >> (((var_14 - var_0) - 673468271)));
                        var_43 = (max(var_43, var_11));
                        arr_52 [i_0] = (var_5 == var_2);
                    }
                    for (int i_15 = 3; i_15 < 22;i_15 += 1) /* same iter space */
                    {
                        arr_55 [0] [20] [i_0] [1] [0] [i_15] = (((-(var_2 / var_0))));
                        var_44 ^= (100 ^ 1);
                        var_45 = (((var_6 > var_5) ? var_10 : var_8));
                    }
                    for (int i_16 = 1; i_16 < 22;i_16 += 1)
                    {
                        var_46 = ((((((((var_3 ? var_3 : var_2))) <= ((var_5 ? var_9 : var_4))))) - (var_15 * var_2)));
                        var_47 *= var_2;
                        var_48 = (max(((var_2 ? var_5 : (var_10 / var_9))), ((((var_13 ? var_4 : var_1)) * var_10))));
                        arr_58 [i_0] [i_0] [1] [i_0] [5] [i_0] = var_2;
                    }
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        var_49 ^= (((var_9 ^ var_6) == (var_13 || var_6)));
                        var_50 = (max(var_50, var_7));
                    }
                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        arr_66 [i_0] [i_0] = var_5;
                        var_51 = (min(var_51, var_10));
                    }
                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        var_52 -= (var_5 >> var_2);
                        var_53 += var_5;
                        var_54 += ((var_7 ? var_7 : var_6));
                        var_55 = (max(var_55, -var_10));
                        var_56 = (max(var_56, (var_1 || var_10)));
                    }
                    var_57 *= (-var_6 != var_14);
                    var_58 = (((var_14 - var_3) && (var_11 * var_8)));
                    arr_70 [i_0] [i_0] [i_11] [2] [i_17] [i_17] = var_9;
                }
            }
            var_59 = (7 + 7183179148824690497);
        }
        var_60 = var_11;
        arr_71 [i_0] = ((var_10 | (max(var_10, 4386212076329782010))));
    }
    for (int i_21 = 0; i_21 < 23;i_21 += 1) /* same iter space */
    {
        var_61 = var_6;
        arr_74 [i_21] = (((((var_10 ? (var_13 != var_9) : var_2))) == (var_5 / var_12)));
        var_62 = (max(var_62, (((((2527722977 ? 262143 : 1)) * (var_0 * var_3))))));
        var_63 = (min(var_63, ((((!var_6) >> (-var_4 - 2255883969))))));
        var_64 = (min(var_64, (((var_7 ? ((var_1 ? var_11 : var_15)) : ((((var_8 ? var_3 : var_8)))))))));
    }
    for (int i_22 = 0; i_22 < 23;i_22 += 1) /* same iter space */
    {
        var_65 = (min(var_65, ((((((var_8 ? var_0 : var_8)) <= ((var_0 ? var_0 : var_13))))))));
        var_66 = (max(var_66, ((((var_9 || var_8) ? (((var_1 && var_13) ? var_11 : (!var_2))) : (~var_10))))));
    }
    #pragma endscop
}
