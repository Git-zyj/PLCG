/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_12 ? ((var_6 + (666516387 < -32761))) : var_10));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = var_3;
        var_18 = var_0;
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_19 = (((arr_5 [i_2] [i_1]) ^ (85 && 108)));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_20 -= (-var_9 | ((-(arr_7 [4] [i_2]))));
                arr_11 [i_1] = -100;
            }
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                var_21 = ((var_2 + (arr_10 [i_1] [i_1] [i_4 + 1])));

                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_18 [i_6] [i_5 + 1] [18] [18] [i_1] [i_1] &= ((108 ? 109 : -13));
                        var_22 *= ((var_6 ? -32761 : (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                        var_23 = 80;
                        var_24 = (min(var_24, (((var_15 == (((arr_9 [i_6]) ? -32754 : var_0)))))));
                    }
                    var_25 = (((arr_13 [i_4 + 1] [i_4 - 1]) ? (arr_16 [i_1] [i_4 - 1] [i_4 - 1] [i_5 - 1] [i_4 - 1] [i_1] [i_5]) : (arr_16 [i_1] [i_4 - 1] [i_4 - 1] [i_5] [i_5] [i_2] [i_5 - 1])));

                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        var_26 = (arr_8 [i_1]);
                        var_27 -= -9;
                        var_28 &= ((4939765377480099135 ? 32627 : 226));
                        var_29 = var_14;
                        var_30 = 569812934216678800;
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_31 = 12;
                        var_32 = (max(var_32, 62));
                    }
                    arr_25 [i_1] [i_2] [i_1] [i_5] [i_2] = ((var_11 ? ((((arr_21 [i_1] [i_1] [i_2] [i_4 + 1] [i_5]) < var_14))) : (arr_4 [i_1] [i_4 + 1])));
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_1] = var_13;

                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        var_33 = (!var_5);
                        var_34 = (min(var_34, (((~(arr_30 [i_10] [i_9] [2] [i_1] [2] [i_2] [i_1]))))));
                        var_35 = ((var_9 * ((-(arr_27 [i_1] [i_9] [i_4] [i_4 - 1] [i_2] [i_1])))));
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_36 = (arr_24 [i_1] [i_2] [i_4] [i_9] [i_4 - 1]);
                        var_37 -= ((var_10 ? (((arr_5 [i_1] [i_2]) ? var_13 : (arr_14 [i_1] [i_2] [i_4]))) : (arr_20 [i_1] [i_11] [i_4 - 1] [i_4 - 1] [i_11])));
                        arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((!(arr_32 [i_1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1] [i_1])));
                    }
                    var_38 = var_10;
                }
            }
            var_39 = (min(var_39, (22592 / 194)));
            var_40 = (max(var_40, ((((((arr_7 [8] [i_2]) && 212)) ? (((arr_30 [i_1] [i_1] [i_1] [i_1] [10] [i_2] [10]) ? var_12 : var_13)) : (((var_5 ? 1 : 27085))))))));
        }
        for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
        {
            var_41 = ((min(-840622256, -121)));

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        {
                            var_42 = (((((~(arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((arr_32 [i_1] [i_12] [i_13] [i_14] [i_13] [i_1]) | (arr_32 [i_13] [i_13] [i_12] [i_14] [i_13] [i_1]))) : (((arr_26 [i_15] [i_12] [i_12] [i_12] [i_1]) >> (((arr_9 [i_1]) - 1018842690))))));
                            var_43 = var_4;
                        }
                    }
                }

                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    arr_50 [i_1] [i_16] [i_1] = (min(230, 27));
                    var_44 = var_1;
                }
                /* vectorizable */
                for (int i_17 = 2; i_17 < 19;i_17 += 1)
                {
                    var_45 = (max(var_45, (arr_17 [i_1] [i_1] [i_12] [i_13] [i_13] [i_12])));
                    var_46 -= 171;
                }

                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {

                    /* vectorizable */
                    for (int i_19 = 3; i_19 < 21;i_19 += 1)
                    {
                        var_47 = -840622279;
                        var_48 &= (63 + -14);
                        var_49 = (((-8024498086253792614 % -840622266) >= (arr_31 [i_19 - 3] [i_19 - 3] [i_19 - 1] [i_19 - 3] [i_19 + 1])));
                    }
                    var_50 = (max((((((arr_46 [i_1] [i_12] [i_12] [i_12] [i_12]) / var_2)) * (max(var_0, 9077388103687862713)))), (((var_11 || (arr_28 [i_1] [i_12] [i_12] [i_18]))))));
                }
            }
            arr_58 [i_1] [i_12] [i_12] = ((~(((32 ? var_11 : var_15)))));
        }
        arr_59 [i_1] = (((((184 ? 840622268 : 8024498086253792613))) ? -var_12 : var_13));

        /* vectorizable */
        for (int i_20 = 0; i_20 < 22;i_20 += 1)
        {
            var_51 = var_10;
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 22;i_21 += 1)
            {
                for (int i_22 = 2; i_22 < 19;i_22 += 1)
                {
                    {
                        var_52 = (max(var_52, (((!(var_10 / var_5))))));
                        var_53 = (max(var_53, (arr_61 [i_1])));

                        for (int i_23 = 0; i_23 < 22;i_23 += 1) /* same iter space */
                        {
                            var_54 ^= (arr_56 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                            arr_71 [i_1] [i_1] = (((arr_23 [i_1] [i_22 - 1] [i_22 + 1] [i_1] [i_1]) ^ (arr_23 [i_1] [i_22 + 2] [i_21] [i_21] [i_1])));
                            var_55 = ((((var_9 ? 57771416 : (arr_44 [i_1] [i_1] [i_1] [i_23])))) & ((var_10 ? 2510348603337085015 : -34)));
                        }
                        for (int i_24 = 0; i_24 < 22;i_24 += 1) /* same iter space */
                        {
                            var_56 = ((9815 ? -1782530053 : 96));
                            var_57 *= ((-(arr_10 [i_20] [i_22 + 1] [i_20])));
                            var_58 = (((arr_52 [i_22 + 2] [i_21] [i_1] [i_22] [i_22]) ^ (arr_52 [i_22 + 2] [i_20] [i_21] [i_22 + 3] [i_24])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
