/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                arr_9 [i_2] [7] [i_0] [i_0] = (!0);
                arr_10 [7] = (((arr_5 [i_2]) && (arr_8 [i_1] [i_1 - 1] [i_2 - 3] [i_2 - 2])));
            }
            var_18 = ((min(((var_13 ? var_17 : 1)), (~1))));
            arr_11 [i_0] [18] [17] = max((((arr_8 [15] [i_1] [i_1] [i_1]) ? (arr_8 [i_0] [i_1 + 1] [i_1] [i_0]) : ((var_10 % (arr_2 [i_0]))))), ((((max((arr_8 [i_0] [i_0] [i_0] [i_0]), -1062654318)) > (arr_2 [i_0])))));
        }
        for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_19 = ((-(arr_15 [i_0] [i_0] [i_0])));
            arr_16 [i_3] = -1062654318;
            arr_17 [4] [i_0] [i_0] = ((((((arr_15 [i_0] [i_3] [i_0]) - var_15))) && (((-(arr_13 [i_3]))))));
        }
        arr_18 [i_0] [i_0] = (((((arr_7 [i_0] [i_0] [i_0] [i_0]) >> (((arr_12 [i_0] [i_0] [i_0]) - 215))))) ? ((((~(arr_7 [i_0] [20] [i_0] [i_0]))))) : ((~(((!(arr_4 [19])))))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 20;i_6 += 1)
            {
                {
                    var_20 = ((min(0, 213)));
                    var_21 = (min(var_21, (((!((min(var_1, (max((arr_5 [i_6]), -1062654318))))))))));
                    arr_28 [i_6] [i_6] [i_4] [i_4] = ((-(max(var_3, (!1)))));
                }
            }
        }

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {

                for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        var_22 = (((arr_31 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1]) > (arr_31 [i_4] [i_9 - 1] [i_10] [i_10])));
                        var_23 -= ((7 ? 1 : -6948));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_24 = (min(var_24, (arr_31 [i_7] [i_9 - 1] [i_8] [i_8])));
                        var_25 = (arr_34 [i_9 - 1]);
                        var_26 = (arr_20 [i_4]);
                        arr_39 [i_9] = (!(arr_14 [i_4] [i_4] [i_8]));
                        var_27 *= ((-(arr_38 [i_9] [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1])));
                    }
                    arr_40 [i_4] [i_7] [i_7] [i_7] &= min((((((((!(arr_31 [i_9] [i_8] [i_7] [i_4]))))) > (min(65535, var_8))))), (min(((min((arr_4 [i_4]), 1))), (min(1, 0)))));
                    var_28 = ((1 * (((arr_8 [i_9] [i_9] [i_9 - 1] [i_9]) / (arr_36 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9])))));
                }
                for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    var_29 *= ((~((~(arr_33 [i_12] [i_7] [i_7] [i_12 - 1])))));

                    for (int i_13 = 1; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        var_30 = ((((((((1410651247624066869 ? 0 : 18446744073709551615))) ? (arr_13 [i_13 + 1]) : (max((arr_46 [i_4] [i_7] [i_8] [i_12] [13]), var_14))))) ? var_5 : ((+(min((arr_29 [i_4] [4] [4]), (arr_6 [i_4] [9] [11])))))));
                        var_31 = min((arr_38 [i_7] [i_8] [7] [2] [i_12] [i_12 - 1] [i_12]), ((~(!var_15))));
                        arr_47 [i_12] = (((arr_20 [i_13]) ? (~var_2) : ((min(1, (min(65535, 1437675860)))))));
                        var_32 *= 3732084233;
                        arr_48 [i_4] [16] [5] [i_12 - 1] [i_12] [i_4] [i_8] &= ((!((min((arr_31 [i_8] [i_12 - 1] [i_12 - 1] [i_13]), ((min(3, 1))))))));
                    }
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 18;i_14 += 1) /* same iter space */
                    {
                        arr_52 [i_4] [i_4] [i_4] [1] [i_4] [i_4] |= 74;
                        arr_53 [i_4] [i_7] [i_7] [i_12] [i_12] [14] [i_14] = ((-((27671 ? (-2147483647 - 1) : 4294967295))));
                        var_33 = (!var_13);
                        var_34 = (arr_35 [i_4] [i_7] [i_4] [i_12] [i_12] [i_12] [i_7]);
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 18;i_15 += 1) /* same iter space */
                    {
                        var_35 = (max(var_35, 1));
                        var_36 = ((var_12 << (!1)));
                        var_37 = (arr_27 [i_15] [13] [i_7] [i_4]);
                        arr_56 [i_4] [i_7] [2] [i_4] [i_15] = ((~((((arr_44 [i_4] [i_7] [i_8] [i_12] [i_15]) < (arr_20 [i_7]))))));
                    }
                    for (int i_16 = 1; i_16 < 18;i_16 += 1) /* same iter space */
                    {
                        var_38 = (max(var_38, (arr_0 [i_7])));
                        var_39 &= (min((arr_45 [i_4] [i_12 - 1] [i_12] [i_16 + 1] [i_16] [i_7] [i_12 - 1]), 23863));
                    }
                    arr_59 [i_12] = (min((((1 ? 4294967275 : 25400))), var_11));
                }
                var_40 = ((-(max((251 > 5), ((255 ? (arr_49 [i_8] [i_7] [i_4] [i_4]) : var_4))))));
            }
            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 20;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        {
                            var_41 *= ((1 ? 32761 : (min((arr_31 [i_4] [1] [i_7] [i_4]), 9223372036854775794))));
                            arr_67 [i_19] [i_17] [i_18] [i_17] [i_17] [i_4] = (((((1 / ((~(arr_32 [i_7] [i_7] [i_7])))))) ? var_0 : (arr_36 [i_4] [i_18] [i_18 + 1] [7] [i_17])));
                        }
                    }
                }
                var_42 = ((!(((-(arr_42 [i_4] [i_7] [i_4] [i_4]))))));
                arr_68 [i_4] [i_7] [i_17] = -9223372036854775796;
            }
            var_43 = (arr_60 [4] [4] [i_7] [i_7]);
            var_44 |= ((((min(1, 101)))));
            var_45 -= (max((((0 >> (((((-2147483647 - 1) - -2147483641)) + 23))))), (min((arr_25 [i_4] [i_7]), -0))));
        }
        arr_69 [i_4] = ((((((((arr_55 [i_4] [i_4]) == 1))))) - ((+(((arr_37 [i_4] [i_4] [i_4]) % (arr_29 [i_4] [i_4] [i_4])))))));
    }
    var_46 = (min(var_7, (min(var_13, (max(var_12, -1))))));
    var_47 = -1062654302;
    #pragma endscop
}
