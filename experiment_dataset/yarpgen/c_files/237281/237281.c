/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((var_5 ? 0 : 65510));
    var_19 = (((((~var_7) ? ((117 ? var_10 : 18446744073709551615)) : (((var_9 ? var_4 : var_2)))))) ? var_1 : ((~((min(81, 2))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (min((max(206, (max(var_7, var_1)))), (56978 / var_3)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = ((!((((var_16 & 0) | (arr_7 [i_1] [i_2] [3]))))));
                                var_22 |= ((((min(((66060288 ? (arr_1 [i_0]) : var_16)), 117))) ? (((arr_10 [i_1] [i_3] [i_4 + 2] [i_4] [i_4 + 2] [i_4 + 3]) % var_7)) : 14));
                                var_23 = ((!((min((((~(arr_13 [i_0] [i_4] [i_2] [i_2] [i_4])))), var_5)))));
                                var_24 = (arr_3 [i_3] [i_3]);
                            }
                        }
                    }
                    var_25 = ((!(arr_12 [i_0] [i_0] [i_0] [i_0])));
                    var_26 = (((((~var_6) | 137438937088))) ? ((var_16 & (((arr_3 [i_0] [i_0]) ? var_16 : var_16)))) : ((((31692 ? 0 : 401101543)))));
                }
            }
        }
        var_27 = var_10;
        var_28 = ((((min(((min((-127 - 1), (arr_8 [i_0] [22] [i_0] [i_0])))), ((var_10 ? var_7 : (arr_3 [i_0] [i_0])))))) ? ((((!((((arr_3 [i_0] [i_0]) ? var_9 : 81))))))) : var_6));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_29 = (((max(var_5, -var_11)) == 1));

        /* vectorizable */
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    {
                        var_30 = ((157 ? 1103041179663128919 : (((var_9 >> (var_0 + 2126653180238904991))))));
                        var_31 = (!5537202633468295097);
                        var_32 = 18446744073709551615;
                        var_33 = var_3;
                    }
                }
            }

            for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
            {
                var_34 = ((-3012 ? 32767 : 30505));
                var_35 = arr_23 [i_5] [i_5] [i_6] [i_5] [i_6] [i_5];
                var_36 |= ((((var_4 && (arr_24 [i_5] [i_6] [13] [i_5] [i_9]))) ? ((var_17 ? (arr_5 [i_5] [i_6] [i_9 + 1] [i_5]) : var_17)) : (arr_13 [12] [i_5] [i_6] [i_5] [i_5])));
            }
            for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
            {
                var_37 = ((((14336 ? (arr_23 [i_5] [i_6] [i_6] [2] [i_6] [i_5]) : var_4)) != var_4));
                var_38 = ((!(arr_23 [i_5] [i_5] [i_6] [i_5] [i_5] [i_5])));
                var_39 += 3007;
            }
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                var_40 = var_1;
                var_41 = -20898;
            }
            var_42 += ((!(arr_14 [i_6 - 3])));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 19;i_14 += 1)
                {
                    {
                        var_43 = ((!(arr_24 [i_14 - 1] [i_13 + 2] [i_13] [i_14 - 1] [i_13])));
                        var_44 = var_12;
                        var_45 += -var_8;
                    }
                }
            }
            var_46 = (!var_10);
        }
    }
    #pragma endscop
}
