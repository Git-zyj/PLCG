/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((~(min((arr_7 [i_1] [i_1] [i_1 - 1] [i_1 + 1]), (min((arr_12 [i_2] [i_3] [i_2]), (arr_10 [i_0])))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_4] = (+-12945671036884961824);
                            }
                        }
                    }
                    arr_14 [i_0] [i_1 - 2] [i_0] [i_2] = max(((~(arr_8 [i_2 + 2] [i_2 - 1] [i_1 - 1] [i_1 + 1]))), (arr_8 [i_2 + 2] [i_2 + 2] [i_1 - 1] [i_1 - 1]));
                    var_20 = var_3;
                    arr_15 [i_2 - 1] [i_2] [i_2] = (max((arr_9 [i_1] [i_0]), (((!((max(234903040396423981, 18211841033313127635))))))));
                }
            }
        }
    }
    var_21 = (min(var_6, -23));

    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_22 = (min(var_22, var_14));
        var_23 = ((((max((arr_5 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5]), (((arr_4 [i_5] [i_5]) ? (arr_10 [24]) : var_10))))) ? (min((((arr_3 [i_5 + 1] [i_5 - 1]) ? var_11 : var_4)), (!640009861))) : (min(-var_2, 3856911915))));

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_24 = (min(((((max(var_6, var_16))) ? ((~(arr_12 [i_5] [i_6] [i_6]))) : (max((arr_4 [i_5] [i_6]), var_4)))), ((~(((arr_18 [i_5 + 1]) ? (arr_7 [i_5] [i_6] [i_6] [i_5 + 1]) : (arr_12 [i_6] [i_6] [i_5])))))));
            var_25 = (((((((max(234903040396423988, 234903040396423981))) ? (((arr_6 [20] [i_6] [i_6]) ? var_9 : (arr_16 [i_5]))) : ((max((arr_17 [i_5]), (arr_11 [18] [i_5] [i_5] [i_5] [i_5]))))))) ? ((min((arr_9 [i_5] [i_6]), (arr_18 [i_6])))) : (max((((arr_8 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]) ? var_18 : (arr_12 [i_6] [i_6] [i_6]))), (~18211841033313127659)))));
            var_26 *= ((-((~(arr_1 [i_5 - 1])))));

            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_27 = (min(((min((arr_1 [i_5 - 1]), (min((arr_2 [i_6] [i_6]), (arr_0 [i_5] [i_7])))))), (arr_12 [i_5 + 1] [i_6] [i_7])));
                arr_23 [i_5] [i_5] [i_7] = (((((-(!var_15)))) / ((var_15 ? (min(var_16, (arr_0 [i_5 + 1] [i_5 + 1]))) : (!var_3)))));
                var_28 |= (arr_4 [i_7] [i_6]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_31 [i_7] [i_6] [i_7] [i_8] [i_5] [i_8] = (arr_3 [i_6] [i_6]);
                            var_29 *= ((-18211841033313127634 ? (((~((max(var_17, var_18)))))) : (max(var_3, (max(var_0, (arr_5 [i_5] [i_6] [i_7] [i_8])))))));
                            arr_32 [i_8] [i_8] = (((min(((~(arr_7 [i_5] [i_5] [i_5] [i_5]))), var_1)) / (min(((max((arr_5 [i_5] [i_6] [i_5] [i_8]), var_1))), (min(var_13, var_6))))));
                            var_30 = (min((((((arr_0 [i_5 - 1] [i_7]) ? (arr_3 [i_5] [i_6]) : var_2)) >> (((~var_18) + 2613)))), (~var_8)));
                            arr_33 [i_8] = var_0;
                        }
                    }
                }
                arr_34 [i_5 + 1] = var_5;
            }
        }
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        arr_37 [i_10] = var_16;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_31 = ((-(arr_41 [i_13])));
                        var_32 = (arr_1 [i_13]);
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        arr_49 [i_14] = ((!((!(arr_11 [i_12] [i_11] [i_12] [i_12] [i_14])))));
                        var_33 ^= (max((max(((1439930778 ? 2019261502336539423 : 12839116008395922190)), (arr_36 [i_10]))), (max((min((arr_46 [i_10] [i_12] [i_12] [i_14] [i_12]), (arr_1 [i_10]))), ((max(31763, 4227858432)))))));
                    }
                    var_34 = (((arr_2 [i_10] [i_11]) ? (min(-var_0, (((var_1 ? (arr_39 [i_11] [i_11] [i_12]) : var_4))))) : ((max(((min((arr_2 [i_10] [i_11]), var_3))), (min((arr_40 [i_11] [i_12]), var_12)))))));
                    var_35 *= ((((max(((((arr_35 [i_10]) || var_15))), (((arr_39 [i_10] [i_11] [i_12]) ? (arr_0 [i_11] [i_11]) : (arr_7 [i_10] [i_11] [i_10] [i_12])))))) ? (max((arr_45 [i_10] [i_10] [i_10] [i_10] [i_10]), ((max(var_17, (arr_8 [i_10] [i_11] [i_12] [i_10])))))) : (min(18446744073709551615, 22781))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                {
                    arr_54 [i_15] = ((1063535188482337855 ? ((+((max((arr_9 [i_15] [i_16]), 33772))))) : (((!((max(var_15, var_4))))))));
                    var_36 = (((max(-var_16, (0 > 2147483647)))) - (min((~1232112310), (min(17383208885227213761, 10594782478124279650)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 14;i_17 += 1)
    {
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            for (int i_19 = 3; i_19 < 12;i_19 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_20 = 2; i_20 < 10;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 14;i_21 += 1)
                        {
                            {
                                var_37 -= (!-32755);
                                var_38 = (arr_29 [i_19 + 1] [i_19 - 3] [i_20] [i_20] [i_20 - 1]);
                            }
                        }
                    }
                    var_39 ^= ((-(arr_41 [i_19 + 2])));
                }
            }
        }
        var_40 = ((~(arr_45 [i_17] [i_17] [i_17] [i_17] [i_17])));
        var_41 = (min(var_41, ((((arr_57 [i_17]) | (arr_7 [i_17] [i_17] [i_17] [i_17]))))));
        arr_68 [i_17] = (((arr_27 [10]) ? var_15 : (arr_27 [6])));
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 15;i_22 += 1)
    {
        var_42 *= (-(arr_41 [i_22]));
        arr_73 [i_22] = (var_10 * -var_16);
        var_43 = var_7;
    }
    #pragma endscop
}
