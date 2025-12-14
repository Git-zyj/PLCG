/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((min(var_2, var_1))))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_21 = (max((((max(var_10, var_3)))), 3936068191));
        var_22 = ((-(!var_10)));
        var_23 = (min(var_23, (((((!(((var_12 ? var_4 : 50575))))) ? (arr_2 [i_0 - 1]) : (arr_0 [10]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = ((~(((min(-100, (arr_0 [i_1])))))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] = 358899104;
            var_24 = (arr_6 [2]);
            arr_11 [i_2] [i_2] = var_7;
        }
        for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_25 = -14637621253197398530;

            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_26 = var_5;
                    arr_18 [i_1] [i_1] [i_1] [i_3] [i_1] = (!var_4);
                    arr_19 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4 - 1] [i_3] = 93;
                }
                arr_20 [i_4] [i_3] [i_4] [7] = (((((min(var_14, (arr_17 [i_3 + 1] [i_3]))))) + var_7));
                arr_21 [i_3] = ((~((max((arr_0 [i_3 - 1]), var_3)))));

                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    var_27 = 26924;
                    var_28 = 35044;
                    var_29 *= ((min(var_5, (arr_15 [i_3 - 1] [i_3 - 1] [i_4 - 1]))));
                }
                var_30 = (((max(var_4, (arr_9 [i_1] [i_4])))));
            }
            var_31 = (min(223, 18446744073709551607));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_32 = var_5;
            arr_27 [i_1] = ((((max(87, 18446744073709551615))) ? (((!87) >> (((arr_4 [i_1] [i_7]) - 12268293289254283265)))) : 106));

            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                var_33 = ((~(arr_9 [i_7] [i_7])));
                arr_30 [i_7] [i_7] |= var_17;

                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    arr_33 [i_1] [i_7] [1] [8] [1] = (arr_23 [i_1] [i_7] [i_8] [i_8] [4]);
                    var_34 = (max((!-var_13), (max(((min(87, -112))), (arr_29 [i_7] [i_8] [i_9])))));
                    var_35 = var_11;
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 8;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            arr_41 [i_12] [i_7] [i_12] [i_11] = var_19;
                            arr_42 [i_12] = ((4294967295 ? ((max(121, (arr_13 [i_11 - 1])))) : (((arr_13 [i_11 + 1]) ? 77 : (arr_13 [i_11 + 4])))));
                            arr_43 [i_1] [i_12] = -205;
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            arr_46 [i_13] [i_13] [i_13] [i_13] [2] [i_13] [i_13] = ((((min(((var_4 ? (arr_17 [i_10] [i_13]) : var_19)), ((-46 ? (arr_34 [i_13] [i_13] [11]) : 9))))) ? 1 : (((!(arr_31 [6] [i_11] [i_11] [i_11 - 1]))))));
                            var_36 = ((((min((arr_23 [i_11 - 2] [i_11] [i_10] [i_11 + 4] [i_11 + 3]), (arr_23 [i_11 + 3] [i_11] [i_13] [i_11] [i_11 + 4])))) ? ((max(1, var_19))) : (((arr_23 [i_11 - 2] [i_11 - 2] [i_13] [i_11] [i_11 + 1]) ? -82 : (arr_23 [i_11 + 4] [i_11] [i_10] [i_11] [i_11 + 1])))));
                            var_37 = (min((((arr_24 [i_11 + 2] [i_11 + 2] [i_11 - 1] [i_11]) ? var_12 : (arr_24 [i_11 - 1] [i_11 - 1] [i_13] [i_13]))), ((max((arr_23 [i_11] [i_11] [i_7] [i_13] [i_13]), (arr_39 [i_7] [i_1] [5]))))));
                            var_38 = (max((~1), var_13));
                            var_39 = -6140;
                        }
                        for (int i_14 = 1; i_14 < 10;i_14 += 1)
                        {
                            arr_49 [i_14 - 1] [1] [i_14 - 1] = (((arr_24 [i_14 + 2] [i_14] [i_14] [0]) ? -19 : -93));
                            arr_50 [i_11] [i_11] [i_10] [i_1] [i_14 + 2] = (((arr_2 [i_1]) ? ((max(var_15, (arr_39 [4] [1] [i_14])))) : -var_5));
                            var_40 = (arr_31 [i_14 + 1] [i_11 + 4] [i_7] [i_14]);
                        }
                        var_41 |= 255;
                    }
                }
            }
            arr_51 [i_1] &= ((~87) != (((arr_0 [i_7]) ? 31216 : (max(var_0, 112)))));
        }

        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            var_42 = -var_17;
            arr_55 [i_15] = ((var_0 ? ((((!(arr_32 [i_15] [i_15]))))) : var_7));
        }
        arr_56 [i_1] [i_1] = 866968662;
    }

    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        arr_61 [i_16] = (max(((((min(18446744073709551615, var_12))) ? (((min(220, var_4)))) : (max(1, 18446744073709551615)))), 92));
        var_43 = (((58003 << ((((-6146 ? 62133 : -87) - 62132))))));
        var_44 = 1709830329;
    }
    #pragma endscop
}
