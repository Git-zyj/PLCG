/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (((((-33 ? var_15 : (!var_11)))) ? var_11 : (((((var_4 ? var_4 : 1))) ? ((var_6 ? var_9 : var_7)) : var_8))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 -= (!var_11);
        var_20 = ((((!(((var_10 ? 18446744073709551601 : 1)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_21 = (((~32802) ? var_1 : var_6));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_22 -= 15217849684211110702;
            var_23 = ((var_1 ? (arr_5 [i_1] [i_2]) : (arr_5 [i_1] [i_1])));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    {
                        var_24 ^= ((~(((arr_7 [i_5] [i_3] [16]) ? 3241447787 : (arr_10 [14] [i_3] [14] [14])))));

                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            var_25 = ((!(arr_8 [i_1])));
                            var_26 = 5389517544798643385;
                            var_27 = ((!(arr_7 [i_5 + 2] [i_5 + 2] [i_4 + 1])));
                            arr_18 [23] [i_1] = (((((1073741823 < (arr_10 [i_1] [i_4] [i_4] [i_6])))) ^ ((((arr_14 [i_1]) || var_0)))));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            arr_21 [i_1] [4] [i_7] = ((var_3 ? (((arr_19 [i_3] [i_5] [i_7]) & 8256900173238995931)) : (arr_15 [i_4 - 1] [14] [i_4 - 1] [3] [i_5 + 2])));
                            var_28 = (((-2147483647 - 1) ? 17122 : (arr_16 [i_3] [i_1] [i_3] [i_3])));
                            var_29 = (var_0 + -2147483639);
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            arr_25 [i_1] = (arr_8 [i_1]);
                            var_30 ^= (((7150684357387759351 <= var_11) / 15));
                            arr_26 [i_1] [i_1] [15] [i_1] [15] [6] = ((15401 ? 25629 : 63));
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_31 = var_5;
                            var_32 = (min(var_32, ((((arr_7 [i_5 + 1] [i_4] [4]) ? (arr_7 [i_5 + 1] [15] [i_4]) : (arr_23 [i_5 + 1] [i_3] [i_5] [i_5] [i_4 - 1] [i_4] [i_3]))))));
                        }
                        var_33 |= (!(var_10 & var_16));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    {
                        arr_43 [i_12] [i_12] [i_12] [7] = ((var_3 ? ((var_11 ? (arr_24 [i_13] [i_13] [i_12] [i_11] [i_11] [i_10] [i_10]) : (arr_24 [i_10] [i_10] [i_11] [i_11] [i_11] [i_12] [1]))) : ((-(arr_42 [14] [i_11] [i_11] [i_13])))));
                        arr_44 [i_13] [i_12] [19] [i_11] [i_12] [i_10] = (-1 ? ((-(min((arr_7 [i_10] [i_10] [i_10]), (arr_23 [i_10] [i_10] [i_11] [i_11] [18] [i_13] [18]))))) : (((!var_2) ? (~var_2) : var_1)));
                        var_34 = (max((63 + var_6), (((!(((1 ? -3564919375408277713 : 1319788344))))))));
                        arr_45 [i_12] = ((-(min(-3564919375408277713, (arr_9 [21] [i_12] [i_12])))));
                        var_35 &= ((min(-var_13, (((-(arr_7 [i_11] [i_12] [i_12])))))));
                    }
                }
            }
        }
        var_36 ^= (arr_12 [i_10] [i_10] [13] [13] [17]);
    }
    #pragma endscop
}
