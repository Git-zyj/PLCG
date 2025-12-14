/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] [i_1] [i_1] = (313662379 <= 127);

            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                var_13 |= (((arr_5 [i_2 - 1] [i_0 + 1]) << var_11));
                var_14 = (~(arr_0 [i_0 + 1]));

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_15 = ((var_1 ? (var_2 || 0) : 26728));
                    var_16 = (((arr_8 [i_0] [1] [i_2 - 1]) / (arr_9 [i_1] [i_3])));
                    arr_13 [i_0] [i_0] [8] [6] &= ((!((((arr_0 [i_0]) ? (arr_12 [i_0] [i_1] [i_2 - 1] [1] [i_3]) : var_11)))));
                }

                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    arr_17 [i_2 + 1] [i_2 + 2] [i_1] [i_2] = (((((var_6 ? 0 : var_1))) || var_1));
                    var_17 = (0 || (var_1 <= var_5));
                    var_18 -= var_9;
                }
                arr_18 [i_1] [i_1] [1] [i_0] |= arr_11 [i_2 + 2] [1] [i_2] [i_0 + 1] [i_0] [i_1];
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_19 = (min(var_19, ((((arr_6 [i_0 + 1] [i_5] [i_0 + 1]) - (arr_6 [i_0 + 1] [i_0 + 1] [i_1]))))));

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_28 [i_0 + 1] [i_1] [i_5] [i_7] = (38807 > ((((arr_24 [i_0]) >= 26729))));
                        arr_29 [i_1] [i_7] = (((arr_10 [6] [i_0 + 1] [i_0 + 1] [i_0 + 1]) << (arr_10 [4] [i_0 + 1] [i_0 + 1] [i_0])));
                    }
                    var_20 ^= 2819138809855061025;

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_21 -= (arr_15 [i_0] [i_1] [i_5] [i_6] [i_8]);
                        arr_33 [i_0] [i_1] [i_1] [i_1] [i_6] [4] = ((105 ? var_0 : -2819138809855061017));
                        var_22 = var_1;
                        var_23 += var_3;
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_24 += ((var_8 % (arr_26 [i_0 + 1] [i_0] [i_5] [i_0 + 1])));
                        var_25 = 38808;
                        arr_36 [i_9] [i_1] [i_1] [10] = 65519;
                    }
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_26 *= (arr_31 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]);
                    arr_39 [i_5] [0] [i_5] [i_5] [i_1] [i_5] &= ((arr_30 [i_5] [i_1] [i_5] [i_10] [i_0] [1] [i_1]) ? (var_10 - -1329457078558826182) : (arr_20 [i_0 + 1] [i_5]));
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    arr_43 [i_0] [i_1] [1] [11] [i_11] [i_1] = var_6;

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_27 = (arr_12 [i_12] [i_11] [i_5] [i_0] [i_0]);
                        var_28 = (1 >= var_12);
                        var_29 -= ((var_5 ? (arr_3 [i_0 + 1] [i_0 + 1]) : var_0));
                        var_30 = ((3 ? (arr_32 [i_1] [i_1]) : var_9));
                    }
                }
                var_31 = (0 || (arr_14 [i_0 + 1] [i_1]));
            }
            arr_46 [i_1] = 1;
            var_32 += (-1 || (arr_27 [i_0] [i_0] [i_0]));
        }
        for (int i_13 = 3; i_13 < 10;i_13 += 1)
        {
            arr_50 [i_13] [i_13] [i_0] = ((!(((~(((arr_37 [i_0 + 1] [i_0] [i_13 + 2]) ? var_2 : (arr_10 [1] [i_13] [i_13 - 2] [i_13]))))))));
            var_33 = ((1 ? (((min(var_7, (arr_5 [i_0] [i_13]))))) : 7704245767342266754));
        }
        var_34 = max((((!(arr_35 [1] [i_0 + 1] [i_0] [1] [1])))), (((arr_35 [i_0 + 1] [10] [i_0 + 1] [i_0] [1]) ? var_8 : var_5)));

        for (int i_14 = 1; i_14 < 1;i_14 += 1)
        {
            arr_53 [i_0] [i_14 - 1] [i_14] = (max((((arr_26 [i_0] [i_14] [0] [i_0 + 1]) ? var_8 : (~7936))), (min((var_12 - var_0), ((-(arr_27 [i_0] [i_0 + 1] [i_0])))))));
            arr_54 [i_0] [i_14] = ((((max(-50, 1))) ? (min(var_0, (var_6 % 1))) : ((min((!var_9), var_4)))));
            var_35 = ((!(((0 ? (arr_47 [12]) : -3180541234275433725)))));
            var_36 = 52595;
            arr_55 [i_14 - 1] [i_0] [i_14 - 1] = 1;
        }
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        arr_59 [i_15] = (min((max((38788 * 50), 49)), 0));
        arr_60 [i_15] = (arr_58 [i_15]);
    }
    for (int i_16 = 1; i_16 < 11;i_16 += 1)
    {
        var_37 = (min(((52600 / (arr_2 [i_16]))), (((((~(arr_51 [i_16] [i_16] [i_16 + 1]))) ^ var_3)))));
        var_38 = ((((max(var_12, var_4))) <= (((var_5 > 281474976710652) << 1))));
        var_39 = ((((min(var_3, (arr_14 [i_16] [i_16 - 1])))) > var_4));
    }
    var_40 = (+-1);
    var_41 = ((!((max((var_5 & var_10), (((-2072111242 ? var_8 : var_6))))))));
    #pragma endscop
}
