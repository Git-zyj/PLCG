/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_4;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_2 - 2] [13] [i_2 - 2] [i_4] [i_4] = var_10;
                                arr_14 [i_0] [i_1 - 2] [i_0] [i_3] [i_4] = (arr_3 [i_1] [i_1] [i_1]);
                                arr_15 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((74 ? (!var_2) : (((!-6) & (!var_3)))));
                            }
                        }
                    }
                    var_12 = (max((arr_8 [i_2] [i_2] [i_1] [9]), (((!8191) ? (min((arr_7 [i_2]), 249)) : ((min((arr_9 [i_1] [i_1]), (arr_4 [i_2] [i_1 + 1] [i_0]))))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_6] = (((!var_9) <= (var_2 && var_4)));

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_28 [i_5] [i_6] [i_7] [i_8] = (arr_25 [i_6] [i_6] [i_6] [i_6]);
                        var_13 = (((~1768799424) - (((-5682276802212529656 ? -8198 : 844286934)))));
                        arr_29 [i_6] [i_6] = var_1;
                        arr_30 [i_5] [i_8] [i_8] [i_6] = ((~(arr_22 [i_7] [i_7] [i_7 + 1])));
                        arr_31 [i_6] = (((((~29991) + 2147483647)) >> (var_1 - 155)));
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        arr_35 [22] [i_6] [22] [i_6] [i_6] = ((!(((17495 ? 0 : (arr_32 [i_6] [i_7]))))));
                        arr_36 [i_5] [i_6] [i_7] [i_5] = ((2052915356 ? (65531 <= var_2) : ((10928 >> (var_5 - 79)))));
                    }
                }
            }
        }
        arr_37 [i_5] = var_3;
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    arr_44 [i_11] = -0;
                    var_14 = var_3;
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 20;i_12 += 1)
    {
        var_15 = 61953;
        arr_47 [i_12] = ((!((max(274609471488, -81)))));
        var_16 = (min(var_16, (arr_23 [i_12] [i_12] [i_12] [i_12])));
        var_17 += ((((((arr_16 [i_12 + 2] [i_12 + 4]) ? 0 : var_8))) - (arr_27 [i_12] [i_12 + 2] [i_12] [i_12])));
    }

    for (int i_13 = 2; i_13 < 22;i_13 += 1)
    {
        arr_51 [i_13] = (max((arr_49 [i_13]), 127));
        arr_52 [i_13] [i_13] = (+-8198);
        var_18 = var_3;
        arr_53 [i_13] = 1;
    }
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        arr_56 [i_14] = ((!((max(27, (-51 + 34))))));
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 19;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    {
                        arr_63 [i_14] [i_14] = var_9;
                        var_19 = (min(var_19, ((((((var_10 && (arr_17 [i_15 + 1] [i_15 - 1])))) >= -8205)))));
                        arr_64 [1] [i_16] [i_15] [i_14] = (((min(var_3, var_4)) % 1320648540));
                    }
                }
            }
        }
        var_20 = arr_26 [i_14];
    }
    #pragma endscop
}
