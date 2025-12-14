/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = var_8;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_10 -= 1;
                    arr_9 [i_0] [i_1] [i_2] [i_1] = 1;
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_0] [i_1]);
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_3] = (-2147483647 - 1);
                    arr_15 [i_0] [i_1] [i_3] = (((((var_9 && (var_5 && var_7)))) <= 5));
                    var_11 -= (((((min(var_7, (arr_5 [i_3] [i_0] [i_0])))) <= var_2)));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_12 = var_3;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_13 = (min((((arr_0 [i_0]) ? (arr_1 [i_0]) : -19)), (((((var_8 ? 108 : -25100))) ? ((-6 ? (arr_4 [i_0] [i_0] [1]) : 16926)) : 22370))));
                                var_14 = (!2147483647);
                            }
                        }
                    }
                    arr_22 [i_0] [i_1] [i_0] [i_4] = ((var_0 ? var_0 : var_6));
                    arr_23 [i_0] [i_1] [i_4] = ((((arr_11 [i_0] [i_1] [i_1] [i_4]) / (arr_11 [i_4] [i_4] [i_1] [i_4]))));
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 2; i_8 < 8;i_8 += 1)
                    {
                        arr_28 [i_1] [i_7] [i_7] [i_0] = (!1);
                        var_15 += 3047767377;
                        var_16 = min(1, 1411987513);
                        var_17 = (max(var_17, (arr_21 [i_0] [i_1] [i_7] [i_7] [i_1])));
                        var_18 = ((~((var_4 ? (min(18360665045124922692, 4294967287)) : (((arr_27 [i_8] [i_7] [i_0] [i_0]) & 86079028584628908))))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 7;i_10 += 1)
                        {
                            {
                                arr_35 [i_7] [i_7] [i_7] = (max(var_9, (((arr_0 [i_9 + 1]) * var_9))));
                                arr_36 [i_10 - 1] [i_7] [i_7] [i_7] [i_0] = 21740;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        {
                            arr_42 [i_0] [7] [i_11] [i_0] [i_0] [i_0] = (max(((-83 || (arr_31 [i_12 + 1] [9]))), ((!((min(-28, var_5)))))));
                            var_19 = ((((((var_0 ? (arr_8 [i_12]) : var_8)) * (arr_18 [i_12] [i_12] [i_12] [i_12] [i_12 - 1])))) ? (max((arr_26 [i_12 - 1] [i_12] [i_12] [i_12 + 1]), 107)) : 70);
                        }
                    }
                }
            }
        }
    }

    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 9;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    {
                        var_20 = (((((1 / (arr_26 [i_13] [i_14] [i_15 + 1] [i_16])))) ? var_1 : ((35 ? (arr_40 [i_15] [i_14] [i_15] [0] [i_14]) : (arr_5 [i_15 - 2] [i_16] [i_16])))));
                        var_21 = ((!(arr_47 [i_15 - 2] [i_15 - 1] [i_15 - 2])));
                        arr_56 [i_16] [i_15] [i_15] [i_13] = ((+(((arr_2 [i_15] [i_16]) ? var_7 : (arr_2 [i_14] [i_15 + 1])))));
                        var_22 = (min(var_22, var_5));
                    }
                }
            }
        }
        var_23 = (max(var_23, var_0));
    }
    for (int i_17 = 0; i_17 < 23;i_17 += 1)
    {
        arr_60 [i_17] = (((arr_58 [i_17]) <= (((min(31274, (arr_57 [i_17])))))));
        var_24 = var_4;
        arr_61 [i_17] |= ((-((235 ? 7416778653617052803 : 86079028584628901))));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 23;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                {
                    arr_69 [i_18] = -57;
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            {
                                arr_75 [i_18] = (((arr_57 [i_19]) & ((((-127 - 1) <= ((max((arr_65 [i_17] [i_17] [i_17]), (arr_62 [i_20])))))))));
                                var_25 -= (10 / 34254);
                            }
                        }
                    }
                    arr_76 [i_17] [i_17] [i_18] = (((((((-(arr_58 [i_17]))) / (arr_74 [i_19] [i_18] [i_18] [i_17])))) / (18446744073709551611 / var_2)));
                    arr_77 [i_18] [i_18] [i_19] = (((((15719648803512226614 ? (arr_72 [i_19] [i_19] [i_18] [i_18] [i_17] [5] [i_17]) : (arr_72 [i_17] [i_18] [i_19] [i_19] [i_19] [i_18] [i_18])))) & (max(4663461230214903612, (arr_72 [i_19] [i_19] [i_18] [i_17] [i_17] [i_17] [i_17])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_22 = 4; i_22 < 17;i_22 += 1)
    {
        arr_81 [i_22] = 51146;
        arr_82 [i_22 - 3] = ((var_7 ? -5 : (arr_65 [i_22] [i_22 - 2] [i_22 + 2])));
        arr_83 [i_22] = ((8261259178659481604 <= (((arr_59 [20]) ? 19902 : 86079028584628905))));
    }
    #pragma endscop
}
