/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = (min(((((var_14 <= 0) ? var_12 : ((var_10 ? var_6 : var_15))))), ((-((var_14 ? var_1 : var_12))))));
    var_19 = (min(var_19, ((max((((((var_4 ? var_6 : var_15))) ? var_1 : var_13)), ((((((var_5 ? var_0 : var_2))) ? var_8 : var_15))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (min(var_20, (((~(min(var_2, (arr_1 [i_0] [i_0]))))))));
        var_21 ^= (var_4 != var_8);

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] [i_1 - 1] |= (min(var_0, ((3399618139 + ((((arr_3 [i_0] [i_0] [i_1]) + var_8)))))));
            arr_6 [i_1] = (((((((var_0 != (arr_1 [i_0] [i_0]))) ? 3399618139 : (var_2 >= var_16)))) + (arr_2 [i_0])));
            arr_7 [i_1] = -2;
            var_22 ^= var_5;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_11 [15] [i_2] = ((!(((~(((var_2 + 9223372036854775807) << (213 - 213))))))));
            var_23 += (min((((!((((arr_4 [i_0]) ? var_4 : (arr_1 [i_0] [i_0]))))))), ((~(arr_9 [i_0] [i_0])))));
        }
        arr_12 [i_0] = (max(var_9, (((((((arr_8 [i_0] [i_0]) ? var_3 : (arr_2 [i_0])))) ? 0 : (arr_1 [i_0] [i_0]))))));
    }
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        arr_15 [i_3] = (((((min((var_13 < 0), -39)))) - (max(0, (arr_0 [i_3 - 1] [i_3])))));
        var_24 &= ((((((!(arr_9 [i_3] [i_3]))))) != (((arr_9 [i_3 + 1] [i_3 - 3]) - (arr_9 [i_3 + 2] [i_3 - 2])))));
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        arr_19 [i_4] = (max((min((arr_18 [i_4 - 2]), (((var_6 ? -1375783373 : 0))))), (arr_16 [i_4 + 4])));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                var_25 += (((arr_17 [i_4] [i_5]) && (!var_13)));
                arr_24 [i_4 + 3] [i_5] [i_4 + 3] [i_6 - 1] = (arr_22 [i_4] [i_5] [i_6 + 1]);
                var_26 = (min(var_26, var_7));
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_27 ^= var_1;
                arr_27 [i_7] [i_7] = -1;
            }
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                arr_30 [12] [i_8] [i_8 + 1] [i_8 + 1] = (arr_18 [i_4 - 2]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_38 [i_4] [i_4] [i_4] [i_4 - 1] [i_8] = ((var_13 ? ((var_10 ? (arr_37 [i_4] [i_4] [i_8 + 2] [i_4] [i_10]) : var_5)) : (var_10 || -1753153450)));
                            var_28 = (min(var_28, ((((((((arr_28 [i_4] [i_4] [i_10]) || (arr_26 [17] [i_10 + 3]))))) != (arr_28 [i_8] [i_5] [i_4]))))));
                        }
                    }
                }
            }
            var_29 = (min(var_29, (arr_32 [i_4] [i_5] [i_5] [i_4] [i_4] [i_4])));
            arr_39 [i_4] [i_5] [i_4] = (arr_20 [i_4] [i_4 - 1]);
            arr_40 [i_4] &= (arr_26 [i_4 - 2] [i_5]);
            var_30 *= (arr_29 [i_4] [i_4] [16]);
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {

            for (int i_12 = 2; i_12 < 21;i_12 += 1)
            {
                var_31 = ((var_4 << ((((-98 ? var_9 : var_0)) - 1488574478))));
                var_32 = (((arr_17 [19] [i_12 - 2]) ? (arr_17 [0] [i_12 - 2]) : (arr_22 [i_12] [i_12 - 1] [i_12 - 1])));
            }
            for (int i_13 = 3; i_13 < 20;i_13 += 1)
            {
                var_33 = (max(var_33, var_1));
                arr_52 [i_11] = (arr_22 [i_4 + 1] [i_4 + 1] [i_13 + 1]);
            }
            arr_53 [i_4] [i_11] = var_12;
            arr_54 [i_4 - 1] [i_11] = 1;
            var_34 = (min(var_34, var_13));
        }
        arr_55 [i_4] = (max((((-1561704561 - (arr_48 [i_4] [i_4 + 3] [i_4 - 2] [i_4 - 2])))), ((((arr_43 [i_4] [i_4] [i_4]) < var_14)))));
        arr_56 [i_4 + 4] = (arr_17 [i_4] [i_4]);
    }
    #pragma endscop
}
