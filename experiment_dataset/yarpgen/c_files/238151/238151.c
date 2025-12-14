/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((~((~(var_15 + var_4))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = var_16;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_0] |= ((((~(arr_3 [i_2] [i_0]))) >> ((((var_5 ? var_8 : (arr_0 [i_0]))) - 3812205708))));
                        arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] = (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (~var_9) : (!var_14)));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_20 = (~var_14);
                            var_21 |= (-(((!(arr_2 [i_4])))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [8] = ((var_7 * (arr_3 [4] [4])));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_3] = (!var_4);
                        }
                        var_22 = (max(var_22, (arr_13 [i_0] [7] [i_2] [i_2] [i_3])));
                    }
                }
            }
        }
        var_23 ^= ((~(!-2147483634)));
    }
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            arr_21 [i_6] [i_6 + 2] = (max(var_4, (max((((arr_9 [i_5] [i_5] [i_5 - 2] [i_5] [i_5] [i_6]) ? var_9 : (arr_0 [i_5]))), (((!(arr_0 [i_6 - 1]))))))));
            var_24 = ((var_8 ? (max((~var_17), (arr_18 [i_5] [i_6]))) : var_17));

            for (int i_7 = 3; i_7 < 7;i_7 += 1)
            {
                var_25 = var_3;
                arr_26 [i_5] [i_7] [i_7] [i_5] = (min(((~(((arr_2 [i_7]) ? (arr_0 [i_7]) : var_11)))), (((((arr_2 [i_5 - 1]) ? (arr_18 [i_6] [i_6]) : (arr_17 [i_6 - 2] [i_6 - 2])))))));
            }
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                var_26 = (((((~var_9) * ((max((arr_7 [i_5] [i_5] [i_8] [i_5]), (arr_9 [i_5 - 1] [i_5 - 1] [i_6 - 1] [i_6 - 1] [i_8 + 1] [i_8 + 1])))))) - (((arr_14 [i_5] [i_5 + 1] [i_5]) ? ((((arr_18 [i_5] [i_5]) ? var_17 : var_15))) : var_12))));
                arr_29 [i_5] [i_5] [i_5] [i_5] = (max(((max(((max((arr_2 [i_5]), var_14))), (min((arr_4 [i_5] [i_5] [i_5]), (arr_24 [i_6])))))), (min((((var_9 ? var_14 : var_0))), (((arr_3 [i_5] [i_5]) ? (arr_9 [i_8] [i_8 + 1] [i_8 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) : (arr_20 [i_5] [i_5])))))));
            }
            for (int i_9 = 2; i_9 < 8;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        {
                            arr_37 [i_5] [i_5] [i_10] [i_5] [i_5] [i_5] = (((((((min(var_0, var_3))) ? var_10 : (((var_2 > (arr_7 [i_6] [i_6] [i_9] [i_6]))))))) ? var_10 : (((!(arr_31 [i_6] [i_6]))))));
                            var_27 += var_6;
                            arr_38 [i_5] [i_6] [i_9] |= (max((((175113634 - 7184) >= 58340)), (arr_23 [i_5] [i_5] [5])));
                        }
                    }
                }
                var_28 = var_11;
                arr_39 [i_9 + 1] [i_5] [i_5] &= ((!(((((((arr_33 [i_5] [i_9] [i_9 + 2] [i_5]) | var_7))) ? (arr_33 [i_5] [i_9] [i_6 - 2] [i_9 + 1]) : (var_16 | var_11))))));
                var_29 |= var_5;
                arr_40 [i_5] [i_5] [i_6] [i_5] = ((7169 ? 65521 : 112));
            }
            for (int i_12 = 3; i_12 < 8;i_12 += 1)
            {
                var_30 -= (max(((((((max(var_2, var_4)))) <= (((arr_18 [i_5] [i_6]) ? var_14 : var_0))))), (min(-var_5, (((var_3 ? (arr_4 [i_5 + 1] [i_5 + 1] [i_12]) : var_11)))))));

                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    var_31 ^= (min(((((~(arr_34 [i_5 - 2] [i_6 - 1] [i_5 - 2]))))), (arr_6 [i_5] [i_6] [i_12 + 1] [i_13])));
                    var_32 ^= (!((max(((var_16 ? var_5 : (arr_19 [i_5 - 1]))), (((!(arr_17 [i_6] [i_6]))))))));
                }
                for (int i_14 = 1; i_14 < 9;i_14 += 1)
                {
                    var_33 = ((((arr_1 [i_12]) ? (((arr_27 [i_12] [i_5] [i_5]) / (arr_14 [i_5] [2] [i_5]))) : (((arr_41 [i_5] [i_12 - 2] [i_5] [i_5]) + (arr_30 [i_14 - 1] [i_14 - 1] [i_14] [i_14 + 1]))))));
                    var_34 = (((min((arr_3 [i_5 + 1] [i_12 + 1]), (arr_5 [i_14 - 1] [i_12 + 2] [i_6 + 2] [i_5 + 1]))) > (arr_5 [i_14 + 1] [i_12 + 2] [i_6 + 2] [i_5 - 1])));
                    var_35 |= (((~var_12) ? (((min((arr_20 [i_6] [i_6]), var_4)) / ((min((arr_19 [i_5]), (arr_7 [i_14 - 1] [i_12] [i_6] [i_5])))))) : (arr_34 [i_5 + 1] [i_5 + 1] [i_6 + 1])));
                }
            }
        }
        var_36 = (min(var_36, var_17));
        var_37 ^= (((((arr_34 [i_5] [i_5] [i_5]) * (arr_13 [i_5] [i_5 - 2] [i_5] [i_5 + 1] [i_5]))) < (arr_9 [i_5] [8] [i_5] [i_5] [i_5] [i_5])));
    }
    for (int i_15 = 2; i_15 < 9;i_15 += 1)
    {
        var_38 = (min(var_38, ((((((((!(arr_27 [i_15] [i_15 - 2] [i_15 - 2])))))) ? var_6 : (((arr_14 [i_15] [i_15] [i_15]) - ((var_5 ? (arr_51 [i_15] [i_15]) : var_8)))))))));
        arr_52 [i_15] = (max((arr_25 [i_15 - 1]), (max(((var_8 ? (arr_14 [i_15 - 1] [i_15 - 2] [i_15 - 2]) : var_8)), ((min((arr_13 [i_15] [i_15] [i_15] [i_15] [i_15]), var_2)))))));
        arr_53 [i_15] = (((var_4 ? (arr_12 [i_15 - 1] [i_15]) : (arr_17 [i_15] [i_15]))));
        var_39 = ((-var_5 ? var_1 : var_13));
    }
    var_40 = (max((((var_9 ? var_5 : var_16))), (max((((var_7 ? var_1 : var_16))), (max(var_14, var_6))))));
    #pragma endscop
}
