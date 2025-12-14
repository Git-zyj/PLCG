/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (1388187209652332486 & var_3);
        var_11 = (1023 & 55196);
        arr_4 [i_0] = ((-((var_7 ? var_6 : 10662))));
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_12 = (((((4294967295 ? ((var_5 + (arr_9 [i_1]))) : (min(var_3, (arr_5 [i_1] [i_1])))))) ? ((2796083361 ? var_8 : ((var_4 ? (arr_2 [i_1]) : var_10)))) : (((((4294967295 ? 4390242334765597361 : 1))) ? ((var_6 ? 981611253 : var_0)) : (((max(1, 27436))))))));
            arr_10 [i_1] [i_2] [i_1] = 1455613509;
            arr_11 [i_1] = (4104675566 != 8449976779516865711);
        }
        var_13 -= ((((arr_1 [i_1]) ? (arr_1 [i_1]) : var_2)));
        var_14 &= (min((arr_2 [i_1]), var_9));
        arr_12 [i_1] = (((((var_2 >= var_2) || var_6)) ? 46742 : 1));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_15 = ((((var_9 ? var_4 : (var_2 & var_1))) <= (((var_8 * var_0) * (((var_2 ? var_9 : var_3)))))));
        arr_16 [i_3] [i_3] = ((~(arr_13 [i_3] [i_3])));
        var_16 -= ((((((1613558441 ? 1 : 1)) == (arr_6 [i_3]))) ? var_1 : ((1 ? 9223372036854775805 : 13))));
        arr_17 [i_3] = ((((-((2446935311 ? var_0 : 2301339409586323456)))) - (((((((arr_5 [i_3] [i_3]) << (var_1 - 688256494)))) ? var_0 : var_7)))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_21 [i_4] = ((((((var_1 % (arr_5 [i_4] [i_4])))) ? var_6 : (((arr_1 [i_4]) ^ (arr_6 [i_4]))))));
        var_17 = (max(var_17, ((((arr_5 [i_4] [i_4]) ? ((1 ? 1052815601 : 4294967295)) : 3254)))));
        var_18 = (max(var_18, (((((min(43918, var_4))) ? ((max(var_0, 0))) : (max((((arr_5 [i_4] [i_4]) >> (3109640371690293729 - 3109640371690293672))), (var_2 && var_9))))))));

        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            arr_24 [i_4] &= ((4294967295 ? 1 : 8651));
            var_19 = (~var_3);

            /* vectorizable */
            for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
            {
                arr_27 [i_4] [i_4] [16] [i_6] = 0;
                var_20 ^= (~var_9);
                var_21 = (min(var_21, var_1));

                for (int i_7 = 2; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    var_22 *= (((var_3 & (arr_30 [i_4] [i_5] [i_6] [4]))));
                    var_23 = var_5;
                    arr_31 [i_5] [i_5] [i_5 - 3] [i_5 - 3] [i_5 - 2] = (var_8 <= ((0 ? var_7 : -1)));
                }
                for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    var_24 = (max(var_24, ((((arr_29 [i_8 + 1] [i_8 + 3] [i_8] [i_5 - 1]) << var_7)))));
                    var_25 = var_5;
                    arr_34 [i_8 + 3] [i_5] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_5] = arr_29 [i_4] [i_5] [i_6] [i_8];
                    var_26 ^= (arr_29 [i_4] [i_4] [i_4] [i_4]);
                }
                for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_27 = arr_38 [i_4] [1] [i_6] [2] [i_10];
                        var_28 = (var_5 % 1);
                    }
                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {
                        var_29 = 1762640512;
                        var_30 = (((arr_9 [i_4]) ? (arr_35 [i_5] [i_5]) : var_5));
                    }
                    arr_42 [i_4] [i_5] [i_6] [i_9 + 3] &= ((var_0 ? 2198687599 : ((1 ? 2289105231284773544 : 8940326))));
                    var_31 = 12811152472550367104;
                }
            }
            for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
            {
                var_32 &= var_4;
                var_33 &= var_4;
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_34 &= var_2;
                var_35 = ((-((((min(244565884, 1))) ? ((var_6 ? (arr_46 [i_13] [i_5 - 1] [6]) : (arr_1 [i_13]))) : var_6))));
            }
        }
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {

            for (int i_15 = 1; i_15 < 15;i_15 += 1)
            {
                arr_53 [i_4] [i_4] [i_4] [i_4] &= ((((min(9223372036854775807, var_9))) ? (((!var_5) ? ((var_1 | (arr_51 [i_4] [2] [i_4]))) : var_3)) : (min((((arr_20 [i_4]) ? (arr_2 [i_4]) : var_6)), (arr_49 [i_15 + 3])))));
                var_36 = ((+((((((arr_50 [i_14] [i_15]) * 1))) ? ((var_5 ? var_5 : var_10)) : (arr_51 [i_4] [i_14] [i_15])))));
            }
            arr_54 [i_4] [i_4] [i_14] = (((arr_50 [4] [i_14]) ? var_3 : ((((max(var_9, (arr_32 [i_4] [i_14])))) ? (((((arr_20 [i_4]) > 41771)))) : var_6))));
            arr_55 [i_4] [i_4] = var_3;
            var_37 = (min(((((((arr_52 [i_4] [i_4] [i_4] [0]) - 0))) * ((var_0 ? 131040 : (arr_9 [i_4]))))), ((var_10 ? ((var_4 ? var_2 : (arr_28 [i_4]))) : (1986983407 / 32767)))));
            var_38 = var_5;
        }
        for (int i_16 = 0; i_16 < 18;i_16 += 1)
        {
            var_39 = (((((((((arr_51 [i_4] [i_4] [i_4]) ? var_10 : -19756))) ? var_8 : ((1 ? 5396153822443753895 : 46184))))) ? (var_7 || var_7) : (((arr_20 [i_4]) * (arr_2 [i_4])))));
            arr_59 [i_4] = (var_8 >> (arr_18 [i_16] [i_4]));
            var_40 = (min(var_40, var_2));
        }
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            arr_62 [i_4] [i_4] = var_4;
            var_41 = (min(var_41, ((((((((13946 ? 1839538618 : var_4))) ? var_7 : ((-(arr_43 [i_4] [i_4] [i_17]))))) / ((-var_4 ? ((var_9 ? 1 : 40634)) : (arr_30 [i_17] [i_17] [i_17] [i_17]))))))));
        }
        var_42 = (arr_47 [i_4] [i_4] [i_4] [i_4]);
    }
    var_43 = (min(var_43, ((((((var_6 ? var_3 : ((var_3 ? var_1 : var_7))))) ? var_10 : var_5)))));
    #pragma endscop
}
