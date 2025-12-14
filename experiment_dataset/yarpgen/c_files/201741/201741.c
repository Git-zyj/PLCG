/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_10 = (10337 <= 55219);
        var_11 = ((((((~var_8) | (arr_1 [i_0] [i_0 - 2])))) | (((var_8 & var_0) & ((255 ^ (arr_3 [i_0 + 1])))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_0] = max((((-((var_8 ? var_3 : (arr_0 [i_0] [22])))))), ((min(55199, 10336))));
            arr_9 [i_0] [i_0] [i_1] = (max(((max(var_9, (max(var_0, var_7))))), (arr_3 [i_0 + 2])));
        }
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                var_12 += (arr_11 [i_0 - 2] [i_2 - 3] [i_3 - 1]);
                var_13 = ((!((((arr_11 [i_0 + 2] [i_0 + 2] [21]) * (((((arr_1 [i_0] [i_2]) > (arr_14 [i_0 - 1] [i_0] [i_2 - 1] [i_3]))))))))));
                arr_16 [i_0] [i_0] [i_0] [i_3 + 1] = ((!(arr_14 [20] [21] [i_2] [i_2])));
                arr_17 [i_0] [i_2] [i_0] = (((-9223372036854775807 - 1) % 72057594037927935));
                var_14 += ((((min((arr_4 [i_0] [i_3]), (((!(arr_0 [i_3] [i_2]))))))) ? ((max((arr_7 [i_0] [i_0]), (250 ^ 195)))) : (~246698915457666573)));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_15 += ((((arr_13 [i_0] [i_0] [i_4]) ? var_1 : 195)) != (92 % 5684));
                arr_20 [i_0] [i_0] = (((55199 / 17086) ? ((((min((arr_11 [i_0] [i_0 + 1] [i_0 + 2]), 0))) ? (((var_6 * (arr_0 [i_0 - 2] [i_0 - 2])))) : ((10336 ? 125 : var_7)))) : ((((-(arr_4 [i_0] [i_2 - 3])))))));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_16 = (max(((min((arr_13 [i_0] [i_0] [i_0]), var_9))), 6366885234143966831));
                arr_23 [i_0] = (max(((10324 + (((arr_10 [i_0] [i_0] [22]) - var_1)))), ((min((var_1 + var_6), (var_1 + var_0))))));
                arr_24 [i_0] = 0;
            }
            arr_25 [i_0] = (min((((((min((arr_14 [i_0] [i_0] [i_0] [i_0 - 2]), (arr_12 [i_0] [i_2] [i_2])))) ? ((1048575 ? 1 : 81)) : (~106)))), ((2135141797 & ((((((arr_0 [i_0] [i_2 + 3]) + 2147483647)) >> (((arr_0 [1] [i_0 - 2]) + 14092)))))))));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_28 [i_0] = (arr_21 [i_0] [i_6] [i_0 - 2] [9]);
            arr_29 [i_0] [i_0] [i_6] = var_6;
            var_17 = (max((max((arr_0 [i_0 - 1] [i_0 - 2]), (max(1, 2135141829)))), 55212));
            var_18 = (min(var_18, 35));
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                arr_36 [i_0] [i_7] [i_8 + 1] = -var_9;
                var_19 = ((~(arr_19 [i_0 - 2] [i_0] [18] [i_0])));
                var_20 ^= (arr_32 [i_0 + 2] [i_8 + 1]);
                var_21 = (max(var_21, (!var_1)));
            }
            var_22 = (~var_2);
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
    {
        arr_40 [i_9] = (((arr_21 [i_9] [i_9] [i_9] [i_9]) && 1));
        arr_41 [i_9] = ((((((var_9 > (arr_38 [7] [i_9]))))) > (arr_4 [7] [i_9])));

        for (int i_10 = 2; i_10 < 22;i_10 += 1)
        {
            var_23 ^= (arr_33 [i_9] [i_10] [i_10]);
            var_24 ^= (!-var_4);
            arr_46 [i_9] [i_9] [i_9] = 1106;
            arr_47 [i_9] [i_9] [15] = var_5;
            var_25 = ((+(((arr_22 [18] [i_9] [6] [i_9]) ? 0 : 2135141799))));
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            var_26 = var_0;
            arr_51 [i_9] [i_11] = (((32316 ? 0 : (arr_11 [i_11] [i_11] [i_11]))));
        }
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_13 = 2; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 20;i_15 += 1)
                {
                    {
                        arr_63 [i_14] [i_14] = 198;
                        arr_64 [i_14] = (arr_7 [i_12] [i_12]);
                        arr_65 [i_12] [i_13] [i_14] [22] [i_14] = (arr_18 [i_12] [i_12] [i_14]);
                    }
                }
            }
        }
        var_27 ^= ((+(((!var_6) - var_8))));
    }
    var_28 = ((((min((max(var_6, 1)), var_2))) == (!var_8)));
    var_29 = var_1;

    /* vectorizable */
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        arr_69 [i_16] = var_2;

        for (int i_17 = 2; i_17 < 11;i_17 += 1)
        {
            arr_73 [i_16] = ((!((!(arr_61 [i_16] [i_16])))));
            arr_74 [i_16] [i_16] = ((var_1 ? (arr_50 [i_17] [i_17 - 1] [i_17 - 2]) : ((2463310128168492167 ? var_4 : 2135141802))));
            arr_75 [i_16] = ((arr_22 [i_17 - 2] [i_17 - 1] [i_17 - 1] [i_17 + 1]) ? var_9 : var_0);
        }
        arr_76 [i_16] [i_16] = var_6;
        arr_77 [i_16] = (-9 + 1);
    }
    #pragma endscop
}
