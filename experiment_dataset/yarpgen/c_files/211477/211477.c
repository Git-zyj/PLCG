/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [1] &= (((((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 0))) ? var_18 : (arr_0 [i_0] [i_0])))) ? (((~(max((arr_3 [i_0] [i_0]), 3037830774))))) : (arr_0 [i_0] [i_0])));
        var_19 = (((max((((arr_2 [i_0]) * var_12)), (((1257136522 ? 1257136519 : 0))))) >= ((min(((1257136526 ? 470088192 : (arr_0 [i_0] [i_0]))), (15 << 1))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (!18321324894759973987);
        var_20 *= -1;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                {
                    var_21 = (max(var_21, (((~(arr_12 [i_2] [i_3] [i_4]))))));
                    var_22 = 1;
                    var_23 = var_2;
                    arr_16 [i_2] [i_3] [i_2] = 1;
                    var_24 = (max(var_24, (((var_1 ? 3933870681 : var_14)))));
                }
            }
        }
        var_25 = (((((arr_2 [i_2]) && 8941)) ? (arr_5 [i_2] [i_2]) : (arr_14 [i_2])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_26 = ((~(min((min(3913129764, 13835058055282163712)), (min((arr_17 [i_5] [i_5]), (arr_6 [i_5])))))));
        var_27 &= ((arr_5 [i_5] [i_5]) ^ (((arr_2 [i_5]) ? ((min(1, var_4))) : (~18321324894759973987))));
        var_28 = (max((min(18321324894759973987, (((1 && (arr_6 [i_5])))))), (arr_10 [2] [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_29 = arr_9 [i_9];
                                var_30 = ((!((min(6851806347671135458, ((2490202637 ? 1 : 15989911234394422180)))))));
                                var_31 = (((((((arr_10 [i_9] [i_9]) / 1257136521)) + 9582))) + var_14);
                            }
                        }
                    }
                    var_32 = 1722124801;
                    var_33 = (min(var_33, (((!(((min((arr_22 [i_5] [i_6] [i_6]), 1)) < (var_0 < 4294967295))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 11;i_11 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 10;i_12 += 1)
                    {
                        arr_35 [i_12] [i_10] [i_12] = arr_11 [i_10];
                        arr_36 [i_5] [i_5] [i_10] [i_10] [i_10] = (arr_21 [i_10] [i_10] [i_10]);
                        var_34 = (arr_15 [i_12 - 1] [i_11 - 1] [i_10 + 1]);
                        var_35 = (((~(arr_11 [i_10]))));
                    }
                    for (int i_13 = 2; i_13 < 10;i_13 += 1)
                    {
                        var_36 = (min((!3424760508), var_18));
                        var_37 = 1;
                        arr_39 [i_5] [i_5] [i_5] [i_13] [i_11] [i_13] &= ((((((!(arr_15 [i_5] [i_11] [i_13]))))) + ((1 - (431341704 + 4294967287)))));
                    }
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        var_38 = (arr_42 [i_5] [i_5] [i_5] [i_5]);
                        arr_44 [i_5] [i_10] [i_11] [1] [i_10] [i_14] |= 2009245633;
                        var_39 = (min(var_39, ((min((!3863625604), (((arr_20 [i_10] [i_10 - 1] [i_10 - 1]) | 31)))))));
                        arr_45 [i_5] [i_5] [i_10] [i_10] [i_11] [i_14] = ((0 || ((max(var_14, (min(524287, 4294967266)))))));
                    }
                    /* vectorizable */
                    for (int i_15 = 3; i_15 < 11;i_15 += 1)
                    {
                        arr_48 [i_5] [i_10] [i_11] [4] [i_5] [4] |= (((((6042406764688946235 & (arr_29 [i_11] [i_15])))) ? 1 : ((var_18 ? (arr_31 [i_11] [i_11] [i_11] [i_11]) : var_2))));

                        for (int i_16 = 0; i_16 < 12;i_16 += 1)
                        {
                            arr_52 [i_5] [i_5] [i_10] = -var_7;
                            var_40 = (2326218886037668204 || 431341704);
                            var_41 |= (arr_33 [i_10] [i_10 + 1] [i_11] [i_10] [i_15 + 1]);
                            var_42 = (arr_33 [i_5] [i_5] [i_5] [i_15] [i_16]);
                            var_43 = (min(var_43, (((((-(arr_46 [i_5] [i_10] [i_5] [10]))) * 1772102365)))));
                        }
                    }
                    var_44 = (max(var_44, 6042406764688946235));
                    var_45 = (arr_24 [i_5] [i_10] [i_11] [i_10]);
                }
            }
        }
    }
    var_46 ^= (min((var_4 != var_4), (((((var_0 ? 3863625588 : var_0))) ? ((2326218886037668204 >> (4294967284 - 4294967247))) : (-63 >= 1)))));
    #pragma endscop
}
