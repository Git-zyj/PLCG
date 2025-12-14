/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0 + 2] |= (((((-(((arr_1 [i_0 + 1] [i_0]) ? 18446744073709551615 : 18))))) ? ((var_13 + (arr_1 [i_0 + 1] [i_0 + 1]))) : var_10));
        var_14 += (~-var_12);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_15 = var_12;

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_16 -= ((9 ? 65527 : -9));
                arr_11 [i_1] [i_2] [i_2] [12] = ((var_13 ? (~65533) : ((65533 / (65525 ^ 9)))));
                arr_12 [i_2] = -65527;
            }
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                var_17 = ((((var_10 ? (arr_15 [16] [i_2] [i_4 - 1] [7]) : 13))) && (!var_4));
                arr_17 [i_1] [i_2] [i_2] [i_1] = ((~((1 ? 4528089699478231559 : 14))));
                arr_18 [i_1] [i_1] [i_2] [i_1] = ((((((((~3) + 2147483647)) << ((((~(arr_5 [16]))) - 8475))))) ? (!48) : var_12));
            }
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    var_18 = var_5;
                    var_19 = ((-52 ? (!var_6) : (~-7253)));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_29 [i_1] [i_2] = (arr_15 [1] [i_2] [i_2] [i_1]);
                        var_20 = (+-4528089699478231578);
                    }
                    var_21 += (~var_2);
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_22 = (((((-91445016 ? 0 : -1))) ? var_10 : (!0)));
                    arr_32 [i_1] [i_2] [i_5] [i_8] = -40;
                    var_23 &= -9;
                    var_24 = ((((-121 ? -20 : -121)) < (~var_3)));
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    arr_37 [i_2] [i_2] = (arr_8 [i_2] [i_5] [i_2] [i_2]);
                    var_25 = 38;
                    var_26 = ((((((var_11 % var_2) << (var_9 < var_1)))) ? (arr_22 [i_9] [i_2] [i_2] [0]) : (((((arr_24 [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1]) > (var_4 < 2)))))));
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_1] [11] [11] [i_5] [i_2] [i_5] [i_1] = 1;
                        arr_44 [i_2] = ((~(~-32751)));
                        arr_45 [i_1] [i_1] [i_5] [i_2] [i_10 + 4] [i_10] [i_11] = var_2;
                        arr_46 [14] [4] &= (~var_13);
                        var_27 = (((var_13 ? 4 : var_3)));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        arr_49 [1] [1] [i_2] [i_10 + 1] [i_10] [10] = ((4528089699478231559 ? ((var_11 ? var_8 : var_4)) : var_3));
                        var_28 = 13;
                        var_29 *= ((((!(arr_10 [10] [i_2 + 1] [i_2] [i_2])))));
                    }
                    for (int i_13 = 2; i_13 < 15;i_13 += 1)
                    {
                        var_30 ^= (((~var_8) ? var_12 : (var_4 != var_6)));
                        arr_52 [i_2] [i_2] [i_5] [i_10 - 1] = (((arr_40 [i_1] [i_10 + 4] [i_5] [i_10 - 1] [i_10 - 1]) != (arr_40 [i_1] [i_10 + 4] [i_2] [i_2] [12])));
                        var_31 = (min(var_31, ((((0 >= 13) < 15)))));
                    }
                    arr_53 [i_2] [i_2] [i_5] [i_10] = (-95 > var_7);
                    var_32 *= (((arr_19 [11] [i_10 + 3]) * 4602834744918852362));
                    arr_54 [i_2] [i_2] [i_2] [i_5] [i_10] = (!-59539);
                }
                var_33 = (((736655765 ? (((65533 < (arr_6 [i_2] [i_2]))) : (~56408)))));
            }
        }
        arr_55 [i_1] = 1;
        var_34 = (~14);
    }
    var_35 = ((var_9 ? (((((var_9 ? 736655765 : -7239))) ? 65533 : (var_1 + var_8))) : var_11));
    #pragma endscop
}
