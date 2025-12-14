/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 16557813080078537814;
    var_13 = (max(var_10, (((var_2 + var_0) - (min(var_8, -1))))));
    var_14 = var_5;
    var_15 = (var_3 && var_1);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_16 = ((((((((var_8 ? (arr_1 [i_0] [i_0]) : var_0))) ? (min((arr_1 [i_0] [i_0]), (arr_1 [9] [4]))) : (((arr_1 [6] [i_0]) / var_8))))) ? (max(var_2, 32768)) : (((~(((-32767 - 1) % var_2)))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] &= ((((-2798730242743483007 ? var_0 : var_9)) <= (var_0 / var_1)));
        arr_6 [i_1] [1] = ((var_2 ? var_1 : (arr_4 [i_1 + 2] [i_1 + 2])));

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_17 -= (((arr_7 [i_1 + 2] [i_1 + 2] [i_2 + 1]) - (arr_7 [i_1 - 2] [i_1 - 2] [i_2 - 1])));
            var_18 = var_9;
            var_19 = (min(var_19, (((var_9 && (((var_5 ? var_4 : 32746))))))));
            var_20 = (arr_4 [i_1 - 2] [20]);
            arr_11 [1] [i_1 + 1] [1] = ((((431722038134763360 | (arr_8 [i_1] [i_2]))) & (arr_9 [i_2 - 1])));
        }
        for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_14 [i_3] = (((18015022035574788251 + -79) / var_1));
            arr_15 [6] = ((((!(arr_3 [i_1 - 1] [16]))) && (((arr_4 [i_1] [i_3]) && var_2))));
        }
        for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_21 = (((~var_7) << (((255 & 205) - 203))));
            arr_19 [i_1] = -32746;
            var_22 = (var_8 != var_3);
            var_23 ^= -2443190811277019307;
        }
        for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_24 = var_11;
            var_25 &= (((!103) || (arr_4 [i_5 - 1] [i_1])));
            var_26 *= (arr_16 [i_5 - 1] [i_1 - 1]);
        }
        var_27 = (((((16003553262432532304 ? (arr_10 [i_1] [i_1]) : var_0))) ? (arr_12 [i_1 + 2]) : ((((arr_7 [i_1] [18] [i_1]) && (arr_17 [i_1] [i_1] [i_1]))))));

        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_28 ^= (arr_13 [i_6]);
            var_29 = ((~(arr_18 [i_1 + 2] [i_1 + 2] [i_1 - 2])));
            var_30 = (arr_4 [19] [i_6]);
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            var_31 = ((!(arr_8 [20] [i_1])));
            arr_30 [0] [i_7] = ((~(arr_22 [i_1 + 1] [i_1 + 1])));
            var_32 = (((-9223372036854775807 - 1) ? (((arr_4 [i_1] [i_1]) - (arr_3 [i_1] [i_7]))) : (arr_8 [i_7] [i_1 + 2])));
            arr_31 [i_7] [i_7] = (((arr_23 [10] [i_1]) & (var_0 && 4294967295)));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
        {
            var_33 = 65530;
            arr_35 [i_1] [i_8] = (((arr_21 [i_8]) ? ((var_7 ? -101 : 3716468151145596264)) : ((((arr_21 [i_8]) ? (arr_18 [i_1] [i_8] [i_1]) : 18547)))));

            for (int i_9 = 2; i_9 < 18;i_9 += 1) /* same iter space */
            {
                arr_38 [7] [i_8] [i_9 + 3] = (-(arr_25 [i_9 + 2] [i_8]));
                arr_39 [i_1 - 2] [i_9] [i_9 + 2] [i_8] = 31;
                arr_40 [i_9] [i_8] [i_8] [i_1] = var_6;
                var_34 = 6006;
            }
            for (int i_10 = 2; i_10 < 18;i_10 += 1) /* same iter space */
            {
                var_35 = (max(var_35, ((((arr_17 [i_1 + 2] [i_10 + 2] [i_10 + 2]) / (arr_22 [i_1] [i_1 + 1]))))));
                var_36 = (arr_13 [i_1 - 1]);

                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    arr_46 [i_1] [10] [i_8] [i_1] [i_1] [7] = (((arr_34 [i_1 - 1] [11] [i_8]) ? (arr_34 [i_1 - 2] [i_1] [i_8]) : (arr_18 [i_1 - 1] [i_10 + 3] [i_10 + 2])));
                    var_37 += ((var_7 ? (!0) : (!var_8)));
                }
            }
            for (int i_12 = 2; i_12 < 18;i_12 += 1) /* same iter space */
            {
                var_38 = (((arr_12 [i_1 + 1]) ? var_5 : (arr_12 [i_1 - 2])));
                arr_50 [i_8] [i_8] [0] [i_12] = 15361965105254110785;
                var_39 -= (+((var_3 ? (arr_26 [i_12] [16] [i_1]) : var_7)));
                arr_51 [i_8] [i_8] = ((var_8 ? (((var_4 == (arr_16 [i_1] [12])))) : (((!(arr_20 [i_8]))))));
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 16;i_13 += 1)
    {
        arr_54 [15] = (arr_26 [i_13 - 1] [6] [i_13 - 1]);
        arr_55 [i_13 - 1] [i_13] = (((arr_53 [i_13 - 1]) ? (arr_33 [i_13 + 1] [i_13 - 1] [i_13 + 1]) : (arr_34 [i_13 - 1] [i_13 + 1] [8])));
        arr_56 [i_13] [i_13] = ((var_9 ? ((370825298 ? (arr_22 [i_13] [i_13]) : 189)) : (((var_2 == (arr_17 [i_13] [i_13 - 1] [i_13]))))));
    }
    #pragma endscop
}
