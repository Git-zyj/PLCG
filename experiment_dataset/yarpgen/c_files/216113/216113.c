/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_12 = ((((min((arr_0 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 - 1])))) ? ((~(-32767 - 1))) : (!var_0)));
        var_13 = ((!(((arr_0 [i_0 + 2] [i_0 - 1]) || (arr_0 [i_0 - 1] [i_0 - 1])))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_14 = (((((-(arr_2 [i_1 + 2])))) ? (max(var_3, (arr_2 [i_1 + 3]))) : ((63436 ? var_6 : var_10))));

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            arr_8 [19] [19] [i_2] &= (max((((var_4 % (arr_4 [i_1 - 1])))), (min(var_2, (arr_4 [i_1 - 1])))));
            var_15 = ((-32764 ? -14633 : -657628131));
            arr_9 [i_1] &= (((((((max(113, var_3))) ? (~-2653) : (((arr_5 [16] [i_2]) >> (((arr_4 [i_1]) + 2058813593))))))) ? (((min(-657628131, -63)) & (min((arr_6 [i_1] [i_2]), 211)))) : ((217 - (arr_3 [i_1 - 2] [i_2 + 2])))));
        }
    }
    var_16 = -72;

    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        arr_14 [i_3] = ((((((!195) ? (max((arr_5 [i_3] [i_3]), 1340886764)) : var_3))) <= (~var_9)));
        var_17 = ((!(arr_5 [i_3 - 2] [6])));
        var_18 = ((((arr_10 [i_3]) / var_11)));
        var_19 = ((~(((25530 && ((min(59555, var_9))))))));
        var_20 = -106;
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4 + 1] = 59555;
        var_21 = (arr_16 [i_4 - 2]);
        var_22 = (min(((((~63) > (-22036 <= -1954107448805241229)))), var_10));
        var_23 = 4294967295;
        arr_18 [i_4] [i_4] = ((((max((!var_8), ((var_9 ? var_5 : var_4))))) ? ((((!(~2168905594))))) : var_3));
    }
    for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_24 = (max((max((arr_21 [i_5 + 2] [2]), (arr_21 [i_5 - 1] [i_5 - 1]))), ((((arr_21 [i_5 + 2] [2]) ? var_5 : (arr_19 [i_5 + 1]))))));
        var_25 = ((((min(-24531, 4362854084686276211))) ? ((((!(arr_21 [i_5 - 2] [i_5 - 1]))))) : (min(24502, (arr_21 [i_5 - 2] [i_5 + 1])))));

        for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
        {
            var_26 = ((!(!3066899223)));

            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {

                /* vectorizable */
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {

                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        var_27 &= ((!((((arr_6 [i_5] [i_7]) ? var_1 : (arr_16 [i_9]))))));
                        arr_34 [i_5 - 1] [i_6 - 2] [i_7] [i_8] [i_7] [i_8] = var_1;
                    }
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        var_28 = (((((var_3 << (var_8 - 3931)))) || (arr_6 [i_6 - 2] [i_6 + 1])));
                        arr_37 [2] [i_8 - 1] [i_10] = ((!(arr_30 [i_5] [10] [i_7 - 2] [i_5] [i_7 - 2])));
                        arr_38 [i_5] [i_6] [i_6 - 2] [i_7] [i_5] [8] = (((arr_25 [i_6 - 1] [i_7] [i_10]) ? var_5 : (arr_36 [i_5] [i_6] [i_6] [i_7 - 1] [i_8 - 1] [i_10 + 1])));
                    }
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        var_29 = ((-var_4 ? (arr_27 [5] [0] [i_7] [0]) : var_5));
                        var_30 = 186;
                        arr_41 [i_5] [i_6 - 1] [i_7 + 3] [i_6] [i_11 - 2] &= ((~((var_9 + (arr_40 [i_5 + 2] [i_6] [i_7] [i_8] [i_8] [i_11 + 2])))));
                        var_31 = -var_5;
                        var_32 = var_4;
                    }
                    var_33 = (arr_27 [i_5 - 1] [i_5 + 2] [i_5 - 2] [i_5 - 2]);
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 14;i_12 += 1) /* same iter space */
                {
                    var_34 = ((var_11 ? (arr_29 [i_7] [i_7 + 3] [i_7 + 2] [i_7 + 2]) : 2126061705));
                    var_35 ^= (-(arr_40 [i_5 + 2] [i_5 + 2] [i_5 - 2] [i_5] [i_5 - 2] [i_12 + 1]));
                    arr_44 [11] [i_6] [9] [3] = (((!var_1) != var_9));
                    arr_45 [i_5] [i_5] [i_6 - 1] [i_7] [i_6 - 1] [i_5] = 592199568;
                }
                for (int i_13 = 1; i_13 < 14;i_13 += 1) /* same iter space */
                {
                    var_36 = 4053982149;
                    var_37 = (((((var_6 ? (!var_8) : (!var_2)))) + (((arr_5 [i_13 - 1] [i_13 - 1]) ? var_10 : (arr_5 [i_13 + 1] [15])))));
                }
                arr_48 [3] [4] [i_7] = ((!(!var_2)));
            }
        }
        /* vectorizable */
        for (int i_14 = 2; i_14 < 13;i_14 += 1) /* same iter space */
        {
            var_38 = (max(var_38, ((((2168905594 / (arr_46 [i_14] [i_14 + 2] [i_5] [i_14 + 2] [i_5] [4]))) & (arr_50 [i_5])))));
            var_39 = (46887 + 77);

            for (int i_15 = 1; i_15 < 12;i_15 += 1)
            {
                arr_54 [i_5] [i_14] [i_5] = ((var_4 + (arr_23 [i_14 - 1])));
                arr_55 [i_5 + 2] [i_5 - 1] [i_5 - 2] [i_5 + 2] = (arr_49 [i_5 + 1] [i_5 + 1] [i_5 + 1]);
                var_40 = (~var_4);
                var_41 ^= (arr_47 [i_14]);
            }
        }
        var_42 = (+(((((var_10 ? (arr_27 [i_5] [i_5] [i_5] [i_5 - 1]) : 2126061701))) ? (~0) : ((-46 ? -4776065788648178668 : 159)))));
    }
    var_43 = ((!((max(40264, 255)))));
    #pragma endscop
}
