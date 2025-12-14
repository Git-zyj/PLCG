/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_14 ? var_4 : var_11);
    var_21 = 14137848851150641995;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_22 = (((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (var_9 * var_9)))));
        arr_3 [i_0] = var_2;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_7 [i_1] = var_3;
            var_23 = 255;
            var_24 = (max(var_24, ((((((-19581 ? var_2 : var_4))) | ((var_10 ? var_5 : var_11)))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_25 = (min(var_25, (((var_5 ? (!255) : (((!(((var_17 ? var_1 : (arr_8 [3]))))))))))));
            var_26 = (arr_9 [i_0] [i_2]);
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_27 -= (max((max((arr_11 [i_0 + 1] [i_0 - 2] [i_0]), var_1)), (((!(((var_9 ? var_11 : -1413060334))))))));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_28 -= (((arr_2 [14]) ? (((((((arr_15 [i_3] [i_3]) ? var_7 : var_1)) == (((var_4 ? (arr_12 [i_3] [i_4]) : var_9))))))) : ((-1413060365 ? ((((arr_14 [i_5]) ^ (arr_0 [i_0])))) : var_5))));
                    var_29 += var_9;
                }
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    arr_20 [11] [i_6] [i_4] = var_6;
                    arr_21 [i_6] [13] = (((!250) && var_13));
                    var_30 = (max(var_30, (arr_15 [10] [10])));
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 14;i_7 += 1)
                {
                    var_31 = (min(var_31, (arr_14 [13])));

                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_28 [i_7] [8] [i_7] [i_7] = var_12;
                        arr_29 [i_0] [9] [7] [i_4] [i_0] = (((((var_6 ? -3559051928092985774 : var_4))) ? (arr_23 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]) : ((241 ? 4 : 101))));
                    }
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        var_32 = (max(var_32, (((1 ? (arr_8 [i_0 - 2]) : (arr_19 [i_0] [i_3] [i_9 + 1]))))));
                        arr_33 [i_9] [i_9] [i_9] [i_7] [i_4] [i_0] [i_0] = (((arr_25 [i_0] [i_0 - 2] [i_7 - 1] [i_9 + 1] [i_9 + 2]) & (127 - 7)));
                    }
                }
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    var_33 -= var_6;
                    var_34 = (max(var_16, (((-3559051928092985791 == 9223372036854775807) ? (arr_5 [i_0 - 1] [i_0]) : (((var_14 << (var_2 - 58824))))))));
                    arr_36 [9] [6] [i_3] [i_3] [i_0] [i_0] = var_18;
                    arr_37 [i_10] [i_4] [1] [i_0] = ((-3559051928092985766 ? (((197 ? var_4 : 1))) : (min(var_0, var_19))));

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_35 = (max(var_35, var_13));
                        var_36 = -1413060346;
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                    {
                        arr_43 [6] [6] [i_4] [i_10] [i_12] = 73072926;
                        var_37 += var_5;
                        arr_44 [10] [10] = (min(1023, 59420));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                    {
                        var_38 = var_1;
                        var_39 = (min(var_39, (((-(arr_6 [10] [6]))))));
                        arr_48 [i_0] [i_0 + 1] [i_0 + 1] [i_13] [i_0 + 1] [5] = ((((((arr_17 [i_0 - 2] [i_0 - 2] [i_10] [i_13]) && 6060))) << var_17));
                        var_40 *= 255;
                    }
                    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                    {
                        arr_51 [i_0] [i_0] [i_0] [6] [i_0 + 1] [i_14] [i_0] = 171;
                        arr_52 [i_0] [i_3] [i_4] [i_14] [i_14] = ((((min((var_12 / var_7), var_3))) || ((((var_9 > 3123392108898324557) % (arr_11 [i_0] [i_0] [i_0 - 2]))))));
                        arr_53 [i_0] [i_14] [i_0] [i_0] [i_0 - 2] = ((((arr_50 [i_0] [i_3] [1] [i_4] [7] [i_10] [7]) | var_16)) > (((arr_50 [i_0] [i_0] [i_4] [i_0] [i_14] [9] [i_3]) ? (arr_50 [i_0] [i_0] [i_3] [i_4] [i_10] [i_14] [i_14]) : (arr_50 [i_14] [i_10] [11] [i_3] [i_3] [i_3] [i_0 - 2]))));
                        var_41 = var_0;
                        var_42 -= 1;
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        {
                            var_43 = (max(var_43, var_0));
                            arr_60 [i_0 - 2] [i_3] [14] [i_3] [i_0 - 2] [i_16] = var_16;
                            arr_61 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_16] = var_16;
                        }
                    }
                }
                var_44 = (min(129, 198));
                var_45 = ((((arr_5 [i_3] [i_3]) & (var_2 <= -1053))));
            }
            for (int i_17 = 2; i_17 < 14;i_17 += 1)
            {
                arr_64 [i_0 + 1] [i_17 - 1] = (((((arr_24 [4] [i_3] [15] [i_0]) + 2147483647)) >> (((max((arr_54 [i_17 + 1] [i_17 + 1] [i_17] [i_17]), (arr_41 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 2]))) - 1244925752))));
                var_46 = (max(var_46, var_16));
            }
            var_47 -= (((((((0 ? -257317847 : 242)) != ((3979244508 ? (arr_12 [i_3] [i_0]) : 255))))) * var_14));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 16;i_18 += 1)
        {
            var_48 = var_2;
            arr_68 [i_0] [i_18] [i_18] = (8355840 ? -1169287952 : -483171225);
        }
        arr_69 [i_0] = var_10;
        var_49 += var_14;
    }
    for (int i_19 = 4; i_19 < 12;i_19 += 1)
    {
        arr_72 [i_19] = ((-9145 > (((min(var_19, var_2))))));
        /* LoopNest 2 */
        for (int i_20 = 2; i_20 < 11;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 13;i_21 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_22 = 1; i_22 < 11;i_22 += 1)
                    {
                        var_50 = (min(var_50, (((-1413060334 ? var_6 : var_3)))));
                        var_51 = (max(var_51, (2124671782 && 32256)));
                        var_52 = var_3;

                        for (int i_23 = 1; i_23 < 12;i_23 += 1)
                        {
                            var_53 += ((var_14 ? var_6 : (!var_17)));
                            var_54 += (arr_66 [i_22 + 1]);
                            arr_84 [i_19 - 1] [i_20] [i_23] [i_20] [i_23] [i_20] = (var_8 << var_17);
                            var_55 = (min(var_55, ((((arr_16 [i_20 + 1] [i_23 - 1] [i_19 - 2] [i_22 - 1]) ? var_0 : var_11)))));
                        }
                        for (int i_24 = 1; i_24 < 12;i_24 += 1) /* same iter space */
                        {
                            var_56 += (((var_19 % var_4) ? 3559051928092985774 : var_9));
                            var_57 -= ((var_13 && (arr_50 [6] [14] [i_19] [i_19] [i_20 + 1] [i_20 - 1] [i_24 + 1])));
                        }
                        for (int i_25 = 1; i_25 < 12;i_25 += 1) /* same iter space */
                        {
                            arr_91 [i_19] [i_25] [i_21] [i_22 + 1] [i_25] = (+-48);
                            arr_92 [i_19] [i_25] [i_21] [i_22] [i_25] [i_22] [i_25 - 1] = ((!(var_15 == var_14)));
                        }
                    }
                    for (int i_26 = 3; i_26 < 11;i_26 += 1)
                    {
                        var_58 += ((!(((min(var_0, var_1))))));
                        var_59 += -9153;
                    }
                    for (int i_27 = 2; i_27 < 9;i_27 += 1)
                    {
                        var_60 = (arr_9 [i_19] [i_19]);
                        var_61 = (939524096 > 9161);
                    }
                    var_62 = (min(var_62, (!-2649625333915631206)));
                }
            }
        }
        var_63 = (arr_66 [i_19]);
    }
    #pragma endscop
}
