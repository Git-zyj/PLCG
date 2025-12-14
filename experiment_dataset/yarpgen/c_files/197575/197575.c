/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_5 && (var_0 >= 376100536))) ? ((((min(1802224339446466801, var_1))) ? (-7078201103837437495 - var_9) : (!0))) : var_4));
    var_15 = (min(((((10 ? 21 : var_8)))), (min((max(var_5, 9223372036854775803)), (var_8 * var_7)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = var_8;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = ((((var_11 << (var_12 - 32359))) + var_1));
            var_17 = ((var_6 | (var_0 > var_5)));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_18 = (max(((var_7 ? ((min(var_4, var_5))) : (var_7 / var_5))), (var_4 ^ var_3)));
            arr_11 [i_0] [i_0] [i_0] |= var_0;
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_16 [i_3] = var_11;
            var_19 = (((var_7 <= 60788) == ((~(var_11 & var_11)))));
            var_20 = (min(var_20, 2173726496));
            var_21 = (max(var_21, (((((min((var_7 ^ var_6), ((var_12 ? var_3 : 31))))) ? var_0 : ((((var_1 ? 4294967295 : var_6)) + (((min(var_8, var_3)))))))))));
            var_22 = (var_9 + var_6);
        }
        var_23 |= var_3;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_24 = ((-((var_8 ? var_7 : var_11))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        arr_28 [i_6] [i_6] [i_4] [i_4] [i_6] = (((-119 == var_1) || (((var_4 ? var_6 : var_7)))));
                        arr_29 [i_6] [23] [i_5] [i_6] = (((((-3046211770542223252 ? 4748 : 2125438163133050114))) ? var_5 : var_10));
                        var_25 = (var_1 * var_0);
                        arr_30 [i_6] [i_6] = (((!4137729440346360679) && var_3));
                    }
                }
            }
            var_26 -= (((var_5 - var_10) != (((var_10 ? var_13 : var_0)))));
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_27 = (max(var_27, (((var_6 > (1 / var_3))))));
            var_28 |= (((!var_12) && var_7));
            var_29 -= (((((-68 ? var_13 : var_13))) ? 40724 : ((var_3 ? var_3 : var_3))));
        }
        arr_33 [i_4] = var_5;
        arr_34 [i_4] = (!-22);
        var_30 = (var_10 <= var_3);
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        arr_38 [i_9] = (min((((!0) ? var_1 : ((min(var_11, 65535))))), var_8));

        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_41 [i_9] = ((((-(var_5 | var_12))) <= var_6));
            arr_42 [i_10] [i_10] [i_9] = ((min(28, ((9223372036854775803 << (52128 - 52128))))));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                {
                    arr_47 [i_12] [i_12] [i_12] [i_12] = var_8;

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_31 *= (max(32767, 9));
                        arr_52 [i_13] [i_13] [i_12] [i_12] [i_13] [i_9] = ((((((86 ? var_5 : -8364229447651981838)) ? 1 : 2234761099761597235))));
                    }
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        var_32 = ((((min((~31), var_5))) ? ((((2508901712 > var_4) ? 1 : (var_2 > var_2)))) : ((1 ? 1368710929 : var_10))));

                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            var_33 |= ((~(var_5 * 8443)));
                            var_34 = (max(var_34, var_9));
                        }
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            var_35 = (min(var_35, (((((-119 ? var_3 : var_11)) * -5)))));
                            arr_61 [i_16] [i_16] &= ((((((7 ? var_11 : var_3)))) ? (((((var_5 ? var_10 : var_3))) ? (((var_8 ? 1986624484 : 1))) : (min(-1, 1)))) : ((((var_11 || -118) ? (3046211770542223252 > 0) : var_1)))));
                        }

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 25;i_17 += 1)
                        {
                            var_36 = ((var_4 && (4748 && 4503530907893760)));
                            var_37 = ((25836 - (21177 + var_3)));
                            var_38 &= ((!(((116 ? 1002997202 : -80)))));
                            arr_64 [8] [i_11] = ((((((-8198351041419698909 + 9223372036854775807) >> (var_8 - 52253)))) ? var_9 : var_0));
                        }
                        arr_65 [11] [i_11] = (((((((32594 ? var_6 : var_9)) << (((var_1 | -1822635424427986622) + 1822635424427986644))))) | (min(var_13, var_2))));

                        for (int i_18 = 0; i_18 < 25;i_18 += 1)
                        {
                            arr_69 [i_9] [i_9] [i_12] [i_14] [i_18] = (!var_12);
                            var_39 = (min(var_3, (max((var_8 < -98), (max(var_7, var_0))))));
                        }
                        for (int i_19 = 0; i_19 < 25;i_19 += 1)
                        {
                            var_40 = ((((max(18446744073709551610, 4294967290))) ? (((~var_4) & (94 | var_1))) : (min(var_1, (var_6 ^ var_5)))));
                            var_41 = ((var_8 ? (((((2782458351063549249 ? var_13 : var_0)) <= ((0 ? var_13 : var_7))))) : ((-((min(var_3, var_13)))))));
                        }
                    }
                }
            }
        }
    }
    var_42 = (max(var_42, var_6));
    var_43 = (min((((!(var_9 && var_13)))), ((((max(var_5, var_13))) ? (((var_6 ? var_13 : var_3))) : (32930 % var_2)))));
    #pragma endscop
}
