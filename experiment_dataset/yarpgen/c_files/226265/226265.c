/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_14 = (~2892089210);
            arr_6 [i_0] = max((max((((arr_0 [8] [i_1]) ? var_7 : 3082400275)), (arr_2 [i_0] [i_1]))), ((min(var_5, 2497083234))));
        }
        for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
        {
            var_15 *= 1402878108;

            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                var_16 = ((((((arr_12 [i_0 - 1]) ? var_6 : var_6))) ? (((!(arr_10 [i_3 + 1])))) : (((var_11 || (arr_10 [i_3 - 1]))))));
                var_17 = var_9;
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_16 [i_4] [i_2 + 2] [i_0] = (((var_8 ? (arr_4 [i_0 - 1]) : 18961)) * var_4);
                var_18 -= arr_1 [i_0] [i_0];
            }
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_19 = max((arr_12 [i_5]), (min(-18962, (((arr_14 [i_0]) ? (arr_12 [i_0]) : 2892089210)))));
                var_20 = arr_9 [i_0 - 1];
            }
        }
        for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_21 = arr_7 [i_6 + 3] [i_6 - 2] [i_6 + 3];

                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    var_22 = var_5;
                    arr_27 [i_0] [i_6 + 2] [i_7] [i_8] [i_0] = (((((-(arr_3 [i_0 + 3])))) ? (arr_5 [1] [i_8] [i_8]) : ((1112082855 << (!1402878097)))));
                    var_23 = ((((max((arr_21 [i_6 + 1] [i_6 + 2] [i_6 - 1]), (arr_21 [i_6 + 2] [i_6 + 2] [i_6 + 1])))) ? (arr_21 [i_6 + 1] [i_6 + 3] [i_6 + 3]) : -var_8));
                    var_24 &= 3004458310;
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    arr_30 [i_0 + 2] [i_9] [i_7] [i_9] [i_0] [i_0] = (min(((2413238015 ? -22396 : var_12)), -22411));
                    arr_31 [i_0] [i_0] [i_7] &= ((!(((-(arr_11 [i_7]))))));
                    var_25 = ((((0 ? 1337613486 : (((max(var_7, 13513)))))) ^ ((-(arr_29 [i_0 + 4] [i_0] [i_0 + 1] [i_9])))));
                }
                var_26 = ((((min((arr_4 [i_6]), (arr_4 [i_0 + 2])))) ? (arr_4 [i_0 + 3]) : (((((arr_4 [i_0 - 1]) <= (arr_4 [i_6 + 3])))))));
            }
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                var_27 = min((arr_7 [i_0] [i_0] [i_10]), (var_0 || var_12));
                var_28 = var_3;
                arr_34 [i_6 + 2] = -var_9;
            }
            var_29 += (0 ? var_9 : (((arr_13 [i_0] [i_0 + 3]) ? (((max(18962, var_3)))) : (((arr_19 [i_0 + 4] [i_0 - 1]) ? (arr_23 [i_6 - 3] [i_0 + 2] [i_0 + 2]) : var_6)))));

            /* vectorizable */
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                var_30 = 3386407859;
                arr_39 [i_0 - 2] [i_11] [i_6 - 2] [i_0 - 2] = var_2;
                var_31 = 3522026709;
                arr_40 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] &= ((-(arr_4 [i_0])));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                arr_43 [i_0] = var_7;
                var_32 = 3142563590;
                arr_44 [i_6 - 1] [i_12] = (((arr_10 [i_12]) ? 1152403725 : -18947));
                var_33 = var_1;
            }
            var_34 *= ((-((~(arr_11 [i_0])))));
        }
        for (int i_13 = 2; i_13 < 11;i_13 += 1)
        {
            var_35 = (arr_17 [i_13] [i_13] [i_0 + 2]);
            var_36 = (((arr_42 [i_0] [i_0 + 2] [i_13] [i_13 - 1]) && ((((arr_14 [i_13 + 1]) << (((arr_42 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2]) - 3806543717)))))));
        }

        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            arr_52 [i_0] [i_0] [i_0] |= -3600;
            arr_53 [i_14] [i_14] [i_14] = ((var_11 >= (arr_50 [i_14] [i_14] [i_14])));
        }
        for (int i_15 = 2; i_15 < 10;i_15 += 1)
        {
            var_37 = arr_48 [i_0];
            var_38 = (min(var_38, (arr_4 [i_0 - 1])));
            arr_58 [i_0] [i_0] = var_8;
            var_39 = (arr_25 [i_0 + 2] [i_15 + 2]);
        }
    }
    var_40 = var_2;
    #pragma endscop
}
