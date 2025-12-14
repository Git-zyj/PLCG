/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] &= ((var_4 ? ((var_0 ? var_8 : (arr_0 [i_0]))) : var_4));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_6 [7] = (var_6 ? var_2 : (var_0 != -26927));

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_10 |= ((((((arr_7 [2] [i_1] [i_0]) ? (arr_7 [0] [i_0] [i_0]) : (arr_1 [i_1])))) ? (arr_5 [i_2]) : (((-9168766369516415783 && (arr_3 [i_0] [i_0]))))));

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_11 = (((((0 ? var_2 : var_6))) ? ((78 ? -1179796241 : (arr_4 [i_0]))) : ((((arr_10 [i_0] [i_0] [8] [i_1] [i_2] [0]) ? var_1 : (arr_1 [i_2]))))));
                    var_12 = ((var_6 ? ((var_4 ? (arr_3 [i_3] [i_2]) : var_7)) : ((-(arr_3 [8] [2])))));
                    arr_13 [i_0] [i_1] [i_2] [i_2] = var_6;
                    arr_14 [2] [i_3] [i_2] [i_2] [i_1] [6] = (((var_5 >= var_9) / (~var_7)));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_13 |= ((6754350688310673435 >= (arr_15 [i_0] [i_1] [i_2] [i_2])));
                    arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(arr_16 [i_2] [i_1] [8] [i_4])));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_14 = var_4;
                    arr_21 [3] [i_1] [i_1] [i_1] [i_1] [i_1] = (((((arr_12 [i_1] [i_2] [i_1]) / var_8))) ? 221 : (~var_4));
                    arr_22 [i_5] [5] [i_1] [i_0] [i_0] = ((var_2 || (arr_11 [i_1] [i_2] [i_5])));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_1] [0] [i_6] [i_1] = ((~((-64 ? (arr_3 [i_6] [i_1]) : (arr_9 [i_0] [9] [5] [5])))));
                    var_15 = var_9;
                    var_16 += ((-255 | (~7816)));
                }
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                arr_28 [i_7] [i_7] [i_7] [i_7] = ((arr_12 [4] [i_0] [i_0]) / 2503234669);
                arr_29 [i_0] [i_7] [i_7] = (~(arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]));

                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {
                    var_17 = (max(var_17, (arr_20 [i_0] [i_7] [2] [i_0])));
                    var_18 = ((var_5 ? (arr_9 [i_1] [i_1] [i_8 + 1] [i_7]) : (arr_9 [i_0] [i_1] [i_8 + 2] [i_0])));
                    arr_32 [i_0] [i_8 + 2] &= -32762;
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, ((((((-(arr_31 [i_0] [i_1] [8] [4] [i_9])))) / ((var_3 * (arr_15 [i_0] [i_0] [0] [i_9]))))))));
                    var_20 = (max(var_20, ((((arr_7 [4] [i_1] [i_1]) ? (arr_7 [i_1] [i_7] [i_1]) : var_9)))));
                    var_21 = (var_6 == var_0);
                    arr_35 [i_7] [i_1] [i_7] [i_9] = var_0;
                }
                for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                {
                    arr_39 [i_7] = var_5;
                    arr_40 [i_0] [i_1] [i_7] [i_1] = (~130);
                    var_22 = (((var_2 & var_0) ? (~25) : var_8));
                }
            }
            arr_41 [i_0] [i_1] [6] = (((32512 ? var_2 : -31228)));
        }
        for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 4; i_12 < 8;i_12 += 1)
            {
                arr_48 [i_11] [1] [i_12] [i_12] = ((arr_26 [i_0] [i_0] [i_11] [i_0]) ? -var_6 : var_0);
                arr_49 [i_11] [6] = ((~((var_0 + (arr_20 [i_0] [i_12] [i_12] [1])))));
                var_23 = (min(var_23, (((var_2 ? (arr_7 [i_12 + 1] [i_12 - 4] [i_11]) : (arr_7 [i_12 - 1] [i_12 + 1] [i_0]))))));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_24 = (min(var_24, var_2));
                var_25 ^= (87 || (arr_42 [i_0] [i_11] [i_13]));
            }
            arr_52 [i_11] = ((~(~var_0)));
            arr_53 [i_0] [i_11] [i_0] = var_7;
        }
        for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
        {
            var_26 = (arr_24 [i_14] [i_0] [i_0] [i_0] [i_0]);
            var_27 = (~var_4);

            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                var_28 = (((~var_5) >= (((((arr_12 [i_14] [i_14] [5]) >= var_9))))));
                var_29 = (max(var_29, var_9));
            }
            var_30 = (arr_47 [i_0] [i_14]);
        }
    }
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        arr_60 [i_16] [i_16] = ((((-var_2 ? (arr_59 [i_16]) : (((arr_58 [i_16] [i_16]) ? (arr_59 [i_16]) : var_3)))) < ((((!(arr_59 [i_16])))))));
        var_31 = (max(((((!(arr_58 [13] [i_16]))) || var_9)), (arr_59 [i_16])));
    }
    var_32 = max(((min((var_1 | var_5), var_5))), (((min(var_3, var_0)) >> (((max(var_9, -1)) - 18446744073709551561)))));
    #pragma endscop
}
