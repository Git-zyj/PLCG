/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_16 = var_1;
        arr_2 [i_0] [i_0] &= ((var_10 || 2983150443) ? 68719460352 : var_1);
        var_17 -= -var_7;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_18 = 18446744004990091264;
        var_19 ^= (1311816870 & 43383);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_20 = ((16475187310281557594 ? (arr_7 [i_2] [i_3]) : (-32530 > var_12)));
                var_21 = 32531;
            }
            var_22 = (((arr_12 [i_2] [i_3]) | -1943632060));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_16 [6] [i_5] [i_5] = -113;

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                var_23 *= (2767847497 % -32517);
                var_24 = 2983150425;
                arr_19 [i_5] = 43380;
                var_25 = (((((var_6 ? 43370 : 43380))) % (arr_8 [i_5])));
            }
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                var_26 = ((22180 ? (arr_9 [5]) : 2251799813652480));
                arr_23 [i_2] [i_2] [i_5] = (arr_11 [i_7 - 2] [i_7 + 3] [i_7 - 3]);

                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        arr_31 [1] [i_5] [i_5] [i_2] = ((var_15 ? var_7 : -22165));
                        var_27 = var_12;
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_28 *= 1;
                        var_29 = var_2;
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        arr_36 [i_2] [9] [i_5] [i_8] = 0;
                        var_30 *= -53;
                    }

                    for (int i_12 = 3; i_12 < 11;i_12 += 1)
                    {
                        arr_40 [i_5] [i_5] = 43380;
                        arr_41 [i_5] [i_5] [i_5] = 22165;
                        var_31 = (22165 % 55330);
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_32 = 1;
                        arr_46 [8] [i_2] [8] [i_5] [10] = (arr_39 [i_2] [6] [5] [i_8] [5]);
                        var_33 &= (!var_7);
                    }
                    arr_47 [i_5] = (!14867414233898545822);
                    var_34 = ((!(22158 ^ -25)));

                    for (int i_14 = 4; i_14 < 11;i_14 += 1)
                    {
                        arr_50 [i_5] [i_5] [i_5] [i_8] [i_14] = ((var_14 * ((-32521 ? (-9223372036854775807 - 1) : (arr_6 [i_14])))));
                        arr_51 [i_14] [i_5] [i_7] [i_5] [i_5] [i_2] = var_4;
                        arr_52 [i_5] [i_8] [i_8] = ((-17559 ? var_9 : 11671674976540684629));
                    }
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        arr_55 [i_5] [i_5] = var_6;
                        var_35 *= (!22166);
                    }
                }
                for (int i_16 = 3; i_16 < 11;i_16 += 1)
                {
                    arr_58 [i_2] [i_2] [i_7] [i_2] [i_16] [i_5] = (22165 >= 17539);
                    var_36 = (((~194) * (arr_24 [5])));
                    var_37 -= ((-((93 ? 1 : var_14))));
                }
            }
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                var_38 = (max(var_38, -97));
                arr_63 [i_5] [i_2] = (~805);
            }
            arr_64 [i_5] [i_5] = 8359;
            var_39 = ((-8359 ^ (var_10 ^ 3659603750)));
        }
        arr_65 [i_2] = -17559;
        var_40 = (min(var_40, 17558));
    }
    var_41 = (((~var_8) > var_5));
    #pragma endscop
}
