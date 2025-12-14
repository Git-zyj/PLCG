/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = ((~((5677685625473898028 & (arr_2 [i_0])))));
        var_11 = (arr_1 [i_0]);
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_12 = -917532818195715892;

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_9 [i_2] [i_2] = (var_4 >= 102);
            arr_10 [i_1] [i_2] = (((arr_7 [1] [i_2]) != ((15 ? 12769058448235653588 : 102))));
            var_13 = arr_8 [i_2];
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_14 = (max(var_14, (((-(arr_12 [i_3] [i_3]))))));
            var_15 += ((~(-9223372036854775805 <= var_4)));
            arr_13 [i_1] [i_3] [i_3] = (((917532818195715891 && var_1) ? (var_4 | var_0) : 2283872422));

            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                var_16 = (-20180 & var_1);
                var_17 |= 12769058448235653587;
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                arr_21 [i_5] [i_5] [i_3] = (arr_7 [i_3] [i_5]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_26 [i_5] [i_1] [i_3] [i_3] [i_5] [i_6] [i_7] = ((1 != (arr_20 [i_5])));
                            var_18 = ((+(((arr_15 [9] [i_7]) ^ (arr_15 [i_3] [i_6])))));
                            var_19 = (24576 / 65523);
                        }
                    }
                }
                arr_27 [i_5] [12] [12] = (((arr_23 [i_5] [i_5]) + (!4734865093031221477)));
                var_20 += 1768168018287720795;
            }
            arr_28 [i_1] = (((arr_12 [i_3] [i_3]) < (arr_25 [i_1] [i_3] [i_3])));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_21 = (max(var_21, (arr_25 [i_1] [i_1] [i_8])));
            var_22 = (max(var_22, ((((((var_0 + (arr_8 [i_1])))) ? var_1 : ((-112 ? var_7 : var_1)))))));
        }
        var_23 = ((~(-24580 != 1329170968)));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {
        arr_34 [i_9] [11] = (((-1947 + 2147483647) >> (5677685625473898028 - 5677685625473898012)));
        var_24 = ((var_2 / (arr_19 [i_9 - 1] [i_9] [i_9 - 1])));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                {

                    for (int i_12 = 3; i_12 < 14;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            var_25 = (((arr_24 [i_9] [i_11] [i_13] [i_13]) < (arr_24 [i_9] [i_13] [i_11] [i_13])));
                            var_26 += (1 | 0);
                            arr_46 [i_9] [i_9] [1] [i_11] [i_11] [i_12] [i_11] = (((arr_16 [i_10] [i_12 - 2] [i_13]) - var_8));
                        }
                        arr_47 [i_9] [i_10] [i_10] [i_12] = (arr_22 [i_9] [4] [19] [i_12]);
                    }
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        arr_50 [i_9] [0] [1] [i_14] = (arr_33 [i_9 - 1]);
                        var_27 = ((((-24580 ? var_0 : (arr_35 [i_9 + 1] [i_10] [i_14]))) >= (((18446744073709551615 ? -11 : 1)))));
                        var_28 += -484099503;
                    }
                    var_29 *= -12769058448235653612;
                }
            }
        }
    }
    var_30 = (max(var_30, (((var_7 ? (!-24579) : var_5)))));
    #pragma endscop
}
