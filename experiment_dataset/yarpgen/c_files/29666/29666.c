/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((var_14 ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_17 -= ((-(arr_5 [i_1])));

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            var_18 *= (arr_7 [i_2 + 3] [i_2 + 3] [i_2 + 1]);
            var_19 = (((arr_7 [i_1] [i_1] [i_2 - 1]) ? (arr_6 [i_1] [i_2 + 2]) : (((arr_5 [i_2]) | (arr_7 [i_1] [i_2] [i_1])))));
            var_20 += (!7);
        }
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                var_21 = 226;
                var_22 += ((~((249 ? -165018282 : 6))));
                arr_16 [i_1] [i_1] [i_1] = (!0);
                var_23 = (((((arr_9 [i_1] [i_1] [i_4 - 2]) >= (arr_12 [i_4]))) ? var_6 : ((249 ? (arr_12 [i_1]) : (arr_14 [i_4])))));
            }
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_21 [i_6 - 1] [i_5] [i_3 - 2] [i_3 - 1] [i_1] = (-var_15 ? var_16 : (arr_9 [i_5] [i_5 - 1] [i_5]));
                        arr_22 [i_6] [i_1] [i_1] [i_1] = (((arr_10 [i_5] [i_6] [i_6 - 1]) * (arr_18 [i_1] [i_3 + 1] [i_5 - 1])));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_24 |= ((249 << (57 - 55)));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            arr_33 [i_8] = 3;
                            var_25 = ((arr_32 [i_9 + 2] [i_9] [i_9 + 1] [i_9] [i_9 + 1] [i_7] [i_7]) ? ((-(arr_30 [i_1] [i_7] [i_7] [i_7] [i_8] [i_9] [i_7]))) : (arr_27 [i_9] [i_9]));
                            arr_34 [i_1] [i_7] [i_10] [i_1] [i_7] [i_8] [i_1] = (104 ? 89 : -301199816);
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            arr_38 [i_11] = ((!((((arr_10 [i_1] [i_1] [i_1]) / (arr_19 [i_1] [i_1] [i_1] [i_11] [i_11] [i_11]))))));
            var_26 *= (91 & var_11);

            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                var_27 = arr_18 [i_12] [i_11] [i_1];
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            arr_46 [i_1] [i_11] [i_11] [i_11] [i_13] [i_14] [i_14] = (((arr_20 [i_12] [i_14]) ? (arr_8 [i_1] [i_12] [i_12]) : var_15));
                            var_28 = ((((arr_36 [i_11] [i_11] [i_11]) == (arr_20 [i_1] [i_1]))));
                            arr_47 [i_1] [i_11] [i_1] [i_13] [i_13] [i_13] [i_14] = ((var_9 ^ ((((arr_29 [i_1] [i_11] [i_1] [i_13]) || (arr_43 [i_1] [i_1] [i_11] [i_1]))))));
                        }
                    }
                }
                var_29 |= (arr_12 [i_1]);
            }
            for (int i_15 = 2; i_15 < 20;i_15 += 1)
            {

                for (int i_16 = 3; i_16 < 22;i_16 += 1)
                {

                    for (int i_17 = 1; i_17 < 22;i_17 += 1)
                    {
                        var_30 = (max(var_30, ((((arr_42 [i_16] [i_16] [i_17 - 1] [i_17 - 1] [i_17] [i_17]) >= (arr_42 [i_16] [i_16] [i_16] [i_17 - 1] [i_17] [i_17]))))));
                        var_31 = (min(var_31, (arr_50 [i_17])));
                    }
                    for (int i_18 = 1; i_18 < 21;i_18 += 1)
                    {
                        var_32 = (~(arr_28 [i_11] [i_16 - 2] [i_18 + 1] [i_16 - 2]));
                        arr_57 [i_11] [i_11] = (arr_32 [i_11] [i_11] [i_16] [i_16 - 2] [i_16] [i_18 + 2] [i_18]);
                        var_33 = ((!(38 - 7)));
                    }
                    arr_58 [i_1] [i_11] [i_1] [i_11] = (arr_45 [i_1]);
                }
                arr_59 [i_11] [i_11] = ((var_15 ? 0 : (arr_42 [i_1] [i_1] [i_15] [i_15] [i_15] [i_15 + 1])));
                var_34 = ((((!(arr_15 [i_1] [i_11] [i_1]))) ? (arr_53 [i_11] [i_15 - 2]) : (arr_27 [i_1] [i_15])));
            }
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                arr_62 [i_1] [i_1] [i_19] [i_11] = ((-((var_7 ? -417975565 : -64))));
                var_35 = 233;
                arr_63 [i_11] [i_11] = var_5;
                var_36 = ((-1612221581 > (arr_14 [i_11])));
                var_37 = (((arr_55 [i_1] [i_1] [i_11] [i_11] [i_11] [i_19] [i_19]) ? (((arr_35 [i_19] [i_19] [i_19]) ^ 60428)) : 85));
            }
            for (int i_20 = 3; i_20 < 21;i_20 += 1)
            {

                for (int i_21 = 1; i_21 < 22;i_21 += 1)
                {
                    var_38 |= (arr_37 [i_20 - 1] [i_20 - 1] [i_21 + 1]);
                    var_39 |= (arr_10 [i_21] [i_21] [i_21 - 1]);
                }
                arr_69 [i_11] [i_11] = (~21);
            }
            var_40 = (((arr_26 [i_1] [i_1] [i_1] [i_11]) || (arr_26 [i_1] [i_1] [i_1] [i_11])));
        }
    }
    var_41 = (~((-(min(var_7, var_11)))));
    var_42 = var_12;
    #pragma endscop
}
