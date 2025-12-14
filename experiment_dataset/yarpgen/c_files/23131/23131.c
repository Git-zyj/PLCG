/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!-var_15);

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((((~(arr_0 [i_0])))) ? (((~var_7) * (((((arr_1 [i_0] [0]) && var_9)))))) : var_6));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] = ((((max(var_11, var_9))) ? (((!((!(arr_2 [2])))))) : (arr_0 [i_1])));
            var_18 = var_0;
            arr_7 [i_1] [i_0] [i_1] = (arr_0 [i_0 - 2]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_14 [i_2] [i_2] = ((-(min(-var_8, var_10))));
                arr_15 [i_0] = var_1;
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_19 &= (~0);
                var_20 &= 15662370880830637333;

                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        arr_22 [2] [i_2] [i_2] [i_4] [1] [0] = (((arr_18 [7] [10] [i_6]) + (arr_11 [11])));
                        arr_23 [i_0] [i_5] [i_4] [8] [i_6] [i_0] [12] = ((arr_20 [11] [i_6] [i_6 + 2] [1] [i_6] [i_6 + 4]) == -80);
                        var_21 = (max(var_21, var_0));
                        arr_24 [i_0] [i_2] [10] [11] [i_5] [i_6] = (arr_13 [7]);
                        arr_25 [i_0] [i_2] [1] [i_4] [i_5] [i_5] [0] = var_6;
                    }
                    arr_26 [i_4] [i_4] &= 0;
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_22 *= (~var_2);
                    var_23 = (min(var_23, 14377143967056483010));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((var_6 ? 1 : var_5))));
                    arr_32 [i_2] [i_2] [5] [i_2] = (min((arr_28 [3] [i_0] [i_0] [i_0 + 1]), ((-(arr_28 [i_0] [12] [i_0] [i_0 - 1])))));
                }
            }

            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_24 = ((((127 ? (arr_29 [i_0 + 1] [7]) : (arr_29 [i_0 - 1] [i_0]))) ^ (((var_13 >> (((arr_29 [i_0 + 1] [i_0]) - 7881486716403117413)))))));
                    arr_37 [i_10] = var_13;
                    arr_38 [i_10] [i_2] [i_10] = -0;
                    var_25 = (arr_17 [i_0] [i_0] [i_0]);
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    arr_42 [i_11] [i_9] [i_2] [i_2] [i_0] [i_0] = ((+((min((arr_13 [i_0 + 1]), var_5)))));
                    var_26 = -18446744073709551615;
                }
                var_27 = (min(var_27, (((((var_2 / (arr_12 [i_0] [i_0 - 1] [i_0 - 2])))) ? ((max(var_14, var_11))) : -11197))));
                arr_43 [i_9] [i_2] [i_0] = ((((-(arr_5 [i_0] [i_0])))) ? ((((min(1, var_2))) ? (((-9223372036854775807 - 1) ? (arr_34 [i_0] [i_2] [i_0] [i_2]) : 892968602)) : var_12)) : -var_5);
            }
            var_28 *= ((~(~1)));
            arr_44 [4] = (min(((-(arr_11 [i_0 + 1]))), -1));
            arr_45 [i_2] = 31;
        }
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    {
                        var_29 ^= (min(-4218995620158998015, (arr_29 [i_0 - 2] [i_0 + 1])));
                        var_30 = (((!var_12) * -var_11));
                    }
                }
            }
            arr_57 [i_0] [i_12] [i_0] = var_2;
        }
        for (int i_15 = 1; i_15 < 12;i_15 += 1)
        {
            arr_60 [i_0] [i_15] = (arr_12 [i_0] [i_0] [i_15]);
            var_31 = (min(var_31, (((min((((!(arr_9 [i_15])))), var_4)) % ((((((min(31, (arr_10 [i_0] [i_15])))) < (1 * 1)))))))));
            var_32 = ((((((((!(arr_20 [i_15] [i_15] [i_15] [i_0] [i_0] [3]))))) != (arr_49 [8] [i_15] [i_15]))) ? ((~(arr_19 [i_0] [i_15]))) : (((!(arr_11 [i_0 - 2]))))));
        }
        arr_61 [i_0] [5] &= 1;
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_33 = ((-31 % ((var_4 * (~var_6)))));
        var_34 ^= var_1;
    }
    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        arr_68 [i_17] = ((-((-(((arr_65 [i_17]) + 2784373192878914269))))));

        for (int i_18 = 2; i_18 < 16;i_18 += 1)
        {
            var_35 = (min(var_35, 0));
            var_36 = (min(var_36, ((max(251, 2518)))));
            arr_73 [i_18] [i_18] [14] = var_7;
            var_37 = var_2;
        }
        var_38 = var_6;
    }
    var_39 = (max(var_14, var_6));
    #pragma endscop
}
