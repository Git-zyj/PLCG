/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 *= ((-222 ? var_3 : 16));
        arr_2 [i_0] = var_16;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = var_12;
        arr_7 [i_1] |= ((var_8 ? var_16 : ((9755394205530615225 ? 0 : var_7))));
        arr_8 [i_1] = (arr_3 [i_1]);
        arr_9 [i_1] = var_18;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = var_13;
        var_20 = var_8;
        arr_13 [0] = ((-(arr_10 [i_2] [i_2])));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_25 [i_5] [16] [1] [i_5] = ((~(((var_16 || (arr_1 [i_2] [i_5]))))));
                            var_21 ^= (((arr_22 [i_6] [i_6] [i_6] [i_2]) && (((arr_23 [1] [i_3] [i_4] [i_4] [i_3] [i_5] [i_3]) > var_9))));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_28 [i_2] [i_5] [i_2] [i_4] = (!1);
                            var_22 = (((var_11 | var_9) ? (var_5 || 7003038598137228230) : (arr_21 [i_3] [i_5 - 1] [1] [i_5 - 1] [1])));
                            var_23 = (min(var_23, var_18));
                            var_24 ^= 93;
                            var_25 = (max(var_25, (~var_7)));
                        }
                        var_26 = (max(var_26, (var_12 % var_3)));
                        var_27 = var_7;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_33 [10] &= (((((min(var_7, -30448))) ? (((63 ? 25 : var_0))) : var_6)));
        arr_34 [i_8] = (min(((var_16 ? var_8 : ((var_12 ? 17858 : var_0)))), var_8));

        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_28 = (arr_20 [i_8] [i_9] [i_8] [i_8]);
            var_29 = ((!(((105 ? (arr_3 [i_8]) : 199)))));
        }
        for (int i_10 = 3; i_10 < 11;i_10 += 1)
        {
            arr_41 [i_8] [i_8] = ((((max(215, ((1 ? 1 : var_5))))) / (min((var_15 && var_8), ((var_4 ? 4529336134647579502 : var_13))))));

            for (int i_11 = 4; i_11 < 10;i_11 += 1)
            {
                var_30 = (arr_16 [i_11 - 2] [i_11 - 2] [i_10 - 3] [i_8]);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_31 = (max(var_31, ((min(var_17, ((((arr_29 [i_10 - 2] [i_11 + 2]) != 1))))))));
                            var_32 *= (((((((50132 ? var_18 : var_6))) ? var_15 : (((arr_35 [i_11] [1] [6]) >> (var_8 + 18570))))) <= ((((!(arr_26 [i_8] [i_10] [12] [i_8] [i_11]))) ? var_1 : 62))));
                            var_33 = (max(var_33, ((min(var_1, 191)))));
                            arr_49 [i_8] = ((((((((517823470 ? var_11 : var_10))) ? ((2009704425 ? (arr_29 [i_10] [i_12]) : 1)) : ((max(92, var_2)))))) ? var_12 : ((var_4 | (((arr_39 [i_8] [i_8]) ? var_4 : 1))))));
                        }
                    }
                }
            }
            arr_50 [i_8] [i_8] [i_8] = ((var_11 ? (!var_16) : ((max(var_9, (max(var_12, (arr_18 [7] [7] [3]))))))));

            for (int i_14 = 1; i_14 < 11;i_14 += 1)
            {
                arr_53 [i_8] [0] [i_8] = ((max(1, ((var_2 ? (arr_48 [i_8] [i_10 - 2] [i_10] [i_8] [i_14 - 1]) : var_15)))));
                arr_54 [i_8] = (((((((var_15 ? 25 : var_13)) >> (var_17 - 96)))) ? ((var_16 | ((var_18 ? 192 : var_18)))) : (-10 <= 1)));
                arr_55 [i_8] [i_10 - 1] [i_14] = (((var_2 ? -1880890342 : (min(var_13, 1)))));
                var_34 &= var_6;
            }
        }
    }
    for (int i_15 = 0; i_15 < 13;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 11;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            {
                                arr_69 [4] [i_16] [4] [4] [i_19] [i_17] = ((var_14 ? 27 : var_7));
                                var_35 &= ((var_2 || (((var_2 ? 1 : 1)))));
                            }
                        }
                    }
                    var_36 = (min(var_36, 8));
                    arr_70 [i_15] [i_15] [i_15] = var_3;
                    arr_71 [i_15] = (((((arr_64 [9] [i_16 - 1] [i_16] [i_16] [i_16] [i_16 - 1]) ? 17 : 11443705475572323385)) - var_8));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_20 = 3; i_20 < 12;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 13;i_21 += 1)
            {
                {
                    var_37 = (((((((var_3 ? var_6 : 0)) * (((min(1, var_17))))))) ? (((((var_16 ? var_10 : var_8)) > (arr_4 [i_15])))) : var_0));
                    var_38 = (max(var_38, (((var_3 ? (min(var_4, ((var_7 ? var_9 : var_6)))) : (((~1) ? ((41 - (arr_3 [10]))) : 7804)))))));
                    var_39 *= (min(var_4, (min(-1512, 0))));

                    /* vectorizable */
                    for (int i_22 = 2; i_22 < 11;i_22 += 1)
                    {
                        var_40 = var_12;
                        var_41 = (min(var_41, var_0));
                        var_42 ^= -3;
                        arr_82 [i_15] [i_20] [i_21] [i_20] = (var_16 && var_6);
                        arr_83 [i_20] [i_20] [8] [i_21] [i_21] [i_20] = 1;
                    }
                    for (int i_23 = 0; i_23 < 13;i_23 += 1)
                    {
                        var_43 = ((var_11 ? ((((var_2 ? var_1 : 57)))) : (((((arr_10 [i_15] [i_21]) ? 4095 : var_15))))));
                        arr_86 [i_23] [i_20] [i_20] [i_15] = ((((((~173) ? ((max(44, var_16))) : var_16))) ? (((var_15 ? 0 : var_3))) : (max(var_15, (min(var_4, (-2147483647 - 1)))))));
                        var_44 -= ((var_10 ? 38 : 1));
                    }
                }
            }
        }
    }
    #pragma endscop
}
