/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_4;
    var_19 = (max(var_19, var_12));
    var_20 = (min(var_17, (!var_17)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((((min((arr_2 [i_1 + 2] [i_0]), (arr_2 [i_0] [i_0])))) ? (((213 + 11) ? -11 : var_10)) : (70 > var_10)));
            arr_7 [i_0] [i_1] |= ((((min(127, (arr_0 [i_0])))) <= (arr_0 [i_0])));

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_21 = (min(((var_12 ? 85 : 67)), ((max((arr_10 [i_1 + 1]), var_13)))));
                var_22 = (min(var_22, (((((max((max(3127, 72)), 1))) ? var_15 : (((arr_3 [8] [i_2]) ? ((74 ? (arr_1 [i_0]) : var_8)) : (((arr_5 [13]) | 5)))))))));
                arr_12 [i_0] [i_0] [14] [14] = 60716;
            }
            for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
            {
                var_23 *= ((-(!28)));

                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {
                    var_24 += ((52945 ? ((22819 ? 0 : 42726)) : 15));
                    var_25 += (min(22825, 255));
                    arr_18 [i_4] [i_3 + 1] [i_1] [i_0] = ((~((((((var_2 + 2147483647) >> 1))) ? 225 : 18))));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_26 = (max(var_26, (min(112, 175))));
                        var_27 = 22812;
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        arr_23 [0] [0] [0] [i_4] [i_6] [i_6] = (((arr_3 [2] [i_1 + 2]) == (arr_3 [i_0] [i_1 + 2])));
                        var_28 = (arr_10 [i_4 + 1]);
                        var_29 = (min(var_29, -var_14));
                        var_30 |= (((122 ? var_5 : var_3)));
                    }
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_31 -= (min(37843, (((min(52953, (arr_2 [8] [i_1 + 1])))))));
                    var_32 = (max(var_32, ((min((((arr_9 [i_1 - 1] [i_1 + 1]) ? (arr_24 [i_0] [i_1 + 1] [i_3 + 1] [i_3 + 3] [i_3] [12]) : (!var_15))), ((max(-17, 16368))))))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_28 [i_0] [i_8] = ((((241 ? 255 : 35)) / 49915));
                        arr_29 [10] [i_1] [1] = (arr_20 [7]);
                        var_33 = (((((var_0 ? (arr_15 [i_0] [i_0] [i_7]) : var_14))) || (~211)));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_34 = ((((max(var_5, 1))) ? 159 : ((1024 ? 84 : 214))));
                        var_35 *= (max(var_12, (arr_24 [i_9] [i_7] [2] [i_1] [i_0] [i_0])));
                        var_36 = var_2;
                        arr_32 [i_9] [i_0] [i_1] [i_0] = ((((min((arr_22 [i_0] [10] [i_3] [i_7] [4] [14] [i_0]), (((arr_15 [i_0] [i_1] [i_3 + 3]) ? (arr_5 [6]) : 19543))))) ? 18623 : -1));
                    }
                    arr_33 [i_3] &= ((-(!17)));
                }
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    var_37 -= (((var_11 < 65533) ? var_11 : (((arr_9 [i_1 + 1] [i_1 + 2]) ? (arr_9 [i_1 - 1] [i_1 - 1]) : 32))));
                    var_38 -= var_6;
                }
                for (int i_11 = 3; i_11 < 14;i_11 += 1)
                {
                    arr_38 [4] [i_1] [4] = var_12;
                    var_39 = (((!88) ? ((min((arr_34 [i_1 + 1] [i_1 + 1] [0] [i_11 + 1]), var_13))) : var_11));
                    arr_39 [i_0] [i_1] [i_3] [i_1] [i_0] = ((((!(arr_10 [i_11 + 1]))) || (!var_6)));
                }
            }
            for (int i_12 = 1; i_12 < 12;i_12 += 1) /* same iter space */
            {
                var_40 += var_14;
                var_41 = (((((25 ? 19047 : 65535))) ? (~var_12) : -13176));
            }
            arr_42 [10] [i_0] [i_0] = (((arr_3 [i_0] [i_0]) ? ((min(190, 36))) : (((arr_24 [i_1] [i_1] [7] [i_1] [i_1 + 2] [i_1 - 1]) ? -82 : var_0))));
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
        {
            var_42 = ((241 ? ((-var_13 ? 59124 : 133)) : ((-((min(173, -71)))))));
            var_43 |= ((-114 ? ((((min(var_5, 96))) ? var_7 : ((7293 ? -13 : -13)))) : (((((59111 ? var_15 : var_8))) ? 174 : (7291 && 65512)))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
        {
            arr_48 [i_14] [9] [i_0] &= (((var_2 + 2147483647) << (var_10 - 60)));
            var_44 = ((!(arr_11 [i_0])));
            arr_49 [i_0] [i_0] = (((arr_14 [i_0] [6] [i_14]) ? var_17 : -var_17));
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
        {

            for (int i_16 = 1; i_16 < 14;i_16 += 1)
            {

                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        var_45 &= (~59116);
                        arr_61 [13] [13] [i_0] = ((((min(172, 58243))) ? ((max((max(197, var_3)), (arr_40 [7] [5])))) : (((arr_21 [i_16 - 1]) ? (arr_15 [i_16] [i_16 - 1] [i_16 + 1]) : var_14))));
                        arr_62 [11] [i_18] [i_18] [i_18] |= (!7293);
                    }
                    var_46 += -1;
                    var_47 = 241;
                    var_48 = ((-(-120 / var_13)));
                    var_49 = ((+((var_13 ? (arr_54 [i_0] [i_16 - 1] [i_16 - 1]) : var_14))));
                }
                for (int i_19 = 1; i_19 < 14;i_19 += 1)
                {
                    var_50 = (max(var_50, 249));

                    for (int i_20 = 2; i_20 < 11;i_20 += 1)
                    {
                        var_51 = (((min(88, var_17))));
                        arr_68 [i_16] = (min((((((arr_55 [i_0] [i_15] [i_20]) || 65535)))), ((-16 ? 0 : 84))));
                        var_52 = min((max(127, (arr_15 [i_20 - 1] [i_16 - 1] [i_16]))), (((!(((var_2 ? var_13 : (arr_55 [i_0] [1] [9]))))))));
                        var_53 = arr_47 [4] [i_15];
                    }
                }
                arr_69 [i_0] = 110;
            }
            var_54 &= ((((152 << (58243 - 58231))) ^ 103));
            var_55 = 11802;
        }
        var_56 = (((arr_19 [14] [i_0] [i_0] [i_0] [i_0]) ? 99 : (242 ^ 4097)));
    }
    var_57 = 61429;
    #pragma endscop
}
