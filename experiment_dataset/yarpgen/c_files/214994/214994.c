/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = var_4;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_18 = -1677520625;
            var_19 = (max(var_19, ((max((min((arr_0 [i_0]), (arr_1 [i_0]))), (((((((arr_2 [i_0] [i_1]) + var_14))) ? (arr_3 [i_0] [i_1] [i_0]) : (var_3 + var_5)))))))));
            var_20 += (((-(arr_0 [i_0]))));
        }
        var_21 = -var_13;
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        var_22 ^= (arr_4 [i_2 - 1]);
        arr_6 [i_2] [i_2] = (!(arr_5 [i_2 + 1]));
        var_23 = ((arr_4 [i_2 - 2]) ? (arr_4 [i_2 - 3]) : (arr_4 [i_2 + 2]));
        var_24 = (max(var_24, var_8));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_25 &= ((((~((-(arr_9 [i_3])))))) ? -1 : ((((arr_8 [i_3 - 1]) > (arr_9 [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_19 [i_3] [i_3] [i_3] [i_3] = 1;
                        var_26 = (min(var_26, ((!((((arr_9 [i_6]) ? var_14 : var_5)))))));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_27 = (arr_7 [i_3]);

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_28 = (((((arr_13 [i_3 - 1]) + 2147483647)) >> (var_9 - 14493)));
                            var_29 ^= 981859797;
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_30 = (21 ? ((((((var_9 ? (arr_27 [i_9] [i_7] [i_3] [i_4] [i_3 - 1]) : -21)) + 9223372036854775807)) >> var_9)) : (((18 ? var_14 : var_13))));
                            var_31 = ((!(((((arr_15 [i_4] [i_4] [i_4] [i_4]) ? (arr_24 [i_3] [i_4] [i_5] [i_3] [i_9] [i_3] [i_9]) : (arr_7 [i_3])))))));
                        }
                        var_32 = (-18 && -18);
                        var_33 = ((((~(arr_13 [i_3 - 1])))) ? (arr_26 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]) : (max((arr_11 [i_3 - 1]), (arr_16 [i_3] [i_3] [i_3 - 1]))));
                    }
                    arr_28 [i_3] [i_4] [i_5] = -16;
                    var_34 ^= ((-(arr_12 [i_5] [i_4])));
                }
            }
        }

        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            var_35 = 1;
            arr_33 [i_3] = 12;

            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                var_36 = (!-var_12);
                var_37 = arr_20 [i_3] [i_10] [i_11] [i_3 - 1] [i_10] [i_3];
            }
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                arr_38 [i_3] = ((((arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]) ? 1 : var_9)));
                var_38 ^= max(((-(arr_14 [i_10] [i_10 + 3] [i_10 + 1] [i_12]))), (max((arr_13 [i_3]), (((arr_29 [i_10 - 1] [i_12]) ? 1 : -29)))));
                var_39 = ((-(((arr_8 [i_12]) ? 1 : 0))));
            }

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_40 = (max(1, (arr_10 [i_3 - 1])));
                var_41 = var_11;
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                var_42 = ((~(arr_15 [i_3] [i_3 - 1] [i_10 + 2] [i_10 - 1])));
                var_43 = (((var_6 ? (arr_13 [i_14]) : (arr_31 [i_3] [i_3]))));
            }
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                var_44 *= ((!((min(-7, -27)))));
                arr_46 [i_3] [i_3] [i_15] = (39 && var_5);
                var_45 = var_2;
            }
            arr_47 [i_3] [i_3] [i_3] = -var_12;
        }
    }
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        var_46 = min((arr_49 [i_16]), (arr_49 [i_16]));
        var_47 -= var_11;
    }

    for (int i_17 = 0; i_17 < 14;i_17 += 1)
    {
        var_48 = (arr_40 [i_17] [i_17] [i_17]);
        var_49 = var_12;
    }
    for (int i_18 = 1; i_18 < 13;i_18 += 1)
    {
        var_50 = -35;
        var_51 -= (((((arr_39 [i_18 + 1] [i_18 + 1] [i_18]) ? 1 : -18))));
        var_52 = (((-(!1631320689))));
    }
    for (int i_19 = 1; i_19 < 1;i_19 += 1)
    {
        arr_60 [i_19] = ((((max((arr_41 [i_19 - 1] [i_19 - 1] [i_19]), (!29)))) ? (min(0, 3208430609150605465)) : (((((arr_41 [i_19] [i_19 - 1] [i_19 - 1]) && (arr_41 [i_19] [i_19 - 1] [i_19 - 1])))))));
        var_53 = (max((17 || 1), 15));
    }
    #pragma endscop
}
