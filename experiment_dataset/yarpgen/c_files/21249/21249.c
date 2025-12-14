/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(var_16, (((max(var_4, 127)))));
    var_18 = ((var_10 >= (((var_8 << ((((var_10 ? var_10 : var_6)) + 357188843593544040)))))));
    var_19 = min((max(var_14, var_10)), (min((min(var_1, var_16)), (((var_3 ? var_1 : 4294967040))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = min(9223372036854775807, ((((!(arr_1 [i_0]))))));
        var_20 ^= min(6776375215621794899, (((((8191 ? 60 : (arr_0 [i_0] [8])))) ? var_1 : (max(var_3, 1099511627775)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_21 = (min(var_21, ((max(((((arr_4 [i_2]) == (arr_4 [i_2])))), 258)))));

            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                arr_14 [i_1] [i_2] [i_2] [i_1] = (((min(var_12, (arr_13 [i_3 + 1] [i_1] [i_3 + 2] [i_3]))) >> (((!(arr_13 [i_3 - 1] [i_1] [i_3 + 1] [1]))))));
                arr_15 [i_1] [i_1] [i_2] [1] = (((((((min(var_9, (arr_12 [i_1] [i_1] [i_1])))) ? (max(227, 1099511627775)) : 6776375215621794899))) ? 6776375215621794898 : 3173216796));
            }
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                arr_20 [i_1] [i_1] [i_1] [i_2] |= ((min(var_16, var_14)));
                var_22 = var_0;
            }
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                var_23 = (min(var_23, ((var_4 ? -var_11 : 1099511627775))));
                var_24 = (arr_10 [i_1] [i_1]);
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                arr_29 [i_1] [i_5 - 1] [i_1] = ((-var_11 ? var_5 : (arr_10 [i_1] [i_1])));
                arr_30 [i_1] [i_1] = 1;
            }
            var_25 = ((arr_17 [i_1] [i_5] [i_1]) ? (arr_13 [i_1] [i_1] [i_1] [i_1]) : (((var_0 ? (arr_3 [i_1]) : (arr_8 [i_5] [9])))));
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            arr_35 [i_1] = (arr_33 [i_1] [i_1]);
            arr_36 [i_1] = 1;
            var_26 = (min(var_26, (((((((128 ? (arr_23 [1] [i_1] [i_1]) : var_13)))) ? (max(var_5, 1099511627798)) : 1)))));
        }

        /* vectorizable */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_39 [i_1] [i_9] [i_1] = var_3;
            arr_40 [i_1] [i_1] = (((arr_27 [i_1] [i_1] [i_1]) ? (arr_27 [i_9] [i_1] [i_1]) : (arr_27 [i_1] [i_1] [i_9])));
            var_27 &= var_5;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            arr_45 [i_1] [i_10] [i_1] = (((((var_2 ? var_3 : var_16))) ? (arr_32 [i_1] [i_10]) : var_2));
            arr_46 [i_1] [i_10] = 28;
        }
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_28 = (max(var_28, (arr_53 [i_11] [i_12] [14] [i_14])));
                                var_29 = (min(var_13, ((((((127 ? (arr_28 [i_1] [i_1] [i_1]) : (arr_47 [i_1] [i_11] [i_12])))) ? 234 : (arr_12 [i_1] [i_1] [i_12]))))));
                            }
                        }
                    }

                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        arr_62 [i_15] [i_12] [i_1] [i_1] [i_1] = (arr_23 [i_1] [i_1] [i_1]);
                        var_30 = (min(var_30, (((!(((!var_15) && (arr_22 [i_15] [i_12] [i_1]))))))));
                        arr_63 [i_1] [i_1] [i_12] [i_15] = 1;
                    }
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        arr_66 [i_1] = (arr_3 [i_1]);
                        arr_67 [i_1] [i_1] [i_1] [i_1] = var_16;

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            arr_71 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_48 [i_16] [i_11 - 1] [i_11 - 1]);
                            var_31 = (arr_34 [i_17] [i_16] [17]);
                            var_32 = ((~((1 ? 1 : 5771129077129427254))));
                            var_33 = (arr_26 [i_17]);
                        }
                        arr_72 [i_1] [i_11 + 1] [11] [i_1] = (arr_13 [i_1] [i_1] [i_1] [i_1]);
                        var_34 = (((((arr_26 [i_1]) ? -5406153836928906603 : (arr_11 [i_1] [i_1] [i_1] [i_16])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
