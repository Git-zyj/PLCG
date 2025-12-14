/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_8 * var_4);
    var_18 *= (((var_5 * var_4) ? ((((max(var_6, 2614217113))) ? var_12 : var_0)) : var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 -= (((arr_0 [i_0] [i_0]) && var_6));
        var_20 = (((var_5 || var_10) <= 1680750183));
        var_21 *= -15355;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_22 = (max(var_22, ((max(var_9, (((arr_2 [i_1]) | (15355 ^ var_6))))))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_23 = ((((arr_3 [i_1]) ? (arr_3 [i_2]) : (arr_3 [i_1]))));
            var_24 = (((((((!(arr_6 [i_2] [i_2]))) ? (max(-15355, 1680750183)) : (arr_2 [i_1])))) ? (((arr_6 [i_2] [i_2]) & (min(var_11, var_3)))) : (((~((var_16 ? var_11 : (arr_1 [i_1] [i_2]))))))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_25 = ((((max(var_2, (arr_12 [i_1] [i_3] [i_4] [0] [i_1] [i_4])))) / (arr_3 [i_3])));
                    var_26 *= (arr_5 [i_3]);
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_17 [i_1] [5] [1] [i_4] [i_6] [i_3] = ((max(var_15, (((-(arr_15 [i_1])))))) != ((((1680750183 | 511) & (arr_1 [i_1] [5])))));
                    var_27 *= ((var_16 ? var_3 : ((((!(((52 ? 2147483647 : 64649)))))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_28 = (arr_14 [i_1] [i_3] [i_1] [i_7] [i_1]);
                    var_29 = (max(var_29, ((((var_4 ? (arr_1 [i_1] [i_3]) : var_4))))));
                }
                var_30 = ((((max((min(var_3, var_13)), var_10))) ? (arr_15 [i_1]) : ((~(arr_18 [i_1] [i_1] [i_3] [i_4])))));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {

                /* vectorizable */
                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    arr_25 [i_8] [i_8] [i_9 + 1] = (arr_13 [i_9] [i_9] [i_9] [i_9 - 1]);
                    arr_26 [i_1] [i_3] [i_1] [i_9] [i_9] [12] |= (((var_5 ? 1680750187 : var_2)));

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        arr_29 [i_1] [i_3] [19] [19] [i_8] = (((arr_24 [i_1] [i_1] [i_8] [i_1] [i_1]) ? var_5 : (arr_24 [1] [10] [i_8] [i_9] [i_10 - 1])));
                        arr_30 [i_1] [i_8] [8] = var_1;
                        var_31 = (arr_6 [i_8] [i_1]);
                    }
                }
                for (int i_11 = 1; i_11 < 19;i_11 += 1)
                {
                    var_32 = ((var_16 << (1 / 31)));
                    arr_33 [i_1] [i_8] [i_3] [i_11] = ((-((~(var_5 < 0)))));
                    arr_34 [i_8] = ((((((var_2 ? (arr_3 [i_8]) : var_6)) << ((min((arr_5 [6]), var_15))))) + (2665981566 && 20475)));
                    var_33 = var_16;
                }
                var_34 = ((max((arr_6 [i_8] [i_8]), (arr_6 [i_8] [i_3]))));
            }

            for (int i_12 = 0; i_12 < 0;i_12 += 1)
            {
                arr_37 [i_1] [i_3] [i_12] [i_12] = ((-((min((arr_27 [i_12 + 1] [i_12 + 1]), (arr_27 [i_12 + 1] [i_12 + 1]))))));
                arr_38 [i_3] [i_12] = ((((arr_14 [2] [17] [i_12] [i_12] [i_12 + 1]) ? var_9 : (arr_14 [i_1] [i_3] [i_3] [i_3] [i_12 + 1]))));
                var_35 = ((1 ? 1680750183 : (-2147483647 - 1)));
                arr_39 [i_1] [i_3] [i_3] = ((((~((var_0 ? var_3 : (arr_16 [i_1] [i_3]))))) ^ (max((~var_11), ((var_15 ? (arr_21 [16] [i_3] [i_12]) : var_7))))));
            }
        }
        var_36 = (((((arr_6 [i_1] [i_1]) ? var_7 : (arr_28 [i_1])))));
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        var_37 = (min(var_37, ((min(((1 & ((15354 ? 1 : 4294967295)))), ((((arr_9 [i_13] [i_13]) ? (arr_9 [i_13] [i_13]) : (arr_9 [i_13] [0])))))))));
        arr_44 [i_13] = ((var_4 ? var_16 : ((-((2614217127 ? (arr_9 [10] [10]) : 511))))));
        var_38 = (max(var_38, (arr_13 [i_13] [i_13] [i_13] [i_13])));
        var_39 = (((((~(arr_9 [i_13] [0])))) ? -46 : ((var_6 ? (arr_0 [i_13] [i_13]) : (arr_9 [i_13] [i_13])))));

        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            var_40 = var_12;
            arr_48 [i_14] [i_13] [i_13] = (((((1 ? ((1 << (((((-2147483647 - 1) - -2147483634)) + 42)))) : ((max((arr_9 [i_13] [i_14]), (arr_43 [i_13]))))))) || (var_11 >= var_15)));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            var_41 = -20476;
            var_42 = (min(var_42, ((!(arr_52 [i_13] [i_15])))));
            var_43 = (((arr_52 [i_13] [i_15]) | (arr_52 [i_15] [i_15])));
        }
        for (int i_16 = 4; i_16 < 16;i_16 += 1)
        {
            var_44 = (((min(var_7, var_15))));
            var_45 = (max(var_45, (((1680750169 ? ((1 ? ((max(23489, -15365))) : 225)) : ((((1 ? 8192 : 1)))))))));
            arr_55 [i_13] [i_13] [i_13] = 32433;
            var_46 ^= (((((-32612 ? 20475 : -21090))) <= var_7));
        }
    }
    var_47 = var_1;
    var_48 = (!var_1);
    #pragma endscop
}
