/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = var_10;
        var_20 = var_8;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] [i_1] &= (min((max(var_8, 0)), -7));
        arr_7 [i_1] = ((((arr_3 [12]) ? (arr_3 [15]) : (((min(1, 255)))))));
        var_21 ^= (min(61363, (arr_4 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] = var_7;

        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_22 |= ((max((arr_0 [i_3 + 3] [i_3 + 1]), (arr_12 [i_3 + 2] [i_3 - 1]))));
            var_23 = ((-6 && ((((arr_8 [i_2]) ? var_11 : (arr_8 [i_3 + 4]))))));
            arr_14 [1] = 61363;
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_24 = 255;
            var_25 += (max(255, (max(((768 ? (arr_13 [2]) : (arr_5 [i_2]))), 11))));
            var_26 = ((((max(2993, 1))) ? (((!(var_1 != -5)))) : ((6 ? (min(var_4, 0)) : ((min(0, 135)))))));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_27 = var_0;
                arr_21 [i_2] [i_5] = (((((70368743915520 ? (!121) : 121))) && (((0 ? (arr_5 [i_5]) : (((0 ? var_18 : var_7))))))));

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        var_28 = (((((arr_9 [i_2] [i_2]) ? ((max(12, 219))) : (0 <= var_0)))) ? (((arr_25 [14] [i_7] [i_6] [i_5]) ? (arr_18 [i_2] [i_8]) : var_13)) : (arr_4 [i_2] [i_2]));
                        var_29 = (((min((~12), ((var_1 ? var_0 : (arr_16 [i_6]))))) >= (arr_24 [i_8] [i_8] [i_8 - 1] [i_8] [i_8 - 2] [i_8 - 2])));
                    }
                    var_30 &= var_3;
                    arr_27 [3] [i_5] [i_6] [i_7] |= ((((((((~(arr_19 [i_7])))) > ((1 ? 65472 : 70368743915520))))) >= ((((1 == (arr_9 [12] [i_6]))) ? ((~(arr_18 [i_7] [i_6]))) : ((min(-21, -2)))))));
                }
                for (int i_9 = 3; i_9 < 19;i_9 += 1)
                {
                    var_31 = ((-(((((arr_2 [i_9]) >= var_3)) ? var_1 : 0))));
                    arr_32 [i_2] [i_9] [i_6] [i_9] = max(-62, var_1);
                }
                var_32 = (max(var_32, (((((~(arr_16 [i_5]))) > ((max(var_9, var_15))))))));
            }
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                arr_35 [1] [i_2] [i_5] [i_10 + 1] |= (((arr_10 [i_2]) ? (((~(61088 && var_15)))) : (((arr_3 [i_10]) ? ((var_5 / (arr_10 [i_10]))) : -1))));
                var_33 = 106;

                /* vectorizable */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    var_34 = (((~1) * 61089));
                    var_35 |= var_11;
                    arr_38 [1] [1] [i_10] = 1;
                    var_36 = ((var_1 - (arr_24 [i_2] [i_2] [i_10] [i_5] [i_2] [i_2])));

                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        arr_41 [i_2] [7] [i_10 + 1] [12] [14] [i_12] [i_12] = ((((arr_31 [i_2] [i_2] [i_2]) ^ var_1)));
                        var_37 = (((((var_12 ? 1 : var_1))) || (arr_39 [i_12] [i_11] [i_10 - 1] [i_5] [10] [i_2])));
                        arr_42 [7] [i_10] [i_5] = ((~(arr_2 [i_12])));
                        arr_43 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = -61061;
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        arr_46 [i_11] [i_13] [i_13] [i_2] = (arr_39 [i_2] [i_5] [i_10] [i_10 + 1] [i_2] [i_13]);
                        var_38 = 8;
                    }
                    for (int i_14 = 1; i_14 < 19;i_14 += 1)
                    {
                        arr_51 [i_2] [i_5] [i_5] [i_10 - 1] [i_11] [i_14] = ((var_13 ? ((var_16 ? (arr_26 [i_2] [i_2] [i_2]) : 1909532554956942472)) : -18));
                        var_39 = (max(var_39, (arr_9 [i_2] [i_5])));
                        var_40 = ((var_8 || (((arr_36 [i_10]) < (arr_50 [i_11] [7] [i_2])))));
                    }
                }
            }
            arr_52 [i_5] [i_5] = ((((-64 ? (min((-2147483647 - 1), 1)) : var_9)) + (arr_2 [i_2])));
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        arr_56 [i_15] |= var_10;
        arr_57 [i_15] = (((arr_26 [i_15] [i_15] [i_15]) ? var_17 : (arr_26 [i_15] [i_15] [i_15])));
        var_41 = var_7;
    }
    var_42 = var_15;
    var_43 = ((((((min(var_11, var_6))) || ((min(var_11, var_16))))) ? ((min(-9, ((var_5 ? var_1 : 38))))) : ((28 ? ((19 ? var_5 : -19)) : (var_0 || var_1)))));
    var_44 = var_7;
    var_45 = ((((min(-908642372, 5751534818631923009))) ? var_18 : ((-(min(0, var_1))))));
    #pragma endscop
}
