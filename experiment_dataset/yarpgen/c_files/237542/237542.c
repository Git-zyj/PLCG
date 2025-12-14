/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(var_8, var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_15 = (((arr_7 [i_0] [i_2] [i_3 + 1] [i_3 - 1] [i_3]) ? 2612640609 : (arr_7 [11] [11] [i_3 + 1] [i_3 - 1] [i_3 + 1])));
                        arr_9 [i_3] [i_1] [i_1] [i_1] = (arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 + 1]);
                    }
                    var_16 = (max((((arr_6 [i_0] [i_0] [i_1] [i_2] [i_0]) >> ((((max(139, var_11))) - 136)))), ((max(5284, 81)))));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_12 [i_4] [i_4] = (max(((((((arr_11 [i_4] [i_4]) ? 2612640609 : 33))) ? (arr_10 [i_4]) : (((arr_10 [i_4]) & var_8)))), ((max((arr_10 [i_4]), (arr_10 [i_4]))))));
        arr_13 [i_4] = var_3;
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_17 = (max((((arr_15 [i_5 + 3]) ? (arr_15 [i_6]) : var_2)), (((arr_10 [i_5]) + 1407009525))));
            arr_20 [i_5] [i_5] [i_6] = max(((((max((arr_19 [i_5 + 1] [i_5] [i_5]), -693040772))) ? var_3 : (max(117, var_13)))), (arr_15 [i_5 + 2]));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_23 [i_5] = ((((max((max(var_3, 249)), ((((arr_18 [i_5 + 1] [i_5 + 1]) && (arr_14 [i_5 + 2] [i_7]))))))) ? (((((((arr_21 [i_5 + 3]) / 235))) && ((((arr_22 [i_5 + 2] [i_7]) ? -1898572596 : 0)))))) : (arr_10 [i_7])));
            var_18 = (arr_11 [i_5 + 1] [i_5 + 1]);
            var_19 = (max(var_19, -1960291283791873635));
        }

        /* vectorizable */
        for (int i_8 = 2; i_8 < 22;i_8 += 1) /* same iter space */
        {
            var_20 = var_6;
            var_21 = (arr_18 [i_5 + 3] [i_5 + 3]);
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 22;i_9 += 1) /* same iter space */
        {
            arr_29 [i_5] [i_5] = (((arr_15 [i_5 - 1]) < 50));
            arr_30 [5] [23] [i_5 + 3] = (((var_8 + 9223372036854775807) << (((arr_16 [i_5 - 1]) - 38))));
            arr_31 [i_9] [i_5] = (((((var_5 | (arr_24 [i_5] [i_5])))) ? (arr_18 [i_5] [i_9 - 2]) : 20));

            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                arr_36 [i_5] [i_5 + 3] [i_5] [7] = (var_9 + (((!(arr_24 [i_9] [i_10])))));
                arr_37 [i_10] [i_9] [i_5 + 3] = (((arr_32 [i_5 + 1] [i_5] [i_9 - 2] [1]) % ((var_12 ? var_10 : (arr_28 [i_9] [i_10])))));
                arr_38 [i_5] [i_9] [i_9] [i_10] = ((2752719270 ? -61 : (arr_14 [i_5 + 2] [i_10])));
                var_22 = (((arr_33 [i_5 + 1] [i_5 + 3]) >= 5));
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                arr_43 [i_9 + 2] [i_11] = (((((-6716887162412004627 || (arr_40 [i_5] [i_9] [i_11] [i_5])))) << (arr_10 [i_5 + 2])));
                var_23 = (max(var_23, (arr_41 [i_11])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        for (int i_13 = 3; i_13 < 24;i_13 += 1)
        {
            {

                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    var_24 |= (((65535 || 61502) ? ((((((arr_45 [20]) * (arr_10 [i_13])))) ? (((32766 ? (arr_45 [i_12]) : 0))) : ((var_0 ? (arr_50 [i_12] [i_13 - 2]) : var_7)))) : (((~(arr_47 [i_13 - 2] [i_13]))))));
                    var_25 = (min(var_25, (((((((arr_50 [i_13 - 3] [i_13 + 1]) * (arr_48 [i_13 - 3])))) ? (((arr_45 [i_13 - 3]) >> var_6)) : ((var_7 ? 0 : (arr_45 [i_13 - 1]))))))));
                    var_26 = (max(var_26, var_2));
                }
                arr_51 [i_12] [i_12] = (((102 == 51) ? (!108) : 15));
                var_27 = (min(var_27, (((((arr_46 [i_13 - 2] [i_13]) || ((((arr_50 [i_12] [i_13]) + var_5)))))))));
                var_28 = (((arr_45 [i_12]) > ((~(arr_47 [i_12] [i_12])))));
                var_29 = (min(var_29, (((+(max((var_3 & var_1), (0 >= var_2))))))));
            }
        }
    }
    #pragma endscop
}
