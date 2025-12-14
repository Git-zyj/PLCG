/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((arr_1 [i_0]) & (arr_0 [i_0]));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_21 = var_9;

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    var_22 = var_14;
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((((arr_9 [i_0] [i_0] [i_2] [i_3]) ? var_11 : (arr_5 [i_0] [i_1] [i_2] [i_2]))));
                    arr_11 [6] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_9 [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_2]);
                    var_23 = ((var_12 % ((-(arr_9 [i_1] [i_1] [i_2] [i_0])))));
                    var_24 -= ((-(arr_6 [i_2] [i_1] [i_2] [i_3 - 1])));
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_25 ^= (var_19 ^ 59182);
                    var_26 = ((-(arr_6 [i_0] [i_1] [i_2] [i_4])));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_27 = (arr_5 [18] [18] [i_2] [i_4]);
                        var_28 ^= ((97 ? 0 : -27));
                        var_29 -= (arr_15 [i_0] [i_1] [i_0] [i_4] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_30 = ((var_5 ? (arr_14 [i_0] [i_1] [i_2] [i_4] [i_6]) : -var_4));
                        var_31 = (((arr_2 [i_4]) ^ (arr_4 [i_1] [i_4])));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        var_32 = ((((var_13 >> (((arr_16 [i_7] [i_4] [i_2] [i_2] [7] [i_0]) - 25818)))) >> (((arr_4 [i_1] [i_7]) - 60))));
                        var_33 = ((-(~97)));
                    }
                    var_34 -= var_4;
                }
                arr_21 [1] [i_1] = (arr_20 [i_0] [i_0] [i_2] [i_2] [i_1] [i_0]);

                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    var_35 = (arr_5 [6] [i_2] [10] [i_0]);
                    var_36 = (max(var_36, (((+(((arr_12 [i_0] [6] [i_0] [i_8]) ? var_9 : (arr_16 [i_0] [i_1] [i_1] [i_2] [i_8] [i_1]))))))));
                }
                var_37 -= (arr_7 [i_0] [i_1] [i_1] [17]);
            }
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                arr_28 [i_0] [i_0] [i_0] [i_0] = ((~(arr_24 [i_9] [i_1])));
                arr_29 [11] [i_0] = (((arr_24 [i_0] [i_1]) & (arr_5 [i_9] [i_1] [i_1] [i_0])));
                var_38 = 97;
            }
            for (int i_10 = 2; i_10 < 19;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_39 = (max(var_39, -1));
                    var_40 = (--44);
                }
                for (int i_12 = 3; i_12 < 19;i_12 += 1)
                {
                    arr_36 [10] [i_1] [i_10] [i_12] = ((((!(arr_12 [i_0] [i_1] [i_1] [i_12]))) ? (~97) : -32767));
                    var_41 -= var_15;
                    var_42 = (((arr_22 [i_0] [i_0]) ? (~var_12) : (arr_16 [i_10] [i_10] [i_10 - 2] [i_10] [i_10] [i_10])));
                }
                arr_37 [i_1] [i_0] = (((arr_35 [12]) >> (((arr_3 [i_1] [i_1]) - 2171160698))));
            }
            for (int i_13 = 2; i_13 < 19;i_13 += 1)
            {
                var_43 = (((arr_13 [i_13 - 1] [i_13 + 1] [i_13 + 1]) ? (arr_14 [i_13] [i_0] [i_13 + 1] [i_13] [i_13 - 1]) : (arr_19 [i_13] [i_13] [i_13] [i_13] [i_13 - 1] [i_13 - 1])));

                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {

                    for (int i_15 = 2; i_15 < 17;i_15 += 1)
                    {
                        var_44 *= (arr_2 [i_14]);
                        var_45 = (arr_23 [i_15 + 1] [i_14] [i_0] [i_13] [i_1] [i_0]);
                        var_46 = 159;
                    }

                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        var_47 = (((var_16 <= var_16) <= 7818980145307085409));
                        arr_54 [i_0] [i_0] [i_0] [i_14] [i_16] = var_12;
                    }
                }
                for (int i_17 = 2; i_17 < 19;i_17 += 1)
                {
                    var_48 = (min(var_48, -var_10));
                    var_49 = (arr_17 [i_0] [i_0] [4] [i_0] [i_0]);
                    var_50 = ((7782 ? (9 >= 6097676325493642346) : (~4294967295)));
                    var_51 = (((arr_32 [i_13 + 1] [i_13 + 1] [i_13 - 2] [i_13 + 1] [i_13 + 1]) ? var_5 : (((var_17 ? var_3 : 1)))));
                }
            }
            var_52 = (max(var_52, (arr_1 [i_1])));
        }
        var_53 = arr_57 [i_0] [i_0] [i_0] [i_0];

        for (int i_18 = 1; i_18 < 19;i_18 += 1)
        {
            var_54 -= -1;
            var_55 = (((arr_17 [i_18 - 1] [i_18] [i_18 - 1] [i_18 - 1] [i_18 + 1]) >= 18446744073709551615));
        }
    }
    var_56 = 325253698;
    #pragma endscop
}
