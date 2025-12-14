/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 & (((var_7 ^ var_8) | (var_3 | var_0)))));
    var_12 = var_2;
    var_13 -= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = ((var_0 * var_8) == var_9);
                        var_15 = (((32292 - 33244) % var_1));
                    }
                }
            }
            var_16 ^= var_6;
        }
        var_17 += var_4;
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_18 = (var_10 >> var_2);
                arr_16 [i_5] = (((var_4 < var_4) < (var_7 != var_10)));
            }
            arr_17 [i_4] = var_0;
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_19 = var_7;
            arr_21 [i_7] [i_4] = (((((32292 >> (var_1 - 15737)))) | var_10));
        }
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            var_20 += (((((var_8 | var_4) ^ var_10)) < var_6));
            arr_25 [i_4] [i_8] [i_8] = var_10;

            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                var_21 = var_8;
                var_22 = var_7;
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_32 [i_4] [i_8] [i_10] [i_10] = (((((var_6 <= var_4) >> (var_9 + 6547999198201923833))) ^ (((var_1 ^ var_5) / var_7))));
                var_23 = var_6;
            }
        }
        var_24 -= var_8;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {

        for (int i_12 = 1; i_12 < 16;i_12 += 1)
        {
            arr_40 [i_11] = var_4;
            var_25 = var_3;
        }
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                var_26 = ((var_4 * ((((var_10 - var_3) < (var_7 | var_8))))));
                var_27 = var_5;
                arr_45 [i_11] [i_11] [i_11] = (((((33244 * 32292) ^ (var_7 < var_4))) / var_1));
            }

            /* vectorizable */
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                var_28 -= (((var_4 ^ var_7) && var_1));

                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    var_29 = ((var_4 * (var_8 && var_6)));

                    for (int i_17 = 3; i_17 < 14;i_17 += 1)
                    {
                        var_30 = (min(var_30, var_9));
                        var_31 = var_7;
                    }
                    var_32 = ((var_2 << (var_3 - 15967)));
                }
                for (int i_18 = 0; i_18 < 18;i_18 += 1)
                {
                    arr_57 [i_11] = (var_9 ^ var_0);
                    var_33 = var_5;
                    arr_58 [i_15] [i_11] [i_11] [i_11] = var_0;
                    var_34 = var_3;
                }
                for (int i_19 = 1; i_19 < 16;i_19 += 1)
                {
                    var_35 = var_10;
                    var_36 += (var_10 & var_10);
                    var_37 = (min(var_37, var_7));
                    var_38 = var_0;
                    var_39 = var_2;
                }
                for (int i_20 = 0; i_20 < 18;i_20 += 1)
                {

                    for (int i_21 = 2; i_21 < 14;i_21 += 1)
                    {
                        var_40 = var_5;
                        var_41 = (((var_6 | var_8) * var_1));
                        var_42 += (((var_10 < var_1) == (var_1 * var_3)));
                    }

                    for (int i_22 = 0; i_22 < 18;i_22 += 1)
                    {
                        arr_70 [i_11] [i_20] [i_11] [i_11] = var_8;
                        arr_71 [i_11] [i_11] [i_13] [i_15] [i_20] [i_22] = var_10;
                    }
                    for (int i_23 = 3; i_23 < 16;i_23 += 1)
                    {
                        var_43 = var_1;
                        var_44 = (((var_4 - var_6) || (33243 << var_2)));
                        var_45 = var_8;
                        var_46 += ((((var_10 >> (var_5 - 18778))) < var_2));
                    }
                    arr_74 [i_11] [i_11] = (33244 ^ 33246);
                }
                arr_75 [i_11] [i_11] [i_11] = var_9;
                var_47 = var_5;
            }
        }
        for (int i_24 = 3; i_24 < 17;i_24 += 1)
        {
            var_48 += (var_8 && var_1);

            for (int i_25 = 4; i_25 < 16;i_25 += 1)
            {
                var_49 = (min(var_49, ((((var_0 ^ var_2) * var_0)))));
                arr_82 [i_25] [i_24 + 1] [i_24 + 1] [i_11] = (var_7 <= var_5);
                var_50 += var_0;
                var_51 *= (33243 - 33244);
            }

            for (int i_26 = 1; i_26 < 15;i_26 += 1)
            {
                var_52 -= ((var_9 & (var_10 & var_10)));
                var_53 = var_8;
            }
            /* vectorizable */
            for (int i_27 = 0; i_27 < 0;i_27 += 1)
            {
                var_54 = (var_5 ^ var_7);

                for (int i_28 = 0; i_28 < 18;i_28 += 1)
                {
                    arr_90 [15] [i_11] [i_11] [i_11] = var_4;
                    var_55 = (((var_8 | var_6) - var_6));
                    var_56 = var_7;
                }
                var_57 = var_1;
                arr_91 [i_11] [i_11] [i_11] [i_11] = (var_9 < var_2);
            }
            for (int i_29 = 0; i_29 < 18;i_29 += 1)
            {
                arr_94 [i_11] [0] = (32268 & 33273);
                var_58 = (((var_0 > var_10) / ((((var_4 | var_3) < var_1)))));
                var_59 = ((var_8 * (32296 ^ 32296)));
            }
            for (int i_30 = 0; i_30 < 18;i_30 += 1)
            {
                arr_98 [i_11] [i_11] [i_24 - 1] [i_11] = (var_2 != var_0);
                var_60 *= ((var_4 % ((((32274 != var_5) <= var_7)))));
            }
        }
        /* vectorizable */
        for (int i_31 = 0; i_31 < 18;i_31 += 1)
        {
            arr_102 [i_11] [i_31] = (((var_9 | var_7) / (((var_9 + 9223372036854775807) >> (var_7 - 170)))));
            arr_103 [i_11] = (((var_10 / var_1) | var_2));

            for (int i_32 = 0; i_32 < 18;i_32 += 1)
            {
                var_61 = var_8;
                var_62 = (32268 * 33243);
                var_63 -= var_2;

                for (int i_33 = 0; i_33 < 18;i_33 += 1)
                {
                    var_64 = (min(var_64, var_2));
                    var_65 += var_0;
                }
                arr_108 [i_11] [i_11] [i_32] [i_11] = (((var_9 - var_10) || (var_4 / var_10)));
            }
            arr_109 [i_11] [i_11] [i_11] = (((var_3 & var_6) ^ (var_0 ^ var_10)));
        }
        arr_110 [i_11] = ((((((var_2 + var_1) < var_2))) > var_7));
        arr_111 [i_11] [i_11] = (var_2 << ((var_7 / (var_7 / var_0))));
    }
    #pragma endscop
}
