/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_0));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] |= ((1 ? 1 : -1682583992));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = ((((((((var_14 ? -56746025 : var_7))) ? (arr_2 [i_0] [i_1]) : (((1 ? (arr_5 [i_1]) : 0)))))) ? 982385753 : var_1));
            var_17 = (((((!((!(arr_5 [i_0])))))) >> ((((-982385745 ? ((992673671 ? 770007190708267402 : 18)) : var_7)) - 770007190708267380))));
            var_18 = (arr_4 [i_0] [i_0] [i_1]);
            var_19 = (max((((982385744 != (min(var_8, (arr_5 [i_0])))))), (((((var_9 ? (arr_5 [i_1]) : var_5))) ? (min(var_5, (arr_2 [i_0] [i_1]))) : (var_12 * var_11)))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    {
                        var_20 = ((min(4095, (arr_6 [i_4 - 2] [i_4]))));
                        arr_14 [i_0] [i_2] [i_3] [i_4 - 1] = (((((235 ? var_1 : (arr_10 [i_2] [i_3] [i_4 + 1] [i_3])))) | (max((arr_11 [i_4 - 2] [i_3] [i_0]), ((var_6 ? 992673679 : var_9))))));
                        var_21 = (((((arr_6 [i_3] [i_3]) - (arr_6 [i_2] [i_3])))) ? (min(var_10, var_4)) : (var_11 - 982385758));
                    }
                }
            }
            var_22 = (max(var_22, ((((arr_10 [i_0] [i_2] [i_0] [i_0]) == ((6917529027641081856 * (arr_8 [i_0] [8]))))))));
            var_23 = (((!(arr_5 [i_2]))));
        }
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            arr_18 [i_5] [i_0] [i_5] = (((((var_9 * ((min(var_3, var_0)))))) ? (((-(1 && 3740852875)))) : ((1 ? var_0 : var_5))));
            var_24 = (min((min((arr_8 [i_5 + 2] [i_0]), (arr_8 [i_5 + 1] [8]))), 32639));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_21 [i_6] [i_0] = (min((arr_5 [i_0]), (arr_6 [i_0] [i_0])));
            var_25 = (min(61414, (((var_7 < (arr_6 [i_0] [i_6]))))));
            var_26 = ((((3302293622 ? -982385751 : var_5)) != ((((!1) ? 399150773 : (arr_0 [i_6]))))));
        }
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_27 = 216;
            var_28 = ((((((var_13 ? 1143914305352105984 : 0))) ? (5059497932293897183 | var_0) : (((max(237, var_11)))))));
            var_29 *= ((((!(arr_22 [i_7] [i_8]))) ? ((((arr_16 [i_7] [i_8] [i_7]) ? var_13 : var_1))) : ((-var_10 | ((var_0 ? (arr_10 [i_7] [i_7] [i_7] [i_7]) : var_2))))));
            arr_27 [i_7] [i_7] [i_7] = (((((!4111) | 19))) ? ((18446744073709551615 | (((13886 ? (arr_12 [i_7]) : 3302293624))))) : ((min(((42 ? var_12 : 1)), (1 != var_6)))));
        }
        var_30 = (arr_5 [i_7]);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        arr_30 [i_9] |= -3937;
        var_31 ^= (((arr_8 [i_9] [i_9]) + (arr_29 [i_9])));
        var_32 *= ((~(30 | 18446744073709551615)));
    }
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            {
                var_33 = ((((((var_12 + var_1) ? (arr_32 [i_10 + 1]) : ((3628766542 ? 982385756 : 2475465705711826007))))) ? (((((-28237 ? -982385755 : 18126))) ? 982385744 : 13886)) : ((min(231, 113)))));
                arr_35 [i_10 + 1] [i_10 + 1] [i_10 + 1] |= ((((1 >> (!-8898664864488634547)))) ? var_8 : 4294967294);
                var_34 = (min(var_34, (arr_31 [i_10 + 3])));
                arr_36 [i_10] = var_13;
            }
        }
    }
    var_35 &= -var_6;
    var_36 = (max(var_36, ((min(var_11, (((((var_14 ? 51636 : 0))) ? 8 : ((14 ? 15540846118984716213 : var_6)))))))));
    #pragma endscop
}
