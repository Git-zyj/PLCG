/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_17 = (min(var_17, (((-(arr_8 [14] [i_1] [i_3] [14] [14]))))));
                        var_18 = (arr_7 [i_0] [i_2 + 1] [i_1] [i_1] [i_0] [i_0]);

                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            var_19 = (min(var_19, var_8));
                            var_20 |= var_11;
                            var_21 = (min(var_21, var_6));
                            var_22 = (min(var_22, (((var_9 ? (arr_8 [6] [i_2 + 1] [i_3] [i_4 + 2] [6]) : (arr_6 [i_1] [i_3] [i_4] [i_4 - 1]))))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_23 = 136;
                        arr_14 [i_0] [i_2] = var_12;
                        arr_15 [i_0] [0] [i_2 + 1] = var_11;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_6] [i_2] [i_6] &= ((-(arr_6 [i_0] [i_6] [i_0 + 1] [12])));
                        var_24 = (min(var_24, ((((arr_10 [i_0 + 2] [i_2 + 1] [i_2] [i_6] [i_2 + 1] [i_6] [i_6]) ? var_15 : (arr_10 [i_0 + 1] [i_0] [i_2 + 1] [i_6] [i_2] [i_0 + 1] [i_2]))))));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_25 = (max(var_25, 255));
                        arr_23 [i_0] [10] [i_2] [i_0] = (max(((6144 / (max((arr_22 [i_0 - 1] [1] [i_2 + 1] [i_7]), 7188357560159894436)))), ((max(var_8, var_2)))));
                    }
                    var_26 ^= -17;
                    arr_24 [i_0 + 1] [8] |= (!var_8);
                }
            }
        }
    }
    var_27 &= (142 <= var_2);
    var_28 ^= var_4;
    var_29 = (max(25514, var_12));

    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            arr_32 [i_8] = ((-(max((arr_25 [i_8]), ((((arr_28 [i_8]) ? 20504 : (arr_29 [1] [i_8] [i_8]))))))));
            arr_33 [i_8] = var_3;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        {
                            var_30 = (arr_40 [i_8] [i_8 + 2] [i_8 + 1] [i_8]);
                            var_31 ^= (~var_9);
                            var_32 = 7748;
                        }
                    }
                }
                arr_44 [i_8] [1] [i_10] [i_11] |= ((((((arr_2 [i_11] [i_10]) ? var_16 : (arr_1 [i_8])))) ? var_8 : (~var_13)));
            }
            var_33 -= (((arr_22 [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8]) ? 4294967290 : var_11));
        }
        var_34 = (min(var_34, ((min(var_9, ((((var_13 ? (arr_3 [18] [18]) : var_8)))))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        arr_48 [i_14] [i_14] = var_11;
        arr_49 [i_14] [i_14] = 1;
        var_35 = (arr_45 [i_14]);
        var_36 = ((var_11 ? var_14 : (arr_45 [i_14])));
        var_37 = (min(var_37, 1));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        arr_53 [2] |= (((arr_46 [i_15]) <= -13545));
        var_38 *= 114;

        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {

            for (int i_17 = 3; i_17 < 18;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 18;i_18 += 1)
                {
                    for (int i_19 = 3; i_19 < 20;i_19 += 1)
                    {
                        {
                            var_39 -= 123;
                            var_40 = (min(var_40, ((((arr_45 [i_19 + 1]) ? 1099511627776 : (arr_45 [i_19 - 2]))))));
                            arr_62 [i_15] [i_16] [i_17] [i_18] [i_16] = (119 / var_14);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    for (int i_21 = 3; i_21 < 18;i_21 += 1)
                    {
                        {
                            var_41 = (min(var_41, ((~(var_10 | var_2)))));
                            arr_69 [i_15] [11] [i_15] [i_16] = (arr_56 [i_16] [i_16] [12]);
                            arr_70 [i_15] [i_16] [i_20] [i_20] = (arr_60 [i_16] [i_17] [i_16] [i_16]);
                            var_42 = (max(var_42, 0));
                            arr_71 [i_15] [i_16] [i_17] [i_20] [i_21] = var_13;
                        }
                    }
                }
            }
            var_43 = (arr_56 [i_16] [4] [i_16]);
        }
        for (int i_22 = 0; i_22 < 21;i_22 += 1)
        {
            var_44 = (((arr_67 [i_15] [i_15] [i_15] [i_15] [i_15] [i_22]) % (arr_74 [i_15] [i_22])));
            var_45 = ((-(arr_55 [i_15] [i_22] [i_22])));
        }
        for (int i_23 = 2; i_23 < 17;i_23 += 1)
        {
            arr_78 [i_15] [i_15] [i_23] = (arr_65 [i_15] [i_15]);
            var_46 = (min(var_46, 28888));
            var_47 = (min(var_47, ((((arr_77 [i_23 - 1] [i_23 + 1] [i_23]) ? var_3 : (arr_77 [i_23 - 1] [i_23 - 2] [i_23 - 2]))))));
            var_48 = (max(var_48, 62));

            for (int i_24 = 0; i_24 < 21;i_24 += 1)
            {
                var_49 -= 68;
                var_50 = (arr_67 [i_15] [i_23 - 2] [i_15] [i_23] [i_24] [i_23 - 1]);
                var_51 = arr_50 [i_15];
            }
        }
        for (int i_25 = 4; i_25 < 19;i_25 += 1)
        {

            for (int i_26 = 2; i_26 < 18;i_26 += 1)
            {
                var_52 = (((((var_8 ? (arr_45 [i_25]) : (arr_56 [i_26] [i_25] [i_26])))) ? var_5 : (((-1466282359 ? (arr_67 [i_15] [11] [i_15] [i_15] [1] [1]) : var_16)))));
                var_53 = (arr_74 [i_15] [i_25]);
            }
            for (int i_27 = 0; i_27 < 21;i_27 += 1)
            {
                var_54 = (((((arr_61 [i_15] [i_25] [i_27]) % (arr_83 [i_15])))) ? var_8 : (((arr_79 [i_15] [i_15] [i_15] [i_15]) ? var_4 : 9223372036854775797)));
                arr_88 [i_15] = var_15;
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 1;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 1;i_29 += 1)
                    {
                        {
                            var_55 = (max(var_55, ((57866 ? var_13 : -65))));
                            var_56 = ((arr_54 [i_15] [i_28] [i_25 - 4]) ? 6937841242858841574 : var_8);
                            arr_97 [i_29] [i_28] [i_27] [i_25] [i_15] = (arr_90 [i_25 + 1] [i_25 + 1] [i_25 + 2] [i_25 - 2] [i_25 - 4]);
                        }
                    }
                }
            }
            var_57 = ((1 ? ((-(arr_46 [i_25]))) : ((var_12 ? (arr_57 [i_15] [i_25] [i_25 + 2]) : -57))));
            var_58 ^= ((var_13 ? (arr_74 [i_25 - 4] [i_25]) : (~var_14)));
        }
    }
    /* vectorizable */
    for (int i_30 = 1; i_30 < 17;i_30 += 1)
    {
        var_59 = (((arr_39 [i_30 + 1] [i_30 + 1]) ? var_8 : 1));
        var_60 = 45;
        var_61 = (max(var_61, (((arr_17 [i_30] [i_30] [i_30 + 1] [11]) + ((var_1 ? 1 : (arr_87 [i_30])))))));
        var_62 |= ((((((arr_31 [i_30]) ? (arr_68 [10]) : -64))) ? (1267034725 != var_12) : ((6215542101145048520 ? (arr_89 [i_30] [5] [5] [5] [i_30] [i_30 + 1]) : var_13))));
    }
    #pragma endscop
}
