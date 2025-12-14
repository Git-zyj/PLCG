/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_11 -= ((var_2 == (arr_3 [i_0 - 2])));
        var_12 = var_8;
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_13 ^= (((arr_12 [i_1] [i_1] [i_1 - 1]) / ((var_1 ? var_7 : (arr_1 [i_2] [i_5])))));
                            var_14 = ((486603076 ? 28 : 1));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_15 = ((((max((min((-127 - 1), var_8)), (max(var_8, var_0))))) < 8191));
                            arr_22 [i_1] [i_2] [i_2] [i_1] = (!127);
                            arr_23 [i_1] [i_2] [i_4] [2] [i_6] &= ((!(((~(arr_8 [i_1] [i_1 - 1]))))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_16 = var_1;
                            var_17 &= (((max((arr_15 [i_3] [12] [2] [i_3 + 3] [i_3] [i_4 - 1] [i_4]), (arr_15 [8] [8] [12] [i_1] [0] [i_4 - 1] [1])))) ? ((((((-433925151 ? 32759 : 7523095105201056116))) ? 0 : (arr_27 [12] [12] [i_3 + 2] [i_3 + 3] [i_7])))) : ((var_4 ? var_3 : var_7)));
                            var_18 |= 207;
                        }
                        var_19 = (max(var_19, ((((arr_20 [i_4] [12] [i_1 - 3] [i_3 + 1] [i_3]) / (((min(var_10, (min(var_8, var_10)))))))))));
                    }
                }
            }
        }

        for (int i_8 = 4; i_8 < 12;i_8 += 1)
        {
            arr_31 [i_1] [i_8] = ((((max((arr_3 [i_1 - 1]), -120))) ? 0 : 42));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        var_20 = var_10;
                        var_21 = (arr_7 [i_1 - 2] [i_8]);

                        for (int i_11 = 2; i_11 < 10;i_11 += 1)
                        {
                            arr_42 [i_1 - 2] [i_8] = (min(((-433925151 ? ((min(-94, 84))) : ((min(-84, -1))))), 63109));
                            var_22 -= (min(-32760, ((78 ? var_3 : (((max(-1, 2047))))))));
                        }
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            var_23 = (arr_39 [i_8 - 2] [i_8]);
                            arr_45 [i_1] [i_1] [i_8 - 4] [i_8 - 4] [i_8] [i_10] [i_12] = (((((arr_30 [i_8] [i_8 - 4]) % var_2)) - (arr_6 [i_1 - 2])));
                        }
                        for (int i_13 = 1; i_13 < 12;i_13 += 1)
                        {
                            arr_49 [i_8] = (max(((((((arr_18 [i_8] [i_8 + 1] [i_9] [1] [0]) && var_5)) ? (arr_33 [i_8 - 3] [i_10] [i_10]) : var_2))), (arr_5 [i_1 - 2])));
                            var_24 = (max(((-((max((arr_29 [3] [3] [i_8]), (arr_14 [i_1 - 2] [i_8] [i_9] [i_13])))))), ((((((arr_39 [i_8] [i_8]) ? (arr_13 [i_8] [4] [i_9]) : 99))) ? var_8 : var_6))));
                        }
                        arr_50 [i_1] [i_8] [i_8] [i_10] = (min(var_4, (arr_24 [i_1] [i_8 - 4] [i_8 + 1] [i_8 - 1] [i_9] [i_10])));
                    }
                }
            }
            var_25 = var_7;
        }
    }
    for (int i_14 = 3; i_14 < 12;i_14 += 1) /* same iter space */
    {
        var_26 = (max(var_26, ((min(-1825185228, ((((max(var_4, var_5))) ? var_2 : ((var_9 ? var_5 : var_1)))))))));
        arr_54 [3] = var_9;
        arr_55 [i_14 + 1] = (arr_27 [i_14 - 2] [3] [i_14 - 3] [i_14 - 1] [i_14]);
    }

    for (int i_15 = 2; i_15 < 9;i_15 += 1) /* same iter space */
    {
        arr_58 [i_15 - 2] [i_15] = (arr_39 [i_15 + 1] [8]);
        arr_59 [i_15] [i_15 - 1] = 96;
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 6;i_16 += 1)
        {
            for (int i_17 = 3; i_17 < 8;i_17 += 1)
            {
                {
                    arr_65 [i_15 - 2] [4] [i_17] [i_15] = (min(var_2, (arr_26 [i_15] [i_17] [9] [i_17] [i_17 + 1] [i_17 - 3])));

                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        var_27 = ((+(((var_4 + var_7) ? (((arr_6 [i_15]) ? (arr_69 [i_18] [7] [i_18] [4] [i_16] [i_15 - 2]) : var_7)) : (arr_15 [6] [i_16] [i_18] [i_17 + 1] [1] [i_16] [12])))));
                        var_28 = arr_19 [i_15] [i_16] [i_17];
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_19 = 2; i_19 < 9;i_19 += 1) /* same iter space */
    {
        var_29 = 0;
        arr_72 [i_19] = (arr_46 [i_19 - 1] [i_19 - 1] [i_19] [1] [i_19] [1] [i_19]);
    }
    for (int i_20 = 2; i_20 < 9;i_20 += 1) /* same iter space */
    {
        var_30 = (min(var_30, ((min(var_3, (min((min(var_2, 10581)), -84)))))));
        var_31 = (max((~18446744073709551615), ((((min(-112, -122)))))));
    }
    /* vectorizable */
    for (int i_21 = 2; i_21 < 9;i_21 += 1) /* same iter space */
    {
        arr_80 [i_21] = ((~((((arr_6 [i_21]) < (arr_77 [0] [i_21 - 2]))))));
        arr_81 [i_21] = (((arr_15 [i_21 - 1] [i_21] [i_21] [i_21 - 1] [i_21] [i_21 + 1] [i_21]) ? ((510347704 ? var_5 : 6893)) : (arr_15 [i_21] [i_21 - 1] [i_21] [i_21 + 1] [i_21] [i_21] [i_21 - 2])));
        arr_82 [i_21] = 3472;
    }
    #pragma endscop
}
