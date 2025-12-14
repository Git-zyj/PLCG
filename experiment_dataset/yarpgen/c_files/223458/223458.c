/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] [i_0] = (min((~var_15), (arr_1 [i_0])));
        var_17 = 65535;
        arr_5 [i_0] = (((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : ((((arr_1 [i_0]) < (arr_0 [i_0]))))));
        var_18 ^= (((arr_0 [i_0]) >= var_16));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {

                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            arr_17 [i_5] [i_4] [i_1] [i_3] [i_1] [i_2] [i_1] = (((arr_15 [i_1] [i_1]) ? var_8 : (arr_9 [i_5 + 1])));
                            var_19 += (((arr_7 [i_5 + 2]) < var_12));
                            var_20 = (min(var_20, (((65535 ? 41735 : (arr_16 [i_5] [i_5 + 2] [i_5] [0] [i_5 - 1] [i_2]))))));
                            var_21 ^= (((arr_16 [1] [i_5 - 1] [i_5] [i_5 + 1] [i_5] [i_5 + 1]) ? (arr_6 [i_3]) : -108));
                            var_22 += var_16;
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_23 = (max(var_23, (((var_2 ? var_14 : (arr_11 [i_1] [i_2] [i_3] [i_6]))))));
                            var_24 = (arr_18 [i_1] [i_2] [i_3] [i_3] [i_6]);
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_25 = ((16 ? (arr_24 [i_1] [i_2] [i_3] [i_4] [i_2] [i_4]) : (((arr_12 [i_2] [i_1]) ? 1 : (arr_11 [i_7] [1] [6] [i_1])))));
                            var_26 += (arr_18 [i_7] [i_4] [i_3] [i_2] [i_7]);
                        }
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            arr_27 [i_1] [i_1] [13] [i_1] = var_6;
                            arr_28 [i_1] [i_1] = var_1;
                        }
                        arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] = var_11;
                        arr_30 [i_1] [8] [0] [i_4] [i_2] = (arr_8 [i_1] [i_4]);
                        var_27 = 31;
                        arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] = arr_26 [i_1] [i_1] [i_2] [12] [i_3] [i_3] [i_4];
                    }
                }
            }
            arr_32 [i_1] [i_2] = (((arr_12 [i_1] [i_1]) ^ 64));

            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                arr_35 [i_1] [i_2] [i_1] [4] &= (!var_1);
                arr_36 [i_9 + 2] [i_9] [i_1] [i_9] = ((44 ? var_2 : (arr_24 [i_9] [10] [i_9] [i_9 - 1] [i_9 + 2] [i_9 + 2])));
                arr_37 [i_2] [i_9 - 1] |= ((-(arr_34 [i_1] [i_1] [12] [i_2])));
                var_28 = (var_10 > var_13);
                var_29 = var_1;
            }
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        var_30 = -17;
                        var_31 = (arr_43 [i_1] [i_1] [i_1] [i_12]);
                        arr_47 [15] [i_10] [i_11] [i_10] [i_1] [i_12] = var_8;
                    }
                }
            }
            var_32 = 15;
            arr_48 [i_1] [i_1] = ((((((arr_41 [i_1] [i_1] [i_1]) ^ (((max((arr_34 [i_1] [14] [i_1] [i_1]), var_2))))))) ? 504 : ((((arr_38 [i_1] [i_1] [i_1]) ? var_15 : (3 * 0))))));
            arr_49 [i_1] = var_14;
        }
        arr_50 [i_1] [i_1] = arr_24 [0] [i_1] [i_1] [14] [0] [6];

        for (int i_13 = 4; i_13 < 14;i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    {
                        var_33 ^= (((arr_23 [i_1] [i_13 + 1] [i_15] [i_13 - 2]) ? ((var_16 ? (arr_23 [i_1] [i_15] [i_15] [i_13 + 1]) : var_14)) : (arr_34 [i_13 - 2] [i_13] [i_13] [i_15])));
                        arr_59 [14] [i_1] [7] [1] [6] [10] = ((~(max(((496 ? var_8 : var_1)), (((arr_10 [i_1]) << (((arr_9 [i_1]) - 2133874667))))))));
                        arr_60 [i_1] [i_1] [i_14] [i_15] = (arr_52 [i_1] [i_1]);
                        arr_61 [i_1] = (((((((min(10, -6))) ? var_9 : (max(var_15, (arr_33 [i_1])))))) ? -17 : (arr_24 [12] [i_15] [i_14] [i_13] [i_13] [i_1])));
                    }
                }
            }
            var_34 += (max((((0 >= (arr_7 [i_13 - 4])))), ((~(arr_26 [8] [0] [6] [i_1] [i_13 - 4] [0] [i_13 + 3])))));
        }
        /* vectorizable */
        for (int i_16 = 4; i_16 < 14;i_16 += 1) /* same iter space */
        {
            var_35 ^= (((var_4 ^ (arr_6 [i_1]))));
            var_36 = (max(var_36, ((((arr_7 [i_16 - 1]) > -2693914268161631888)))));

            for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        {
                            var_37 = -12;
                            arr_72 [10] [i_1] [i_17] [i_1] [i_1] = ((~(arr_62 [i_1] [i_16 - 2])));
                            var_38 = (max(var_38, ((var_13 ? (arr_63 [i_16 - 3] [i_19] [i_16 + 2]) : var_10))));
                        }
                    }
                }
                arr_73 [i_1] [8] [i_1] [i_17] = 11285;
            }
            for (int i_20 = 0; i_20 < 17;i_20 += 1) /* same iter space */
            {
                var_39 = (min(var_39, (~80)));
                var_40 ^= var_3;
                var_41 += 6;
                arr_77 [i_1] [10] [10] [10] = ((-(arr_40 [1] [i_1] [i_16 + 1])));
            }
            for (int i_21 = 0; i_21 < 17;i_21 += 1) /* same iter space */
            {

                for (int i_22 = 2; i_22 < 14;i_22 += 1)
                {
                    arr_83 [i_1] [8] [i_1] [i_22] = (arr_56 [i_16] [i_16] [i_16 - 2] [i_16 - 4] [2]);
                    var_42 = 24;
                    arr_84 [i_1] [i_16] [i_1] [i_22] = ((((((arr_76 [i_22] [i_1] [1] [i_1]) ? (arr_68 [10] [i_16] [i_21] [i_22]) : (arr_21 [i_1])))) ? ((var_6 ? (arr_12 [i_1] [i_1]) : (arr_11 [i_16] [i_16] [i_16] [i_16]))) : var_15));
                }
                var_43 = var_0;
            }

            for (int i_23 = 0; i_23 < 17;i_23 += 1)
            {
                var_44 = (min(var_44, (((7 ? (-127 - 1) : 0)))));

                for (int i_24 = 3; i_24 < 16;i_24 += 1)
                {
                    var_45 = var_14;
                    var_46 &= var_8;
                }
                for (int i_25 = 2; i_25 < 15;i_25 += 1)
                {
                    arr_93 [i_1] [i_23] [i_16] [i_1] = ((var_10 ? 66 : 0));
                    var_47 -= -1783359702;
                    arr_94 [i_23] |= (arr_43 [i_25 - 1] [i_16] [i_23] [i_16 - 1]);
                }
                arr_95 [i_1] = 69;
                var_48 *= (((arr_63 [i_16 + 1] [i_23] [i_16 - 1]) ? (arr_63 [i_16 - 4] [i_23] [i_16 - 1]) : (arr_63 [i_16 - 1] [i_23] [i_16 - 3])));
            }
        }
        arr_96 [i_1] = (~7);
        var_49 += ((-((var_2 ? var_13 : ((min((arr_34 [2] [i_1] [i_1] [2]), 65015)))))));
    }
    for (int i_26 = 4; i_26 < 8;i_26 += 1)
    {
        arr_99 [i_26] = ((((7 ? var_11 : (arr_33 [0]))) < (((((arr_9 [i_26 - 4]) > (arr_9 [i_26 - 3])))))));
        var_50 = 2097151;
    }
    var_51 -= ((~(var_13 <= var_6)));
    #pragma endscop
}
