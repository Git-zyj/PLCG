/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_15 = (172 < 18446744073709551615);
        arr_4 [i_0] [i_0] = var_2;
        var_16 |= ((-(arr_3 [i_0 + 4])));
        var_17 = (!18446744073709551609);
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_18 = ((-(((arr_7 [i_1 + 4]) ? (arr_6 [i_1 + 3]) : ((var_8 ? (arr_2 [i_1 + 1] [i_1]) : var_14))))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_19 &= ((var_11 ? var_13 : 2));
            arr_11 [i_1] = (1 & 70);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_20 = ((var_14 > (arr_1 [i_1 + 2])));
            var_21 = (((arr_7 [i_1 + 1]) ? -30012 : 30012));

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_22 = (max(var_22, (((70 ? 182 : 4439631421398357959)))));
                var_23 = ((-(arr_12 [i_1 + 3] [i_1 - 1])));
                var_24 |= var_4;
                var_25 = (min(var_25, (((((!(arr_0 [4]))) && (arr_1 [i_1]))))));
            }
            arr_17 [i_3] [2] = var_8;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_24 [i_1] [i_3] [i_5] = (!-1342858326943805164);
                        var_26 = (arr_14 [11]);
                        var_27 ^= (((arr_5 [i_1]) ? 134217712 : var_9));
                    }
                }
            }
        }
        for (int i_7 = 4; i_7 < 17;i_7 += 1) /* same iter space */
        {
            var_28 = ((((max(var_13, (arr_26 [1]))))) ? var_11 : (((arr_7 [i_7 - 4]) ? 1362171838 : (max(var_4, (arr_19 [i_1] [i_7] [0] [i_7]))))));
            arr_29 [i_1 + 1] [i_1] = ((18446744073709551605 ? (((max(155, var_7)))) : ((-(min(183429090, var_9))))));
        }
        for (int i_8 = 4; i_8 < 17;i_8 += 1) /* same iter space */
        {
            arr_32 [i_8] [i_8] = ((!((((arr_0 [i_8]) ? (min((arr_2 [i_1] [i_8 + 2]), 11881760704341724175)) : (arr_12 [i_8 + 2] [i_8 - 3]))))));
            var_29 = (((arr_2 [i_8 - 3] [i_8]) ? var_13 : ((min((arr_2 [i_8 - 4] [i_8]), (arr_2 [i_8 + 3] [i_8]))))));

            for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    var_30 ^= 4410775221886246418;
                    var_31 -= ((var_14 ? (arr_30 [i_1 + 3] [i_8] [i_8 + 2]) : 18446744073709551607));
                    var_32 = 6545052454095378063;
                    var_33 = 4721197995910352337;
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    var_34 = (!((!((((arr_36 [i_11] [1] [i_8] [i_8] [1] [i_1]) ? var_1 : 1023))))));
                    var_35 = (max(402653184, 183429098));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    var_36 = var_4;
                    var_37 = ((!((((arr_27 [i_8 - 1] [i_9] [i_12]) ? (arr_27 [i_8] [i_9] [i_12]) : var_3)))));
                    var_38 = (arr_5 [i_1]);
                    var_39 = (var_14 && 562949953421311);
                    var_40 = (((arr_2 [i_1 + 1] [i_8 - 3]) ? (arr_2 [i_1 + 1] [i_8 - 3]) : (arr_2 [i_1 + 1] [i_8 - 3])));
                }

                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    var_41 = (max(var_41, (-2694109546494370681 ^ 29934)));
                    var_42 = (((arr_44 [i_8 - 1] [i_8 - 1]) ^ (((((1 ? -2729 : 7821352060788336148))) ? 8216540322914384400 : var_3))));
                    var_43 ^= ((min(var_0, var_3)));

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                    {
                        arr_49 [i_14] [10] [i_1] |= (((arr_48 [2] [2] [i_8 + 3] [i_9] [i_9]) ? var_14 : (arr_48 [8] [8] [i_8 + 2] [i_14] [i_14])));
                        var_44 += ((var_5 ? (((arr_45 [i_1] [i_1]) ? 90234195 : var_13)) : 1));
                        var_45 = ((var_2 ? (arr_43 [i_1] [i_1 - 1] [i_1 - 1] [i_1]) : (arr_43 [i_1] [i_1] [i_1 + 1] [i_14])));
                    }
                    for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                    {
                        var_46 = var_7;
                        var_47 = (max(var_47, ((max((((((!(arr_9 [i_1])))) * (!17382301710156581694))), var_5)))));
                    }

                    /* vectorizable */
                    for (int i_16 = 3; i_16 < 19;i_16 += 1)
                    {
                        var_48 = (arr_43 [1] [1] [12] [1]);
                        var_49 = (arr_5 [i_9]);
                        var_50 = (min(var_50, ((((arr_37 [i_1] [i_1] [11] [i_1] [i_1] [i_1 + 2]) ? (arr_38 [i_13 + 2] [i_8 + 3] [i_1 - 1] [i_13] [3] [i_9]) : (arr_37 [i_1] [i_1] [9] [9] [i_1] [i_1 + 3]))))));
                        var_51 = ((~((~(arr_36 [i_1] [i_1] [i_1] [i_9] [i_13] [i_16 + 1])))));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 0;i_17 += 1)
                    {
                        var_52 = ((1280736117661721509 ? (arr_38 [i_8 + 2] [i_8 + 2] [i_9] [i_13] [i_17] [i_17]) : (arr_38 [i_8 + 2] [1] [i_9] [i_13] [i_17] [7])));
                        var_53 = var_12;
                    }
                    for (int i_18 = 4; i_18 < 17;i_18 += 1)
                    {
                        var_54 = (max((max(var_12, var_8)), (arr_44 [i_13 - 1] [i_1 + 3])));
                        arr_61 [i_1] [i_8 + 2] [4] [i_9] [i_8] [i_13] [i_18] = max(((((var_7 ? var_2 : 27841)) + (arr_53 [i_1] [i_8]))), (((arr_38 [i_9] [i_13 + 1] [i_18 - 3] [i_8 - 3] [i_18 + 2] [i_1 + 3]) ? 1 : (arr_38 [i_1] [i_13 - 1] [i_18 + 2] [i_8 - 2] [1] [i_1 + 2]))));
                        var_55 = max((max(((max(0, var_12))), -var_12)), (arr_58 [i_1 + 4] [i_1 + 4] [i_1] [7] [i_1]));
                        arr_62 [i_8] [i_8] [i_8] = ((var_11 ? (arr_51 [i_1] [i_9] [i_9] [4] [i_18] [i_8] [i_18 + 2]) : (arr_48 [i_8] [i_8] [i_8 - 2] [i_13] [i_18])));
                        var_56 = ((-(max((((var_2 ? var_1 : var_14))), (max((arr_47 [i_9] [i_18 + 2] [i_8] [i_8] [i_8] [i_1]), 2305843009213693951))))));
                    }
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    var_57 = (((arr_57 [i_8] [i_8 + 1]) ? (arr_57 [i_8] [i_8 - 3]) : (arr_57 [i_8] [i_8 - 1])));
                    arr_66 [i_1] [i_8] [i_9] = (!0);
                    var_58 = (min(var_58, (((~(16140901064495857664 || var_12))))));
                }
            }
            for (int i_20 = 0; i_20 < 20;i_20 += 1) /* same iter space */
            {

                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {
                    var_59 = (arr_0 [i_8]);
                    arr_74 [3] [i_8] [3] [3] = (!(~var_4));
                }
                var_60 = var_8;
                var_61 = (max(((max(((((arr_60 [i_20] [i_20] [i_20] [i_1] [i_8] [i_1]) | var_10))), (min(-4400201949728124463, var_13))))), ((17150319195715335567 / (arr_65 [i_8 + 1] [i_1 + 3] [i_20] [i_20])))));
                arr_75 [i_20] [4] [4] [i_1] |= ((((max(-30011, (arr_70 [i_8 - 2] [i_1])))) ? (max(var_13, (arr_54 [i_8 - 2] [i_8] [0] [i_1] [i_8]))) : var_6));
            }
            var_62 = ((1 ? -8216540322914384386 : -1823630619));
            var_63 = ((((75 ? ((3 ? (arr_42 [i_1] [i_1] [i_1] [i_8]) : 0)) : 1)) - (((((arr_51 [i_1] [i_1] [i_1] [i_1 + 3] [i_1 + 1] [i_1] [i_8 + 3]) < (arr_9 [i_1])))))));
        }
        var_64 = (((arr_59 [i_1 + 2] [i_1 + 2] [i_1 + 4] [i_1 + 2] [i_1 - 1]) - (((arr_1 [i_1 + 1]) ? (arr_63 [i_1 + 3] [0] [i_1] [1]) : (arr_59 [i_1 + 4] [i_1 + 4] [i_1 + 1] [i_1 + 3] [i_1 + 4])))));
    }
    /* vectorizable */
    for (int i_22 = 1; i_22 < 16;i_22 += 1) /* same iter space */
    {
        var_65 = 1;
        var_66 = ((~(arr_39 [16])));
        var_67 = var_2;
    }
    /* LoopNest 3 */
    for (int i_23 = 2; i_23 < 16;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 1;i_24 += 1)
        {
            for (int i_25 = 2; i_25 < 14;i_25 += 1)
            {
                {
                    var_68 |= 1;
                    arr_86 [0] [0] [0] [0] = (arr_33 [10]);
                    arr_87 [i_23 + 1] [1] [i_25] = 25335;
                    var_69 = (min(((min((arr_83 [i_24] [i_25]), var_7))), (4 * var_1)));
                    arr_88 [i_25] [i_24] [i_24] [i_23] |= arr_0 [4];
                }
            }
        }
    }
    #pragma endscop
}
