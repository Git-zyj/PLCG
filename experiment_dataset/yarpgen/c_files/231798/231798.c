/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 = ((((max((((arr_3 [i_0]) ? (-2147483647 - 1) : (arr_8 [i_0] [i_1] [i_2] [i_0]))), (arr_5 [i_0] [i_2] [i_3])))) && (((((arr_11 [i_0] [i_0] [i_2] [i_2]) && (arr_13 [i_0] [i_1] [i_2] [i_1] [i_0]))) && (arr_2 [i_0] [i_1])))));
                                var_13 -= (((((-((66 ? (arr_8 [i_0] [i_1] [i_2] [i_2]) : (arr_1 [i_2])))))) ? (arr_11 [i_0] [i_4 + 1] [i_2] [i_1 + 1]) : 14));
                            }
                        }
                    }
                    var_14 = ((((arr_4 [i_1 + 1] [i_1 - 3] [i_1 - 2]) && (arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 3]))));

                    for (int i_5 = 3; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1 - 1] [i_2] [i_1 - 1] = (((((-(arr_1 [i_0])))) ? (-2147483647 - 1) : ((((16 && var_2) ? (((arr_16 [i_0]) ^ 96)) : (arr_6 [i_0]))))));
                        var_15 = (max(var_15, (((((((arr_11 [i_0] [i_1] [i_2] [i_5]) && (arr_7 [i_0] [i_1] [9] [i_5]))) && 4185))))));
                        var_16 = (((+(((arr_3 [i_0]) ? var_2 : (arr_12 [i_0]))))) / ((+(((arr_6 [i_0]) * (-127 - 1))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        var_17 = (max(var_17, (arr_13 [i_2] [i_1] [i_1 - 3] [i_1] [i_2])));
                        arr_20 [i_0] [i_2] [i_0] [i_6] [i_6] |= (((arr_15 [i_0] [i_0] [i_2] [8] [i_2] [4]) ? ((1991577852 ? 2147483647 : (arr_12 [i_6 - 2]))) : 2147483647));
                        arr_21 [i_0] = 247;
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_18 *= ((-((~(~103)))));
                        arr_24 [i_0] [i_2] [6] [i_0] = arr_9 [i_0] [i_1];
                        var_19 = -4201;
                    }
                }
            }
        }
        arr_25 [i_0] = ((-4201 * ((-(arr_22 [i_0] [i_0] [i_0])))));
        var_20 = -0;
        arr_26 [i_0] = ((((max((arr_16 [i_0]), (arr_7 [i_0] [i_0] [i_0] [6])))) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : 15));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_21 = ((((((min(-16794, (arr_10 [i_9] [i_8] [i_11])))) && (arr_29 [i_8] [i_10 + 1] [i_8]))) ? (((((arr_4 [i_8] [i_9] [i_10 + 1]) && var_10)))) : ((6683 ? ((((-12317 && (arr_34 [i_8] [11] [i_8]))))) : (max((-2147483647 - 1), (arr_27 [i_9])))))));
                        var_22 = ((var_3 ? ((-((-(arr_31 [i_8]))))) : ((((((-(arr_19 [i_8] [i_8] [i_8] [i_11])))) && ((var_11 && (arr_37 [i_8]))))))));
                        var_23 ^= (arr_9 [4] [i_11]);
                    }
                }
            }
        }
        arr_39 [i_8] = var_0;
    }
    var_24 = (min(var_24, var_0));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_14 = 4; i_14 < 7;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        {
                            var_25 = (max(var_25, ((((-2 && -131072) && -6700)))));
                            arr_50 [i_12] [i_13] [i_13] [i_14] [i_15] = ((!(((arr_4 [i_14 - 2] [11] [11]) && (arr_4 [i_14 - 3] [i_14] [i_14])))));
                            var_26 = (((!var_2) && (-32767 - 1)));
                        }
                    }
                }
                var_27 = 16380;
            }
        }
    }
    #pragma endscop
}
