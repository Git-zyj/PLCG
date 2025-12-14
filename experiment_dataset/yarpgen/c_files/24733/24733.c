/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((-14175 ? 1087212542 : 14811701082933313236));
        var_16 = ((((var_7 ^ (arr_2 [2] [6])))) ? (arr_0 [i_0]) : 3207754775);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1 - 1] = ((-6254 > (var_14 > var_0)));

        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_17 = 1;
            var_18 = -42832;
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_19 = (min(var_19, (~var_8)));
            var_20 = 372019348;
            arr_13 [11] = ((var_11 ? 8192 : (arr_7 [i_1 - 1])));
            arr_14 [i_1] [i_1] = var_11;
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_17 [i_1] [i_1] [i_1] = (((arr_2 [i_1] [i_4]) ? 8055873619383084238 : 0));

            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                {
                    var_21 ^= (((((0 ? var_8 : var_4))) ? 2326394004877779619 : ((1 ? 11438456321435882469 : 8192))));
                    var_22 = (arr_15 [i_6] [i_4]);
                }
                for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    arr_26 [i_1] [i_4] [i_7] [i_1] = 0;

                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        arr_31 [1] [i_4] [i_5] [i_7] [i_5] = ((var_3 ? (arr_12 [i_5 - 1]) : var_14));
                        var_23 = 2910787824;
                    }
                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        arr_36 [i_9] [i_7] [i_7] [i_1] [i_1] = (((-6254 | var_5) | var_10));
                        arr_37 [i_1] [i_1] [i_7] [i_7] [i_1 - 1] = (((arr_23 [i_1] [i_4] [i_7] [i_7 + 2] [i_5 - 1]) ? (arr_23 [i_1 - 1] [i_4] [8] [i_7] [i_9 + 3]) : -511468712));
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_40 [i_7] = (arr_7 [i_5 + 2]);
                        arr_41 [i_10] [i_4] [i_7] [i_1 - 1] = 1;
                    }
                }
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    arr_44 [i_1] [i_1] [i_5] [i_11] = (((arr_1 [i_1 - 1] [i_1 - 1]) ? (arr_5 [i_1 - 1] [i_5 + 2]) : (arr_9 [i_5 - 1] [i_5 + 3] [i_11])));
                    var_24 = ((var_14 ? (arr_7 [i_5 - 1]) : var_1));
                    var_25 = ((arr_12 [i_1 - 1]) % var_3);
                }
                var_26 *= (!-30590);
                var_27 = (max(var_27, (((-16 ? (var_10 < var_14) : (var_5 ^ var_4))))));
            }
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                var_28 = 3;
                var_29 ^= (arr_32 [i_1 - 1] [i_4] [i_12] [i_12] [i_1] [i_4] [i_4]);
                var_30 = var_6;
                var_31 = ((-10 + (((var_4 > (arr_33 [i_1] [i_4] [i_12] [3] [i_4] [i_12]))))));
            }
        }
        arr_47 [i_1] = ((-(arr_46 [i_1 - 1] [i_1 - 1] [i_1 - 1])));

        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            var_32 = (((((-20 + 9223372036854775807) << (var_7 - 150537656)))) ? 816592576936819448 : (arr_23 [i_1] [i_1] [i_13] [i_1] [i_13]));
            var_33 = var_9;
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            arr_53 [i_1] [i_14] [i_14] = (((arr_51 [i_14]) ? (!var_3) : (~-347613378)));
            arr_54 [i_14] [i_1] [i_14] = (arr_43 [5] [i_14] [i_14] [5]);

            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                arr_58 [14] [i_14] [5] = ((48 ? 1 : -7564825453891902391));
                arr_59 [i_1] [i_14] = (arr_6 [i_1 - 1]);
                var_34 = (arr_11 [i_1 - 1] [i_1 - 1] [i_15]);
                var_35 = (arr_45 [i_1 - 1] [1] [i_15] [i_15]);
            }
            var_36 = (-5 + 816592576936819448);
        }
    }
    var_37 = (min(var_37, 49518));
    var_38 = var_13;

    for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
    {
        var_39 = ((-(((((var_7 ? 1087212542 : 16029))) ? ((min(16006, 0))) : (arr_35 [i_16] [i_16] [i_16] [i_16] [i_16])))));
        arr_63 [i_16] = (min(var_5, ((688078844979895323 ? 1 : 2080280461))));
        arr_64 [i_16] [i_16] = -16058;
    }
    for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
    {
        var_40 = ((var_8 != (var_13 - var_13)));

        for (int i_18 = 0; i_18 < 15;i_18 += 1)
        {
            arr_70 [4] [8] [4] |= var_5;
            var_41 = (((((((max(var_1, (arr_29 [i_17] [i_17] [16] [i_18] [i_17])))) ? (!-96475674) : -25))) ? 1366393718 : ((((((arr_51 [i_18]) >= (arr_23 [8] [i_18] [i_18] [8] [i_17]))))))));
        }
        var_42 = (min(((((29779 & var_3) || (10 + var_7)))), ((~(var_1 <= var_3)))));
    }

    /* vectorizable */
    for (int i_19 = 3; i_19 < 23;i_19 += 1)
    {

        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {
            arr_77 [i_19] = 1;
            arr_78 [i_19] [i_20] = (((8215 ^ 10) ? (0 - 192) : 48019997));
        }
        arr_79 [i_19 - 3] [i_19] = (!var_14);
        var_43 -= var_12;
        arr_80 [i_19] = var_14;
    }
    /* vectorizable */
    for (int i_21 = 1; i_21 < 10;i_21 += 1)
    {
        arr_85 [i_21] = (0 | var_13);
        var_44 = (((arr_25 [i_21] [i_21] [10]) ? -0 : ((var_15 ? (arr_51 [2]) : (arr_45 [i_21] [14] [14] [i_21 + 1])))));
        arr_86 [i_21] [i_21] = var_0;
        arr_87 [i_21] = (~8215);
        arr_88 [i_21] = -10;
    }
    #pragma endscop
}
