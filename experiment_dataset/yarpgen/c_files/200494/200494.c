/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = var_6;
                var_12 = ((((var_10 != (arr_3 [i_0] [i_0] [i_0]))) ? (((var_5 && ((((arr_3 [i_0] [i_0] [10]) ? 0 : 53)))))) : ((~(1669970866 || 7)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (min((53 == 4294967295), (0 | var_9)))));
                            var_14 += ((-1429881681 > (~63273)));
                        }
                    }
                }
            }
        }
    }
    var_15 = (((max(((max(53, var_2)), (min(var_1, var_3)))))));

    /* vectorizable */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_16 = (max(var_16, (arr_9 [i_4] [i_4])));
        arr_13 [9] [i_4 + 1] |= ((4294967295 >> (((arr_3 [i_4] [4] [i_4 - 1]) - 45571))));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_16 [i_5] [i_5] = (((-(-12 * -53))));
        var_17 = (max(((min(var_4, var_4))), -var_5));
        var_18 = 2610987535621198553;
        var_19 = (max(var_19, (arr_15 [i_5])));
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            var_20 = arr_19 [i_6];
            var_21 = ((arr_18 [i_6]) + (((arr_21 [i_6] [5]) | (arr_19 [i_7]))));

            for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
            {
                arr_25 [8] [0] [i_6] [8] |= ((var_10 ? (((var_0 ? (arr_19 [0]) : (arr_21 [4] [i_8])))) : -2610987535621198553));
                var_22 = ((652624010 ? 0 : -63));
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
            {
                arr_28 [i_7] [i_7] [i_6] = -1;
                arr_29 [i_7] [i_7] [i_7] [i_7] = (((var_6 + (arr_19 [i_7 - 2]))));

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    arr_32 [i_7] [i_7] = (((var_2 ? 4294967295 : (arr_30 [i_7] [i_9]))));
                    arr_33 [i_6] [i_6 - 2] [i_6] [i_7] = var_2;
                    arr_34 [i_6] [i_7] [i_10] = (((arr_24 [i_6] [i_6 + 3] [i_9] [i_7]) << (var_7 - 498037695)));
                    var_23 = (min(var_23, 0));
                }
            }
        }
        arr_35 [i_6] [i_6] = ((arr_22 [i_6 + 3] [i_6 - 2]) && (-9223372036854775807 - 1));
        arr_36 [i_6 - 2] [i_6] = ((((min((((arr_24 [i_6] [i_6] [i_6] [6]) ? -1 : var_3)), (arr_15 [i_6 + 2])))) ? ((~(var_5 | 9919477983849416597))) : (!207)));
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_24 = ((53 ? 0 : 0));
        arr_39 [i_11] = (((~var_5) ? ((min(62, (!10)))) : (var_10 || var_5)));

        for (int i_12 = 1; i_12 < 24;i_12 += 1)
        {
            arr_43 [i_11] &= ((((max((!var_4), (arr_37 [i_12] [i_12])))) ? var_0 : ((((var_10 ? 25901 : -63)) + (arr_38 [i_12 - 1] [i_12])))));
            var_25 = max(((((arr_38 [i_11] [13]) > (max(2206291, 9))))), ((var_9 ? (arr_41 [i_11] [i_12 + 1]) : (max((arr_40 [i_11] [i_11]), var_6)))));
        }
        for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    {
                        var_26 -= 1;
                        arr_52 [i_11] &= (((((max(1, 53)))) * (min(0, 0))));
                    }
                }
            }
            var_27 = ((min(995844581, (-2147483647 - 1))));
            var_28 = (max(var_28, ((min(var_1, ((11 ? var_4 : (max(-9195684532282991175, var_3)))))))));
            var_29 = ((((((arr_44 [i_13 + 1] [23]) ? 4294967295 : ((27717 ? (arr_45 [i_13] [i_11] [i_11]) : var_10))))) ? 2044927448 : 53));
            var_30 = (max(var_30, ((max((!-12), var_4)))));
        }
        for (int i_16 = 0; i_16 < 0;i_16 += 1) /* same iter space */
        {
            var_31 += (((!var_9) & (((!(((2743854432 ? var_3 : (arr_37 [i_11] [i_11])))))))));
            var_32 = (+((((min((arr_45 [i_11] [i_11] [i_11]), 1))) ? ((max(var_0, var_8))) : var_6)));
        }
        for (int i_17 = 0; i_17 < 0;i_17 += 1) /* same iter space */
        {
            var_33 = (max(var_33, (((57 ? 0 : -5733934426800279746)))));
            arr_59 [i_11] [i_11] [i_17] |= (max((((((var_2 ? var_1 : var_1)) != (((var_7 != (arr_49 [i_11] [i_11] [18] [i_11]))))))), (arr_56 [i_11])));
        }
        var_34 += (((((min(var_4, 0))) / (arr_44 [i_11] [i_11]))));
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 20;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 20;i_19 += 1)
        {
            {
                var_35 = (min(var_35, (!var_1)));
                var_36 = (min(var_36, (((min(((-4132956308601166941 ? var_3 : (arr_63 [0] [0]))), ((var_0 ? -2610987535621198553 : (arr_53 [6])))))))));
            }
        }
    }
    #pragma endscop
}
