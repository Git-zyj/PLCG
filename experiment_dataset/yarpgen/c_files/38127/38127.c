/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_15 = ((((!(arr_0 [i_0 - 1] [i_0 - 1]))) ? ((((min((arr_0 [i_0] [i_0]), var_0))) ? var_4 : (arr_1 [i_0 - 1]))) : var_5));
        var_16 = (((~(arr_1 [i_0 + 1]))));
        var_17 = 6700743164946544418;
    }

    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_5 [i_1] = ((var_5 ? 12911101538072633161 : (((~(~-2133296747))))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [i_1] [i_2] = ((~-642972836) + (((min(var_12, var_4)))));
            var_18 = -642972831;
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_19 = ((arr_3 [i_1 + 1] [i_1]) ? 2147483647 : 2147483646);
            arr_12 [i_1] = var_10;
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    var_20 = var_10;
                    arr_20 [i_1] [i_4] [i_5] [i_1] [1] [1] = (((arr_15 [i_1]) ? 14351671638674415283 : (var_2 * var_14)));
                    arr_21 [i_5] [i_4] [i_5] [i_1] = 10424382986625247222;
                }
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    var_21 = ((((1194112237 ? var_6 : var_3)) - var_9));
                    var_22 = 10424382986625247222;
                    var_23 = (arr_3 [i_1] [i_1]);
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_26 [i_1 + 1] [i_1] [i_5] [i_8] = (((126 || var_9) ? var_0 : var_2));
                    var_24 = (min(var_24, (!var_0)));

                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        var_25 = var_10;
                        arr_29 [i_9] [i_8] [12] [i_1] [i_5] [i_4] [i_1] = var_5;
                        var_26 += (~2256107865803208308);
                    }
                }

                for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    var_27 = var_7;
                    var_28 = (~var_0);
                }
                for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                {
                    var_29 ^= (arr_6 [i_1 + 1] [i_1 + 1]);
                    var_30 = var_14;
                    var_31 = (((((~(arr_24 [i_1])))) ? (((arr_23 [i_1] [i_4] [i_5]) ^ var_5)) : -642972836));
                }
                for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                {
                    arr_37 [i_1] [i_4] [i_4] [i_4] [i_4] = (1 ? 2147483646 : var_9);

                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_32 = (((arr_31 [i_1] [i_5] [i_1]) ? var_5 : ((1 ? 1046528 : 642972836))));
                        var_33 = ((((var_8 ? var_0 : 1))) ? -var_4 : 6438267072319452445);
                        arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] = ((~(arr_28 [i_13] [i_12] [i_1] [i_1] [i_4] [i_1])));
                        arr_43 [1] [i_1] [i_5] [i_5] [i_4] [i_1] [i_1 + 1] = (((var_7 ? var_1 : var_0)) | (~-642972831));
                    }
                    var_34 ^= ((var_7 ? (arr_25 [i_1 + 1] [0] [0]) : 57344));
                    var_35 = var_5;
                }
                for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                {
                    var_36 = -var_0;

                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        var_37 = ((arr_25 [i_1] [i_1] [i_1]) ? (arr_33 [i_1]) : var_2);
                        var_38 = (((arr_32 [i_1] [i_4] [i_1] [i_4] [i_1 + 1]) ? var_14 : var_9));
                    }
                }
            }
            for (int i_16 = 1; i_16 < 16;i_16 += 1)
            {
                var_39 = var_14;
                arr_53 [i_1] [i_4] [i_16] [i_16] = ((var_9 ? (!var_14) : var_0));
            }
            var_40 ^= -57345;
        }
        var_41 = var_11;
        var_42 = 1;
    }
    #pragma endscop
}
