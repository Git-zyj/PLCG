/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 = 2229188420;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (arr_0 [i_0])));
        var_23 = arr_3 [3];
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_24 = (arr_1 [i_1]);
                arr_13 [i_1] [i_1] = (((2229188414 + (arr_7 [i_1 + 2]))));
                var_25 = (((((arr_3 [i_1 + 2]) + 9223372036854775807)) >> (var_1 - 1786116517)));
                var_26 = -2229188440;
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_27 = (arr_8 [i_1]);
                    arr_18 [i_2] [0] &= ((65534 ? 2065778857 : 2229188420));
                    var_28 = -2065778867;
                }
                var_29 = (((arr_9 [i_1 + 2]) == ((2229188433 ? 2229188420 : (arr_0 [i_2])))));
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
            {
                var_30 = 2065778867;
                arr_22 [i_6] [i_1] [i_1 + 2] = (arr_6 [i_1 + 2] [i_1] [i_1]);
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
            {
                arr_25 [i_1] [i_1 - 1] [i_2] [i_7] = 108086391056891904;

                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        var_31 -= (2065778876 >> var_9);
                        var_32 = (((~4294967295) ^ (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])));
                        var_33 = ((14297 ? 31 : 31));
                        arr_30 [i_1] [1] [i_1] [i_9] [0] [i_1] = (arr_6 [1] [i_1 + 1] [i_1]);
                        var_34 &= ((((77 < (arr_29 [4] [i_2] [i_2] [0] [i_9]))) ? (arr_2 [i_1 + 2]) : 2229188420));
                    }
                    arr_31 [i_1 + 1] [i_2] [i_7] [i_1] [i_1] [i_2] = (((arr_10 [i_1 + 2]) ? -1 : (arr_19 [i_1 + 2] [i_1] [i_7] [i_8])));
                }
                arr_32 [i_7] [i_1] [i_7] = var_19;
                var_35 = -6825195453922962645;
                var_36 |= -2229188415;
            }
            var_37 = (min(var_37, (((-(7603088441762943750 <= var_15))))));
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            arr_36 [i_1] = ((-(((arr_21 [i_1 + 1] [1] [i_10] [i_1]) ? -27354 : (arr_5 [i_1 - 1] [i_1])))));
            var_38 -= (((arr_14 [i_1] [i_1 - 1] [9]) ? (arr_14 [0] [i_1 - 1] [4]) : 55865257));
            var_39 = (((arr_14 [i_1 + 2] [i_1 - 1] [i_1 + 1]) || (((-(arr_3 [i_1]))))));

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                arr_40 [2] [i_1] [1] [9] = 2229188428;
                var_40 = ((1 != (arr_27 [i_1] [7] [i_1 + 2] [i_11] [i_1])));
                var_41 = (max(var_41, 74));
            }
            for (int i_12 = 2; i_12 < 10;i_12 += 1)
            {
                var_42 = ((-(arr_37 [i_1 + 1] [i_12 + 1] [1] [i_12])));

                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    arr_46 [i_1] = (((((3 ? (arr_24 [i_1] [i_10] [i_13]) : 2065778860))) || 2065778851));
                    var_43 = (((55532 ^ var_10) ? (arr_27 [i_1] [i_1] [i_12] [i_13] [i_13]) : (((15666694557888647199 ? 2065778856 : (arr_42 [i_10] [i_10] [i_13] [i_10]))))));
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_44 = (arr_15 [i_1 - 1] [i_12 - 1] [i_12 - 1]);
                    var_45 &= (arr_11 [6] [6] [6] [6]);
                }
                arr_49 [6] [i_10] [6] |= ((-(arr_3 [i_1])));
                var_46 = var_0;
            }
        }
        for (int i_15 = 2; i_15 < 7;i_15 += 1)
        {
            var_47 = ((-(arr_50 [i_1] [i_1] [i_15 + 2])));
            arr_52 [i_1] [i_15] [i_15 - 2] = ((-((15666694557888647199 ? 0 : var_14))));
        }
        var_48 ^= (((((-(arr_33 [i_1])))) != var_7));
        var_49 = (max(var_49, ((((arr_11 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 2]) ? 2229188419 : 17856551107121253185)))));
    }
    var_50 = (1 <= 42741);
    #pragma endscop
}
