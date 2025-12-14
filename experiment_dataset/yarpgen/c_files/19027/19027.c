/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((min(18446744073709551606, var_12))) ? ((var_17 ? var_0 : var_6)) : ((var_14 ? 100 : var_0)))), ((((((-18 + 2147483647) << (((var_13 + 40) - 29))))) ? (var_12 % var_7) : var_10))));
    var_19 = (max((min(458547241, ((min(var_4, var_9))))), ((min((153 > 155), var_6)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (min((arr_2 [i_0]), (((max(2, var_11)) | (((min(var_14, (arr_0 [i_0])))))))));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_8 [i_1] &= max(var_6, ((+(((arr_5 [i_1] [i_1 + 1] [i_0]) - var_1)))));
            var_20 = (max(var_20, (arr_6 [i_0] [i_1 + 1])));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_21 = (((arr_5 [i_0] [i_0] [3]) & ((var_9 / (arr_1 [i_0])))));

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_22 *= (((arr_15 [i_5] [i_5] [i_5] [i_5]) <= (arr_15 [i_0] [i_2 + 1] [i_3] [i_4])));
                            arr_19 [i_2] [i_4] [i_5] = (((!var_7) ? (arr_1 [i_5]) : (arr_14 [3] [i_2 - 1] [i_2 - 1] [i_2])));
                            arr_20 [i_4] [i_3] [i_0] [i_0] = ((!((((arr_4 [i_0] [i_0]) | var_0)))));
                        }
                    }
                }
                var_23 = arr_6 [6] [i_2];

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_24 -= var_17;
                    arr_24 [i_0] [i_0] [i_0] [i_0] = (((arr_7 [i_2 + 2] [i_2 + 1] [i_2]) ? (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1]) : var_8));
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_27 [i_0] [i_2] [i_0] [i_7] = ((!(var_16 == var_17)));
                    arr_28 [i_2] [i_7] [i_3] [i_7] [i_0] = (((arr_11 [i_0]) < (arr_10 [i_0] [i_3] [10])));
                    arr_29 [i_0] [i_7] [i_7] [i_3] [0] [i_7] = var_11;
                }
            }
            for (int i_8 = 3; i_8 < 11;i_8 += 1) /* same iter space */
            {
                arr_33 [i_0] = (arr_4 [i_2] [i_2]);
                arr_34 [i_8] [i_2] = (((arr_13 [i_2 + 1] [i_2 + 2] [i_2 + 1]) | (arr_13 [i_2] [i_2 + 1] [i_2 + 2])));
            }
            for (int i_9 = 3; i_9 < 11;i_9 += 1) /* same iter space */
            {
                var_25 = ((var_16 ? (arr_14 [i_0] [i_0] [2] [i_9]) : 12458787771932374818));
                var_26 = (((arr_14 [i_9] [i_9] [i_9 - 3] [i_9]) | (arr_14 [0] [0] [i_9 + 1] [7])));
            }
            for (int i_10 = 3; i_10 < 11;i_10 += 1) /* same iter space */
            {
                arr_39 [i_0] [i_0] [i_10] = (((arr_21 [i_10] [i_10 - 2] [i_10 - 2] [i_10 - 3] [i_10] [i_10 + 1]) + (arr_21 [1] [1] [i_10 - 1] [i_10 - 2] [i_10 - 1] [i_10 - 3])));
                var_27 += ((var_2 ? (arr_25 [6]) : (arr_25 [10])));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 11;i_12 += 1)
                    {
                        {
                            arr_45 [i_0] [i_2] [i_10] [7] [i_10] = 1955626944;
                            arr_46 [8] [i_2] [i_2] [i_10] [i_12] = ((16 || 9223372036854775807) ? (((var_4 ? var_15 : var_14))) : var_2);
                        }
                    }
                }
            }
            arr_47 [i_0] = (((arr_1 [i_2 + 2]) ? (arr_1 [i_2 - 1]) : (arr_11 [i_2 - 1])));
            arr_48 [i_2] [i_2] [i_0] = (!(arr_40 [i_0] [6] [i_0]));
            arr_49 [i_2] [i_2] [i_0] = (((~var_4) % ((var_5 << (((arr_40 [i_0] [6] [i_0]) - 1046097479))))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
        {
            var_28 = (((arr_30 [i_0] [i_0]) ? (arr_30 [i_13] [i_0]) : (arr_30 [i_13] [i_13])));
            arr_52 [i_13] [4] = (((arr_11 [5]) ? var_9 : (arr_11 [i_0])));
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
        {
            arr_55 [i_14] = (((arr_38 [i_14] [i_0] [i_0]) ? (((!((min((arr_44 [i_14] [i_14] [i_14] [i_14] [i_0] [i_0]), (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (arr_7 [i_0] [i_0] [10])));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    {
                        arr_62 [i_0] [i_0] [i_0] = ((((!(((var_8 ? 2161727821137838080 : 1955626941))))) ? 3 : (((!7272328055180382955) ? (((((arr_56 [i_15]) <= (arr_31 [i_0] [i_0] [i_0] [0]))))) : (min(8526419479308036164, (arr_10 [i_0] [i_15] [6])))))));
                        var_29 -= ((((min((arr_26 [i_0] [i_14] [i_15]), 26))) ? (min((var_16 % var_16), (arr_56 [i_0]))) : ((((arr_54 [i_16] [i_16]) || (arr_0 [i_16]))))));
                    }
                }
            }
        }
        arr_63 [i_0] = (+(min((((arr_59 [i_0] [i_0] [i_0] [i_0]) ^ 65)), (arr_2 [i_0]))));
        arr_64 [i_0] = 0;
        arr_65 [i_0] = (((((((((arr_60 [i_0] [i_0] [i_0] [4]) ? (arr_56 [i_0]) : (arr_38 [i_0] [i_0] [i_0])))) || ((((arr_58 [i_0] [1] [i_0]) << (((arr_43 [6] [i_0] [6]) - 110)))))))) * ((((max(var_7, var_11)) <= var_12)))));
    }
    var_30 = ((var_3 == (((var_3 || (var_5 ^ 156))))));
    #pragma endscop
}
