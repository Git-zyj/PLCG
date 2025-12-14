/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~104);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_12 = 1;
            var_13 = (arr_1 [5]);
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_14 = (~1);
            var_15 = ((-1 ? (((arr_4 [i_0 - 1]) ? (arr_6 [i_2] [1]) : (arr_1 [i_0 + 1]))) : (arr_6 [i_0 + 1] [i_0 - 1])));
            arr_7 [i_0 - 1] = ((59884 + 0) ? -1 : ((1 >> (((arr_0 [i_0 + 1]) - 54518)))));

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_16 = (1 * 1);
                var_17 = (arr_0 [i_0]);
                var_18 += (((arr_8 [i_0 - 2] [i_0] [2] [i_0 + 1]) < (arr_8 [i_0 - 2] [i_0] [i_0] [i_0 - 1])));
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                arr_13 [i_0] = -var_5;
                arr_14 [i_2] = ((arr_4 [i_0 - 1]) || (arr_4 [i_0 - 2]));
                var_19 += 1;
            }
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                arr_18 [i_0] [i_2] [i_0] [i_5 - 1] = (((-495233941 + 2147483647) << (1 - 1)));
                arr_19 [i_0] [i_0] [i_5 + 1] = (arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                var_20 = (var_4 * var_2);
            }
            var_21 = (min(var_21, 1));
        }
        var_22 = ((!(((arr_17 [i_0] [i_0] [i_0 - 1] [i_0]) && var_9))));
        arr_20 [17] = 3387412251438557472;
        var_23 = (1 & 1);
        var_24 = -var_1;
    }

    /* vectorizable */
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        var_25 = (max(var_25, ((((arr_0 [i_6]) ? ((1 ? 1 : (arr_2 [i_6 - 1] [i_6 - 1]))) : 1)))));
        var_26 = ((var_10 ? 63 : (arr_5 [0] [i_6] [0])));
        arr_24 [i_6] = var_1;
        arr_25 [i_6] [i_6] = 18446744073709551608;
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        arr_28 [i_7] = var_1;
        var_27 = ((-(!var_4)));
    }
    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {
        var_28 = (((arr_17 [6] [i_8 - 2] [i_8] [i_8]) ? (((((arr_10 [i_8 - 1]) == 1)))) : ((1 ? (arr_6 [i_8] [i_8]) : (arr_27 [i_8])))));
        var_29 = (max((arr_15 [i_8]), (arr_1 [i_8])));
    }

    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] [i_9] = (((arr_32 [i_9]) ? (max((((arr_33 [i_9] [7]) ? var_9 : -2034536432)), -8684101471107475512)) : (arr_32 [20])));
        var_30 += -1;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
    {
        var_31 = var_4;
        var_32 = var_4;
    }

    for (int i_11 = 2; i_11 < 11;i_11 += 1)
    {
        var_33 = ((1846477522 >= ((((-(arr_3 [i_11 - 2] [i_11 - 2] [i_11]))) & ((max(1, (arr_17 [i_11] [8] [i_11 + 1] [i_11 - 2]))))))));
        arr_39 [1] = ((arr_0 [i_11]) ? ((18446744073709551591 ? ((max(1, -1))) : 6224944750026540092)) : ((((arr_8 [i_11] [i_11] [i_11] [i_11]) ? (((arr_4 [i_11 - 1]) - (arr_0 [1]))) : 1679))));
        var_34 = ((1 ? 6938597507390197535 : 1));
    }
    /* vectorizable */
    for (int i_12 = 4; i_12 < 24;i_12 += 1)
    {
        var_35 = 1;
        var_36 = (((arr_41 [i_12 - 3]) ? (((arr_40 [i_12 + 1]) ? 1 : (arr_40 [i_12]))) : ((8 ? 1 : 1))));
        var_37 = ((~(((arr_40 [i_12 - 3]) ? (arr_40 [i_12]) : var_6))));
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
        {
            arr_48 [i_14] [i_14] [14] = (((((1 ? 1 : 1))) ? ((1 ? (arr_46 [i_13] [i_14]) : (arr_41 [18]))) : (((-(((arr_40 [i_14]) ? 1677 : 1)))))));
            var_38 = 1;
            arr_49 [i_13] [i_13] [12] = (arr_44 [i_14]);
        }
        for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
        {
            arr_53 [i_13] [i_15] [i_15] = (arr_47 [i_13]);
            arr_54 [i_13] [i_13] = 18446744073709551615;
            var_39 = (arr_50 [i_13]);
            arr_55 [i_15] [i_13] [i_13] = (((((9 ? ((min(1, 4))) : 0))) ? ((((65527 ? 1 : (arr_50 [i_13]))) ^ var_8)) : (((((63858 ? 1 : 1))) ? 1687 : (((arr_46 [i_13] [i_15]) ? (arr_52 [i_13] [i_13]) : (arr_52 [18] [i_15])))))));
        }
        arr_56 [i_13] [18] = ((+(((arr_51 [i_13] [i_13]) / (arr_51 [i_13] [i_13])))));
    }
    for (int i_16 = 0; i_16 < 23;i_16 += 1)
    {
        var_40 = ((-(((arr_41 [i_16]) ? (arr_41 [i_16]) : 1))));
        arr_59 [i_16] = (max(((-(arr_43 [i_16]))), ((9 ? 1 : 1))));
    }
    #pragma endscop
}
