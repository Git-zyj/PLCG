/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 111;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (min((arr_3 [i_2]), (((var_12 ? 10 : (arr_1 [i_0 + 1]))))));
                    arr_8 [i_0] [i_1] [i_2] = (((((arr_3 [i_0]) + (arr_4 [i_0] [i_2] [i_2]))) - (((-(arr_4 [i_0] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = var_3;
                                arr_15 [i_1] [i_2] [i_3] = (((arr_2 [i_0 - 2] [i_0 - 1]) == ((((((arr_10 [i_0] [i_4] [1]) ? (arr_11 [i_2] [i_2] [i_0]) : (arr_11 [i_3] [15] [8])))) | (arr_6 [i_0 + 1])))));
                                arr_16 [i_0 - 2] [i_0] = ((~(((~21339) ? ((22391 ? 72057594037927935 : (arr_12 [i_0] [i_0] [3] [i_3]))) : 32767))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        arr_19 [i_5] [i_1] [i_2] [i_5 - 1] = (arr_4 [i_5 - 2] [i_1] [i_1]);
                        arr_20 [i_5] [15] [i_1] = (arr_18 [i_0 - 2] [i_0 - 2] [i_1] [i_2] [i_2] [i_5 - 1]);
                        arr_21 [i_5] [i_0] [i_1] [i_0] = (arr_13 [i_5 + 1] [i_2] [i_1]);
                    }
                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {
                        arr_24 [i_6 - 1] [i_1] [i_1] = (((arr_5 [i_0] [i_2] [i_6 - 3]) ? ((max(22391, 31870))) : (((((max((arr_10 [i_0] [i_2] [i_0]), (arr_4 [i_0 - 1] [i_2] [i_6])))) || ((max(1008186090, (arr_13 [i_6] [i_2] [i_1])))))))));

                        for (int i_7 = 3; i_7 < 24;i_7 += 1)
                        {
                            arr_27 [i_7] [i_6 - 3] [i_2] [i_0] = ((((max((arr_13 [i_6 - 3] [i_6] [i_7 + 1]), (arr_13 [i_6 - 2] [i_7 - 2] [i_7 - 1])))) ? (min(7940962479282880285, 1)) : var_2));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = ((((arr_2 [i_0 - 1] [i_7 - 3]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1]))));
                        }
                    }
                }
            }
        }
        arr_29 [i_0 + 2] [i_0 - 1] = var_4;
        arr_30 [i_0] [0] = (arr_13 [i_0 - 2] [1] [i_0 - 2]);
        arr_31 [i_0 + 1] [i_0] = -30531;
        arr_32 [6] = (((arr_9 [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2] [i_0]) ? ((-32766 ? var_0 : (arr_25 [i_0 - 1]))) : (max((arr_25 [i_0 + 1]), 65520))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        arr_35 [i_8] = (((arr_11 [i_8] [i_8] [i_8]) ^ (((arr_1 [i_8]) ? 8 : 52540))));
        arr_36 [i_8] = ((699715539 >> (((arr_6 [i_8]) - 1797525772))));
        arr_37 [i_8] = (-127 - 1);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_41 [i_9] = -21980;
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 23;i_12 += 1)
                {
                    {
                        arr_49 [i_11] [i_11] = (arr_44 [i_12] [i_9] [i_9] [i_9]);
                        arr_50 [i_9] [i_10] [i_11] [i_10] [i_12] [i_12] = (((4294967293 ? 2804379702 : 27544)));
                        arr_51 [i_10] [i_11] [i_11] [i_10 - 1] [i_10] [i_10] = (arr_6 [i_11]);
                        arr_52 [i_9] [i_10] [i_11] [i_12] = var_5;
                    }
                }
            }
        }
        arr_53 [i_9] = 55444;
    }
    /* vectorizable */
    for (int i_13 = 2; i_13 < 21;i_13 += 1)
    {
        arr_56 [i_13 - 2] &= 63401;
        arr_57 [i_13] = arr_10 [i_13] [i_13] [i_13];
    }
    var_14 = var_3;
    var_15 = ((var_11 ? var_5 : var_12));
    #pragma endscop
}
