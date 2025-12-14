/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -105;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_18 = (((var_13 ^ var_8) / (((var_7 ? 6 : -11162)))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_19 = (var_12 + 1);
                arr_6 [i_2] = (arr_1 [i_0] [i_2]);
            }
            for (int i_3 = 4; i_3 < 24;i_3 += 1)
            {
                arr_10 [i_0] [i_0] [i_0] [i_0] = ((!(((65533 ? 20 : var_15)))));
                arr_11 [i_0] [i_0] [i_0] [i_0] = var_12;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_20 = ((~((-8629925495560509377 ? 2735082880 : (arr_0 [i_1])))));
                            var_21 = 24;
                            var_22 ^= (arr_17 [i_3 - 4] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_5 - 1] [i_5 - 1]);
                            arr_18 [i_0] [i_0] [i_0] [i_4 - 1] [i_0] [i_0] [i_5] = (arr_7 [i_5] [i_4 + 2] [i_4 + 2]);
                        }
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
            {
                arr_24 [i_7] [i_7] [i_7] [i_7] = ((var_4 ? (arr_5 [i_0]) : 13));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        {
                            var_23 *= (((arr_17 [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9 + 2] [i_9 - 1] [i_9]) ^ var_5));
                            arr_31 [i_7] [i_6] [i_7] [i_8] [i_0] = (arr_0 [i_9]);
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
            {
                var_24 = (((!(arr_20 [i_0] [i_0]))));
                var_25 = (var_4 / var_2);
                var_26 = (min(var_26, (((65533 % (arr_14 [i_0] [i_0] [i_10] [i_6] [i_0] [i_0]))))));
            }
            for (int i_11 = 1; i_11 < 22;i_11 += 1)
            {

                for (int i_12 = 1; i_12 < 23;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        arr_42 [i_12] [i_13] [i_12] [i_11 + 3] [i_12] [i_0] [i_0] = ((7077 ? (arr_4 [i_0] [i_6] [i_0] [i_13]) : 274877906943));
                        var_27 = ((((var_8 <= (arr_41 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    arr_43 [i_12] = (~var_7);
                }
                for (int i_14 = 1; i_14 < 23;i_14 += 1) /* same iter space */
                {
                    var_28 = (var_10 % var_12);
                    var_29 = (arr_29 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_11 + 3]);
                }
                arr_47 [i_0] [i_6] = (((arr_22 [i_0] [i_11 + 2] [i_6] [i_0]) / (var_9 >= var_5)));
            }
            for (int i_15 = 1; i_15 < 24;i_15 += 1)
            {
                var_30 = (max(var_30, (((-(!var_14))))));
                var_31 = ((31 ? var_10 : (var_16 <= 65533)));
                var_32 = ((((var_7 ? var_11 : (arr_45 [i_0] [i_0] [i_6] [i_0] [i_0] [i_15 + 1]))) | var_3));
            }
            var_33 = (min(var_33, (((-(((arr_2 [i_0] [i_0] [i_0]) ? var_14 : 1)))))));
            arr_51 [i_0] [i_0] [i_6] = (((arr_17 [i_0] [i_0] [i_6] [i_6] [i_6] [i_6]) ? (arr_16 [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_16 [i_6] [i_6] [i_6] [i_6] [i_0])));
        }
        arr_52 [i_0] |= (~10917);
    }
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        var_34 *= (!-16827);
        arr_55 [i_16] = (((1 == 29599) & 1));
        arr_56 [i_16] [i_16] = ((((max(33, ((min(var_11, 1)))))) && var_8));
        var_35 = (min(var_35, ((((var_2 <= 2735082905) <= (min(15313857785281633567, 1559884430)))))));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
    {

        for (int i_18 = 0; i_18 < 0;i_18 += 1)
        {
            var_36 *= (((arr_3 [i_18 + 1] [i_18 + 1] [i_18 + 1]) && (arr_16 [i_17] [i_17] [i_18 + 1] [i_18 + 1] [i_18 + 1])));
            arr_63 [i_17] [i_18 + 1] = (((arr_32 [i_18 + 1] [i_18 + 1] [i_18 + 1]) / (arr_29 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1])));
            arr_64 [i_17] = var_3;
        }
        arr_65 [i_17] [i_17] = var_14;
        var_37 ^= (((arr_54 [i_17] [i_17]) / 1));
    }
    for (int i_19 = 0; i_19 < 12;i_19 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_20 = 0; i_20 < 12;i_20 += 1)
        {
            arr_71 [i_20] [i_20] [i_19] = (--14078061422581126618);
            var_38 *= 1;
            arr_72 [i_19] [i_20] = ((((var_5 ? var_8 : (arr_46 [i_19] [i_19] [i_20]))) < 1));
            arr_73 [i_19] [i_20] [i_20] = 1559884391;
            var_39 *= ((-2735082934 + (((arr_27 [i_19] [i_19] [i_19] [i_19]) ? var_12 : 9287594642838573816))));
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 12;i_21 += 1)
        {
            var_40 = var_12;
            var_41 = -49;
        }
        var_42 = (max(var_42, 23573));
    }
    #pragma endscop
}
