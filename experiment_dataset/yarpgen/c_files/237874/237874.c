/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (max((max(-1, 127)), ((~(var_12 == var_15)))));
    var_17 = (((((((13697 ? 31 : 121)) / (255 - var_12)))) * (((((-32 ? var_0 : var_4))) ? var_1 : -var_5))));

    for (int i_0 = 4; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 = (-10694 <= (((arr_3 [i_0]) ? ((31 ? 255 : 255)) : 16653065332528255304)));
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    {
                        var_19 = (max(var_19, ((min(var_11, (max((127 - 31393), (min(var_15, var_1)))))))));
                        var_20 -= (max((((arr_2 [i_0 - 3]) ? (arr_13 [i_0 - 3]) : (arr_2 [i_0 - 3]))), (max((arr_5 [i_0 - 1]), ((76 >> (221 - 200)))))));
                        var_21 = -1;
                    }
                }
            }
        }
        arr_15 [i_0] = var_3;
    }
    for (int i_4 = 4; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_22 = (~(((((193 ? var_6 : var_6)) >= (!var_3)))));
        var_23 = (max(var_3, (!193)));
    }
    for (int i_5 = 4; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_24 = (arr_5 [i_5 + 1]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        arr_27 [i_5] [i_6] [i_5] [i_5] = (min((((((arr_2 [i_7]) == var_5)) ? (arr_24 [i_5] [i_5]) : ((((arr_20 [i_5] [i_5]) ? (arr_7 [i_5] [i_5] [i_6]) : (arr_13 [i_5])))))), (((arr_20 [i_5 - 1] [i_5 + 1]) | var_5))));
                        var_25 = 0;
                        arr_28 [i_5] [i_6] [i_6] [i_7] [i_7] [i_8] = (arr_21 [i_5] [i_5]);
                    }
                    var_26 = (min(var_26, ((max(((var_6 ? (((arr_11 [i_5] [i_5]) + 3280634850)) : 62)), (18 != 208))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_27 = var_1;
                                var_28 = (min(var_28, ((min((max((7887597774321787858 - 8375620374915153129), 211)), -94)))));
                            }
                        }
                    }
                }
            }
        }
        var_29 = arr_7 [i_5] [i_5] [4];
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 16;i_12 += 1)
            {
                {
                    var_30 = (min(var_30, (255 != var_15)));
                    var_31 = (max((((-((255 ? (arr_23 [i_12] [i_11] [i_12]) : var_15))))), 0));
                }
            }
        }
    }
    for (int i_13 = 4; i_13 < 17;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 1; i_14 < 16;i_14 += 1)
        {
            var_32 = (((((-(min(-795, 9766014593209108015))))) ? (((-1322433837 ? var_9 : 32767))) : ((max(((min(var_4, 32751))), ((6816 ? -20 : var_12)))))));
            var_33 = (min(var_33, ((max(32751, (arr_6 [1] [1]))))));
        }
        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                var_34 = -var_7;
                arr_51 [i_16] [i_16] [i_16] [i_16] = (((((!0) ? (var_0 + var_0) : 18446744073709551615)) | (arr_21 [i_16] [i_13 + 1])));
            }
            var_35 = var_0;
            var_36 = (min(var_36, (((((((arr_33 [i_13 - 2] [1] [i_13 - 1] [i_13]) | (arr_3 [i_13 - 3])))) ? (arr_3 [i_13 - 4]) : (((arr_33 [i_13 + 1] [8] [i_13 - 2] [i_13 - 3]) ? (arr_33 [i_13 - 3] [6] [i_13 + 1] [i_13]) : 11407386918907635079)))))));
            var_37 = (+-1820202359);
            arr_52 [i_15] [i_15] = var_14;
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            var_38 = (-1343825691 ^ ((-(arr_37 [i_13]))));

            for (int i_18 = 2; i_18 < 16;i_18 += 1) /* same iter space */
            {
                var_39 += 255;
                arr_57 [i_18] [i_17] [i_18] [i_18] = ((arr_40 [i_17] [i_17] [i_17]) & (arr_40 [i_17] [i_17] [i_17]));
                var_40 -= (((!(arr_7 [i_13] [i_13] [i_17]))));
            }
            for (int i_19 = 2; i_19 < 16;i_19 += 1) /* same iter space */
            {
                var_41 = ((!((((arr_48 [i_17] [i_19] [i_17] [i_17]) / (arr_0 [i_13] [i_19]))))));
                var_42 = 19706;
                var_43 = var_0;
                var_44 = ((7 ? 0 : (arr_11 [i_17] [i_17])));
            }
        }
        for (int i_20 = 3; i_20 < 15;i_20 += 1)
        {
            var_45 = ((+((((arr_6 [i_13 - 3] [16]) == 106)))));
            var_46 = 193;
            var_47 = (min(var_47, ((((max((((arr_45 [i_20]) - -106)), (arr_18 [6]))) + ((-((max(var_14, 255))))))))));
        }
        var_48 = ((-(min((min(4294967295, (arr_41 [i_13 - 1] [i_13]))), 1160592084))));
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 18;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 18;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 15;i_23 += 1)
                {
                    {
                        var_49 = 24332;
                        arr_72 [i_21] [i_21] [i_13] [i_22] [i_21] [i_22] = (min((((((arr_14 [i_23] [i_22] [i_21] [i_13]) ? 1 : var_4)) - ((((arr_60 [i_13] [i_21] [i_21]) == (arr_43 [i_13])))))), -19703));
                        arr_73 [i_23] [i_22] [i_22] [i_13] = var_10;
                        var_50 = (((((24 ? ((14157386803492135062 - (arr_70 [i_13] [i_22]))) : (74 - -106)))) ? ((((254 >= (arr_36 [i_13] [i_13] [i_13]))))) : (var_8 <= 7039357154801916536)));
                        var_51 = (min((((max(1, (arr_31 [i_13] [i_21] [i_22]))) == (arr_7 [i_13] [i_21] [i_22]))), (((arr_21 [i_13 + 1] [i_21]) <= ((0 ? (arr_35 [i_13 - 1] [i_21] [i_13 - 1] [i_13]) : 1))))));
                    }
                }
            }
        }
    }
    var_52 = (min(var_52, var_15));
    var_53 = var_15;
    #pragma endscop
}
