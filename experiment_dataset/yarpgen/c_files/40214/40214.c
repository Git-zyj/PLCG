/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] &= arr_2 [5];
        var_13 -= (-19441 != 1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 = (1 ? -19441 : 4294967295);
        arr_8 [i_1] = (arr_3 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_15 &= (arr_12 [i_2] [i_2]);
                    var_16 = (1 != var_10);

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_17 = (((((~var_6) & 1))) ? var_5 : (((~var_6) ^ (~0))));
                        var_18 = ((~((35136 & (~var_6)))));
                        var_19 = var_4;
                        arr_20 [i_2] [i_2] [i_3] [i_4] [i_4] [10] |= (arr_12 [i_2] [i_3]);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_20 = -773501053;
                                var_21 = (min((~0), (min((arr_21 [i_3] [i_3 + 1] [i_7] [i_3]), (arr_10 [i_3 + 1] [i_3 - 1])))));
                                arr_26 [1] [i_3] [15] [i_7] = (max((~3602), (arr_16 [i_2] [i_3] [i_3] [i_2])));
                                var_22 = ((((max(-var_8, (((arr_17 [16] [i_4] [i_6 + 3]) ? var_3 : 3314847622))))) - (arr_14 [i_2] [i_2] [18])));
                                arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] = var_2;
                            }
                        }
                    }
                }
            }
        }
        var_23 -= (arr_18 [i_2]);
        var_24 = ((((min((((2118760045 ? 19458 : var_1))), (arr_23 [16])))) ? var_5 : var_6));
        var_25 = var_2;
        var_26 = ((((((-4 / var_8) ? -1957854487 : var_9))) ? (arr_12 [i_2] [i_2]) : (((~(arr_11 [i_2] [i_2]))))));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_27 = ((((min((min(var_8, var_3)), 1))) ? ((~(var_10 ^ var_0))) : 14149));
                        arr_37 [i_8] [i_9] [i_8] = (((!(arr_18 [i_9 - 1]))) ? (arr_34 [i_9] [i_9 + 2] [i_9] [i_8]) : (((!(((arr_30 [i_10] [8]) && 14353))))));
                        arr_38 [i_8] [i_9 + 1] [i_10] [i_11] = ((~((2047 ? 60203 : 2147483647))));
                        arr_39 [i_8] [i_8] [i_10] [i_11] = ((((((((381832619 ? -39 : var_8))) ? (var_6 + -98) : var_5))) || ((((37 % var_8) ? 1 : (~-1847))))));
                        var_28 = ((var_1 ? var_7 : (((max((arr_32 [i_8] [i_8] [i_11]), var_8)) | 1738904603))));
                    }
                }
            }
        }
        var_29 = (((((max(-98, -590926521)))) ? (((19458 / ((2977776660 ? 14458 : -1842))))) : 2977776660));
    }
    #pragma endscop
}
