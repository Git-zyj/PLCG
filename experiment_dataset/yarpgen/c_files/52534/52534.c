/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_10;

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_18 = 63;
            var_19 |= (max(((((((362611996 << (1510448210 - 1510448208)))) || (((29248 ? (arr_4 [i_0 + 1]) : (arr_4 [i_1]))))))), var_4));
            var_20 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) > (((arr_0 [i_0]) & var_8))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_21 = (((max((arr_8 [i_0 + 2] [i_0 + 1]), (arr_8 [i_0 - 1] [i_0 + 1]))) - 1));
            var_22 = (((((arr_4 [i_0 + 1]) - (arr_4 [i_0 + 1]))) - ((1 + (arr_4 [i_0 + 2])))));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_23 = (arr_6 [i_0] [i_0]);
            var_24 = (((arr_5 [i_0] [i_0 + 2] [i_0]) && ((max(var_13, (arr_5 [i_0] [i_0 + 2] [11]))))));
            var_25 = arr_0 [i_0];
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_26 = ((((~(arr_6 [i_0 + 1] [i_0]))) | (arr_6 [i_0 - 1] [i_0])));
                var_27 = (((max(0, (((arr_8 [i_5] [i_5]) ? 1 : (arr_9 [i_0] [i_5]))))) * (arr_7 [i_5])));
                var_28 = (max((((!(((var_4 ? var_5 : var_5)))))), (((arr_12 [i_0 + 1]) ? (arr_12 [i_0 + 1]) : (-9223372036854775807 - 1)))));
                var_29 = (~var_1);
                var_30 = -4702;
            }
            for (int i_6 = 4; i_6 < 18;i_6 += 1)
            {
                var_31 &= ((((arr_15 [i_0] [i_0 - 1] [i_0 + 1]) - (arr_15 [i_6 - 1] [i_4] [i_6 - 4]))));
                var_32 = (min((arr_12 [i_0 + 1]), ((((-551148530 ^ 682579558613262239) ? (arr_16 [i_0 + 2]) : (arr_2 [i_0] [i_0]))))));
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_33 = ((+((((((arr_22 [i_0] [i_4] [i_4] [i_4] [i_9 + 2]) == (arr_7 [i_0])))) * (arr_25 [i_0 - 1] [i_4] [i_9 - 1] [i_7] [i_7])))));
                            var_34 = 551148538;
                            var_35 = (max(6510, var_12));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_36 = (((!2147483647) <= (arr_11 [i_0 + 1] [i_0 + 2])));
                            var_37 = (max(((17489 ? (arr_8 [i_11] [i_12]) : var_8)), (((arr_8 [i_0 + 2] [i_11]) ? var_13 : (arr_8 [i_10] [i_12])))));
                            var_38 |= (var_2 - 44993);
                            var_39 = 1073741792;
                        }
                    }
                }
            }
        }
        var_40 = var_6;
    }
    for (int i_13 = 1; i_13 < 19;i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_14 = 3; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 18;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 20;i_17 += 1)
                        {
                            {
                                var_41 = ((((arr_37 [i_13 + 2]) ? (arr_37 [i_13 + 2]) : (arr_29 [i_13] [i_13]))) / ((91 * (arr_29 [i_13 + 2] [i_13]))));
                                var_42 = (-69 - var_12);
                            }
                        }
                    }
                    var_43 = (((((arr_5 [i_13] [i_14 + 1] [i_15]) <= (arr_24 [i_13 - 1] [i_13 - 1]))) ? (-551148538 > -25169) : ((-(arr_5 [i_13] [i_13] [i_13])))));
                    var_44 *= (arr_46 [i_13 + 2] [i_15] [18] [i_15] [i_14] [i_13 + 1] [i_13]);
                }
            }
        }
        var_45 = (max((!-var_15), (((arr_20 [i_13 + 1] [i_13] [i_13] [i_13]) - (arr_29 [i_13 + 2] [i_13])))));
    }
    /* vectorizable */
    for (int i_18 = 1; i_18 < 19;i_18 += 1) /* same iter space */
    {
        var_46 = var_12;
        var_47 = ((arr_12 [i_18 + 1]) | (arr_5 [12] [i_18 + 2] [12]));
    }
    for (int i_19 = 1; i_19 < 19;i_19 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 21;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 21;i_21 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 1; i_22 < 17;i_22 += 1)
                    {
                        for (int i_23 = 4; i_23 < 20;i_23 += 1)
                        {
                            {
                                var_48 = (44531 / -523702472);
                                var_49 = var_0;
                                var_50 = (((((arr_60 [i_23] [i_22] [i_23 - 1] [i_21] [i_22] [i_21]) >= (arr_60 [i_23 - 2] [i_22] [i_23 - 1] [i_22] [i_22] [i_21]))) && var_6));
                                var_51 = var_12;
                                var_52 = (~(((arr_24 [i_23 + 1] [i_21]) ^ (arr_24 [i_23 - 3] [i_20]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_24 = 1; i_24 < 18;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 21;i_25 += 1)
                        {
                            {
                                var_53 = (arr_29 [i_20] [i_25]);
                                var_54 = ((((min(18446744073709551615, (arr_6 [i_19 + 1] [i_25])))) && (((((arr_35 [i_25] [i_20]) && 165)) && ((!(arr_18 [i_20] [i_20] [i_20] [i_20])))))));
                            }
                        }
                    }
                }
            }
        }
        var_55 += (99 || var_16);
    }

    for (int i_26 = 1; i_26 < 15;i_26 += 1)
    {
        var_56 = (551148544 ? (min((arr_65 [i_26]), var_6)) : (((var_3 != (arr_65 [i_26 - 1])))));
        var_57 *= ((((((!(-2147483647 - 1))))) / (4423328284191445898 - 1073741792)));
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 17;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 17;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 17;i_29 += 1)
                {
                    {
                        var_58 = 107;
                        var_59 = (min(((~(min(7529005381621546748, var_3)))), ((((((arr_38 [i_26]) ? (arr_5 [i_26] [i_27] [i_28]) : 1)) | (max(var_6, (arr_34 [i_26 - 1]))))))));
                    }
                }
            }
        }
    }

    for (int i_30 = 0; i_30 < 14;i_30 += 1) /* same iter space */
    {
        var_60 = (min(-var_10, ((var_7 - (arr_48 [i_30])))));
        var_61 *= (~-89);
    }
    for (int i_31 = 0; i_31 < 14;i_31 += 1) /* same iter space */
    {
        var_62 = ((-(min(-4423328284191445899, (min(var_11, 1023))))));
        var_63 |= (-2147483647 - 1);
    }
    #pragma endscop
}
