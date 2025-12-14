/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_16 = (min(var_16, ((((((13153870865940390721 ? var_3 : 15905))) > ((1 % (arr_0 [i_0]))))))));
                        var_17 = max(((((!115) < (115 ^ 1)))), (arr_5 [i_3]));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_18 = ((((var_8 ? 127 : var_5)) & 0));
                            var_19 = (min(var_19, (~11914891919028336424)));
                            var_20 = ((-((((arr_0 [i_1]) >= var_5)))));
                        }
                        var_21 -= var_1;
                        var_22 *= 1;
                    }
                    var_23 = -64;
                    var_24 = (((((-2 ? 28696 : (arr_10 [i_0] [i_0] [i_2 - 1] [i_0] [i_0] [i_1 - 1])))) ? -32748 : ((var_5 ? 145 : (arr_3 [i_0] [i_1 + 1] [i_2 + 1])))));
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_25 = (((~28699) ? (var_2 - var_15) : var_11));
            var_26 = (min(var_26, (-5936 | var_9)));
        }

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_27 -= (((((-22733 >= (~var_2)))) << (((!(((var_10 ? var_3 : (arr_3 [i_0] [i_7] [i_7])))))))));
            var_28 = (max(var_28, (((((max(((68719476735 ? (arr_14 [i_0]) : 11002779601544967262)), 6531852154681215191))) ? -68719476744 : ((((arr_9 [i_0] [i_0] [i_7]) ? var_3 : (arr_9 [i_0] [i_7] [i_0])))))))));
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                var_29 = (max(var_29, (((!(-6344928431026498870 / 142))))));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 21;i_11 += 1)
                    {
                        {
                            var_30 = (max(((((((arr_0 [i_10]) ? var_14 : var_9)) * ((216 ? var_2 : var_11))))), (min(var_14, 4293870662))));
                            var_31 = ((((min((arr_26 [i_10 - 1] [i_10 - 1] [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_11 - 2]), (((arr_0 [i_8]) / var_13))))) ? var_3 : var_7));
                            var_32 = ((-3914009839687034016 ? ((18446744073709551615 ? (((-68719476736 ? 5935 : 2442939272))) : ((14525344690314557251 ? 22761 : var_12)))) : (((arr_11 [i_0] [i_0] [i_8] [i_10 - 1]) ? 246 : 2828469803382431485))));
                            var_33 *= (((~var_14) - ((~(~var_8)))));
                        }
                    }
                }
                var_34 = (max(((((min(531702807, -27658))) ? (65 - var_14) : -1778989602)), 22329));

                for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                {
                    var_35 = ((((max(31, (var_1 && var_3)))) ? ((((2305843009213693951 || 3914009839687034016) && 11002779601544967264))) : var_14));

                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        var_36 = ((-5936 ? 18446744073709551615 : ((((!(arr_10 [i_13 - 1] [i_12] [i_0] [i_8] [i_8] [i_0])))))));
                        var_37 = ((~(arr_6 [i_0] [i_8])));
                        var_38 = (((63 & var_5) | var_5));
                    }
                }
                for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
                {
                    var_39 = (((((51754 ? -5935 : 14140454940574414908))) ? (((arr_24 [i_0] [i_9]) ? var_13 : var_1)) : (arr_24 [i_8] [i_0])));
                    var_40 = (min(var_40, 1));
                }
            }
            var_41 *= ((!((!(((var_4 ? (arr_19 [i_8] [i_0] [i_0]) : var_6)))))));
        }
        var_42 = (((max(-var_14, (min(-14616, -1119412087)))) | var_10));
        var_43 = 11002779601544967275;
    }

    /* vectorizable */
    for (int i_15 = 2; i_15 < 19;i_15 += 1)
    {
        var_44 = ((var_2 ? var_0 : (arr_23 [i_15 - 2] [i_15] [i_15] [i_15])));
        var_45 = var_12;
    }
    #pragma endscop
}
