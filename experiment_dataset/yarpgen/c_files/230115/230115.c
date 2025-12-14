/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 -= (((((((var_5 ? var_16 : var_10))) ? var_16 : var_1)) << ((((var_18 - ((3597952733 ? var_16 : var_3)))) - 3708152127))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (max((((arr_3 [i_0] [i_0]) | var_0)), var_12));
        var_21 = min(((min((min((arr_0 [i_0]), (arr_2 [i_0] [i_0]))), 231))), (((arr_1 [i_0]) | var_2)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((!(arr_1 [2]))))));
        var_23 = (arr_1 [i_1]);

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_24 = (!var_2);
            var_25 = (((arr_10 [i_1] [i_1]) | (arr_5 [i_1])));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                var_26 = (max(var_26, (arr_8 [i_4])));
                var_27 = (var_7 ? var_10 : (arr_7 [i_1]));
                var_28 = (arr_15 [i_1] [i_3] [i_3]);
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_29 = (((((arr_3 [11] [i_3]) + 2147483647)) << (18446744073709551615 - 18446744073709551615)));
                            var_30 = (!var_8);
                        }
                    }
                }
                var_31 = ((((((arr_7 [i_1]) ? var_11 : var_6))) ? (arr_19 [i_1] [i_3] [i_4] [i_1] [i_3] [i_1]) : (arr_1 [i_1])));
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
            {
                var_32 = ((var_7 + (arr_5 [i_1])));

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        var_33 |= (arr_11 [12] [12] [i_8]);
                        arr_28 [i_1] [5] [i_1] [i_8] [5] [i_3] [11] = ((!(1936413502 > 97)));
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_34 = ((!(arr_24 [i_1])));
                        arr_33 [i_1] [i_1] [i_7] [10] [i_1] [i_1] = ((arr_3 [i_1] [i_3]) ? ((((arr_24 [i_1]) != (arr_25 [i_1] [i_1])))) : (arr_30 [i_3] [0] [8] [i_1] [8] [i_3]));
                        var_35 = -1;
                        arr_34 [i_1] [i_7] [i_1] = (var_13 ? (arr_16 [i_1] [11] [i_8] [i_8]) : (arr_9 [i_1] [i_3] [i_7]));
                    }
                    var_36 = (arr_9 [i_1] [i_3] [i_8]);
                    var_37 = (max(var_37, (arr_9 [12] [i_3] [i_3])));
                    var_38 -= ((2066240354 ? -2139335828 : 945498670));
                    arr_35 [i_7] |= ((((((arr_22 [i_1] [i_3] [15] [i_8]) - var_13))) ? 11 : -1388776280));
                }
                arr_36 [i_1] [i_3] [i_1] [i_1] = ((arr_25 [i_1] [i_1]) ? (arr_23 [i_1] [i_1] [1] [i_1]) : (arr_23 [i_1] [i_1] [7] [i_1]));
                arr_37 [i_1] [i_3] [i_3] = (((var_4 ? (arr_32 [i_1] [i_3] [i_3] [13] [i_7]) : var_10)));
            }
            for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
            {
                var_39 = ((!(arr_6 [i_3] [i_11])));

                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    var_40 = ((!(arr_16 [i_1] [i_3] [i_11] [i_12])));
                    var_41 = 33052;

                    for (int i_13 = 1; i_13 < 15;i_13 += 1) /* same iter space */
                    {
                        var_42 &= ((var_5 << (((arr_44 [i_13] [9] [i_12] [i_12] [i_13] [3]) - 11775443664448000515))));
                        arr_45 [i_13] [i_1] [i_11] [2] [i_1] = ((0 ? 945498680 : 2033920344));
                        arr_46 [i_1] [i_1] = var_15;
                    }
                    for (int i_14 = 1; i_14 < 15;i_14 += 1) /* same iter space */
                    {
                        var_43 ^= ((var_4 + (arr_25 [i_1] [i_11])));
                        var_44 += ((~((3702763430 ? (arr_19 [i_14] [i_3] [i_11] [i_12] [i_12] [i_11]) : (arr_20 [i_1] [i_3] [4] [i_12] [i_3])))));
                        var_45 = ((var_6 - (arr_8 [i_1])));
                        var_46 = (max(var_46, (((3702763426 ? (arr_32 [i_14 - 1] [i_14] [i_14 + 1] [i_14 + 1] [i_14 + 1]) : -69)))));
                        var_47 = (max(var_47, 24));
                    }
                }
                for (int i_15 = 4; i_15 < 15;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 16;i_16 += 1)
                    {
                        var_48 = (!10069);
                        arr_54 [i_15] [i_1] [i_11] = (arr_48 [i_15 - 4] [i_3] [i_11]);
                    }
                    var_49 = ((((var_7 << (((arr_17 [i_1] [i_3] [i_15] [i_15]) - 1302497977)))) != (-5424 > -1397101272)));

                    for (int i_17 = 0; i_17 < 16;i_17 += 1) /* same iter space */
                    {
                        arr_57 [i_1] [i_11] [i_17] [i_15] [i_3] [10] &= ((415773210 ? -4 : 2228726958));
                        var_50 = (arr_22 [i_15 - 2] [i_15 - 4] [i_15 - 3] [i_15 - 2]);
                        var_51 += ((var_3 ? ((((!(arr_6 [i_15] [i_17]))))) : (((arr_18 [i_1] [i_1] [i_1] [9]) | (arr_32 [i_15] [i_15] [i_15] [i_15 + 1] [2])))));
                    }
                    for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
                    {
                        var_52 = var_0;
                        var_53 = ((2228726958 < 945498654) ? (!var_15) : (arr_50 [i_15 - 4] [i_15 - 4] [i_1] [i_15 - 1] [i_15 - 3]));
                    }
                    for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
                    {
                        arr_64 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] |= ((415773210 ? ((var_18 ? (arr_2 [i_1] [i_3]) : (arr_24 [i_11]))) : var_10));
                        var_54 = ((!(-2147483647 - 1)));
                        var_55 = (arr_55 [i_1] [i_3] [i_11] [i_11] [i_1] [i_19] [i_19]);
                        var_56 = 415773220;
                        var_57 &= ((!(arr_56 [i_1] [i_3] [10] [i_15] [i_19] [i_19])));
                    }
                    var_58 = ((!(arr_47 [i_15 - 4] [2] [i_15 - 1] [i_15 - 2] [i_15])));
                }
                for (int i_20 = 1; i_20 < 14;i_20 += 1)
                {
                    var_59 = ((!(arr_44 [i_20 + 1] [i_20 + 2] [5] [i_20 + 2] [i_20 + 2] [i_20])));
                    var_60 = ((415773210 ? 2145132042 : ((-945498660 ? -117 : 592203885))));
                }
            }
            var_61 = (arr_51 [i_1] [i_1] [i_1]);
            var_62 = (arr_53 [i_1] [i_3]);
            var_63 = (((arr_26 [i_1] [i_1] [i_1] [i_3] [i_3] [i_3]) - var_11));
        }
        arr_68 [i_1] = ((!(arr_61 [i_1])));
    }
    #pragma endscop
}
